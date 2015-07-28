<?php
$content['type']  = array (
  'name' => 'Blog entry',
  'type' => 'blog',
  'description' => 'A <em>blog entry</em> is a single post to an online journal, or <em>blog</em>. People can make comments to interact with the author.',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '0',
  'help' => '<br />
',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'addthis_nodetype' => 1,
  'teaser_field' => '0',
  'scheduler' => 1,
  'scheduler_touch' => 0,
  'old_type' => 'blog',
  'orig_type' => 'blog',
  'module' => 'blog',
  'custom' => '0',
  'modified' => '1',
  'locked' => '1',
  'reset' => 'Reset to defaults',
  'comment' => '2',
  'comment_default_mode' => '4',
  'comment_default_order' => '2',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '1',
  'comment_subject_field' => '1',
  'comment_preview' => '0',
  'comment_form_location' => '0',
  'teaserthumbnail' => '0',
  'teaserthumbnail_attachment' => 0,
  'teaserthumbnail_teaser' => '1',
  'teaserthumbnail_rss' => '1',
  'teaserthumbnail_link' => 1,
  'teaserthumbnail_align' => '0',
  'teaserthumbnail_preset' => '',
  'teaserthumbnail_min_height' => '',
  'teaserthumbnail_min_width' => '',
  'location_addanother' => 0,
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Teaser',
    'field_name' => 'field_teaser',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-1',
    'rows' => '2',
    'size' => 60,
    'description' => 'One or two brief sentences to catch people\'s interest. This is displayed in "What\'s on" views, etc',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_teaser][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-2',
      'parent' => '',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'body_field' => '-2',
  'revision_information' => '2',
  'author' => '1',
  'options' => '3',
  'comment_settings' => '5',
  'menu' => '-3',
  'taxonomy' => '-4',
  'book' => '0',
  'path' => '4',
);

