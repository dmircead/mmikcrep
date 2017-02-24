<?php
/**
 * @file
 * taxonomie_carte.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomie_carte_taxonomy_default_vocabularies() {
  return array(
    'autor' => array(
      'name' => 'Autor',
      'machine_name' => 'autor',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'categorii_carte' => array(
      'name' => 'Categorii Carte',
      'machine_name' => 'categorii_carte',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'editura' => array(
      'name' => 'Editura',
      'machine_name' => 'editura',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tematici' => array(
      'name' => 'Tematici',
      'machine_name' => 'tematici',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
