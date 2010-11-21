<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function drupress_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin
  $menus['menu-admin'] = array(
    'menu_name' => 'menu-admin',
    'title' => 'Admin',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');


  return $menus;
}
