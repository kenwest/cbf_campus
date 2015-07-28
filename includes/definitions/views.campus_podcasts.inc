<?php
$view = new view;
$view->name = 'campus_podcasts';
$view->description = 'Show lists of podcasts';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Podcasts';
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
$handler->display->display_options['empty']['text']['content'] = 'Sorry, there are no podcasts at this time.';
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
/* Field: Content: Content */
$handler->display->display_options['fields']['field_content']['id'] = 'field_content';
$handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
$handler->display->display_options['fields']['field_content']['field'] = 'field_content';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'episode' => 'episode',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block: List Podcasts */
$handler = $view->new_display('block', 'Block: List Podcasts', 'block_list_podcasts');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
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

/* Display: Page: List Podcasts */
$handler = $view->new_display('page', 'Page: List Podcasts', 'page_list_podcasts');
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
/* Field: Content: Content */
$handler->display->display_options['fields']['field_content']['id'] = 'field_content';
$handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
$handler->display->display_options['fields']['field_content']['field'] = 'field_content';
$handler->display->display_options['fields']['field_content']['label'] = '';
$handler->display->display_options['fields']['field_content']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_content']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_content']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_content']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_content']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_content']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_content']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_content']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_content']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_content']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_content']['field_api_classes'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="podcast">
    <div class="description">
        [title]
        [body]
    </div>
    <a href="[field_content]" class="download">Download</a>
</div>
';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
$handler->display->display_options['path'] = 'podcasts';

/* Display: Feed: List Podcasts */
$handler = $view->new_display('feed', 'Feed: List Podcasts', 'feed_list_podcasts');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'podcasts/rss.xml';

/* Display: Block: List Campus Podcasts */
$handler = $view->new_display('block', 'Block: List Campus Podcasts', 'block_list_campus_podcasts');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_list_campus_podcasts';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = 1;
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
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;

/* Display: Page: List Campus Podcasts */
$handler = $view->new_display('page', 'Page: List Campus Podcasts', 'page_list_campus_podcasts');
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
/* Field: Content: Content */
$handler->display->display_options['fields']['field_content']['id'] = 'field_content';
$handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
$handler->display->display_options['fields']['field_content']['field'] = 'field_content';
$handler->display->display_options['fields']['field_content']['label'] = '';
$handler->display->display_options['fields']['field_content']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_content']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_content']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_content']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_content']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_content']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_content']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_content']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_content']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_content']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_content']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_content']['field_api_classes'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="podcast">
    <div class="description">
        [title]
        [body]
    </div>
    <a href="[field_content]" class="download">Download</a>
</div>
';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = 1;
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
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
$handler->display->display_options['path'] = 'city/%/podcasts';

/* Display: Feed: List Campus Podcasts */
$handler = $view->new_display('feed', 'Feed: List Campus Podcasts', 'feed_list_campus_podcasts');
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_list_campus_podcasts';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
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
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
$handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
$handler->display->display_options['path'] = 'city/%/podcasts/rss.xml';
$translatables['campus_podcasts'] = array(
  t('Defaults'),
  t('Podcasts'),
  t('More...'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Sorry, there are no podcasts at this time.'),
  t('[title] ([taxonomy_vocabulary_1])'),
  t('<h3>'),
  t('</h3>'),
  t('Content'),
  t('Block: List Podcasts'),
  t('more'),
  t('Page: List Podcasts'),
  t('<div class="podcast">
    <div class="description">
        [title]
        [body]
    </div>
    <a href="[field_content]" class="download">Download</a>
</div>
'),
  t('Feed: List Podcasts'),
  t('Block: List Campus Podcasts'),
  t('All'),
  t('Page: List Campus Podcasts'),
  t('Feed: List Campus Podcasts'),
);
