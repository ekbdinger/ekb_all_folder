<?php

function phptemplate_settings($saved_settings) {

  $settings = theme_get_settings('whitejazz');

  $defaults = array(
    'whitejazz_width' => 0,
    'whitejazz_fixedwidth' => '850',
    'whitejazz_breadcrumb' => 0,
    'whitejazz_iepngfix' => 0,
    'whitejazz_fontfamily' => 0,
    'whitejazz_customfont' => '',
    'whitejazz_uselocalcontent' => 0,
    'whitejazz_localcontentfile' => '',
    'whitejazz_leftsidebarwidth' => '25',
    'whitejazz_rightsidebarwidth' => '25',
    'whitejazz_suckerfish' => 0,
    'whitejazz_usecustomlogosize' => 0,
    'whitejazz_logowidth' => '100',
    'whitejazz_logoheight' => '100',
  );

  $settings = array_merge($defaults, $settings);

  $form['whitejazz_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Fixed Width'),
    '#default_value' => $settings['whitejazz_width'],
  );

  $form['whitejazz_fixedwidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Fixed Width Size'),
    '#default_value' => $settings['whitejazz_fixedwidth'],
    '#size' => 5,
    '#maxlength' => 5,
  );

  $form['whitejazz_breadcrumb'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Breadcrumbs'),
    '#default_value' => $settings['whitejazz_breadcrumb'],
  );

  $form['whitejazz_iepngfix'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use IE PNG Fix'),
    '#default_value' => $settings['whitejazz_iepngfix'],
  );
  
  $form['whitejazz_fontfamily'] = array(
    '#type' => 'select',
    '#title' => t('Font Family'),
    '#default_value' => $settings['whitejazz_fontfamily'],
    '#options' => array(
      'Arial, Verdana, sans-serif' => t('Arial, Verdana, sans-serif'),
      '"Arial Narrow", Arial, Helvetica, sans-serif' => t('"Arial Narrow", Arial, Helvetica, sans-serif'),
      '"Times New Roman", Times, serif' => t('"Times New Roman", Times, serif'),
      '"Lucida Sans", Verdana, Arial, sans-serif' => t('"Lucida Sans", Verdana, Arial, sans-serif'),
      '"Lucida Grande", Verdana, sans-serif' => t('"Lucida Grande", Verdana, sans-serif'),
      'Tahoma, Verdana, Arial, Helvetica, sans-serif' => t('Tahoma, Verdana, Arial, Helvetica, sans-serif'),
      'Georgia, "Times New Roman", Times, serif' => t('Georgia, "Times New Roman", Times, serif'),
      'Custom' => t('Custom (specify below)'),
    ),
  );

  $form['whitejazz_customfont'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom Font-Family Setting'),
    '#default_value' => $settings['whitejazz_customfont'],
    '#size' => 40,
    '#maxlength' => 75,
  );

  $form['whitejazz_uselocalcontent'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include Local Content File'),
    '#default_value' => $settings['whitejazz_uselocalcontent'],
  );

  $form['whitejazz_localcontentfile'] = array(
    '#type' => 'textfield',
    '#title' => t('Local Content File Name'),
    '#default_value' => $settings['whitejazz_localcontentfile'],
    '#size' => 40,
    '#maxlength' => 75,
  );

  $form['whitejazz_leftsidebarwidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Left Sidebar Width'),
    '#default_value' => $settings['whitejazz_leftsidebarwidth'],
    '#size' => 5,
    '#maxlength' => 5,
  );

  $form['whitejazz_rightsidebarwidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Right Sidebar Width'),
    '#default_value' => $settings['whitejazz_rightsidebarwidth'],
    '#size' => 5,
    '#maxlength' => 5,
  );

  $form['whitejazz_suckerfish'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Suckerfish Menus'),
    '#default_value' => $settings['whitejazz_suckerfish'],
  );

  $form['whitejazz_usecustomlogosize'] = array(
    '#type' => 'checkbox',
    '#title' => t('Specify Custom Logo Size'),
    '#default_value' => $settings['whitejazz_usecustomlogosize'],
  );

  $form['whitejazz_logowidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Logo Width'),
    '#default_value' => $settings['whitejazz_logowidth'],
    '#size' => 5,
    '#maxlength' => 5,
  );

  $form['whitejazz_logoheight'] = array(
    '#type' => 'textfield',
    '#title' => t('Logo Height'),
    '#default_value' => $settings['whitejazz_logoheight'],
    '#size' => 5,
    '#maxlength' => 5,
  );

  return $form;
}
