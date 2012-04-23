<?php
// $Id: duration.inc,v 1.7 2008/10/26 14:08:37 jpetso Exp $

/**
 * @file
 * An API to transform and perform evaluations on duration objects.
 *
 * This file contains the duration class, featuring methods for transformation
 * from and to ISO 8601 compliant duration strings and some more essential
 * goodness for your duration handling pleasure.
 *
 * Copyright 2008 by Jakob Petsovits <jpetso@gmx.at>
 * Distributed under the GNU General Public Licence version 2 or higher,
 * as published by the FSF on http://www.gnu.org/copyleft/gpl.html
 */

/**
 * Return a new duration object.
 *
 * @param $duration_iso_string
 *   A duration's string representation, as defined by the ISO 8601 standard.
 *   If this is left unset, a duration with zero length will be created.
 *
 * @return
 *   A valid duration object if the string did actually conform to the
 *   ISO 8601 duration format, or NULL if it didn't and the duration object
 *   is therefore invalid.
 */
function duration_create($duration_iso_string = NULL) {
  $duration = new Duration($duration_iso_string);
  return ($duration->is_valid() ? $duration : NULL);
}


class Duration {

  // An array containing the members 'seconds', 'minutes', 'hours', 'days',
  // either 'weeks' or 'months', and 'years'.
  // The 'week' and 'month' formats are mutually exclusive; in case of doubt,
  // we use the 'month' format.
  var $duration;

  // Boolean, specifying whether the duration is negative (TRUE) or not (FALSE).
  var $is_negative;

  // Boolean, set to FALSE if the duration string could not be parsed,
  // otherwise TRUE.
  var $is_valid;

  var $conversion_factors;

  /**
   * Create a new duration object.
   *
   * @param $duration_iso_string
   *   A duration's string representation, as defined by the ISO 8601 standard.
   *   If this is left unset, a duration with zero length will be created.
   */
  function __construct($duration_iso_string = NULL) {
    // Easy way: no string given, let's just initialize a zero duration.
    if (!isset($duration_iso_string)) {
      $this->is_negative = FALSE;
      $this->duration = array();
      $this->is_valid = TRUE;
      return;
    }

    // Slightly more demanding version: there's a parsable ISO string given.
    // This is a bit complex, let's construct the regexp step by step.
    $this->is_valid = FALSE;

    // Durations can also be negative (but not single parts of the duration).
    $sign = '(?P<sign>\\-)?';

    // For the format with designators, numbers can contain decimal separators
    // and arbitrary lengths.
    $number  = '(?:\d+(?:[,.]\d+)?)';
    $years   = "(?:(?P<years>${number})Y)";
    $months  = "(?:(?P<months>${number})M)";
    $weeks   = "(?:(?P<weeks>${number})W)";
    $days    = "(?:(?P<days>${number})D)";
    $hours   = "(?:(?P<hours>${number})H)";
    $minutes = "(?:(?P<minutes>${number})M)";
    $seconds = "(?:(?P<seconds>${number})S)";

    // So the format with designators looks like this:
    // (example: "P3Y6M4DT12H30M0S")
    $des_datepart = "(?:${years}?(?:${months}|${weeks})?${days}?)";
    $des_timepart = "(?:T${hours}?${minutes}?${seconds}?)";
    $des_datetime = "/^${sign}P(?:${des_datepart}?${des_timepart}?)$/";

    // For the alternative format, numbers have fixed length and no designator.
    $years     = "(?P<years>\d\d\d\d)";
    $months    = "(?P<months>\d\d)";
    $days      = "(?P<days>\d\d)";   // with months: two digits
    $days_only = "(?P<daysonly>\d\d\d)"; // without months: three digits
    $hours     = "(?P<hours>\d\d)";
    $minutes   = "(?P<minutes>\d\d)";
    $seconds   = "(?P<seconds>\d\d)";

    // The alternative format is available in basic form
    // (example: "P00030604T123000")...
    $alt_datepart = "(?:${years}(?:${months}${days}|${days_only}))";
    $alt_timepart = "(?:T${hours}${minutes}${seconds})";
    $alt_datetime = "/^${sign}P(?:${alt_datepart}${alt_timepart})$/";

    // ...or in extended form (example: "P0003-06-04T12:30:00").
    $alt_datepart_ext = "(?:${years}\\-(?:${months}\\-${days}|${days_only}))";
    $alt_timepart_ext = "(?:T${hours}:${minutes}:${seconds})";
    $alt_datetime_ext = "/^${sign}P(?:${alt_datepart_ext}${alt_timepart_ext})$/";

    // Ok, regexp is complete, now let's check if it matches and get the values!
    if (preg_match($des_datetime, $duration_iso_string, $matches)
        || preg_match($alt_datetime, $duration_iso_string, $matches)
        || preg_match($alt_datetime_ext, $duration_iso_string, $matches)) {
      $this->is_negative = !empty($matches['sign']);
      $this->duration = array(); // to be filled right now

      foreach ($this->_allowed_metrics() as $metric) {
        if (strlen($matches[$metric]) > 0) {
          $this->duration[$metric] = floatval($matches[$metric]);
        }
      }
      if (strlen($this->duration['daysonly']) > 0) {
        $this->duration['days'] = $this->duration['daysonly'];
        $this->duration['weeks'] = 0; // 'Tyyyy-ddd(...)' indicates a y/w/d format
        unset($this->duration['daysonly']);
      }
    }
    if (!empty($this->duration)) {
      $this->_sanitize();
      $this->is_valid = TRUE;
    }
  }

