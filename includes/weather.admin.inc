<?php

/**
 * Form callback.
 */
function weather_configure($form, &$form_state) {
  $form['weather_city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#description' => t('Insert the city to get weather information.'),
    '#default_value' => variable_get('weather_city', 'Milano'),
  );

  return system_settings_form($form);
}
