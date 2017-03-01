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
    'currencyselectords' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|carte|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function cartefeature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'currencyselectords';
  $ds_field->label = 'CurrencySelectorDs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'commerce_multicurrency|currency_selector',
    'block_render' => '1',
  );
  $export['currencyselectords'] = $ds_field;

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
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'product:title_field',
        1 => 'field_autor_carte',
      ),
      'left' => array(
        2 => 'product:field_imagine_carte',
      ),
      'middle' => array(
        3 => 'product:status',
        4 => 'group_pricetabds',
        5 => 'product:commerce_price',
        6 => 'group_pricegroupds',
        7 => 'field_product',
      ),
      'right' => array(
        8 => 'field_editura_carte',
        9 => 'field_categorie_carte',
        10 => 'product:field_nr_pag_carte',
        11 => 'group_date_carte_ds',
        13 => 'product:field_format_carte',
        14 => 'product:field_legare_carte',
        16 => 'product:field_isbn',
      ),
      'footer' => array(
        12 => 'group_footercartefg',
        15 => 'product:sku',
        17 => 'group_desprecartefg',
        18 => 'group_aceeasicategfg',
        19 => 'product:field_despre_carte',
      ),
    ),
    'fields' => array(
      'product:title_field' => 'header',
      'field_autor_carte' => 'header',
      'product:field_imagine_carte' => 'left',
      'product:status' => 'middle',
      'group_pricetabds' => 'middle',
      'product:commerce_price' => 'middle',
      'group_pricegroupds' => 'middle',
      'field_product' => 'middle',
      'field_editura_carte' => 'right',
      'field_categorie_carte' => 'right',
      'product:field_nr_pag_carte' => 'right',
      'group_date_carte_ds' => 'right',
      'group_footercartefg' => 'footer',
      'product:field_format_carte' => 'right',
      'product:field_legare_carte' => 'right',
      'product:sku' => 'footer',
      'product:field_isbn' => 'right',
      'group_desprecartefg' => 'footer',
      'group_aceeasicategfg' => 'footer',
      'product:field_despre_carte' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
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
