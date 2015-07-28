<?php
$content['type']  = array (
  'name' => 'Campus Homepage',
  'type' => 'campus_homepage',
  'description' => 'A stub for providing metadata about a campus',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => false,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'addthis_nodetype' => 1,
  'teaser_field' => 0,
  'scheduler' => 0,
  'scheduler_touch' => 0,
  'old_type' => 'campus_homepage',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'teaserthumbnail' => 0,
  'teaserthumbnail_attachment' => 0,
  'teaserthumbnail_teaser' => 1,
  'teaserthumbnail_rss' => 1,
  'teaserthumbnail_link' => 1,
  'teaserthumbnail_align' => 0,
  'teaserthumbnail_preset' => 0,
  'teaserthumbnail_min_height' => '',
  'teaserthumbnail_min_width' => '',
  'location_addanother' => 0,
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Campus Homepage Image',
    'field_name' => 'field_campus_homepage_image',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '-3',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => 'campus_homepage_images',
    'max_filesize_per_file' => '5M',
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
    'required' => 1,
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
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => '"Welcome" text',
    'field_name' => 'field_campus_welcome_text',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-2',
    'rows' => '5',
    'size' => 60,
    'description' => 'Copy for the "Welcome" block.',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        'format' => '2',
        '_error_element' => 'default_value_widget][field_campus_welcome_text][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_campus_welcome_text' => 
      array (
        0 => 
        array (
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_campus_welcome_text][0][value',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '1',
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
      'format' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'views' => false,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
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
  2 => 
  array (
    'label' => '"Find Us" text',
    'field_name' => 'field_campus_find_us',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => 0,
    'rows' => '5',
    'size' => 60,
    'description' => 'Copy to be displayed in the \'Find Us\' block.',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_campus_find_us][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_campus_find_us' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_campus_find_us][0][value',
          'format' => '2',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '1',
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
      'format' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'views' => false,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
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
  'body_field' => '7',
  'revision_information' => '4',
  'author' => '3',
  'options' => '5',
  'comment_settings' => '6',
  'menu' => '2',
  'taxonomy' => '-4',
  'book' => '10',
  'path' => '30',
  'path_redirect' => '30',
  'locations' => '0',
);

