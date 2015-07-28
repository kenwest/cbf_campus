<?php
$handler = new stdClass;
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'campus_contact_node_view_http_response';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'http_response';
$handler->weight = 3;
$handler->conf = array(
  'title' => 'Campus Contact',
  'contexts' => array(),
  'relationships' => array(
    0 => array(
      'context' => 'argument_nid_1',
      'name' => 'term_from_node',
      'id' => 1,
      'identifier' => 'Term from node',
      'keyword' => 'term',
      'relationship_settings' => array(
        'vid' => '1',
      ),
    ),
  ),
  'code' => '301',
  'destination' => 'campus/%term:name_dashed/contact',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'contact_webform' => 'contact_webform',
          ),
        ),
        'context' => 'argument_nid_1',
        'not' => FALSE,
      ),
    ),
  ),
);