  /**
   * Determine if this duration object is valid, i.e. the ISO 8601 string was
   * successfully be parsed and further calculations can be done.
   * If this method returns FALSE, the behaviour and result of any other
   * methods of this object is undefined.
   */
  function is_valid() {
    return $this->is_valid;
  }

  /**
   * Durations may include a combination of months and days, or a combination
   * of weeks and days. Those two are mutually exclusive and will lead to
   * incorrect calculations when they are mixed, so better ask this method
   * in order to determine in which format this duration is stored.
   *
   * @return
   *   Either 'weeks' if the duration includes a week specifier,
   *   or 'months' otherwise.
   */
  function type() {
    return isset($this->duration['weeks']) ? 'weeks' : 'months';
  }

  /**
   * Ensure that this duration uses the specified format, which is either
   * 'months' or 'weeks'. See type() for an explanation of this duality.
   *
   * At the moment, this conversion is rather naive - it just sets the
   * new metric (if the type is being changed at all) to 0, and unsets
   * the other, mutually exclusive metric. In the future this might be
   * an algorithm that preserves existing values more accurately.
   */
  function set_type($type) {
    $current_type = $this->type;

    if ($type == 'weeks' && $current_type != 'weeks') {
      $this->set_weeks(0);
    }
    if ($type == 'months' && $current_type != 'months') {
      $this->set_months(0);
    }
  }


  function is_negative() {
    return $this->is_negative;
  }

  /**
   * Define if the duration is negative (i.e. adding it to a date produces an
   * earlier date) or positive (i.e. adding it produces a future date).
   * The duration values themselves are not being changed, this function
   * just sets the minus sign (or not).
   *
   * @param $is_negative
   *   TRUE if the duration should be negative,
   *   or FALSE if it should be positive.
   */
  function set_negative($is_negative) {
    $this->is_negative = $is_negative;
  }


  /**
   * Retrieve the 'years' value of this duration.
   */
  function get_years() {
    return $this->get_value('years');
  }

  /**
   * Retrieve the 'months' value of this duration.
   */
  function get_months() {
    return $this->get_value('months');
  }

  /**
   * Retrieve the 'weeks' value of this duration.
   *
   * @param $allow_null_result
   *   If TRUE, this method will return NULL if the 'weeks' value is not set,
   *   i.e. if it won't normally appear in formatted output values.
   *   If FALSE, this method will always return a number.
   */
  function get_weeks() {
    return $this->get_value('weeks');
  }

  /**
   * Retrieve the 'days' value of this duration.
   */
  function get_days() {
    return $this->get_value('days');
  }

  /**
   * Retrieve the 'hours' value of this duration.
   */
  function get_hours() {
    return $this->get_value('hours');
  }

  /**
   * Retrieve the 'minutes' value of this duration.
   */
  function get_minutes() {
    return $this->get_value('minutes');
  }

