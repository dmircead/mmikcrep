<?php
/**
 * @file
 * cartefeature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cartefeature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|carte|node_full';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'carte';
  $ds_layout->view_mode = 'node_full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'sku',
        1 => 'title_field',
        2 => 'commerce_price',
        3 => 'field_imagine_carte',
        4 => 'field_format_carte',
        5 => 'field_nr_pag_carte',
        6 => 'field_isbn',
        7 => 'field_legare_carte',
        8 => 'status',
        9 => 'field_despre_carte',
      ),
    ),
    'fields' => array(
      'sku' => 'header',
      'title_field' => 'header',
      'commerce_price' => 'header',
      'field_imagine_carte' => 'header',
      'field_format_carte' => 'header',
      'field_nr_pag_carte' => 'header',
      'field_isbn' => 'header',
      'field_legare_carte' => 'header',
      'status' => 'header',
      'field_despre_carte' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['commerce_product|carte|node_full'] = $ds_layout;

  return $export;
}
