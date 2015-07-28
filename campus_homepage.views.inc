<?php

/**
 * Implements hook_views_default_views()
 */
function campus_homepage_views_default_views() {
	include_once DRUPAL_ROOT . '/'. drupal_get_path('module', 'campus_homepage') .'/includes/definitions/'. 'views.campus_homepage.inc';
	$views[$view->name] = $view;
	return $views;
}


/* Implements hook_cviews_title_replacement - as implemented by campus_homepage */
function campus_homepage_cviews_title_replacement(){
	return array('campus_homepage');
}
