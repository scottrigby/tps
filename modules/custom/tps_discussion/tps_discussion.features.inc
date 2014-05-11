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
 * Implements hook_flag_default_flags().
 */
function tps_discussion_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscribe Class".
  $flags['subscribe_class'] = array(
    'entity_type' => 'node',
    'title' => 'Subscribe Class',
    'global' => 0,
    'types' => array(
      0 => 'class',
    ),
    'flag_short' => '+ Add me',
    'flag_long' => '',
    'flag_message' => 'You are now added to the class: [node:title]',
    'unflag_short' => 'Change involvement',
    'unflag_long' => 'Change your level of interest in the class: [node:title]',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => 'Confirm',
    'form_flagging_delete_button' => '- Remove me',
    'form_unflagging_help' => 'Are you sure you want to be removed from this class?',
    'form_unflagging_button' => 'Confirm',
    'form_unflag_link_leads_to_edit' => 1,
    'form_interaction' => 'flagging_inline',
    'api_version' => 3,
    'module' => 'tps_discussion',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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
