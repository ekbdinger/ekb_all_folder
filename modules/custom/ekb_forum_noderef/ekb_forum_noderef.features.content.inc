<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ekb_forum_noderef_content_default_fields() {
  $fields = array();

  // Exported field: field_forum_pp
  $fields['forum-field_forum_pp'] = array(
    'field_name' => 'field_forum_pp',
    'type_name' => 'forum',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'primary_page_content' => 'primary_page_content',
      'addit_content' => 0,
      'admin_content' => 0,
      'blog' => 0,
      'dv' => 0,
      'forum' => 0,
      'internal' => 0,
      'internal_documentation' => 0,
      'item_key' => 0,
      'link_content_type' => 0,
      'multichoice' => 0,
      'story' => 0,
      'page' => 0,
      'panel' => 0,
      'kb_partner_pages' => 0,
      'quiz' => 0,
      'to_be_reviewed' => 0,
      'truefalse' => 0,
      'video_embed' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_forum_pp][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'PP',
      'weight' => '31',
      'description' => 'If this content is valid, link it to the appropriate primary page',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('PP');

  return $fields;
}
