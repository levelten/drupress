<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function drupress_admin_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin';
  $context->description = '';
  $context->tag = 'Admin';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'link' => 'link',
        'media' => 'media',
        'page' => 'page',
        'post' => 'post',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        'admin*' => 'admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-admin',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');

  $export['admin'] = $context;
  return $export;
}
