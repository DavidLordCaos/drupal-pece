<?php

/**
 * @file
 * pece_artifacts_website.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pece_artifacts_website_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pece_artifacts_website_node_info() {
  $items = array(
    'pece_artifact_website' => array(
      'name' => t('Artifact - Website'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