  /**
   * Retrieve the 'seconds' value of this duration.
   */
  function get_seconds() {
    return $this->get_value('seconds');
  }

  /**
   * Retrieve the value of the given metric.
   *
   * @param $metric
   *   The metric to be retrieved. Possible values: 'seconds', 'minutes',
   *   'hours', 'days', 'weeks', 'months' and 'years'.
   */
  function get_value($metric) {
    return isset($this->duration[$metric]) ? $this->duration[$metric] : 0;
  }


  /**
   * Retrieve an array including all metrics as array keys together with their
   * corresponding values.
   *
   * @param $sort
   *   The order in which the metrics should be sorted:
   *   'descending' for "years first, seconds last",
   *   and 'ascending' for "seconds first, years last".
   */
  function to_array($sort = 'descending') {
    $duration = array();
    foreach ($this->_metrics($sort) as $metric => $info) {
      $duration[$metric] = $this->get_value($metric);
    }
    return $duration;
  }

  /**
   * Return the length of this duration as a single value, in the given metric.
   * For example, you can use this function to retrieve the duration length
   * as seconds, hours, or years.
   *
   * Note that the 'months' and 'years' metrics are likely to cause inaccurate
   * results because months and years have differences in length depending on
   * which month or year this applies to. As an approximization, months are
   * calculated by using a conversion factor of 30 days, and (365 / 7)
   * is used for weeks in a year.
   *
   * Possible values for @p $metric: 'seconds', 'minutes', 'hours',
   * 'days', 'weeks' (only if type() returns 'weeks'), 'months' (only if type()
   * returns 'months'), and 'years'.
   */
  function to_single_metric($metric) {
    $duration = $this->duration; // backup the original values

    // Calculate by transforming all larger and smaller metrics to $metric.
    $this->set_granularity($metric, $metric);
    $value = $this->get_value($metric);
    if ($this->is_negative()) {
      $value *= -1;
    }

    $this->duration = $duration; // restore the original values
    return $value;
  }


