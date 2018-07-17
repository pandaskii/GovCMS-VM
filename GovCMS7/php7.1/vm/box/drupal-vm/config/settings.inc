<?php

/**
 * @file
 * VM Drupal instance settings.
 */

// Set database details in VM.
$databases = [
  'default' =>
    [
      'default' =>
        [
          'database' => 'govcms_govcms',
          'username' => 'govcms',
          'password' => 'govcms',
          'host' => 'localhost',
          'port' => '',
          'driver' => 'mysql',
          'prefix' => '',
        ],
    ],
];
