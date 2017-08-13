<?php
/**
 * @file
 * flyer_events_example.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function flyer_events_example_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'app_api';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'App Api';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'card card--event';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Entry */
  $handler->display->display_options['fields']['field_entry']['id'] = 'field_entry';
  $handler->display->display_options['fields']['field_entry']['table'] = 'field_data_field_entry';
  $handler->display->display_options['fields']['field_entry']['field'] = 'field_entry';
  $handler->display->display_options['fields']['field_entry']['label'] = '';
  $handler->display->display_options['fields']['field_entry']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entry']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry']['type'] = 'services';
  $handler->display->display_options['fields']['field_entry']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_entry']['field_api_classes'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_type'] = '0';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'services';
  $handler->display->display_options['fields']['field_website']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = TRUE;
  /* Field: Field: Main Image */
  $handler->display->display_options['fields']['field_image_main']['id'] = 'field_image_main';
  $handler->display->display_options['fields']['field_image_main']['table'] = 'field_data_field_image_main';
  $handler->display->display_options['fields']['field_image_main']['field'] = 'field_image_main';
  $handler->display->display_options['fields']['field_image_main']['label'] = '';
  $handler->display->display_options['fields']['field_image_main']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_main']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_main']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_main']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_main']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_main']['type'] = 'services';
  $handler->display->display_options['fields']['field_image_main']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;

  /* Display: p: /app-api */
  $handler = $view->new_display('page', 'p: /app-api', 'app_api');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'app-api';

  /* Display: p: /app-api/tomorrow */
  $handler = $view->new_display('page', 'p: /app-api/tomorrow', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'tomorrow';
  $handler->display->display_options['path'] = 'app-api/tomorrow';

  /* Display: p: /app-api/weekend */
  $handler = $view->new_display('page', 'p: /app-api/weekend', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['path'] = 'app-api/weekend';

  /* Display: p: /app-api/week */
  $handler = $view->new_display('page', 'p: /app-api/week', 'page_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'app-api/week';

  /* Display: p: /app-api/today */
  $handler = $view->new_display('page', 'p: /app-api/today', 'page_5');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Drink Type (field_drink_type) */
  $handler->display->display_options['filters']['field_drink_type_target_id']['id'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['table'] = 'field_data_field_drink_type';
  $handler->display->display_options['filters']['field_drink_type_target_id']['field'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['value'] = array(
    'all' => 'all',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator_id'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['label'] = 'Drink';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['operator'] = 'field_drink_type_target_id_op';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['identifier'] = 'field_drink_type_target_id';
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_drink_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_target_id']['id'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_target_id']['field'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['value'] = array(
    166 => '166',
    142 => '142',
    167 => '167',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    161 => '161',
    149 => '149',
    150 => '150',
    151 => '151',
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator_id'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['operator'] = 'field_event_type_target_id_op';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['identifier'] = 'field_event_type_target_id';
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Food Type (field_food_type) */
  $handler->display->display_options['filters']['field_food_type_target_id']['id'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['table'] = 'field_data_field_food_type';
  $handler->display->display_options['filters']['field_food_type_target_id']['field'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['value'] = array(
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator_id'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['label'] = 'Food';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['operator'] = 'field_food_type_target_id_op';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['identifier'] = 'field_food_type_target_id';
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_food_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Music Type (field_music_type) */
  $handler->display->display_options['filters']['field_music_type_target_id']['id'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['table'] = 'field_data_field_music_type';
  $handler->display->display_options['filters']['field_music_type_target_id']['field'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['value'] = array(
    15 => '15',
    13 => '13',
    134 => '134',
    135 => '135',
    136 => '136',
    14 => '14',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator_id'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['label'] = 'Music';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['operator'] = 'field_music_type_target_id_op';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['identifier'] = 'field_music_type_target_id';
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_music_type_target_id']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'today';
  $handler->display->display_options['path'] = 'app-api/today';
  $export['app_api'] = $view;

  return $export;
}
