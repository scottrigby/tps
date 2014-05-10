<?php
/**
 * @file
 * tps_class.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tps_class_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create class content'.
  $permissions['create class content'] = array(
    'name' => 'create class content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own class content'.
  $permissions['edit own class content'] = array(
    'name' => 'edit own class content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