  /**
   * Return a duration string formatted according to the given ISO 8601 format.
   *
   * @param $format
   *   Can be 'designators' (default, for the "format with designators"),
   *   'alternative_basic' (for the alternative format without delimiter signs)
   *   or 'alternative_extended' (alternative format with delimiter signs).
   *
   *   Note that when using one of the 'alternative' formats, values higher
   *   than the maximum value of each metric (12 months per year, 24 hours
   *   per day, etc.) will be broken down to the next smaller unit so that
   *   there is no overflow. This behaviour also causes weeks to disappear
   *   in favor of days that are used instead, see the ISO 8601 standard
   *   for more information on this.
   *
   *   For accurate preservation of the internal object data,
   *   the 'designators' format is the recommended one.
   */
  function to_iso($format = 'designators') {
    if ($format == 'alternative_basic' || $format == 'alternative_extended') {
      $date_delimiter = ($format == 'alternative_extended') ? '-' : '';
      $time_delimiter = ($format == 'alternative_extended') ? ':' : '';

      // Backup the current duration (and restore it later), because we
      // don't want the changes in here to be stored permanently.
      $duration = $this->duration;

      // We want the time to be broken down to the very second.
      // No decimal places for any value, not even for seconds.
      $this->_sanitize('seconds');
      if (isset($this->duration['seconds'])) {
        $this->duration['seconds'] = intval(floor($this->duration['seconds']));
      }

      // Make sure there's no overflows like 65 seconds per minute.
      $this->normalize();

      // Assemble the date part.
      $years = str_pad(intval($this->get_years()), 4, '0', STR_PAD_LEFT);

      if ($this->type() == 'weeks') {
        $factors = $this->get_conversion_factors();
        $days_from_weeks = $this->get_weeks() * $factors['days/weeks'];
        $days_only = str_pad($this->get_days() + $days_from_weeks, 3, '0', STR_PAD_LEFT);
        $datepart = $years . $date_delimiter . $days_only;
      }
      else {
        $months = str_pad($this->get_months(), 2, '0', STR_PAD_LEFT);
        $days = str_pad($this->get_days(), 2, '0', STR_PAD_LEFT);
        $datepart = $years . $date_delimiter . $months . $date_delimiter . $days;
      }
      // Assemble the time part.
      $hours = str_pad(intval($this->get_hours()), 2, '0', STR_PAD_LEFT);
      $minutes = str_pad(intval($this->get_minutes()), 2, '0', STR_PAD_LEFT);
      $seconds = str_pad(intval($this->get_seconds()), 2, '0', STR_PAD_LEFT);
      $timepart = $hours . $time_delimiter . $minutes . $time_delimiter . $seconds;

      // Voilà, an alternative ISO representation (either basic or extended).
      $datetime = 'P' . $datepart . 'T' . $timepart;

      // Restore the original (non-normalized) duration values.
      $this->duration = $duration;
    }
    else { // $format == 'designators'
      // Construct the designator strings. Weeks, if they exist, will go in
      // even if 0, so that we get to keep the 'weeks' format and don't switch
      // to 'months' if the string is parsed again.
      $years   = ($this->get_years()   > 0) ? ($this->duration['years']   . 'Y') : '';
      $months  = ($this->get_months()  > 0) ? ($this->duration['months']  . 'M') : '';
      $weeks   = isset($this->duration['weeks'])  ?   ($this->get_weeks() . 'W') : '';
      $days    = ($this->get_days()    > 0) ? ($this->duration['days']    . 'D') : '';
      $hours   = ($this->get_hours()   > 0) ? ($this->duration['hours']   . 'H') : '';
      $minutes = ($this->get_minutes() > 0) ? ($this->duration['minutes'] . 'M') : '';
      $seconds = ($this->get_seconds() > 0) ? ($this->duration['seconds'] . 'S') : '';

      // Either $months of $weeks is empty anyways, so we can use both.
      $datepart = $years . $months . $weeks . $days;
      $timepart = $hours . $minutes . $seconds;

      if (!empty($timepart)) {
        $timepart = 'T' . $timepart;
      }
      if (empty($datepart) && empty($timepart)) {
        // We need at least one value, let's have zero seconds for that.
        $timepart = 'T0S';
      }
      $datetime = 'P' . $datepart . $timepart;
    }

    if ($this->is_negative()) {
      $datetime = '-' . $datetime;
    }
    return $datetime;
  }


  /**
   * Set the date part of this duration to a fixed value, using the
   * years/months/days format. You may specify numbers greater or equal 0.
   * As this method involves setting the 'months' value, the 'weeks' value
   * will be unset if it exists - see setMonths() for the details.
   * Any invalid parameters will not be applied.
   */
  function set_date($years, $months, $days) {
    $this->_set_value('years', $years, FALSE);
    $this->_set_value('months', $months, FALSE);
    $this->_set_value('days', $days);
  }

  /**
   * Set the date part of this duration to a fixed value, using the
   * years/weeks/days format. You may specify numbers greater or equal 0.
   * As this method involves setting the 'weeks' value, the 'months' value
   * will be unset if it exists. Any invalid parameters will not be applied.
   */
  function set_iso_date($years, $weeks, $days) {
    $this->_set_value('years', $years, FALSE);
    $this->_set_value('weeks', $weeks, FALSE);
    $this->_set_value('days', $days);
  }

  /**
   * Set the time part of this duration to a fixed value. You may specify
   * numbers greater or equal 0. Any invalid parameters will not be applied.
   */
  function set_time($hours, $minutes, $seconds = NULL) {
    $this->_set_value('hours', $hours, FALSE);
    $this->_set_value('minutes', $minutes, FALSE);
    $this->_set_value('seconds', $seconds);
  }

  /**
   * Set the 'years' value of this duration. You may specify any number
   * greater or equal 0. In case of an invalid parameter, this method returns
   * without changing anything.
   */
  function set_years($years) {
    $this->_set_value('years', $years);
  }

  /**
   * Set the 'months' value of this duration. You may specify any number
   * greater or equal 0. Setting the 'months' value automatically unsets
   * the 'weeks' value if it exists, because those two belong to different
   * formats and are mutually exclusive. In case of an invalid parameter,
   * this method returns without changing anything.
   */
  function set_months($months) {
    $this->_set_value('months', $months);
  }

