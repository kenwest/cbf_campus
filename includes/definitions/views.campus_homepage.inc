<?php
$view = new view;
$view->name = 'campus_homepage';
$view->description = 'Provides the display logic for Campus Homepage module, displaying homepages by term. Also creates default blocks for filtering content types.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = 1;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
/* Field: Content: Title */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'node';
$handler->display->display_options['fields']['body']['field'] = 'title';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['body']['alter']['html'] = 0;
$handler->display->display_options['fields']['body']['hide_empty'] = 0;
$handler->display->display_options['fields']['body']['empty_zero'] = 0;
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
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 0;
$handler->display->display_options['arguments']['name']['break_phrase'] = 0;
$handler->display->display_options['arguments']['name']['add_table'] = 0;
$handler->display->display_options['arguments']['name']['require_value'] = 0;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'campus_homepage' => 'campus_homepage',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Page: Campus Homepage */
$handler = $view->new_display('page', 'Page: Campus Homepage', 'page_campus_homepage');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: "Welcome" text */
$handler->display->display_options['fields']['field_campus_welcome_text']['id'] = 'field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['table'] = 'field_data_field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['field'] = 'field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['label'] = '';
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campus_welcome_text']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['field_api_classes'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'campus_homepage' => 'campus_homepage',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
$handler->display->display_options['path'] = 'city/%';

