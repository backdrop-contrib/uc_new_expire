<?php
/**
 * @file
 * Administration pages for the New Expiration module.
 */

/**
 * Admin settings form.
 */
function uc_new_expire_settings_form() {
  $form['#config'] = 'uc_new_expire.settings';
  $config = config('uc_new_expire.settings');

  $vocabulary = config_get('uc_catalog.settings', 'uc_catalog_vocabulary');
  $tree = taxonomy_get_tree($vocabulary);

  $options = array(
    '' => t('<none>'),
  );
  foreach ($tree as $leaf) {
    $options[$leaf->tid] = '';
    for ($i = 0; $i < $leaf->depth; $i++) {
      $options[$leaf->tid] .= '-';
    }
    $options[$leaf->tid] .= $leaf->name;
  }

  $form['uc_new_expire_tid'] = array(
    '#title' => t('New Product catalog term'),
    '#type' => 'select',
    '#description' => t('Select the catalog term that should expire.'),
    '#options' => $options,
    '#default_value' => $config->get('uc_new_expire_tid'),
  );

  $form['uc_new_expire_days'] = array(
    '#title' => t('Expiration time'),
    '#type' => 'textfield',
    '#description' => t('Enter the number of days until the term expires.'),
    '#default_value' => $config->get('uc_new_expire_days'),
    '#element_validate' => array('element_validate_integer_positive'),
  );

  return system_settings_form($form);

}
