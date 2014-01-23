<?php
/**
 * @file
 * testing_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function testing_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_scenarios|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_scenarios';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_scenario_examples' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'pre',
        'fis-cl' => '',
      ),
    ),
    'field_scenario_steps' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'pre',
        'fis-cl' => '',
      ),
    ),
  );
  $export['field_collection_item|field_scenarios|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_scenarios|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_scenarios';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_scenario_examples' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'field_scenario_steps' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'pre',
        'ow-cl' => '',
      ),
    ),
  );
  $export['field_collection_item|field_scenarios|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function testing_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_scenarios|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_scenarios';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_scenario_type',
        1 => 'field_test_tags',
        2 => 'field_scenario_description',
        3 => 'field_scenario_steps',
        4 => 'field_scenario_examples',
      ),
    ),
    'fields' => array(
      'field_scenario_type' => 'ds_content',
      'field_test_tags' => 'ds_content',
      'field_scenario_description' => 'ds_content',
      'field_scenario_steps' => 'ds_content',
      'field_scenario_examples' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_scenarios|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_scenarios|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_scenarios';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_scenario_type',
        1 => 'field_scenario_description',
        2 => 'field_scenario_steps',
        3 => 'field_scenario_examples',
      ),
    ),
    'fields' => array(
      'field_scenario_type' => 'ds_content',
      'field_scenario_description' => 'ds_content',
      'field_scenario_steps' => 'ds_content',
      'field_scenario_examples' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_scenarios|full'] = $ds_layout;

  return $export;
}
