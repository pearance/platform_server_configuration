<?php

/**
 * Implementation of hook_strongarm().
 */
function platform_server_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_admin_client';
  $strongarm->value = '1';
  $export['hosting_admin_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_alias_automatic_no_www';
  $strongarm->value = 0;
  $export['hosting_alias_automatic_no_www'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_alias_automatic_www';
  $strongarm->value = 0;
  $export['hosting_alias_automatic_www'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_alias_redirection';
  $strongarm->value = 0;
  $export['hosting_alias_redirection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_alias_subdomain';
  $strongarm->value = 'oearance.com';
  $export['hosting_alias_subdomain'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_backup_gc_default_enabled';
  $strongarm->value = 1;
  $export['hosting_backup_gc_default_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_backup_gc_intervals';
  $strongarm->value = array(
    2419200 => array(
      'older_than' => array(
        'number' => '4',
        'interval' => '604800',
      ),
      'keep_per' => array(
        'number' => '1',
        'interval' => '604800',
      ),
    ),
  );
  $export['hosting_backup_gc_intervals'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_backup_queue_default_enabled';
  $strongarm->value = 1;
  $export['hosting_backup_queue_default_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_backup_queue_default_interval';
  $strongarm->value = '86400';
  $export['hosting_backup_queue_default_interval'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_cron_backup';
  $strongarm->value = array();
  $export['hosting_cron_backup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_cron_use_backend';
  $strongarm->value = '0';
  $export['hosting_cron_use_backend'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_default_client';
  $strongarm->value = '1';
  $export['hosting_default_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_default_db_server';
  $strongarm->value = '4';
  $export['hosting_default_db_server'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_default_web_server';
  $strongarm->value = '2';
  $export['hosting_default_web_server'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_dispatch_enabled';
  $strongarm->value = TRUE;
  $export['hosting_dispatch_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_ignore_default_profiles';
  $strongarm->value = 1;
  $export['hosting_ignore_default_profiles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_own_db_server';
  $strongarm->value = '4';
  $export['hosting_own_db_server'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_own_platform';
  $strongarm->value = '7';
  $export['hosting_own_platform'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_own_web_server';
  $strongarm->value = '2';
  $export['hosting_own_web_server'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_profile_roles_default_uid1';
  $strongarm->value = '1';
  $export['hosting_profile_roles_default_uid1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_gc_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_backup_gc_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_gc_frequency';
  $strongarm->value = 14400;
  $export['hosting_queue_backup_gc_frequency'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_queue_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_backup_queue_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_queue_frequency';
  $strongarm->value = 1800;
  $export['hosting_queue_backup_queue_frequency'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_backup_queue_items';
  $strongarm->value = '1';
  $export['hosting_queue_backup_queue_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_cron_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_cron_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_cron_frequency';
  $strongarm->value = 3600;
  $export['hosting_queue_cron_frequency'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_tasks_enabled';
  $strongarm->value = 1;
  $export['hosting_queue_tasks_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_tasks_frequency';
  $strongarm->value = 30;
  $export['hosting_queue_tasks_frequency'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_queue_tasks_items';
  $strongarm->value = '3';
  $export['hosting_queue_tasks_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hosting_require_disable_before_delete';
  $strongarm->value = 1;
  $export['hosting_require_disable_before_delete'] = $strongarm;

  return $export;
}
