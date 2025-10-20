// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fullname_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

#include "fullname_interfaces/srv/detail/full_name_sum_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_type_hash_t *
fullname_interfaces__srv__FullNameSumService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x90, 0x2d, 0x81, 0x0f, 0xf7, 0xe6, 0x56,
      0x76, 0xd4, 0xb2, 0xb5, 0xb4, 0x58, 0x24, 0xb4,
      0x22, 0x9d, 0xd7, 0x85, 0xff, 0x2d, 0x48, 0x15,
      0x71, 0x65, 0x2e, 0x66, 0x2c, 0x00, 0xce, 0xc1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_type_hash_t *
fullname_interfaces__srv__FullNameSumService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x24, 0x2b, 0xa9, 0x4e, 0xb9, 0xbb, 0x5e,
      0x0c, 0x88, 0x53, 0xb0, 0x08, 0x65, 0xba, 0x53,
      0xd0, 0x55, 0xb3, 0x09, 0xcc, 0x32, 0xe1, 0xa8,
      0x5c, 0x42, 0xe6, 0xb0, 0x46, 0xe7, 0x68, 0x96,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_type_hash_t *
fullname_interfaces__srv__FullNameSumService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x19, 0x95, 0x87, 0xdf, 0x91, 0x51, 0xd1,
      0x10, 0x04, 0xf2, 0xdf, 0xf9, 0x31, 0x3d, 0x95,
      0xc4, 0x9c, 0xbe, 0xa9, 0x1a, 0x5e, 0x01, 0xa0,
      0x7d, 0xc2, 0xcf, 0x9d, 0xe4, 0xd3, 0xa9, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_type_hash_t *
fullname_interfaces__srv__FullNameSumService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0xcd, 0xc7, 0xe6, 0x26, 0xd9, 0x79, 0xca,
      0x40, 0xf6, 0xa3, 0x00, 0x6d, 0x5e, 0x37, 0xb2,
      0xe3, 0x7d, 0x48, 0xa2, 0x4f, 0xb4, 0x15, 0x84,
      0x6e, 0x17, 0x90, 0x68, 0xa3, 0x2c, 0x3f, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char fullname_interfaces__srv__FullNameSumService__TYPE_NAME[] = "fullname_interfaces/srv/FullNameSumService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char fullname_interfaces__srv__FullNameSumService_Event__TYPE_NAME[] = "fullname_interfaces/srv/FullNameSumService_Event";
static char fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME[] = "fullname_interfaces/srv/FullNameSumService_Request";
static char fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME[] = "fullname_interfaces/srv/FullNameSumService_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char fullname_interfaces__srv__FullNameSumService__FIELD_NAME__request_message[] = "request_message";
static char fullname_interfaces__srv__FullNameSumService__FIELD_NAME__response_message[] = "response_message";
static char fullname_interfaces__srv__FullNameSumService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field fullname_interfaces__srv__FullNameSumService__FIELDS[] = {
  {
    {fullname_interfaces__srv__FullNameSumService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {fullname_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fullname_interfaces__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fullname_interfaces__srv__FullNameSumService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fullname_interfaces__srv__FullNameSumService__TYPE_NAME, 42, 42},
      {fullname_interfaces__srv__FullNameSumService__FIELDS, 3, 3},
    },
    {fullname_interfaces__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = fullname_interfaces__srv__FullNameSumService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = fullname_interfaces__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = fullname_interfaces__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__last_name[] = "last_name";
static char fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__name[] = "name";
static char fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field fullname_interfaces__srv__FullNameSumService_Request__FIELDS[] = {
  {
    {fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Request__FIELD_NAME__first_name, 10, 10},
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
fullname_interfaces__srv__FullNameSumService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
      {fullname_interfaces__srv__FullNameSumService_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char fullname_interfaces__srv__FullNameSumService_Response__FIELD_NAME__full_name[] = "full_name";

static rosidl_runtime_c__type_description__Field fullname_interfaces__srv__FullNameSumService_Response__FIELDS[] = {
  {
    {fullname_interfaces__srv__FullNameSumService_Response__FIELD_NAME__full_name, 9, 9},
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
fullname_interfaces__srv__FullNameSumService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
      {fullname_interfaces__srv__FullNameSumService_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__info[] = "info";
static char fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__request[] = "request";
static char fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field fullname_interfaces__srv__FullNameSumService_Event__FIELDS[] = {
  {
    {fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fullname_interfaces__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fullname_interfaces__srv__FullNameSumService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fullname_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 48, 48},
      {fullname_interfaces__srv__FullNameSumService_Event__FIELDS, 3, 3},
    },
    {fullname_interfaces__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = fullname_interfaces__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = fullname_interfaces__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string last_name\n"
  "string name\n"
  "string first_name\n"
  "---\n"
  "string full_name";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fullname_interfaces__srv__FullNameSumService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fullname_interfaces__srv__FullNameSumService__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
fullname_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fullname_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
fullname_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fullname_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
fullname_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fullname_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fullname_interfaces__srv__FullNameSumService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fullname_interfaces__srv__FullNameSumService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *fullname_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(NULL);
    sources[3] = *fullname_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[4] = *fullname_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fullname_interfaces__srv__FullNameSumService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fullname_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fullname_interfaces__srv__FullNameSumService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fullname_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fullname_interfaces__srv__FullNameSumService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fullname_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *fullname_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[3] = *fullname_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
