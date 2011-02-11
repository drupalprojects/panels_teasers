<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function panels_teasers_default_page_manager_handlers() {
  $export = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_teasers_panel_context';
  $handler->task = 'node_teasers';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
   'title' => 'Node Teaser',
   'no_blocks' => NULL,
   'pipeline' => 'standard',
   'css_id' => NULL,
   'css' => NULL,
   'contexts' => array(),
   'relationships' => array(
     0 => array(
       'context' => 'argument_nid_1',
       'name' => 'user_from_node',
       'id' => 1,
       'identifier' => 'Node author',
       'keyword' => 'user',
     ),
   ),
   'access' => array(
     'plugins' => array(),
     'logic' => 'and',
   ),
   'template_replace' => 1,
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
   'style_settings' => array(
     'default' => NULL,
     'left' => NULL,
     'right' => NULL,
     'top' => NULL,
     'bottom' => NULL,
   ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
   $pane = new stdClass;
   $pane->pid = 'new-1';
   $pane->panel = 'middle';
   $pane->type = 'node_content';
   $pane->subtype = 'node_content';
   $pane->shown = TRUE;
   $pane->access = array();
   $pane->configuration = array(
     'links' => 1,
     'page' => 0,
     'no_extras' => 0,
     'override_title' => 0,
     'override_title_text' => '',
     'identifier' => '',
     'link' => 1,
     'leave_node_title' => 0,
     'build_mode' => 'teaser',
     'context' => 'argument_nid_1',
   );
   $pane->cache = array();
   $pane->style = array(
     'settings' => NULL,
   );
   $pane->css = array();
   $pane->extras = array();
   $pane->position = 0;
   $display->content['new-1'] = $pane;
   $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['node_teasers_panel_context'] = $handler;
  return $export;
}
