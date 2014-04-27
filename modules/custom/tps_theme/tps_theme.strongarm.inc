<?php
/**
 * @file
 * tps_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tps_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'The Public School';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'A school with no curriculum. It is not accredited, does not give out degrees, and has no affiliation with the public school. It is a framework that supports autodidactic activities, operating under the assumption that everything is in everything.';
  $export['site_slogan'] = $strongarm;

  return $export;
}
