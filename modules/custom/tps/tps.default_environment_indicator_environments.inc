<?php
/**
 * @file
 * tps.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function tps_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'Local';
  $environment->regexurl = '.(local|kala)';
  $environment->settings = array(
    'color' => '#33dd33',
    'text_color' => '#ffffff',
    'weight' => '0',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  return $export;
}