  /**
   * Set the 'weeks' value of this duration. You may specify a number
   * greater or equal 0. Setting the 'weeks' value automatically unsets
   * the 'months' value if it exists, because those two belong to different
   * formats and are mutually exclusive. In case of an invalid parameter,
   * this method returns without changing anything.
   */
  function set_weeks($weeks) {
    $this->_set_value('weeks', $weeks);
  }

  /**
   * Set the 'days' value of this duration. You may specify a number
   * greater or equal 0. In case of an invalid parameter, this method returns
   * without changing anything.
   */
  function set_days($days) {
    $this->_set_value('days', $days);
  }

  /**
   * Set the 'hours' value of this duration. You may specify a number
   * greater or equal 0. In case of an invalid parameter, this method returns
   * without changing anything.
   */
  function set_hours($hours) {
    $this->_set_value('hours', $hours);
  }

  /**
   * Set the 'minutes' value of this duration. You may specify a number
   * greater or equal 0. In case of an invalid parameter, this method returns
   * without changing anything.
   */
  function set_minutes($minutes) {
    $this->_set_value('minutes', $minutes);
  }

  /**
   * Set the 'seconds' value of this duration. You may specify a number
   * greater or equal 0. In case of an invalid parameter, this method returns
   * without changing anything.
   */
  function set_seconds($seconds) {
    $this->_set_value('seconds', $seconds);
  }

  /**
   * Set any value of this duration, like with the set[Metric]() function, only
   * with a generic method name that takes the metric as parameter. In case
   * of an invalid parameter, this method returns without changing anything.
   *
   * @param $metric
   *   The metric to be set. Possible values: 'seconds', 'minutes', 'hours',
   *   'days', 'weeks', 'months' and 'years'. In case of 'weeks' and 'months',
   *   please have a look at the API documentation of set_weeks() and
   *   set_months() in order to avoid unexpected behaviour.
   * @param $value
   *   A number greater or equal 0 that will be set as new value of that metric.
   */
  function set_value($metric, $value) {
    if (!in_array($metric, $this->_allowed_metrics())) {
      return;
    }
    $this->_set_value($metric, $value);
  }

  function _set_value($metric, $value, $sanitize = TRUE) {
    if (is_numeric($value) && $value >= 0) {
      $this->duration[$metric] = $value;
    }

    // Weeks and months are mutually exclusive, make sure that there's only
    // one of the two at any time.
    if ($metric == 'weeks' && isset($this->duration['months'])) {
      unset($this->duration['months']);
    }
    if ($metric == 'months' && isset($this->duration['weeks'])) {
      unset($this->duration['weeks']);
    }
    if ($sanitize) {
      $this->_sanitize();
    }
  }

  function _add_value($metric, $value) {
    if (!isset($this->duration[$metric])) {
      $this->duration[$metric] = 0;
    }
    $this->duration[$metric] += $value;
  }


  /**
   * Add this duration to a PHP DateTime object. No return value -
   * the DateTime object itself will be altered by this function.
   */
  function add_to_date($date) {
    $modifier = '';
    foreach ($this->duration as $metric => $value) {
      $modifier = $value . ' ' . $metric;
    }
    if (empty($modifier)) {
      return; // nothing to change
    }
    $modifier = ($this->is_negative() ? '-' : '+') . $modifier;
    date_modify($date, $modifier);
  }

  /**
   * Subtract this duration from a PHP DateTime object. No return value -
   * the DateTime object itself will be altered by this function.
   */
  function subtract_from_date($date) {
    $this->is_negative = !($this->is_negative);
    $this->add_to_date($date);
    $this->is_negative = !($this->is_negative);
  }


