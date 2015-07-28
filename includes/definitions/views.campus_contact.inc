<?php
$view = new view;
$view->name = 'campus_contact';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Contact us';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
/* Field: Content: Webform form body */
$handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
$handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['label'] = '';
$handler->display->display_options['fields']['webform_form_body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['html'] = 0;
$handler->display->display_options['fields']['webform_form_body']['hide_empty'] = 0;
$handler->display->display_options['fields']['webform_form_body']['empty_zero'] = 0;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'contact_webform' => 'contact_webform',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

/* Display: Block: Contact */
$handler = $view->new_display('block', 'Block: Contact', 'block_contact');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Webform form body */
$handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
$handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['label'] = '';
$handler->display->display_options['fields']['webform_form_body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['html'] = 0;
$handler->display->display_options['fields']['webform_form_body']['hide_empty'] = 0;
$handler->display->display_options['fields']['webform_form_body']['empty_zero'] = 0;

/* Display: Page: Contact */
$handler = $view->new_display('page', 'Page: Contact', 'page_contact');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['path'] = 'contact';

/* Display: Block: Campus Contact */
$handler = $view->new_display('block', 'Block: Campus Contact', 'block_campus_contact');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Webform form body */
$handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
$handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
$handler->display->display_options['fields']['webform_form_body']['label'] = '';
$handler->display->display_options['fields']['webform_form_body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['webform_form_body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['webform_form_body']['alter']['html'] = 0;
$handler->display->display_options['fields']['webform_form_body']['hide_empty'] = 0;
$handler->display->display_options['fields']['webform_form_body']['empty_zero'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 0;
$handler->display->display_options['arguments']['name']['break_phrase'] = 0;
$handler->display->display_options['arguments']['name']['add_table'] = 0;
$handler->display->display_options['arguments']['name']['require_value'] = 0;
$translatables['campus_contact'] = array(
  t('Defaults'),
  t('Contact us'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term'),
  t('Block: Contact'),
  t('Page: Contact'),
  t('Block: Campus Contact'),
  t('All'),
);
