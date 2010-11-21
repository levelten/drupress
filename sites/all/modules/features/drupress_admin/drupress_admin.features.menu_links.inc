<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function drupress_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin:admin/dashboard
  $menu_links['menu-admin:admin/dashboard'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin',
    'link_title' => 'Dashboard',
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
  // Exported menu link: menu-admin:admin/media
  $menu_links['menu-admin:admin/media'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/media',
    'router_path' => 'admin',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '3',
  );
  // Exported menu link: menu-admin:admin/media/all
  $menu_links['menu-admin:admin/media/all'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/media/all',
    'router_path' => 'admin',
    'link_title' => 'Media',
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
    'parent_path' => 'admin/media',
  );
  // Exported menu link: menu-admin:admin/pages
  $menu_links['menu-admin:admin/pages'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/pages',
    'router_path' => 'admin',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '5',
  );
  // Exported menu link: menu-admin:admin/pages/all
  $menu_links['menu-admin:admin/pages/all'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/pages/all',
    'router_path' => 'admin',
    'link_title' => 'Pages',
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
    'weight' => '-50',
    'parent_path' => 'admin/pages',
  );
  // Exported menu link: menu-admin:admin/posts
  $menu_links['menu-admin:admin/posts'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/posts',
    'router_path' => 'admin',
    'link_title' => 'Posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-admin:admin/posts/categories
  $menu_links['menu-admin:admin/posts/categories'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/posts/categories',
    'router_path' => 'admin',
    'link_title' => 'Categories',
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
    'weight' => '3',
    'parent_path' => 'admin/posts',
  );
  // Exported menu link: menu-admin:admin/posts/list
  $menu_links['menu-admin:admin/posts/list'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/posts/list',
    'router_path' => 'admin',
    'link_title' => 'Posts',
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
    'parent_path' => 'admin/posts',
  );
  // Exported menu link: menu-admin:admin/posts/tags
  $menu_links['menu-admin:admin/posts/tags'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'admin/posts/tags',
    'router_path' => 'admin',
    'link_title' => 'Post Tags',
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
    'weight' => '3',
    'parent_path' => 'admin/posts',
  );
  // Exported menu link: menu-admin:node/add/media
  $menu_links['menu-admin:node/add/media'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'node/add/media',
    'router_path' => 'node/add/media',
    'link_title' => 'Add New',
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
    'weight' => '1',
    'parent_path' => 'admin/media',
  );
  // Exported menu link: menu-admin:node/add/page
  $menu_links['menu-admin:node/add/page'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Add New',
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
    'weight' => '1',
    'parent_path' => 'admin/pages',
  );
  // Exported menu link: menu-admin:node/add/post
  $menu_links['menu-admin:node/add/post'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'node/add/post',
    'router_path' => 'node/add/post',
    'link_title' => 'Add New',
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
    'weight' => '1',
    'parent_path' => 'admin/posts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add New');
  t('Categories');
  t('Dashboard');
  t('Media');
  t('Pages');
  t('Post Tags');
  t('Posts');


  return $menu_links;
}
