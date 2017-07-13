<?php

/**
 * @file
 * Provides a pane thad display the EBSCO search results.
 */

$plugin = array(
  'title' => t('EBSCO search results pane'),
  'description' => t('This pane display the EBSCO search results.'),
  'single' => TRUE,
  'render callback' => 'ebsco_search_results_pane_render',
  'defaults' => array(),
  'category' => t('EBSCO'),
  'edit form' => 'ebsco_search_results_pane_edit_form',
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function ebsco_search_results_pane_render($subtype, $conf, $args, $context) {
  // The output.
  $block = new stdClass();
  $block->title = t('Search');
  $block->content = ebsco_get_search_results();
  return $block;
}

/**
 * 'Edit form' callback.
 */
function ebsco_search_results_pane_edit_form($form, &$form_state) {
  return $form;
}
