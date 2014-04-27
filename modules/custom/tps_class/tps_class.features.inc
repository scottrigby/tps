<?php
/**
 * @file
 * tps_class.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tps_class_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tps_class_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tps_class_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('A self-directed class.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
