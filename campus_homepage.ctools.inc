<?php

/**
 * Implementation of hook_default_page_manager_handlers()
 */
function campus_homepage_default_page_manager_handlers() {
	include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'campus_homepage') .'/includes/definitions/page_manager_variant.campus_homepage.inc';
	return $handlers;
}
