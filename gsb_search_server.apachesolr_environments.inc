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
  $environment->conf = array(
    'apachesolr_read_only' => '0',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'alumni',
      1 => 'business_insight',
      2 => 'case_study',
      3 => 'club',
      4 => 'event',
      5 => 'faculty',
      6 => 'gsb_video',
      7 => 'media_mention',
      8 => 'msx_fellows',
      9 => 'news',
      10 => 'page',
      11 => 'phd_candidate',
      12 => 'publication',
      13 => 'research_paper',
      14 => 'staff',
      15 => 'student',
      16 => 'webform',
    ),
  );
  $export['acquia_search_server_1'] = $environment;

  return $export;
}
