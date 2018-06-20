<?php
/**
 * @file
 * loop_taxonomy_color.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function loop_taxonomy_color_field_default_field_bases() {
  $field_bases = array();
  
  // Exported field_base: 'field_color'.
  $field_bases['field_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color',
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'color_field',
    'settings' => array(
      'default_colors' => '#000000,#FFFFFF',
    ),
    'translatable' => 0,
    'type' => 'color_field_rgb',
  );

  return $field_bases;
}
