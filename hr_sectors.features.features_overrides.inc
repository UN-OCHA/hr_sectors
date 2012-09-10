<?php
/**
 * @file
 * hr_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: taxonomy
  $overrides["taxonomy.clusters.name"] = 'Sectors';

  // Exported overrides for: views_view
  $overrides["views_view.clusters.display|block_1|display_options|block_description"] = 'Sectors Home Page';
  $overrides["views_view.clusters.display|default|display_options|title"] = 'Sectors';
  $overrides["views_view.clusters.display|page|display_options|path"] = 'sectors';
  $overrides["views_view.clusters.human_name"] = 'Sectors';

 return $overrides;
}
