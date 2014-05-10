<?php
/**
 * @file
 * tps_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tps_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create class content'
  $permissions['node:group:create class content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any class content'
  $permissions['node:group:update any class content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own class content'
  $permissions['node:group:update own class content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
