<?php
/**
 * @file
 * cartefeature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cartefeature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|carte|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'carte';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|carte|full'] = $ds_fieldsetting;

  return $export;
}

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|carte|node_teaser';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'carte';
  $ds_layout->view_mode = 'node_teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'sku',
        1 => 'commerce_price',
        2 => 'status',
      ),
    ),
    'fields' => array(
      'sku' => 'left',
      'commerce_price' => 'left',
      'status' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['commerce_product|carte|node_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|carte|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'carte';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title_field',
        1 => 'product:title_field',
        2 => 'product:commerce_price',
        3 => 'comments',
        4 => 'field_autor_carte',
        5 => 'field_product',
        6 => 'field_editura_carte',
        7 => 'field_categorie_carte',
        8 => 'field_tematica_carte',
      ),
      'left' => array(
        9 => 'product:field_despre_carte',
        10 => 'product:field_format_carte',
        11 => 'product:field_nr_pag_carte',
        12 => 'product:field_isbn',
        13 => 'product:field_legare_carte',
      ),
      'right' => array(
        14 => 'product:field_imagine_carte',
      ),
      'footer' => array(
        15 => 'product:sku',
      ),
    ),
    'fields' => array(
      'title_field' => 'header',
      'product:title_field' => 'header',
      'product:commerce_price' => 'header',
      'comments' => 'header',
      'field_autor_carte' => 'header',
      'field_product' => 'header',
      'field_editura_carte' => 'header',
      'field_categorie_carte' => 'header',
      'field_tematica_carte' => 'header',
      'product:field_despre_carte' => 'left',
      'product:field_format_carte' => 'left',
      'product:field_nr_pag_carte' => 'left',
      'product:field_isbn' => 'left',
      'product:field_legare_carte' => 'left',
      'product:field_imagine_carte' => 'right',
      'product:sku' => 'footer',
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
  $export['node|carte|full'] = $ds_layout;

  return $export;
}
