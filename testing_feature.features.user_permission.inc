<?php
/**
 * @file
 * testing_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function testing_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create testing_feature content'.
  $permissions['create testing_feature content'] = array(
    'name' => 'create testing_feature content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any testing_feature content'.
  $permissions['delete any testing_feature content'] = array(
    'name' => 'delete any testing_feature content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own testing_feature content'.
  $permissions['delete own testing_feature content'] = array(
    'name' => 'delete own testing_feature content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in testing_tags'.
  $permissions['delete terms in testing_tags'] = array(
    'name' => 'delete terms in testing_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any testing_feature content'.
  $permissions['edit any testing_feature content'] = array(
    'name' => 'edit any testing_feature content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own testing_feature content'.
  $permissions['edit own testing_feature content'] = array(
    'name' => 'edit own testing_feature content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in testing_tags'.
  $permissions['edit terms in testing_tags'] = array(
    'name' => 'edit terms in testing_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