/* Display: Block: Header */
$handler = $view->new_display('block', 'Block: Header', 'block_header_image');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['empty'] = FALSE;
$handler->display->display_options['empty']['text']['content'] = '<img src="[theme-path]/img/header-default.jpg" />';
$handler->display->display_options['empty']['text']['format'] = '2';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Campus Homepage Image */
$handler->display->display_options['fields']['field_campus_homepage_image']['id'] = 'field_campus_homepage_image';
$handler->display->display_options['fields']['field_campus_homepage_image']['table'] = 'field_data_field_campus_homepage_image';
$handler->display->display_options['fields']['field_campus_homepage_image']['field'] = 'field_campus_homepage_image';
$handler->display->display_options['fields']['field_campus_homepage_image']['label'] = '';
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campus_homepage_image']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_campus_homepage_image']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_campus_homepage_image']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_campus_homepage_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campus_homepage_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_campus_homepage_image']['field_api_classes'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['exception']['title_enable'] = 1;
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['name']['default_argument_options']['code'] = '/* +++ KW 2011-08-27
 *
 * A hack to treat \'north-sydney\' as \'sydney\' etc
 */

$city = \'\';
if (arg(0) == \'city\' && arg(1) != \'\') {
	$city = arg(1);
} else {
	$uri = explode(\'/\', $_SERVER[\'REQUEST_URI\']);
	if($uri[1] == \'city\' && $uri[2] != \'\'){
		$city = $uri[2];
	}
}

switch ($city) {
	case \'sydney-cbd\':
	case \'sydney-cbd-north\':
	case \'sydney-cbd-south\':
	case \'sydney-legal\':
	case \'sydneys-north-shore\':
	case \'north-sydney\':
	case \'st-leonards\':
	case \'chatswood\':
	case \'macquarie-park\':
		$city = \'sydney\';
		break;
}

if ($city != \'\') {
	return $city;
} else {
	return \'nil\';
}

/*
 * --- KW 2011-08-27
 *
 * if (arg(0) == \'city\' && arg(1) != \'\') {
 * 	return arg(1);
 * } else {
 * 	$uri = explode(\'/\', $_SERVER[\'REQUEST_URI\']);
 * 	if($uri[1] == \'city\' && $uri[2] != \'\'){
 * 		return $uri[2];
 * 	}
 * }
 */
';
$handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = 1;
$handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
$handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
$handler->display->display_options['arguments']['name']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 0;
$handler->display->display_options['arguments']['name']['break_phrase'] = 0;
$handler->display->display_options['arguments']['name']['add_table'] = 0;
$handler->display->display_options['arguments']['name']['require_value'] = 0;
$handler->display->display_options['block_caching'] = '-1';

/* Display: Block: Welcome */
$handler = $view->new_display('block', 'Block: Welcome', 'block_welcome');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Welcome';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: "Welcome" text */
$handler->display->display_options['fields']['field_campus_welcome_text']['id'] = 'field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['table'] = 'field_data_field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['field'] = 'field_campus_welcome_text';
$handler->display->display_options['fields']['field_campus_welcome_text']['label'] = '';
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campus_welcome_text']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_campus_welcome_text']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_campus_welcome_text']['field_api_classes'] = 0;
$handler->display->display_options['block_caching'] = '-1';

/* Display: Block: Find Us */
$handler = $view->new_display('block', 'Block: Find Us', 'block_find_us');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Find Us';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap |zoom=14]';
$handler->display->display_options['style_options']['markertype'] = 'small blue';
$handler->display->display_options['style_options']['latfield'] = 'field_campus_find_us_value';
$handler->display->display_options['style_options']['lonfield'] = 'field_campus_find_us_value';
$handler->display->display_options['style_options']['markerfield'] = 'field_campus_find_us_value';
$handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'name';
$handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'name';
$handler->display->display_options['style_options']['tooltipfield'] = 'field_campus_find_us_value';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: "Find Us" text */
$handler->display->display_options['fields']['field_campus_find_us']['id'] = 'field_campus_find_us';
$handler->display->display_options['fields']['field_campus_find_us']['table'] = 'field_data_field_campus_find_us';
$handler->display->display_options['fields']['field_campus_find_us']['field'] = 'field_campus_find_us';
$handler->display->display_options['fields']['field_campus_find_us']['label'] = '';
$handler->display->display_options['fields']['field_campus_find_us']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campus_find_us']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_campus_find_us']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_campus_find_us']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_campus_find_us']['field_api_classes'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Pre-Map Text';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Post-Map Text';
$handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_campus_find_us]';
$handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 1;
/* Field: Location: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'location';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
/* Field: Location: Street */
$handler->display->display_options['fields']['street']['id'] = 'street';
$handler->display->display_options['fields']['street']['table'] = 'location';
$handler->display->display_options['fields']['street']['field'] = 'street';
$handler->display->display_options['fields']['street']['label'] = '';
$handler->display->display_options['fields']['street']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['street']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['street']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['street']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['street']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['street']['alter']['trim'] = 0;
$handler->display->display_options['fields']['street']['alter']['html'] = 0;
$handler->display->display_options['fields']['street']['hide_empty'] = 0;
$handler->display->display_options['fields']['street']['empty_zero'] = 0;
/* Field: Location: Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'location';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['label'] = '';
$handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
$handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
$handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
$handler->display->display_options['block_caching'] = '-1';

/* Display: Block: Address */
$handler = $view->new_display('block', 'Block: Address', 'block_address');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Address';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'gmap';
$handler->display->display_options['style_options']['macro'] = '[gmap |width=260px |zoom=14 ]';
$handler->display->display_options['style_options']['markertype'] = 'small blue';
$handler->display->display_options['style_options']['latfield'] = 'name';
$handler->display->display_options['style_options']['lonfield'] = 'name';
$handler->display->display_options['style_options']['markerfield'] = 'name';
$handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'name';
$handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'name';
$handler->display->display_options['style_options']['tooltipfield'] = 'name';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Location: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'location';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]<br />';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 1;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
/* Field: Location: Street */
$handler->display->display_options['fields']['street']['id'] = 'street';
$handler->display->display_options['fields']['street']['table'] = 'location';
$handler->display->display_options['fields']['street']['field'] = 'street';
$handler->display->display_options['fields']['street']['label'] = '';
$handler->display->display_options['fields']['street']['exclude'] = TRUE;
$handler->display->display_options['fields']['street']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['street']['alter']['text'] = '[street] <br />';
$handler->display->display_options['fields']['street']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['street']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['street']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['street']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['street']['alter']['trim'] = 0;
$handler->display->display_options['fields']['street']['alter']['html'] = 0;
$handler->display->display_options['fields']['street']['hide_empty'] = 1;
$handler->display->display_options['fields']['street']['empty_zero'] = 0;
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['exclude'] = TRUE;
$handler->display->display_options['fields']['city']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['city']['alter']['text'] = '[city] <br />';
$handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['city']['alter']['trim'] = 0;
$handler->display->display_options['fields']['city']['alter']['html'] = 0;
$handler->display->display_options['fields']['city']['hide_empty'] = 1;
$handler->display->display_options['fields']['city']['empty_zero'] = 0;
/* Field: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
$handler->display->display_options['fields']['province']['label'] = '';
$handler->display->display_options['fields']['province']['exclude'] = TRUE;
$handler->display->display_options['fields']['province']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['province']['alter']['text'] = '[province] <br />';
$handler->display->display_options['fields']['province']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['province']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['province']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['province']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['province']['alter']['trim'] = 0;
$handler->display->display_options['fields']['province']['alter']['html'] = 0;
$handler->display->display_options['fields']['province']['hide_empty'] = 1;
$handler->display->display_options['fields']['province']['empty_zero'] = 0;
/* Field: Location: Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'location';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['label'] = '';
$handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['postal_code']['alter']['text'] = '[postal_code] <br />';
$handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
$handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
$handler->display->display_options['fields']['postal_code']['hide_empty'] = 1;
$handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Pre-Map Text';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>Local Address</h3>
<address>
[name]
[street]
[city]
[province]
[postal_code]
</address>

<h3>Find Us</h3>';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Post-Map Text';
$handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;

/* Display: Block: Follow */
$handler = $view->new_display('block', 'Block: Follow', 'block_follow');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Follow us';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Facebook */
$handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
$handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
$handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
$handler->display->display_options['fields']['field_facebook']['label'] = '';
$handler->display->display_options['fields']['field_facebook']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_facebook']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_facebook']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_facebook']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_facebook']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_facebook']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_facebook']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_facebook']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_facebook']['field_api_classes'] = 0;
/* Field: Content: Twitter */
$handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
$handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
$handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
$handler->display->display_options['fields']['field_twitter']['label'] = '';
$handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_twitter']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_twitter']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_twitter']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_twitter']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_twitter']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_twitter']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_twitter']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_twitter']['field_api_classes'] = 0;
$handler->display->display_options['block_caching'] = '-1';
$translatables['campus_homepage'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term'),
  t('All'),
  t('Page: Campus Homepage'),
  t('Block: Header'),
  t('<img src="[theme-path]/img/header-default.jpg" />'),
  t('Block: Welcome'),
  t('Welcome'),
  t('Block: Find Us'),
  t('Find Us'),
  t('Pre-Map Text'),
  t('Post-Map Text'),
  t('[field_campus_find_us]'),
  t('Block: Address'),
  t('Address'),
  t('[name]<br />'),
  t('[street] <br />'),
  t('[city] <br />'),
  t('[province] <br />'),
  t('[postal_code] <br />'),
  t('<h3>Local Address</h3>
<address>
[name]
[street]
[city]
[province]
[postal_code]
</address>

<h3>Find Us</h3>'),
  t('Block: Follow'),
  t('Follow us'),
);
