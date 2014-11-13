<?php

/**
 * Page callback for /weather.
 */
function weather_view() {
  $city = variable_get('weather_city', 'Milano');
  $timestamp = variable_get(LAST_RETRIEVED_TIMESTAMP);

  return array(
    '#theme' => 'weather',
    '#timestamp' => $timestamp,
    '#city' => $city,
    '#pre_render' => array('current_weather_cache_pre_render'),
    '#cache' => array(
      'keys' => array('weather', $city),
    ),
  );
}
