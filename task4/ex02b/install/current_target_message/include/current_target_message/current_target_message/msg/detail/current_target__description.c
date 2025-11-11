// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from current_target_message:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#include "current_target_message/msg/detail/current_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_current_target_message
const rosidl_type_hash_t *
current_target_message__msg__CurrentTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0xbd, 0xe2, 0x0b, 0x98, 0xca, 0x6c, 0x24,
      0xac, 0x38, 0xa3, 0x5d, 0x62, 0xb1, 0xde, 0x67,
      0x8e, 0x10, 0xed, 0x07, 0x03, 0x33, 0xf1, 0x48,
      0xba, 0x11, 0x1d, 0xf4, 0xf2, 0xc9, 0xb2, 0xb1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char current_target_message__msg__CurrentTarget__TYPE_NAME[] = "current_target_message/msg/CurrentTarget";

// Define type names, field names, and default values
static char current_target_message__msg__CurrentTarget__FIELD_NAME__target_name[] = "target_name";
static char current_target_message__msg__CurrentTarget__FIELD_NAME__target_x[] = "target_x";
static char current_target_message__msg__CurrentTarget__FIELD_NAME__target_y[] = "target_y";
static char current_target_message__msg__CurrentTarget__FIELD_NAME__distance_to_target[] = "distance_to_target";

static rosidl_runtime_c__type_description__Field current_target_message__msg__CurrentTarget__FIELDS[] = {
  {
    {current_target_message__msg__CurrentTarget__FIELD_NAME__target_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {current_target_message__msg__CurrentTarget__FIELD_NAME__target_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {current_target_message__msg__CurrentTarget__FIELD_NAME__target_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {current_target_message__msg__CurrentTarget__FIELD_NAME__distance_to_target, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
current_target_message__msg__CurrentTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {current_target_message__msg__CurrentTarget__TYPE_NAME, 40, 40},
      {current_target_message__msg__CurrentTarget__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string target_name      # \"carrot1\", \"carrot2\", \"static_target\"\n"
  "float64 target_x        # \\xd1\\x82\\xd0\\xb5\\xd0\\xba\\xd1\\x83\\xd1\\x89\\xd0\\xb8\\xd0\\xb5 \\xd0\\xba\\xd0\\xbe\\xd0\\xbe\\xd1\\x80\\xd0\\xb4\\xd0\\xb8\\xd0\\xbd\\xd0\\xb0\\xd1\\x82\\xd1\\x8b \\xd1\\x86\\xd0\\xb5\\xd0\\xbb\\xd0\\xb8\n"
  "float64 target_y\n"
  "float64 distance_to_target  # \\xd1\\x80\\xd0\\xb0\\xd1\\x81\\xd1\\x81\\xd1\\x82\\xd0\\xbe\\xd1\\x8f\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd0\\xb4\\xd0\\xbe \\xd1\\x86\\xd0\\xb5\\xd0\\xbb\\xd0\\xb8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
current_target_message__msg__CurrentTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {current_target_message__msg__CurrentTarget__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 180, 180},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
current_target_message__msg__CurrentTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *current_target_message__msg__CurrentTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