  /**
   * Make sure that no part of the duration contains a higher value
   * than the highest value that is normally used for this metric.
   * Example: a duration of 65.5 seconds would be transformed into
   * 1 minute and 5.5 seconds.
   *
   * Note that the 'months' and 'years' metrics are likely to cause inaccurate
   * results because months and years have differences in length depending on
   * which month or year this applies to. As an approximization, months are
   * by default calculated by using a conversion factor of 30 days,
   * and (365 / 7) is used for weeks in a year.
   *
   * @param $stop_at_metric
   *   Normally, values are propageted upwards so that large enough "overflows"
   *   get added to the 'years' metric in the end. By setting this to some
   *   smaller metric (say, 'hours'), you might still keep some overflow at
   *   that metric but you also get the guarantee that the metrics above are
   *   not touched by this method. If you want to use this argument, it will
   *   likely be after a set_granularity() or set_largest_metric() call.
   */
  function normalize($stop_at_metric = 'years') {
    $conversion_factors = $this->get_conversion_factors();

    foreach ($this->_metrics('ascending') as $metric => $info) {
      if ($metric == $stop_at_metric || !isset($info['larger_metric'])) {
        break;
      }
      if ($metric == 'months' && $stop_at_metric == 'weeks') {
        break;
      }
      // No need to check $metric == 'weeks' && $stop_at_metric == 'months',
      // because 'years' comes after 'weeks' and stops anyways.

      $conversion_key = $metric . '/' . $info['larger_metric'];
      $conversion_factor = $conversion_factors[$conversion_key];

      if ($this->duration[$metric] > $conversion_factor) {
        $this->_add_value($info['larger_metric'],
          intval(floor($this->get_value($metric) / $conversion_factor))
        );
        $this->duration[$metric] %= $conversion_factor;
      }
    }
    $this->_sanitize();
  }

  /**
   * Set all metrics smaller than @p $smallest_metric to 0 and add their values
   * to the @p $smallest_metric value using the appropriate conversion factor.
   * Also, decimal points of larger metrics will be broken down to the metrics
   * below (but not further below than @p $smallest_metric).
   *
   * Note that the 'months' and 'years' metrics are likely to cause inaccurate
   * results because months and years have differences in length depending on
   * which month or year this applies to. As an approximization, months are
   * by default calculated by using a conversion factor of 30 days,
   * and (365 / 7) is used for weeks in a year.
   *
   * @param $smallest_metric
   *   The smallest allowed metric, as mentioned above. Possible values:
   *   'seconds', 'minutes', 'hours', 'days', 'weeks' (only if type()
   *   returns 'weeks'), 'months' (only if type() returns 'months'),
   *   and 'years'.
   */
  function set_smallest_metric($smallest_metric) {
    $this->_set_smallest_metric(
      $smallest_metric, $this->_metrics('ascending')
    );
    $this->_sanitize($smallest_metric);
  }

  function _set_smallest_metric($smallest_metric, $metrics) {
    $conversion_factors = $this->get_conversion_factors();

    foreach ($metrics as $metric => $info) {
      if ($metric == $smallest_metric || !isset($info['larger_metric'])) {
        break;
      }
      $conversion_key = $metric . '/' . $info['larger_metric'];
      $conversion_factor = $conversion_factors[$conversion_key];

      $this->_add_value($info['larger_metric'],
        $this->get_value($metric) / $conversion_factor
      );
      if ($metric != 'weeks') { // kept in order to distinguish between 'months' and 'weeks' formats
        unset($this->duration[$metric]);
      }
    }
  }

  /**
   * Set all metrics larger than @p $largest_metric to 0 and add their values
   * to the @p $largest_metric value using the appropriate conversion factor.
   *
   * Note that the 'months' and 'years' metrics are likely to cause inaccurate
   * results because months and years have differences in length depending on
   * which month or year this applies to. As an approximization, months are
   * by default calculated by using a conversion factor of 30 days,
   * and (365 / 7) is used for weeks in a year.
   *
   * @param $largest_metric
   *   The largest allowed metric, as mentioned above. Possible values:
   *   'seconds', 'minutes', 'hours', 'days', 'weeks' (only if type()
   *   returns 'weeks'), 'months' (only if type() returns 'months'),
   *   and 'years'.
   */
  function set_largest_metric($largest_metric) {
    $this->_set_largest_metric(
      $largest_metric, $this->_metrics('descending')
    );
    $this->_sanitize();
  }

