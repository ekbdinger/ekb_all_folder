<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_menu_links_all_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ekb-forum
  $menus['menu-ekb-forum'] = array(
    'menu_name' => 'menu-ekb-forum',
    'title' => 'Suckerfish Forum',
    'description' => 'Links to the Forum',
  );
  // Exported menu: menu-meaningful-use
  $menus['menu-meaningful-use'] = array(
    'menu_name' => 'menu-meaningful-use',
    'title' => 'Meaningful Use (MU)',
    'description' => 'OLD VERSION -- Any important documents or updates related to Meaningful Use that eCW employees should be aware of.',
  );
  // Exported menu: menu-navigation-bar-2
  $menus['menu-navigation-bar-2'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'title' => 'suckerfish eCW Reference',
    'description' => 'This is for the new primary pages we are announcing at the Quarterly Meeting on June 4, 2011',
  );
  // Exported menu: menu-newadmin
  $menus['menu-newadmin'] = array(
    'menu_name' => 'menu-newadmin',
    'title' => 'New Admin',
    'description' => '',
  );
  // Exported menu: menu-newsmenu
  $menus['menu-newsmenu'] = array(
    'menu_name' => 'menu-newsmenu',
    'title' => 'News',
    'description' => '',
  );
  // Exported menu: menu-quizzes-nav
  $menus['menu-quizzes-nav'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'title' => 'Suckerfish Quizzes',
    'description' => 'List Quizzes such as MU, HIPAA and Sexual Harassment',
  );
  // Exported menu: menu-suckerfish-department
  $menus['menu-suckerfish-department'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'title' => 'Suckerfish Department',
    'description' => '',
  );
  // Exported menu: menu-suckerfish-logout
  $menus['menu-suckerfish-logout'] = array(
    'menu_name' => 'menu-suckerfish-logout',
    'title' => 'Suckerfish Logout',
    'description' => '',
  );
  // Exported menu: menu-suckerfish-meaningful-use
  $menus['menu-suckerfish-meaningful-use'] = array(
    'menu_name' => 'menu-suckerfish-meaningful-use',
    'title' => 'Meaningful Use',
    'description' => '',
  );
  // Exported menu: menu-suckerfish-myaccount
  $menus['menu-suckerfish-myaccount'] = array(
    'menu_name' => 'menu-suckerfish-myaccount',
    'title' => 'Suckerfish My Account',
    'description' => '',
  );
  // Exported menu: menu-suckerfish-resources
  $menus['menu-suckerfish-resources'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'title' => 'Suckerfish Resources',
    'description' => '',
  );
  // Exported menu: menu-suckerfish-training
  $menus['menu-suckerfish-training'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'title' => 'Suckerfish Training',
    'description' => '',
  );
  // Exported menu: menu-temporarymenu
  $menus['menu-temporarymenu'] = array(
    'menu_name' => 'menu-temporarymenu',
    'title' => 'Main Reference',
    'description' => '',
  );
  // Exported menu: menu-trainersmenu
  $menus['menu-trainersmenu'] = array(
    'menu_name' => 'menu-trainersmenu',
    'title' => 'Main (Used before June 4, 2011)',
    'description' => 'This is the top blue, bar of the main links on the site.  It is located on the "Suckerfish Menu" on the theme.',
  );
  // Exported menu: menu-training-help
  $menus['menu-training-help'] = array(
    'menu_name' => 'menu-training-help',
    'title' => 'Support Help for Trainers',
    'description' => 'Contains information about common problems/issues that occur for trainers while onsite and instructions on how to ',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains information about common problems/issues that occur for trainers while onsite and instructions on how to ');
  t('Links to the Forum');
  t('List Quizzes such as MU, HIPAA and Sexual Harassment');
  t('Main (Used before June 4, 2011)');
  t('Main Reference');
  t('Meaningful Use');
  t('Meaningful Use (MU)');
  t('New Admin');
  t('News');
  t('OLD VERSION -- Any important documents or updates related to Meaningful Use that eCW employees should be aware of.');
  t('Suckerfish Department');
  t('Suckerfish Forum');
  t('Suckerfish Logout');
  t('Suckerfish My Account');
  t('Suckerfish Quizzes');
  t('Suckerfish Resources');
  t('Suckerfish Training');
  t('Support Help for Trainers');
  t('This is for the new primary pages we are announcing at the Quarterly Meeting on June 4, 2011');
  t('This is the top blue, bar of the main links on the site.  It is located on the "Suckerfish Menu" on the theme.');
  t('suckerfish eCW Reference');


  return $menus;
}
