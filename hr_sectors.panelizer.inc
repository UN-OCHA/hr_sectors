<?php
/**
 * @file
 * hr_sectors.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_sectors_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_sector:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_sector';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
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
  $display->uuid = 'c3da7240-ed5c-40cc-96b2-309bfc1d369f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d136d72e-7bfe-4bea-a9e2-5fa40a305a1d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => FALSE,
      ),
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
    $pane->uuid = 'd136d72e-7bfe-4bea-a9e2-5fa40a305a1d';
    $display->content['new-d136d72e-7bfe-4bea-a9e2-5fa40a305a1d'] = $pane;
    $display->panels['top'][0] = 'new-d136d72e-7bfe-4bea-a9e2-5fa40a305a1d';
    $pane = new stdClass();
    $pane->pid = 'new-94c2a783-7608-4744-bb02-884e02f277d6';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94c2a783-7608-4744-bb02-884e02f277d6';
    $display->content['new-94c2a783-7608-4744-bb02-884e02f277d6'] = $pane;
    $display->panels['top'][1] = 'new-94c2a783-7608-4744-bb02-884e02f277d6';
    $pane = new stdClass();
    $pane->pid = 'new-9079e551-7003-4671-a5c0-e9496b07a333';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
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
    $pane->uuid = '9079e551-7003-4671-a5c0-e9496b07a333';
    $display->content['new-9079e551-7003-4671-a5c0-e9496b07a333'] = $pane;
    $display->panels['top'][2] = 'new-9079e551-7003-4671-a5c0-e9496b07a333';
    $pane = new stdClass();
    $pane->pid = 'new-cb9c75e4-f056-41da-9792-579767b1fbdd';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cb9c75e4-f056-41da-9792-579767b1fbdd';
    $display->content['new-cb9c75e4-f056-41da-9792-579767b1fbdd'] = $pane;
    $display->panels['top'][3] = 'new-cb9c75e4-f056-41da-9792-579767b1fbdd';
    $pane = new stdClass();
    $pane->pid = 'new-645f753a-178f-4cd9-861d-b3a9b978e8f1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '645f753a-178f-4cd9-861d-b3a9b978e8f1';
    $display->content['new-645f753a-178f-4cd9-861d-b3a9b978e8f1'] = $pane;
    $display->panels['top'][4] = 'new-645f753a-178f-4cd9-861d-b3a9b978e8f1';
    $pane = new stdClass();
    $pane->pid = 'new-4ae125ba-be00-44b4-afcd-7b8affd29395';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4ae125ba-be00-44b4-afcd-7b8affd29395';
    $display->content['new-4ae125ba-be00-44b4-afcd-7b8affd29395'] = $pane;
    $display->panels['top'][5] = 'new-4ae125ba-be00-44b4-afcd-7b8affd29395';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d136d72e-7bfe-4bea-a9e2-5fa40a305a1d';
  $panelizer->display = $display;
  $export['node:hr_sector:default:default'] = $panelizer;

  return $export;
}
