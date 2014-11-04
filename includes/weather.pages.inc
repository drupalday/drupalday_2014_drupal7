<?php

/**
 * Page callback for /weather.
 */
function weather_view() {
  $city = variable_get('weather_city', 'Milano');
  $data = weather_get_weather($city);
  $timestamp = variable_get(LAST_RETRIEVED_TIMESTAMP);

  return array(
    '#theme' => 'weather',
    '#data' => $data,
    '#timestamp' => $timestamp,
  );
}
