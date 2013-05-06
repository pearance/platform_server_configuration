<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function platform_server_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/add/platform
  $menu_links['primary-links:node/add/platform'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/platform',
    'router_path' => 'node/add/platform',
    'link_title' => 'Create a Platform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/add/site
  $menu_links['primary-links:node/add/site'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/site',
    'router_path' => 'node/add/site',
    'link_title' => 'Create a Site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create a Platform');
  t('Create a Site');


  return $menu_links;
}
