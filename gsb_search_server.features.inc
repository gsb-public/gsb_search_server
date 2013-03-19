<?php
/**
 * @file
 * gsb_search_server.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_search_server_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
}
