<?php
/**
 * @file
 * feauturing_thojmas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feauturing_thojmas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feauturing_thojmas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feauturing_thojmas_node_info() {
  $items = array(
    'artikel_digitalisera' => array(
      'name' => t('Artikel Digitalisera'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
    'artikel_lunch' => array(
      'name' => t('Artikel lunch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Matnamnn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
