<?php
/**
 * @file
 * practica_1.features.inc
 */

/**
 * Implements hook_node_info().
 */
function practica_1_node_info() {
  $items = array(
    'libros' => array(
      'name' => t('Libros'),
      'base' => 'node_content',
      'description' => t('Libros'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Noticia'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
