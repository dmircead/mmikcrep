<?php
/**
 * @file
 * cartefeature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cartefeature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_carte';
  $strongarm->value = 0;
  $export['comment_anonymous_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_carte';
  $strongarm->value = '0';
  $export['comment_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_carte';
  $strongarm->value = 0;
  $export['comment_default_mode_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_carte';
  $strongarm->value = '50';
  $export['comment_default_per_page_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_carte';
  $strongarm->value = 0;
  $export['comment_form_location_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_carte';
  $strongarm->value = '0';
  $export['comment_preview_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_carte';
  $strongarm->value = 0;
  $export['comment_subject_field_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_carte';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_carte';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_carte';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__carte';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_imagine_carte' => array(
          'default' => array(
            'weight' => '36',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'product:field_format_carte' => array(
          'default' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'product:field_nr_pag_carte' => array(
          'default' => array(
            'weight' => '38',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'product:field_isbn' => array(
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
        'product:field_legare_carte' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'product:field_despre_carte' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_carte';
  $strongarm->value = '0';
  $export['language_content_type_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_carte';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_carte';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_carte';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_carte';
  $strongarm->value = '1';
  $export['node_preview_carte'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_carte';
  $strongarm->value = 0;
  $export['node_submitted_carte'] = $strongarm;

  return $export;
}
