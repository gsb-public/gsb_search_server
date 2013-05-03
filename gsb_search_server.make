; GSB Search Server Makefile

api = 2
core = 7.x

; Apache Solr modules

projects[apachesolr][version] = 1.1
projects[apachesolr][subdir] = contrib

projects[apachesolr_views][version] = 1.0-beta2
projects[apachesolr_views][subdir] = contrib
projects[apachesolr_views][patch][1750952] = http://drupal.org/files/use_arguments-1750952-8.patch
projects[apachesolr_views][patch][apachesolr_views-check-filters-if-exists] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/apachesolr_views-check-filters-if-exists.patch
