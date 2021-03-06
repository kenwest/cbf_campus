<?php
$content['type']  = array (
  'name' => 'Episode',
  'type' => 'episode',
  'description' => 'An <em>episode</em> in a <em>podcast</em>. People can make comments to give feedback on the talk.',
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
  'teaser_field' => 0,
  'scheduler' => 0,
  'scheduler_touch' => 0,
  'old_type' => 'episode',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '2',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '1',
  'comment_subject_field' => '1',
  'comment_preview' => '0',
  'comment_form_location' => '0',
  'teaserthumbnail' => '1',
  'teaserthumbnail_attachment' => 0,
  'teaserthumbnail_teaser' => '1',
  'teaserthumbnail_rss' => '1',
  'teaserthumbnail_link' => 1,
  'teaserthumbnail_align' => '1',
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
    'description' => 'The default format is "speaker, date". For example "David Ould, 17 Feb 2010". This text is displayed in RSS feeds, etc.',
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
  1 => 
  array (
    'label' => 'Content',
    'field_name' => 'field_content',
    'type' => 'filefield',
    'widget_type' => 'filefield_widget',
    'change' => 'Change basic information',
    'weight' => 0,
    'file_extensions' => 'mp3',
    'progress_indicator' => 'bar',
    'file_path' => 'podcasts/[site-date-yyyy]/[site-date-mm]',
    'max_filesize_per_file' => '',
    'max_filesize_per_node' => '',
    'description' => '',
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'filefield',
    'columns' => 
    array (
      'fid' => 
      array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
      ),
      'list' => 
      array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
      ),
      'data' => 
      array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-1',
      'parent' => '',
      'label' => 
      array (
        'format' => 'inline',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'jplayer_single',
        'exclude' => 0,
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
  'revision_information' => '1',
  'author' => '2',
  'options' => '3',
  'comment_settings' => '5',
  'menu' => '-3',
  'taxonomy' => '-4',
  'book' => '6',
  'path' => '4',
);

