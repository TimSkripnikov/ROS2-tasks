// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fullname_interfaces:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

#include "fullname_interfaces/msg/detail/full_name_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_type_hash_t *
fullname_interfaces__msg__FullNameMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xb6, 0x05, 0xc5, 0xaf, 0x60, 0xd0, 0xf6,
      0xfc, 0x3d, 0x2c, 0x6b, 0x1d, 0x8c, 0xf1, 0x29,
      0xd6, 0x8e, 0x2d, 0xd6, 0x34, 0xe8, 0x60, 0x9e,
      0x62, 0x29, 0x01, 0x74, 0xe6, 0x38, 0x31, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fullname_interfaces__msg__FullNameMessage__TYPE_NAME[] = "fullname_interfaces/msg/FullNameMessage";

// Define type names, field names, and default values
static char fullname_interfaces__msg__FullNameMessage__FIELD_NAME__last_name[] = "last_name";
static char fullname_interfaces__msg__FullNameMessage__FIELD_NAME__name[] = "name";
static char fullname_interfaces__msg__FullNameMessage__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field fullname_interfaces__msg__FullNameMessage__FIELDS[] = {
  {
    {fullname_interfaces__msg__FullNameMessage__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__msg__FullNameMessage__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__msg__FullNameMessage__FIELD_NAME__first_name, 10, 10},
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
fullname_interfaces__msg__FullNameMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fullname_interfaces__msg__FullNameMessage__TYPE_NAME, 39, 39},
      {fullname_interfaces__msg__FullNameMessage__FIELDS, 3, 3},
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
fullname_interfaces__msg__FullNameMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fullname_interfaces__msg__FullNameMessage__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fullname_interfaces__msg__FullNameMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fullname_interfaces__msg__FullNameMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
