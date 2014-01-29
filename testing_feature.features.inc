<?php
/**
 * @file
 * testing_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testing_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function testing_feature_node_info() {
  $items = array(
    'testing_feature' => array(
      'name' => t('Testing Feature'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Test Feature Name'),
      'help' => '',
    ),
  );
  return $items;
}
