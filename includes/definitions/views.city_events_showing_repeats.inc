<?php
$view = new view;
$view->name = 'city_events_showing_repeats';
$view->description = 'Upcoming events - nodes of type \'Event\' - with a row for each repeat';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'city_events_showing_repeats';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Events';
$handler->display->display_options['use_more_text'] = 'More...';
$handler->display->display_options['link_display'] = 'page_list_podcasts';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['empty'] = FALSE;
$handler->display->display_options['empty']['text']['content'] = 'Sorry, there are no upcoming events at this time.';
$handler->display->display_options['empty']['text']['format'] = '1';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Content: Ministry Centre */
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['taxonomy_vocabulary_1']['field_api_classes'] = 0;
/* Field: Content: Series Image */
$handler->display->display_options['fields']['field_series_image']['id'] = 'field_series_image';
$handler->display->display_options['fields']['field_series_image']['table'] = 'field_data_field_series_image';
$handler->display->display_options['fields']['field_series_image']['field'] = 'field_series_image';
$handler->display->display_options['fields']['field_series_image']['label'] = '';
$handler->display->display_options['fields']['field_series_image']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_series_image']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_series_image']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_series_image']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_series_image']['element_class'] = 'view-thumbnail';
$handler->display->display_options['fields']['field_series_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_series_image']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_series_image']['hide_empty'] = 1;
$handler->display->display_options['fields']['field_series_image']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_series_image']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_series_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_series_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_series_image']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([taxonomy_vocabulary_1])';
$handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['prefix'] = '<h3>';
$handler->display->display_options['fields']['title']['alter']['suffix'] = '</h3>';
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<em>[field_event_date]</em><br/>';
$handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value',
  'multiple_number' => '1',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['group_rows'] = 0;
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_event_date']['delta_reversed'] = 0;
$handler->display->display_options['fields']['field_event_date']['delta_first_last'] = 0;
$handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['body']['alter']['external'] = 0;
$handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['body']['alter']['html'] = 0;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = 1;
$handler->display->display_options['fields']['body']['hide_empty'] = 0;
$handler->display->display_options['fields']['body']['empty_zero'] = 0;
$handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '150',
);
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
/* Sort criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['code'] = 'if (arg(0) == \'city\' && arg(1) != \'\') {
	return arg(1);
} else {
	$uri = explode(\'/\', $_SERVER[\'REQUEST_URI\']);
	if($uri[1] == \'city\' && $uri[2] != \'\'){
		return $uri[2];
	}
}';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'vocabulary_1' => 'vocabulary_1',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = '1';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  48 => '48',
);
$handler->display->display_options['filters']['tid']['expose']['operator'] = FALSE;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_3';
/* Filter criterion: Content: Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

/* Display: Block: List Campus Series */
$handler = $view->new_display('block', 'Block: List Campus Series', 'block_list_podcasts');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';

/* Display: Page: List Campus Series */
$handler = $view->new_display('page', 'Page: List Campus Series', 'page_list_podcasts');
$handler->display->display_options['path'] = 'city/%/events';

/* Display: Feed: List Campus Series */
$handler = $view->new_display('feed', 'Feed: List Campus Series', 'feed_list_podcasts');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'city/%/events/rss.xml';

/* Display: Block: List Campus Explore Series */
$handler = $view->new_display('block', 'Block: List Campus Explore Series', 'block_1');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  46 => '46',
);
$handler->display->display_options['filters']['tid']['expose']['operator'] = FALSE;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_3';
/* Filter criterion: Content: Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

/* Display: Page: List Campus Explore Series */
$handler = $view->new_display('page', 'Page: List Campus Explore Series', 'page_1');
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  46 => '46',
);
$handler->display->display_options['filters']['tid']['expose']['operator'] = FALSE;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_3';
/* Filter criterion: Content: Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
$handler->display->display_options['path'] = 'city/%/explore/events';

/* Display: Block: List Campus Connect Series */
$handler = $view->new_display('block', 'Block: List Campus Connect Series', 'block_2');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_2';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  47 => '47',
);
$handler->display->display_options['filters']['tid']['expose']['operator'] = FALSE;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_3';
/* Filter criterion: Content: Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

/* Display: Page: List Campus Connect Series */
$handler = $view->new_display('page', 'Page: List Campus Connect Series', 'page_2');
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  47 => '47',
);
$handler->display->display_options['filters']['tid']['expose']['operator'] = FALSE;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_3';
/* Filter criterion: Content: Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
$handler->display->display_options['path'] = 'city/%/connect/events';
$translatables['city_events_showing_repeats'] = array(
  t('Defaults'),
  t('Events'),
  t('More...'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Sorry, there are no upcoming events at this time.'),
  t('[title] ([taxonomy_vocabulary_1])'),
  t('<h3>'),
  t('</h3>'),
  t('<em>[field_event_date]</em><br/>'),
  t('All'),
  t('Block: List Campus Series'),
  t('more'),
  t('Page: List Campus Series'),
  t('Feed: List Campus Series'),
  t('Block: List Campus Explore Series'),
  t('Page: List Campus Explore Series'),
  t('Block: List Campus Connect Series'),
  t('Page: List Campus Connect Series'),
);

