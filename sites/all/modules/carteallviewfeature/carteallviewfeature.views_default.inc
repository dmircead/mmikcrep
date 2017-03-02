<?php
/**
 * @file
 * carteallviewfeature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function carteallviewfeature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carteall';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'carteall';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'carteall';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_categorie_carte_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carte' => 'carte',
  );
  /* Filter criterion: Content: Categorie carte (field_categorie_carte) */
  $handler->display->display_options['filters']['field_categorie_carte_tid']['id'] = 'field_categorie_carte_tid';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['table'] = 'field_data_field_categorie_carte';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['field'] = 'field_categorie_carte_tid';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['operator_id'] = 'field_categorie_carte_tid_op';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['label'] = 'Categorie carte (field_categorie_carte)';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['operator'] = 'field_categorie_carte_tid_op';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['identifier'] = 'field_categorie_carte_tid';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_carte_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_categorie_carte_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_carte_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categorie_carte_tid']['vocabulary'] = 'categorii_carte';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'carteall';
  $translatables['carteall'] = array(
    t('Master'),
    t('carteall'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Categorie carte (field_categorie_carte)'),
    t('Page'),
  );
  $export['carteall'] = $view;

  return $export;
}
