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
  $strongarm->name = 'commerce_default_currency';
  $strongarm->value = 'RON';
  $export['commerce_default_currency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_enabled_currencies';
  $strongarm->value = array(
    'EUR' => 'EUR',
    'RON' => 'RON',
    'USD' => 'USD',
    'AED' => 0,
    'AFN' => 0,
    'ANG' => 0,
    'AOA' => 0,
    'ARM' => 0,
    'ARS' => 0,
    'AUD' => 0,
    'AWG' => 0,
    'AZN' => 0,
    'BAM' => 0,
    'BBD' => 0,
    'BDT' => 0,
    'BGN' => 0,
    'BHD' => 0,
    'BIF' => 0,
    'BMD' => 0,
    'BND' => 0,
    'BOB' => 0,
    'BRL' => 0,
    'BSD' => 0,
    'BTN' => 0,
    'BWP' => 0,
    'BYR' => 0,
    'BZD' => 0,
    'CAD' => 0,
    'CDF' => 0,
    'CHF' => 0,
    'CLP' => 0,
    'CNY' => 0,
    'COP' => 0,
    'CRC' => 0,
    'CUC' => 0,
    'CUP' => 0,
    'CVE' => 0,
    'CZK' => 0,
    'DJF' => 0,
    'DKK' => 0,
    'DOP' => 0,
    'DZD' => 0,
    'EEK' => 0,
    'EGP' => 0,
    'ERN' => 0,
    'ETB' => 0,
    'FJD' => 0,
    'FKP' => 0,
    'GBP' => 0,
    'GHS' => 0,
    'GIP' => 0,
    'GMD' => 0,
    'GNF' => 0,
    'GTQ' => 0,
    'GYD' => 0,
    'HKD' => 0,
    'HNL' => 0,
    'HRK' => 0,
    'HTG' => 0,
    'HUF' => 0,
    'IDR' => 0,
    'ILS' => 0,
    'INR' => 0,
    'IRR' => 0,
    'ISK' => 0,
    'JMD' => 0,
    'JOD' => 0,
    'JPY' => 0,
    'KES' => 0,
    'KGS' => 0,
    'KMF' => 0,
    'KRW' => 0,
    'KWD' => 0,
    'KYD' => 0,
    'KZT' => 0,
    'LAK' => 0,
    'LBP' => 0,
    'LKR' => 0,
    'LRD' => 0,
    'LSL' => 0,
    'LTL' => 0,
    'LVL' => 0,
    'LYD' => 0,
    'MAD' => 0,
    'MDL' => 0,
    'MKD' => 0,
    'MMK' => 0,
    'MNT' => 0,
    'MOP' => 0,
    'MRO' => 0,
    'MTP' => 0,
    'MUR' => 0,
    'MXN' => 0,
    'MYR' => 0,
    'MZN' => 0,
    'NAD' => 0,
    'NGN' => 0,
    'NIO' => 0,
    'NOK' => 0,
    'NPR' => 0,
    'NZD' => 0,
    'PAB' => 0,
    'PEN' => 0,
    'PGK' => 0,
    'PHP' => 0,
    'PKR' => 0,
    'PLN' => 0,
    'PYG' => 0,
    'QAR' => 0,
    'RHD' => 0,
    'RSD' => 0,
    'RUB' => 0,
    'SAR' => 0,
    'SBD' => 0,
    'SCR' => 0,
    'SDD' => 0,
    'SEK' => 0,
    'SGD' => 0,
    'SHP' => 0,
    'SLL' => 0,
    'SOS' => 0,
    'SRD' => 0,
    'SRG' => 0,
    'STD' => 0,
    'SYP' => 0,
    'SZL' => 0,
    'THB' => 0,
    'TND' => 0,
    'TOP' => 0,
    'TRY' => 0,
    'TTD' => 0,
    'TWD' => 0,
    'TZS' => 0,
    'UAH' => 0,
    'UGX' => 0,
    'UYU' => 0,
    'VEF' => 0,
    'VND' => 0,
    'VUV' => 0,
    'WST' => 0,
    'XAF' => 0,
    'XCD' => 0,
    'XOF' => 0,
    'XPF' => 0,
    'YER' => 0,
    'ZAR' => 0,
    'ZMK' => 0,
  );
  $export['commerce_enabled_currencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_conversion_settings';
  $strongarm->value = array(
    'RON' => array(
      'sync' => 1,
      'rates' => array(
        'EUR' => array(
          'sync' => 1,
          'rate' => 0.22120468069104343,
        ),
        'USD' => array(
          'sync' => 1,
          'rate' => 0.23299489017187602,
        ),
      ),
    ),
    'EUR' => array(
      'rates' => array(
        'RON' => array(
          'rate' => '4.5207',
        ),
        'USD' => array(
          'rate' => '1.0533',
        ),
      ),
    ),
    'USD' => array(
      'rates' => array(
        'EUR' => array(
          'rate' => 0.94939713282065896,
        ),
        'RON' => array(
          'rate' => 4.2919396183423526,
        ),
      ),
    ),
  );
  $export['commerce_multicurrency_conversion_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_sync_provider';
  $strongarm->value = 'ecb';
  $export['commerce_multicurrency_sync_provider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_use_cross_conversion';
  $strongarm->value = 1;
  $export['commerce_multicurrency_use_cross_conversion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_ds_field_settings';
  $strongarm->value = array(
    'node|carte|full' => FALSE,
  );
  $export['default_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_ds_layout_settings';
  $strongarm->value = array(
    'node|carte|full' => FALSE,
  );
  $export['default_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_date_carte_ds|node|carte|full' => FALSE,
    'group_date_pret_ds|node|carte|full' => TRUE,
    'group_footercartefg|node|carte|full' => FALSE,
    'group_desprecartefg|node|carte|full' => FALSE,
    'group_aceeasicategfg|node|carte|full' => FALSE,
    'group_instocds|node|carte|full' => TRUE,
  );
  $export['default_field_group'] = $strongarm;

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
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_imagine_carte' => array(
          'default' => array(
            'weight' => '36',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
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
            'weight' => '9',
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
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'product:field_despre_carte' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price_eur' => array(
          'full' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price_ron' => array(
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price_usd' => array(
          'full' => array(
            'weight' => '7',
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
