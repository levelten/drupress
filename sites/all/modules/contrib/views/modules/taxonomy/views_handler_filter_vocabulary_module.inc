<?php
// $Id$
/**
 * Filter by node type
 */
class views_handler_filter_vocabulary_module extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Vocabulary by Module');
      $vocabularies = taxonomy_get_vocabularies();
      foreach ($vocabularies as $vid => $vocabulary) {
        $options[$vocabulary->module] = t($vocabulary->name);
      }
      $this->value_options = $options;
    }
  }
}
