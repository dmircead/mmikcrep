<?php
/**
 * @file
 * taxonomie_carte.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomie_carte_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