  function _set_largest_metric($largest_metric, $metrics) {
    $conversion_factors = $this->get_conversion_factors();

    foreach ($metrics as $metric => $info) {
      if ($metric == $largest_metric || !isset($info['smaller_metric'])) {
        break;
      }
      $conversion_key = $info['smaller_metric'] . '/' . $metric;
      $conversion_factor = $conversion_factors[$conversion_key];

      $this->_add_value($info['smaller_metric'],
        $this->get_value($metric) * $conversion_factor
      );
      if ($metric != 'weeks') { // kept in order to distinguish between 'months' and 'weeks' formats
        unset($this->duration[$metric]);
      }
    }
  }

  /**
   * Set all values and below the @p $smallest_metric and above
   * the @p $largest_metric to 0, and add those values to the current values
   * of @p $smallest_metric and @p $largest_metric using the appropriate
   * conversion factor. Also, decimal points of larger metrics will be
   * broken down to the metrics below (but not further below than
   * @p $smallest_metric).
   *
   * In other words, this is a convenience function that calls both
   * set_smallest_metric() and set_largest_metric(). It is the caller's
   * responsibility to ensure that @p $largest_metric does not specify a
   * smaller metric than @p $smallest_metric. Same metric for both parameters
   * is perfectly fine, though.
   *
   * Note that the 'months' and 'years' metrics are likely to cause inaccurate
   * results because months and years have differences in length depending on
   * which month or year this applies to. As an approximization, months are
   * by default calculated by using a conversion factor of 30 days,
   * and (365 / 7) is used for weeks in a year.
   *
   * Possible values for both parameters: 'seconds', 'minutes', 'hours',
   * 'days', 'weeks' (only if type() returns 'weeks'), 'months' (only if type()
   * returns 'months'), and 'years'.
   */
  function set_granularity($smallest_metric, $largest_metric) {
    // Limit the smallest metric, starting from 'seconds' upwards.
    $metrics = $this->_metrics('ascending');
    $this->_set_smallest_metric($smallest_metric, $metrics);

    // Limit the largest metric, starting from 'years' downwards.
    $metrics = array_reverse($metrics, TRUE);
    $this->_set_largest_metric($largest_metric, $metrics);

    // Downsize everything so that only $smallest_metric may have a decimal point.
    $this->_sanitize($smallest_metric);
  }


  /**
   * Make sure that the duration data is ISO compliant, i.e. no decimal places
   * are being used for metrics other than the smallest non-zero one.
   *
   * @param $smallest_metric
   *   The smallest metric that may contain a decimal place.
   *   If this is not set, the smallest metric of the current duration array
   *   will be used. It is the caller's responsibility to specify a metric
   *   that is as small or smaller than the current smallest metric.
   */
  function _sanitize($smallest_metric = NULL) {
    $metrics_info = $this->_metrics('descending');
    $conversion_factors = $this->get_conversion_factors();

    if (!isset($smallest_metric)) {
      $smallest_metric = $this->get_smallest_metric();
    }

    // If there's a metric with a decimal place and it's not the smallest
    // metric already, add the decimal place to the next smaller metric.
    foreach ($metrics_info as $metric => $info) {
      if ($metric == $smallest_metric) {
        break;
      }
      if (!isset($this->duration[$metric])) {
        continue; // No need to break down stuff that isn't specified.
      }
      if (!$this->_is_whole_number($this->duration[$metric])) {
        // Retrieve the decimal place and remove it from the current metric.
        $floor = floor($this->duration[$metric]);
        $decimal_place = $this->duration[$metric] - $floor;
        $this->duration[$metric] = intval($floor);

        $conversion_key = $info['smaller_metric'] . '/' . $metric;
        $conversion_factor = $conversion_factors[$conversion_key];

        // Now add the corresponding value to the smaller metric.
        $this->_add_value(
          $info['smaller_metric'], $decimal_place * $conversion_factor
        );
      }
    }
  }

  /**
   * Get the smallest metric that is assigned a positive value.
   * If no part of the duration metrics holds a positive value then
   * the smallest known metric overall is returned, which is 'seconds'.
   */
  function get_smallest_metric() {
    foreach ($this->_metrics('ascending') as $metric => $info) {
      if ($this->get_value($metric) > 0) {
        return $metric;
      }
    }
    return 'seconds';
  }

