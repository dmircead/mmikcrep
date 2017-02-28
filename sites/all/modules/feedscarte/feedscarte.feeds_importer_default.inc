<?php
/**
 * @file
 * feedscarte.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feedscarte_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cartedispalyimport';
  $feeds_importer->config = array(
    'name' => 'cartedispalyimport',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'field_product:sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Autor',
            'target' => 'field_autor_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Editura',
            'target' => 'field_editura_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Categoria',
            'target' => 'field_categorie_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Tematici',
            'target' => 'field_tematica_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Title',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'carte',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cartedispalyimport'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'carteimporter';
  $feeds_importer->config = array(
    'name' => 'carteimporter',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'carte',
        'author' => '1',
        'tax_rate' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'SKU',
            'target' => 'sku',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Image carte',
            'target' => 'field_imagine_carte:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Format carte',
            'target' => 'field_format_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Nr pagini carte',
            'target' => 'field_nr_pag_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'ISBN',
            'target' => 'field_isbn',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Legare carte',
            'target' => 'field_legare_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Despre carte',
            'target' => 'field_despre_carte',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'carte',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['carteimporter'] = $feeds_importer;

  return $export;
}
