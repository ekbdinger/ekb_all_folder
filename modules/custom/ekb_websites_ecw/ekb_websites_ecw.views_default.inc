<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb_websites_ecw_views_default_views() {
  $views = array();

  // Exported view: link_ecw_sites
  $view = new view;
  $view->name = 'link_ecw_sites';
  $view->description = 'View displaying all eCW Websites';
  $view->tag = 'paul, link';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '[field_link_url]',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_link_url',
      'table' => 'node_data_field_link',
      'field' => 'field_link_url',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'link_content_type' => 'link_content_type',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(
        0 => '896',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'tid_op',
        'label' => 'Taxonomy: Term',
        'use_operator' => FALSE,
        'identifier' => 'tid',
        'remember' => FALSE,
        'single' => TRUE,
        'optional' => TRUE,
        'reduce' => FALSE,
      ),
      'type' => 'textfield',
      'limit' => TRUE,
      'vid' => '30',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'A List of All eCW Websites');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ol',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
    ),
  ));
  $handler->override_option('header', '<p>Still need to categorize these further.  Internal/external, etc.</p>

<p><h3><a href="http://ecwknowledgebase.com/node/add/link-content-type" target="_blank">Create new Link</a></h3></p>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('path', 'views/links/ecw');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
