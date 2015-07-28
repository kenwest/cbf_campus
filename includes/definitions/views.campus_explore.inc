<?php
$view = new view;
$view->name = 'campus_explore';
$view->description = 'Encouraging people to explore Jesus';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Explore';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['use_more_text'] = 'More...';
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = 1;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['empty'] = FALSE;
$handler->display->display_options['empty']['text']['content'] = 'Sorry, there is nothing to explore at this time.';
$handler->display->display_options['empty']['text']['format'] = '1';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  'trim_length' => '600',
);
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['exception']['title_enable'] = 1;
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['name']['default_argument_options']['code'] = 'if (arg(0) == \'city\' && arg(1) != \'\') {
	return arg(1);
} else {
	$uri = explode(\'/\', $_SERVER[\'REQUEST_URI\']);
	if($uri[1] == \'city\' && $uri[2] != \'\'){
		return $uri[2];
	}
}';
$handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = 1;
$handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
  'vocabulary_1' => 'vocabulary_1',
);
$handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
$handler->display->display_options['arguments']['name']['validate_options']['transform'] = '1';
$handler->display->display_options['arguments']['name']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 0;
$handler->display->display_options['arguments']['name']['break_phrase'] = 0;
$handler->display->display_options['arguments']['name']['add_table'] = 0;
$handler->display->display_options['arguments']['name']['require_value'] = 0;
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
  'campus_explore' => 'campus_explore',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

/* Display: Block: Campus Explore */
$handler = $view->new_display('block', 'Block: Campus Explore', 'block_campus_explore');
$handler->display->display_options['link_url'] = 'city/!1/explore';

/* Display: Block: Campus Explore Regular */
$handler = $view->new_display('block', 'Block: Campus Explore Regular', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Opportunities';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['use_more_text'] = 'More...';
$handler->display->display_options['link_url'] = 'city/!1/explore';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 0;
/* Field: Content: Regular activities */
$handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
$handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
$handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
$handler->display->display_options['fields']['field_activity']['label'] = '';
$handler->display->display_options['fields']['field_activity']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_activity']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_activity']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_activity']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_activity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_activity']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_activity']['empty'] = 'There are currently no regular activities.';
$handler->display->display_options['fields']['field_activity']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_activity']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_activity']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_activity']['field_api_classes'] = 0;
$translatables['campus_explore'] = array(
  t('Defaults'),
  t('Explore'),
  t('More...'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Sorry, there is nothing to explore at this time.'),
  t('term'),
  t('<h3>[title]</h3>'),
  t('All'),
  t('Block: Campus Explore'),
  t('more'),
  t('Block: Campus Explore Regular'),
  t('Opportunities'),
  t('There are currently no regular activities.'),
);
