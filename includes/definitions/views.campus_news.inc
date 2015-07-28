<?php
$view = new view;
$view->name = 'campus_news';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'News';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_text'] = 'More...';
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
$handler->display->display_options['empty']['text']['content'] = 'Sorry, there is no news at this time.';
$handler->display->display_options['empty']['text']['format'] = '1';
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
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
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
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
}
';
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'story' => 'story',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Audience (taxonomy_vocabulary_3) */
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
  48 => '48',
);
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

/* Display: Block: List News */
$handler = $view->new_display('block', 'Block: List News', 'block_list_news');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;

/* Display: Page: List News */
$handler = $view->new_display('page', 'Page: List News', 'page_list_news');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['path'] = 'news';

/* Display: Feed: List News */
$handler = $view->new_display('feed', 'Feed: List News', 'feed_list_news');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['row_options']['item_length'] = 'teaser';
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['path'] = 'news/rss.xml';

/* Display: Block: List Campus News */
$handler = $view->new_display('block', 'Block: List Campus News', 'block_list_campus_news');
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_list_campus_news';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';

/* Display: Page: List Campus News */
$handler = $view->new_display('page', 'Page: List Campus News', 'page_list_campus_news');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'City News';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
}
';
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
$handler->display->display_options['path'] = 'city/%/news';

/* Display: Feed: List Campus News */
$handler = $view->new_display('feed', 'Feed: List Campus News', 'feed_list_campus_news');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['row_options']['item_length'] = 'teaser';
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
}
';
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
$handler->display->display_options['path'] = 'city/%/news/rss.xml';

/* Display: Page: View News */
$handler = $view->new_display('page', 'Page: View News', 'page_view_news');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = '[title]';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['exception']['title_enable'] = 1;
$handler->display->display_options['arguments']['nid']['title_enable'] = 1;
$handler->display->display_options['arguments']['nid']['title'] = '%1';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
$handler->display->display_options['path'] = 'news/%';

/* Display: Page: View Campus News */
$handler = $view->new_display('page', 'Page: View Campus News', 'page_view_campus_news');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = '[title]';
$handler->display->display_options['path'] = 'city/%/news/%';

/* Display: Block: List Campus Explore News */
$handler = $view->new_display('block', 'Block: List Campus Explore News', 'block_1');
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'story' => 'story',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Audience (taxonomy_vocabulary_3) */
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
  46 => '46',
);
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

/* Display: Page: List Campus Explore News */
$handler = $view->new_display('page', 'Page: List Campus Explore News', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'City News';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
}
';
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
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'story' => 'story',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Audience (taxonomy_vocabulary_3) */
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
  46 => '46',
);
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
$handler->display->display_options['path'] = 'city/%/explore/news';

/* Display: Block: List Campus Connect News */
$handler = $view->new_display('block', 'Block: List Campus Connect News', 'block_2');
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_2';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'story' => 'story',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Audience (taxonomy_vocabulary_3) */
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
  47 => '47',
);
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

/* Display: Page: List Campus Connect News */
$handler = $view->new_display('page', 'Page: List Campus Connect News', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'City News';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
}
';
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
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'story' => 'story',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Audience (taxonomy_vocabulary_3) */
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
  47 => '47',
);
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
$handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
$handler->display->display_options['path'] = 'city/%/connect/news';
$translatables['campus_news'] = array(
  t('Defaults'),
  t('News'),
  t('More...'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Sorry, there is no news at this time.'),
  t('[title] ([taxonomy_vocabulary_1])'),
  t('<h3>'),
  t('</h3>'),
  t('All'),
  t('Block: List News'),
  t('more'),
  t('Page: List News'),
  t('Feed: List News'),
  t('Block: List Campus News'),
  t('Page: List Campus News'),
  t('City News'),
  t('Feed: List Campus News'),
  t('Page: View News'),
  t('[title]'),
  t('%1'),
  t('Page: View Campus News'),
  t('Block: List Campus Explore News'),
  t('Page: List Campus Explore News'),
  t('Block: List Campus Connect News'),
  t('Page: List Campus Connect News'),
);

