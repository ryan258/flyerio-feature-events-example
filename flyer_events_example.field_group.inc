<?php
/**
 * @file
 * flyer_events_example.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function flyer_events_example_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_types_features|node|event|form';
  $field_group->group_name = 'group_types_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Types & Features',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_food_type',
      2 => 'field_music_type',
      3 => 'field_drink_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-types-features field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_types_features|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Types & Features');

  return $field_groups;
}
