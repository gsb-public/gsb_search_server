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
      1 => 'faculty',
      2 => 'gsb_club',
      3 => 'gsb_event',
      4 => 'gsb_media_mention',
      5 => 'gsb_page',
      6 => 'gsb_person',
      7 => 'gsb_school_story',
      8 => 'gsb_video',
      9 => 'media_mention',
      10 => 'msx_fellows',
      11 => 'news',
      12 => 'page',
      13 => 'phd_candidate',
      14 => 'publication',
      15 => 'staff',
      16 => 'student',
      17 => 'webform',
    ),
  );
  $export['acquia_search_server_1'] = $environment;

  return $export;
}
