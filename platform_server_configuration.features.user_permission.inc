<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function platform_server_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: access disabled sites
  $permissions['access disabled sites'] = array(
    'name' => 'access disabled sites',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'support',
    ),
  );

  // Exported permission: access hosting wizard
  $permissions['access hosting wizard'] = array(
    'name' => 'access hosting wizard',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: access task logs
  $permissions['access task logs'] = array(
    'name' => 'access task logs',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer clients
  $permissions['administer clients'] = array(
    'name' => 'administer clients',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting
  $permissions['administer hosting'] = array(
    'name' => 'administer hosting',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting aliases
  $permissions['administer hosting aliases'] = array(
    'name' => 'administer hosting aliases',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting backup gc
  $permissions['administer hosting backup gc'] = array(
    'name' => 'administer hosting backup gc',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting backup queue
  $permissions['administer hosting backup queue'] = array(
    'name' => 'administer hosting backup queue',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting features
  $permissions['administer hosting features'] = array(
    'name' => 'administer hosting features',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting queues
  $permissions['administer hosting queues'] = array(
    'name' => 'administer hosting queues',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer hosting settings
  $permissions['administer hosting settings'] = array(
    'name' => 'administer hosting settings',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer profile uid1/roles
  $permissions['administer profile uid1/roles'] = array(
    'name' => 'administer profile uid1/roles',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer sites
  $permissions['administer sites'] = array(
    'name' => 'administer sites',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: administer tasks
  $permissions['administer tasks'] = array(
    'name' => 'administer tasks',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: cancel own tasks
  $permissions['cancel own tasks'] = array(
    'name' => 'cancel own tasks',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create backup schedules
  $permissions['create backup schedules'] = array(
    'name' => 'create backup schedules',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create backup task
  $permissions['create backup task'] = array(
    'name' => 'create backup task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create backup_delete task
  $permissions['create backup_delete task'] = array(
    'name' => 'create backup_delete task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create client
  $permissions['create client'] = array(
    'name' => 'create client',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create clone task
  $permissions['create clone task'] = array(
    'name' => 'create clone task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create delete task
  $permissions['create delete task'] = array(
    'name' => 'create delete task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create disable task
  $permissions['create disable task'] = array(
    'name' => 'create disable task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create enable task
  $permissions['create enable task'] = array(
    'name' => 'create enable task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create lock task
  $permissions['create lock task'] = array(
    'name' => 'create lock task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create login_reset task
  $permissions['create login_reset task'] = array(
    'name' => 'create login_reset task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create migrate task
  $permissions['create migrate task'] = array(
    'name' => 'create migrate task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create package
  $permissions['create package'] = array(
    'name' => 'create package',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create platform
  $permissions['create platform'] = array(
    'name' => 'create platform',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create restore task
  $permissions['create restore task'] = array(
    'name' => 'create restore task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create server
  $permissions['create server'] = array(
    'name' => 'create server',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create site
  $permissions['create site'] = array(
    'name' => 'create site',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create site aliases
  $permissions['create site aliases'] = array(
    'name' => 'create site aliases',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: create unlock task
  $permissions['create unlock task'] = array(
    'name' => 'create unlock task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create verify task
  $permissions['create verify task'] = array(
    'name' => 'create verify task',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete own client
  $permissions['delete own client'] = array(
    'name' => 'delete own client',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete package
  $permissions['delete package'] = array(
    'name' => 'delete package',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete platform
  $permissions['delete platform'] = array(
    'name' => 'delete platform',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete server
  $permissions['delete server'] = array(
    'name' => 'delete server',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete site
  $permissions['delete site'] = array(
    'name' => 'delete site',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit client uname
  $permissions['edit client uname'] = array(
    'name' => 'edit client uname',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit client users
  $permissions['edit client users'] = array(
    'name' => 'edit client users',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit own client
  $permissions['edit own client'] = array(
    'name' => 'edit own client',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit package
  $permissions['edit package'] = array(
    'name' => 'edit package',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit platform
  $permissions['edit platform'] = array(
    'name' => 'edit platform',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit server
  $permissions['edit server'] = array(
    'name' => 'edit server',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit site
  $permissions['edit site'] = array(
    'name' => 'edit site',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: retry failed tasks
  $permissions['retry failed tasks'] = array(
    'name' => 'retry failed tasks',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view client
  $permissions['view client'] = array(
    'name' => 'view client',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view locked platforms
  $permissions['view locked platforms'] = array(
    'name' => 'view locked platforms',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view own tasks
  $permissions['view own tasks'] = array(
    'name' => 'view own tasks',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: view package
  $permissions['view package'] = array(
    'name' => 'view package',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view platform
  $permissions['view platform'] = array(
    'name' => 'view platform',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view server
  $permissions['view server'] = array(
    'name' => 'view server',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view site
  $permissions['view site'] = array(
    'name' => 'view site',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  // Exported permission: view task
  $permissions['view task'] = array(
    'name' => 'view task',
    'roles' => array(
      '0' => 'developer',
      '1' => 'support',
    ),
  );

  return $permissions;
}
