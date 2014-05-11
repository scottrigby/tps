<?php
/**
 * @file
 * tps_class.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tps_class_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:class:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'class';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '51164dce-dbad-4625-83de-c9ac454b374d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f757e0ff-eb5e-4a1e-98f4-3e83fc4fb88b';
    $pane->panel = 'left';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'subscribe_class',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f757e0ff-eb5e-4a1e-98f4-3e83fc4fb88b';
    $display->content['new-f757e0ff-eb5e-4a1e-98f4-3e83fc4fb88b'] = $pane;
    $display->panels['left'][0] = 'new-f757e0ff-eb5e-4a1e-98f4-3e83fc4fb88b';
    $pane = new stdClass();
    $pane->pid = 'new-8484efdb-0c09-40c1-8b8c-cc6d6be1c9a2';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8484efdb-0c09-40c1-8b8c-cc6d6be1c9a2';
    $display->content['new-8484efdb-0c09-40c1-8b8c-cc6d6be1c9a2'] = $pane;
    $display->panels['left'][1] = 'new-8484efdb-0c09-40c1-8b8c-cc6d6be1c9a2';
    $pane = new stdClass();
    $pane->pid = 'new-0f639a63-c2be-4b61-bc7a-808a01d93000';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0f639a63-c2be-4b61-bc7a-808a01d93000';
    $display->content['new-0f639a63-c2be-4b61-bc7a-808a01d93000'] = $pane;
    $display->panels['left'][2] = 'new-0f639a63-c2be-4b61-bc7a-808a01d93000';
    $pane = new stdClass();
    $pane->pid = 'new-a3ad0dcd-5a34-44ca-9f24-7232eefa6176';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a3ad0dcd-5a34-44ca-9f24-7232eefa6176';
    $display->content['new-a3ad0dcd-5a34-44ca-9f24-7232eefa6176'] = $pane;
    $display->panels['left'][3] = 'new-a3ad0dcd-5a34-44ca-9f24-7232eefa6176';
    $pane = new stdClass();
    $pane->pid = 'new-88fea2ba-b468-4bd4-aecf-6b33550b2b71';
    $pane->panel = 'left';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '88fea2ba-b468-4bd4-aecf-6b33550b2b71';
    $display->content['new-88fea2ba-b468-4bd4-aecf-6b33550b2b71'] = $pane;
    $display->panels['left'][4] = 'new-88fea2ba-b468-4bd4-aecf-6b33550b2b71';
    $pane = new stdClass();
    $pane->pid = 'new-a454fe35-00df-4eb3-a445-c4d6fcc94d72';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'tps_class-create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a454fe35-00df-4eb3-a445-c4d6fcc94d72';
    $display->content['new-a454fe35-00df-4eb3-a445-c4d6fcc94d72'] = $pane;
    $display->panels['right'][0] = 'new-a454fe35-00df-4eb3-a445-c4d6fcc94d72';
    $pane = new stdClass();
    $pane->pid = 'new-62b73995-f444-48f2-a9b2-efe8864777d7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'subscribe_class-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'entity_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'subscribe-class',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b73995-f444-48f2-a9b2-efe8864777d7';
    $display->content['new-62b73995-f444-48f2-a9b2-efe8864777d7'] = $pane;
    $display->panels['right'][1] = 'new-62b73995-f444-48f2-a9b2-efe8864777d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8484efdb-0c09-40c1-8b8c-cc6d6be1c9a2';
  $panelizer->display = $display;
  $export['node:class:default'] = $panelizer;

  return $export;
}
