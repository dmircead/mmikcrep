<?php
/**
 * @file
 * taxonomie_carte.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function taxonomie_carte_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-autor-field_image_autor'.
  $field_instances['taxonomy_term-autor-field_image_autor'] = array(
    'bundle' => 'autor',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => 'img-responsive',
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_image_autor',
    'label' => 'Image autor',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'sites/default/files/mmi/pozeautori',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-autor-field_link_autor'.
  $field_instances['taxonomy_term-autor-field_link_autor'] = array(
    'bundle' => 'autor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_link_autor',
    'label' => 'Link autor',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-autor-field_social_autor'.
  $field_instances['taxonomy_term-autor-field_social_autor'] = array(
    'bundle' => 'autor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'socialfield',
        'settings' => array(
          'field_formatter_class' => '',
          'link_text' => FALSE,
        ),
        'type' => 'socialfield_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_social_autor',
    'label' => 'Social autor',
    'required' => 0,
    'settings' => array(
      'services' => array(
        'facebook' => 'facebook',
        'linkedin' => 'linkedin',
        'youtube' => 'youtube',
      ),
      'used_services' => array(
        'delicious' => 'delicious',
        'digg' => 'digg',
        'facebook' => 'facebook',
        'flickr' => 'flickr',
        'linkedin' => 'linkedin',
        'myspace' => 'myspace',
        'pinterest' => 'pinterest',
        'reddit' => 'reddit',
        'slideshare' => 'slideshare',
        'stumbleupon' => 'stumbleupon',
        'vimeo' => 'vimeo',
        'yahoo' => 'yahoo',
        'youtube' => 'youtube',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'socialfield',
      'settings' => array(),
      'type' => 'socialfield_widget',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-editura-field_social_editura'.
  $field_instances['taxonomy_term-editura-field_social_editura'] = array(
    'bundle' => 'editura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'socialfield',
        'settings' => array(
          'field_formatter_class' => '',
          'link_text' => FALSE,
        ),
        'type' => 'socialfield_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_social_editura',
    'label' => 'Social editura',
    'required' => 0,
    'settings' => array(
      'services' => array(
        'facebook' => 'facebook',
        'googleplus' => 'googleplus',
        'twitter' => 'twitter',
      ),
      'used_services' => array(
        'delicious' => 'delicious',
        'digg' => 'digg',
        'facebook' => 'facebook',
        'flickr' => 'flickr',
        'googleplus' => 'googleplus',
        'linkedin' => 'linkedin',
        'myspace' => 'myspace',
        'pinterest' => 'pinterest',
        'reddit' => 'reddit',
        'slideshare' => 'slideshare',
        'stumbleupon' => 'stumbleupon',
        'twitter' => 'twitter',
        'vimeo' => 'vimeo',
        'yahoo' => 'yahoo',
        'youtube' => 'youtube',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'socialfield',
      'settings' => array(),
      'type' => 'socialfield_widget',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-editura-field_website_editura'.
  $field_instances['taxonomy_term-editura-field_website_editura'] = array(
    'bundle' => 'editura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_website_editura',
    'label' => 'website editura',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image autor');
  t('Link autor');
  t('Social autor');
  t('Social editura');
  t('website editura');

  return $field_instances;
}
