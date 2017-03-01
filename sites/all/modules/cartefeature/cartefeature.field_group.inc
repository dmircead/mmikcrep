<?php
/**
 * @file
 * cartefeature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cartefeature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aceeasicategfg|node|carte|full';
  $field_group->group_name = 'group_aceeasicategfg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carte';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_footercartefg';
  $field_group->data = array(
    'label' => 'Din aceeasi categorie',
    'weight' => '23',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aceeasicategfg field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_aceeasicategfg|node|carte|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_carte_ds|node|carte|full';
  $field_group->group_name = 'group_date_carte_ds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carte';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'date carte ds',
    'weight' => '12',
    'children' => array(
      0 => 'product:field_format_carte',
      1 => 'product:field_nr_pag_carte',
      2 => 'product:field_isbn',
      3 => 'product:field_legare_carte',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-carte-ds field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_date_carte_ds|node|carte|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_desprecartefg|node|carte|full';
  $field_group->group_name = 'group_desprecartefg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carte';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_footercartefg';
  $field_group->data = array(
    'label' => 'Despre carte',
    'weight' => '22',
    'children' => array(
      0 => 'product:field_despre_carte',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-desprecartefg field-group-tab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_desprecartefg|node|carte|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footercartefg|node|carte|full';
  $field_group->group_name = 'group_footercartefg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carte';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'footercartefg',
    'weight' => '13',
    'children' => array(
      0 => 'group_desprecartefg',
      1 => 'group_aceeasicategfg',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-footercartefg field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_footercartefg|node|carte|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Despre carte');
  t('Din aceeasi categorie');
  t('date carte ds');
  t('footercartefg');

  return $field_groups;
}
