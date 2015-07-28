<?php
  $handlers = array();

  // Ensures that blog articles are read on the correct campus
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Campus Articles',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'campus/%node:term/articles/%node:nid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $handlers['node_view_http_response'] = $handler;


  // For re-routing /blog to /articles
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_http_response';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Campus Articles',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'articles/',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $handlers['blog_http_response'] = $handler;
