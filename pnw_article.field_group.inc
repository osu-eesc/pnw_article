<?php
/**
 * @file
 * pnw_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnw_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_options|node|article|form';
  $field_group->group_name = 'group_article_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '6',
    'children' => array(
      0 => 'field_article_options',
      1 => 'metatags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_options|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_date|node|article|default';
  $field_group->group_name = 'group_author_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_author',
      1 => 'field_revision_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'author-date-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author_date|node|article|default'] = $field_group;

  return $export;
}
