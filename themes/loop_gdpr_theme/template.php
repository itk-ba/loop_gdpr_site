<?php

/**
 * Override or insert variables into the html template.
 */
function loop_gdpr_theme_preprocess_html(&$vars) {
  drupal_add_css(path_to_theme() . '/css/gdpr-styles.css', array(
    'group' => CSS_THEME,
    'weight' => 999,
    'preprocess' => FALSE,
  ));
}
