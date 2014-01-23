<?php
/**
 * @file
 * testing_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function testing_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Plain text.
  $formats[4] = array(
    'format' => 4,
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
