<?php
/**
 * @file
 * tps_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tps_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
