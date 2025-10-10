// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from full_name_interfaces:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

#include "full_name_interfaces/msg/detail/full_name_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_full_name_interfaces
const rosidl_type_hash_t *
full_name_interfaces__msg__FullNameMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0xd7, 0xae, 0xba, 0x21, 0x61, 0x33, 0xeb,
      0x94, 0xfe, 0x42, 0x3a, 0x93, 0x33, 0x12, 0x55,
      0xaf, 0x7e, 0x79, 0x66, 0x3e, 0xa0, 0xeb, 0xbb,
      0x4e, 0x96, 0x65, 0xa8, 0xc1, 0x8a, 0xbb, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char full_name_interfaces__msg__FullNameMessage__TYPE_NAME[] = "full_name_interfaces/msg/FullNameMessage";

// Define type names, field names, and default values
static char full_name_interfaces__msg__FullNameMessage__FIELD_NAME__last_name[] = "last_name";
static char full_name_interfaces__msg__FullNameMessage__FIELD_NAME__name[] = "name";
static char full_name_interfaces__msg__FullNameMessage__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field full_name_interfaces__msg__FullNameMessage__FIELDS[] = {
  {
    {full_name_interfaces__msg__FullNameMessage__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__msg__FullNameMessage__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__msg__FullNameMessage__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
full_name_interfaces__msg__FullNameMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {full_name_interfaces__msg__FullNameMessage__TYPE_NAME, 40, 40},
      {full_name_interfaces__msg__FullNameMessage__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string last_name\n"
  "string name\n"
  "string first_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
full_name_interfaces__msg__FullNameMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {full_name_interfaces__msg__FullNameMessage__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
full_name_interfaces__msg__FullNameMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *full_name_interfaces__msg__FullNameMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
