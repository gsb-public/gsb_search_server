<?php
/**
 * @file
 * gsb_search_server.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function gsb_search_server_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'acquia_search_server_1';
  $environment->name = 'Acquia Search';
  $environment->url = 'http://search.acquia.com/solr/MZGV-33059';
  $environment->service_class = 'AcquiaSearchService';
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'business_insight',
      1 => 'gsb_club',
      2 => 'gsb_event',
      3 => 'gsb_media_mention',
      4 => 'gsb_page',
      5 => 'gsb_person',
      6 => 'gsb_school_story',
      7 => 'gsb_video',
    ),
  );
  $export['acquia_search_server_1'] = $environment;

  return $export;
}
