<?php
/**
 * @file
 * artesis_backend_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function artesis_backend_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'alter color scheme'.
  $permissions['alter color scheme'] = array(
    'name' => 'alter color scheme',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'artesis_backend',
  );

  // Exported permission: 'change alpha settings'.
  $permissions['change alpha settings'] = array(
    'name' => 'change alpha settings',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'artesis_backend',
  );

  // Exported permission: 'change common theme settings'.
  $permissions['change common theme settings'] = array(
    'name' => 'change common theme settings',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'artesis_backend',
  );

  // Exported permission: 'override ding_campaign premium option'.
  $permissions['override ding_campaign premium option'] = array(
    'name' => 'override ding_campaign premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'override ding_event premium option'.
  $permissions['override ding_event premium option'] = array(
    'name' => 'override ding_event premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'override ding_library premium option'.
  $permissions['override ding_library premium option'] = array(
    'name' => 'override ding_library premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'override ding_news premium option'.
  $permissions['override ding_news premium option'] = array(
    'name' => 'override ding_news premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'override mkdru premium option'.
  $permissions['override mkdru premium option'] = array(
    'name' => 'override mkdru premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'override mobile premium option'.
  $permissions['override mobile premium option'] = array(
    'name' => 'override mobile premium option',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full ding_campaign premium content'.
  $permissions['view full ding_campaign premium content'] = array(
    'name' => 'view full ding_campaign premium content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full ding_event premium content'.
  $permissions['view full ding_event premium content'] = array(
    'name' => 'view full ding_event premium content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full ding_library premium content'.
  $permissions['view full ding_library premium content'] = array(
    'name' => 'view full ding_library premium content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full ding_news premium content'.
  $permissions['view full ding_news premium content'] = array(
    'name' => 'view full ding_news premium content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full mkdru premium content'.
  $permissions['view full mkdru premium content'] = array(
    'name' => 'view full mkdru premium content',
    'roles' => array(
      'administrator' => 'administrator',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: 'view full mobile premium content'.
  $permissions['view full mobile premium content'] = array(
    'name' => 'view full mobile premium content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'local administrator' => 'local administrator',
    ),
    'module' => 'nopremium',
  );

  return $permissions;
}
