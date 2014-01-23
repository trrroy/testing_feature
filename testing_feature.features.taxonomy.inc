<?php
/**
 * @file
 * testing_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function testing_feature_taxonomy_default_vocabularies() {
  return array(
    'testing_tags' => array(
      'name' => 'Testing Tags',
      'machine_name' => 'testing_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
