<?php
/**
 * @file
 * practica_1.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function practica_1_taxonomy_default_vocabularies() {
  return array(
    'categoria_noticia' => array(
      'name' => 'categoria noticia',
      'machine_name' => 'categoria_noticia',
      'description' => 'categoria noticia',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
