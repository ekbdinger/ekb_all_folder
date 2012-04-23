<?php
// $Id: duration_handler_field.inc,v 1.1 2008/10/08 06:36:24 jpetso Exp $
/**
 * @file
 * Project Forecast - Estimate completion dates for your project's tasks.
 *
 * Copyright 2007, 2008 by Jakob Petsovits ("jpetso", http://drupal.org/user/56020)
 */

/**
 * A handler to provide proper displays for time units (i.e. calendar weeks).
 */
class duration_handler_field extends content_handler_field_multiple {
  function render($values) {
    $values->duration = duration_create($values->{$this->field_alias});
    return parent::render($values);
  }
}
