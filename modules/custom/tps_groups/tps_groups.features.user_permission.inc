<?php
/**
 * @file
 * tps_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tps_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create group content'.
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group content'.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
