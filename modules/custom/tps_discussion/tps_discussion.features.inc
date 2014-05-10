<?php
/**
 * @file
 * tps_discussion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tps_discussion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function tps_discussion_default_message_type() {
  $items = array();
  $items['og_new_content'] = entity_import('message_type', '{
    "name" : "og_new_content",
    "description" : "OG new content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "New post in group -- [message:field-node-reference:title]",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003ENew post in group -- [message:field-node-reference:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hello [message:user:name],\\r\\n\\r\\nThere is a new post called \\u003Ca href=\\u0022[message:field-node-reference:url]\\u0022\\u003E[message:field-node-reference:title]\\u003C\\/a\\u003E that belongs to one of the groups you are subscribed to.\\r\\n\\r\\nCheers,\\r\\n[site:name]",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHello [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003EThere is a new post called \\u003Ca href=\\u0022[message:field-node-reference:url]\\u0022\\u003E[message:field-node-reference:title]\\u003C\\/a\\u003E that belongs to one of the groups you are subscribed to.\\u003C\\/p\\u003E\\n\\u003Cp\\u003ECheers,\\u003Cbr \\/\\u003E\\n[site:name]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
