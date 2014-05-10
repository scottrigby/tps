<?php
/**
 * @file
 * tps_groups.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tps_groups_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:group:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'group';
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '92c85408-07a0-4d56-a551-8a492d565d46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67dded40-a8f0-4a97-8e9e-99c4a17cce9a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'group_classes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67dded40-a8f0-4a97-8e9e-99c4a17cce9a';
    $display->content['new-67dded40-a8f0-4a97-8e9e-99c4a17cce9a'] = $pane;
    $display->panels['left'][0] = 'new-67dded40-a8f0-4a97-8e9e-99c4a17cce9a';
    $pane = new stdClass();
    $pane->pid = 'new-9d759a59-bf0f-46f5-95e0-90e1645e21d1';
    $pane->panel = 'right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Create content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d759a59-bf0f-46f5-95e0-90e1645e21d1';
    $display->content['new-9d759a59-bf0f-46f5-95e0-90e1645e21d1'] = $pane;
    $display->panels['right'][0] = 'new-9d759a59-bf0f-46f5-95e0-90e1645e21d1';
    $pane = new stdClass();
    $pane->pid = 'new-3dc57102-5df5-41f8-92a3-adbb00b08f8e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'My membership',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3dc57102-5df5-41f8-92a3-adbb00b08f8e';
    $display->content['new-3dc57102-5df5-41f8-92a3-adbb00b08f8e'] = $pane;
    $display->panels['right'][1] = 'new-3dc57102-5df5-41f8-92a3-adbb00b08f8e';
    $pane = new stdClass();
    $pane->pid = 'new-364a7f80-f7c3-4e30-bc0b-4497ced8a761';
    $pane->panel = 'top';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '364a7f80-f7c3-4e30-bc0b-4497ced8a761';
    $display->content['new-364a7f80-f7c3-4e30-bc0b-4497ced8a761'] = $pane;
    $display->panels['top'][0] = 'new-364a7f80-f7c3-4e30-bc0b-4497ced8a761';
    $pane = new stdClass();
    $pane->pid = 'new-938779ad-6334-4d0c-b6ec-12f271d0b31f';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '938779ad-6334-4d0c-b6ec-12f271d0b31f';
    $display->content['new-938779ad-6334-4d0c-b6ec-12f271d0b31f'] = $pane;
    $display->panels['top'][1] = 'new-938779ad-6334-4d0c-b6ec-12f271d0b31f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3dc57102-5df5-41f8-92a3-adbb00b08f8e';
  $panelizer->display = $display;
  $export['node:group:default'] = $panelizer;

  return $export;
}
