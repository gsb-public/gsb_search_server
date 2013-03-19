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
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8080/solr/yarik_gsb';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'business_insight' => '0',
      'gsb_club' => '1.0',
      'gsb_event' => '0',
      'gsb_media_mention' => '0',
      'gsb_page' => '0',
      'gsb_person' => '0',
      'gsb_school_story' => '0',
      'gsb_video' => '0',
    ),
    'field_bias' => array(
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_club_category' => '0',
      'im_vid_102' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_vid_Club_Category' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'sort_url' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'ss_url' => '0',
      'tags_a' => '0',
      'tags_h1' => '0',
      'tags_h2_h3' => '0',
      'tags_h4_h5_h6' => '0',
      'tags_inline' => '0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_102_names' => '0',
      'tos_content_extra' => '0',
      'tos_name' => '0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0',
      'ts_description' => '1.0',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'gsb_club',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
