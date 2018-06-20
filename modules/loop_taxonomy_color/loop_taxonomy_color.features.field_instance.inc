<?php
/**
 * @file
 * loop_taxonomy_color.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function loop_taxonomy_color_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-subject-field_color'.
  $field_instances['taxonomy_term-subject-field_color'] = array(
    'bundle' => 'subject',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_color',
    'label' => 'Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_default_widget',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Color');

  return $field_instances;
}
