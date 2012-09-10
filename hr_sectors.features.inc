<?php
/**
 * @file
 * hr_sectors.features.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies_alter().
 */
function hr_sectors_taxonomy_default_vocabularies_alter(&$data) {
  if (isset($data['clusters'])) {
    $data['clusters']['name'] = 'Sectors'; /* WAS: 'Clusters' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_sectors_views_default_views_alter(&$data) {
  if (isset($data['clusters'])) {
    $data['clusters']->display['block_1']->display_options['block_description'] = 'Sectors Home Page'; /* WAS: 'Clusters Home Page' */
    $data['clusters']->display['default']->display_options['title'] = 'Sectors'; /* WAS: 'Clusters' */
    $data['clusters']->display['page']->display_options['path'] = 'sectors'; /* WAS: 'clusters' */
    $data['clusters']->human_name = 'Sectors'; /* WAS: 'Clusters' */
  }
}
