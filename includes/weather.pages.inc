<?php

/**
 * Page callback for /weather.
 */
function weather_view() {
  $city = variable_get('weather_city', 'Milano');
  $data = weather_get_weather($city);

  return array(
    '#theme' => 'weather',
    '#data' => $data,
  );
}
