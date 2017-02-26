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
        3 => 'field_format_carte',
        4 => 'field_nr_pag_carte',
        5 => 'field_isbn',
        6 => 'field_legare_carte',
        7 => 'status',
        8 => 'field_despre_carte',
      ),
      'right' => array(
        9 => 'field_imagine_carte',
      ),
    ),
    'fields' => array(
      'sku' => 'header',
      'title_field' => 'header',
      'commerce_price' => 'header',
      'field_format_carte' => 'header',
      'field_nr_pag_carte' => 'header',
      'field_isbn' => 'header',
      'field_legare_carte' => 'header',
      'status' => 'header',
      'field_despre_carte' => 'header',
      'field_imagine_carte' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['commerce_product|carte|node_full'] = $ds_layout;

  return $export;
}
