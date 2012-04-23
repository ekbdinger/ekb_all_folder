<?php
// $Id: duration.views.inc,v 1.1 2008/10/08 06:36:24 jpetso Exp $

/**
 * @file
 * A CCK field for entering time durations.
 *
 * Copyright 2008 by Jakob Petsovits <jpetso@gmx.at>
 * Distributed under the GNU General Public Licence version 2 or higher,
 * as published by the FSF on http://www.gnu.org/copyleft/gpl.html
 */

/**
 * Implementation of hook_views_handlers().
 */
function duration_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'duration') . '/views',
    ),
    'handlers' => array(
      'duration_handler_field' => array(
        'parent' => 'content_handler_field_multiple',
      ),
    ),
  );
}
