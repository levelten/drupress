<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function drupress_content_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Categories',
      'description' => 'Categories, unlike tags, can have a hierarchy. You might have a Jazz category, and under that have children categories for Bebop and Big Band. Totally optional.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_categories',
      'weight' => '0',
      'nodes' => array(
        'post' => 'post',
      ),
    ),
    'link_categories' => array(
      'name' => 'Link Categories',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_link_categories',
      'weight' => '0',
      'nodes' => array(
        'link' => 'link',
      ),
    ),
    'post_tags' => array(
      'name' => 'Post Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_post_tags',
      'weight' => '0',
      'nodes' => array(
        'post' => 'post',
      ),
    ),
  );
}
