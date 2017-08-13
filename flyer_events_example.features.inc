<?php
/**
 * @file
 * flyer_events_example.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flyer_events_example_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flyer_events_example_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function flyer_events_example_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Field Title Yo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
