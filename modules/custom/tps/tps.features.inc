<?php
/**
 * @file
 * tps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
