<?php

/**
 * @file
 * Module of examples for Drupal Camp 2013.
 */

/**
 * Admin form.
 *
 * @return array
 *   Drupal admin form.
 */
function dcrcamp_config_page() {

  $form['dcrcamp']['dcrcamp_id'] = array(
    '#type' => 'textfield',
    '#required' => FALSE,
    '#description' => 'Drupal Camp Id!!!!!.',
    '#title' => 'hola',
    '#default_value' => variable_get('dcrcamp_id', ''),
  );

  return system_settings_form($form);
}
