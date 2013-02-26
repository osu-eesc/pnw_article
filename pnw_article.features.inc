<?php
/**
 * @file
 * pnw_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnw_article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pnw_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Handbook Article'),
      'base' => 'node_content',
      'description' => t('Use for adding handbook articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
