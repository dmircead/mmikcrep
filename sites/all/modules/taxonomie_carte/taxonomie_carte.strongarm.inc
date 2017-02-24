<?php
/**
 * @file
 * taxonomie_carte.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function taxonomie_carte_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_autor_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_autor_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categorii_carte_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_categorii_carte_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_editura_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_editura_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tematici_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tematici_pattern'] = $strongarm;

  return $export;
}
