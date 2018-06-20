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

/**
 * Override or insert variables into the page template.
 */
function loop_gdpr_theme_preprocess_page(&$variables) {
  if (user_is_logged_in()) {
    // Apply search links if module is active.
    if (module_exists('loop_search_links')) {
      $variables['search_links'] = module_invoke('loop_search_links', 'block_view', 'loop_search_links_block');
    }
  }
}
