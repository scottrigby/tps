<?php
/**
 * @file
 * tps_ux.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tps_ux_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