  /**
   * Get the largest metric that is assigned a positive value.
   * If no part of the duration metrics holds a positive value then
   * the largest known metric overall is returned, which is 'years'.
   */
  function get_largest_metric() {
    foreach ($this->_metrics('descending') as $metric => $info) {
      if ($this->get_value($metric) > 0) {
        return $metric;
      }
    }
    return 'years';
  }

  /**
   * Set or reset the metric conversion factors that should be applied for
   * conversions performed by this duration object. Overriding the original
   * conversion factors makes it possible to perform calculations for work days
   * and work weeks (e.g. 8 hours a day, 5 days a week) instead of full 24/7.
   *
   * @param $overrides
   *   An array containing new conversion factors to be set. The array doesn't
   *   have to cover all metrics, if some are missing then the existing factors
   *   will still be used.
   *
   *   Array keys go by the form '{smallermetric}/{largermetric}' (both plural),
   *   and the corresponding values indicate the conversion factor.
   *   Example (the above-mentioned work day/week conversion):
   *   <code>array('hours/days' => 8, 'days/weeks' => 5)</code>.
   *   Note that this only works for adjacent metrics, for example you can't do
   *   something like <code>array('hours/weeks' => 40)</code>.
   *
   *   Passing the default value NULL resets all factors back to their
   *   original values.
   */
  function set_conversion_factors($overrides = NULL) {
    if (!isset($overrides)) {
      $overrides = -1;
    }
    $this->_conversion_factors($overrides);
  }

  function get_conversion_factors() {
    return $this->_conversion_factors();
  }

  /**
   * Set/amend, reset or get the conversion factors.
   */
  function _conversion_factors($overrides = NULL) {
    if (is_numeric($overrides)) { // $overrides == -1, coming from the setter
      unset($this->conversion_factors);
    }
    if (!isset($this->conversion_factors)) {
      $this->conversion_factors = array(
        'seconds/minutes' => 60,
        'minutes/hours' => 60,
        'hours/days' => 24,
        'days/weeks' => 7,
        'days/months' => 30, // not accurate in the general case
        'weeks/years' => (365.0 / 7.0), // not accurate in the general case
        'months/years' => 12,
      );
    }
    if (is_array($overrides)) {
      $this->conversion_factors = array_merge(
        $this->conversion_factors, $overrides
      );
    }
    return $this->conversion_factors;
  }

  /**
   * Return all metrics that can be set, regardless of the months/weeks conflict.
   */
  function _allowed_metrics() {
    return array('years', 'months', 'weeks', 'days', 'hours', 'minutes', 'seconds');
  }

  function _metrics($sort = 'ascending') {
    if ($sort != 'ascending' && $sort != 'descending') { // bad caller!
      return array();
    }
    $type = $this->type();

    // _metrics() is called so often, let's do a little caching.
    static $metrics_cache;
    if (!isset($metrics_cache)) {
      $metrics_cache = array(); // PHP can't initialize statics with an array directly
    }
    if (isset($metrics_cache[$type])) {
      return $metrics_cache[$type][$sort];
    }

    // Ok, now the real result array.
    $metrics = array(
      'seconds' => array(
        'larger_metric' => 'minutes',
      ),
      'minutes' => array(
        'smaller_metric' => 'seconds',
        'larger_metric' => 'hours',
      ),
      'hours' => array(
        'smaller_metric' => 'minutes',
        'larger_metric' => 'days',
      ),
      'days' => array(
        'smaller_metric' => 'hours',
        'larger_metric' => $type,
      ),
      $type => array( // either 'months' or 'weeks'
        'smaller_metric' => 'days',
        'larger_metric' => 'years',
      ),
      'years' => array(
        'smaller_metric' => $type,
      ),
    );

    // Fill the cache, buddy!
    $metrics_cache[$type]['ascending'] = $metrics;
    $metrics_cache[$type]['descending'] = array_reverse($metrics, TRUE);

    return $metrics_cache[$type][$sort];
  }

  /**
   * Straight copy from the php.net comments for is_numeric(), minus
   * the is_numeric() check itself. Returns TRUE for 2.00000000000,
   * but will return FALSE for 2.00000000001.
   */
  function _is_whole_number($var) {
    return (intval($var) == floatval($var));
  }
}

