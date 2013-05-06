<?php

/**
 * Implementation of hook_user_default_roles().
 */
function platform_server_configuration_user_default_roles() {
  $roles = array();

  // Exported role: developer
  $roles['developer'] = array(
    'name' => 'developer',
  );

  // Exported role: support
  $roles['support'] = array(
    'name' => 'support',
  );

  return $roles;
}
