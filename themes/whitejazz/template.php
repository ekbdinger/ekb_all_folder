<?php
// $Id$

function phptemplate_body_class($sidebar_left, $sidebar_right) {
  if ($sidebar_left != '' && $sidebar_right != '') {
    $class = 'sidebars';
  }
  else {
    if ($sidebar_left != '') {
      $class = 'sidebar-left';
    }
    if ($sidebar_right != '') {
      $class = 'sidebar-right';
    }
  }
  if (isset($class)) {
    print ' class="'. $class .'"';
  }
}

if (is_null(theme_get_setting('whitejazz_width'))) {
  global $theme_key;
  // Save default theme settings
  $defaults = array(
    'whitejazz_width' => 0,
    'whitejazz_fixedwidth' => '850',
    'whitejazz_breadcrumb' => 0,
    'whitejazz_iepngfix' => 0,
    'whitejazz_fontfamily' => 0,
    'whitejazz_customfont' => '',
    'whitejazz_uselocalcontent' => 0,
    'whitejazz_localcontentfile' => '',
    'whitejazz_leftsidebarwidth' => '210',
    'whitejazz_rightsidebarwidth' => '210',
    'whitejazz_suckerfish' => 0,
    'whitejazz_usecustomlogosize' => 0,
    'whitejazz_logowidth' => '100',
    'whitejazz_logoheight' => '100',
  );

  variable_set(
    str_replace('/', '_', 'theme_'. $theme_key .'_settings'),
    array_merge(theme_get_settings($theme_key), $defaults)
  );
  // Force refresh of Drupal internals
  theme_get_setting('', TRUE);
}

if (theme_get_setting('whitejazz_iepngfix')) {
   drupal_add_js(drupal_get_path('theme', 'whitejazz') .'/js/jquery.pngFix.js', 'theme');
}

if (theme_get_setting('whitejazz_uselocalcontent')) {
  $local_content = drupal_get_path('theme', 'whitejazz') .'/'. theme_get_setting('whitejazz_localcontentfile');
  if (file_exists($local_content)) {
    drupal_add_css($local_content, 'theme');
  }
}

function phptemplate_menu_links($links, $attributes = array()) {

  if (!count($links)) {
    return '';
  }
  $level_tmp = explode('-', key($links));
  $level = $level_tmp[0];
  $output = "<ul class=\"links-$level ". $attributes['class'] ."\" id=\"". $attributes['id'] ."\">\n";

  $num_links = count($links);
  $i = 1;

  foreach ($links as $index => $link) {
    $output .= '<li';

    $output .= ' class="';
    if (stristr($index, 'active')) {
      $output .= 'active';
    }
    elseif ((drupal_is_front_page()) && ($link['href']=='<front>')) {
      $link['attributes']['class'] = 'active';
      $output .= 'active';
    }
    if ($i == 1) {
      $output .= ' first'; }
    if ($i == $num_links) {
      $output .= ' last'; }

    $output .= '"';

    $output .= ">". l($link['title'], $link['href'], $link['attributes'], $link['query'], $link['fragment']) ."</li>\n";

    $i++;
  }
  $output .= '</ul>';
  return $output;
} 

