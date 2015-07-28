<?php
$content['type']  = array (
  'name' => 'Series',
  'type' => 'series',
  'description' => 'A <em>series</em> is used for promoting talk series at forums. Use the scheduling feature to control when the <em>series</em> is made visible to the public, and when it stops. Do not allow comments, or make the <em>series</em> appear on the home page.',
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
  'teaser_length' => '200',
  'addthis_nodetype' => 1,
  'teaser_field' => '1',
  'scheduler' => 1,
  'scheduler_touch' => 1,
  'old_type' => 'series',
  'orig_type' => 'story',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '0',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
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
    'label' => 'Series Image',
    'field_name' => 'field_series_image',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '-2',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => '',
    'max_filesize_per_file' => '3M',
    'max_filesize_per_node' => '5M',
    'max_resolution' => 0,
    'min_resolution' => 0,
    'custom_alt' => 1,
    'alt' => '',
    'custom_title' => 1,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'default_image_upload' => '',
    'default_image' => NULL,
    'description' => '',
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
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
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => 
      array (
        'format' => 'series_image_default',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Teaser',
    'field_name' => 'field_teaser',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => 0,
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
    'default_value_widget' => 
    array (
      'field_teaser' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_teaser][0][value',
        ),
      ),
    ),
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
  'body_field' => '-1',
  'revision_information' => '3',
  'author' => '2',
  'options' => '4',
  'comment_settings' => '5',
  'menu' => '-3',
  'taxonomy' => '-4',
  'book' => '7',
  'path' => '6',
  'path_redirect' => '8',
  'scheduler_settings' => '1',
);

