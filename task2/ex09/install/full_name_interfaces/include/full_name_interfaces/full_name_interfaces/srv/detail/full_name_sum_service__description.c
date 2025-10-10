// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from full_name_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

#include "full_name_interfaces/srv/detail/full_name_sum_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_full_name_interfaces
const rosidl_type_hash_t *
full_name_interfaces__srv__FullNameSumService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x10, 0x05, 0x84, 0x92, 0xf4, 0x3a, 0xd4,
      0x11, 0xbc, 0x7e, 0xeb, 0xf9, 0xd2, 0x11, 0x41,
      0xe3, 0x06, 0x17, 0xa9, 0x41, 0x0a, 0xa4, 0x6c,
      0x38, 0x91, 0x24, 0x6d, 0x69, 0xb2, 0x69, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_full_name_interfaces
const rosidl_type_hash_t *
full_name_interfaces__srv__FullNameSumService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0xe0, 0xd6, 0x67, 0x23, 0xb0, 0xdc, 0x41,
      0xc6, 0xa6, 0x42, 0x7e, 0x5d, 0xa3, 0x92, 0xbd,
      0x5e, 0x64, 0x76, 0xb3, 0x9f, 0x45, 0x38, 0x52,
      0x02, 0x72, 0x27, 0x1c, 0xbd, 0x1e, 0x22, 0x35,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_full_name_interfaces
const rosidl_type_hash_t *
full_name_interfaces__srv__FullNameSumService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x32, 0x21, 0x10, 0xec, 0xc7, 0x46, 0xdd,
      0x69, 0xf8, 0xde, 0xca, 0x36, 0x8d, 0xf5, 0x74,
      0x99, 0xe3, 0xfb, 0x97, 0x13, 0x8a, 0x85, 0x15,
      0xec, 0x71, 0x62, 0xb5, 0x0f, 0x9b, 0xf3, 0x7e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_full_name_interfaces
const rosidl_type_hash_t *
full_name_interfaces__srv__FullNameSumService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x54, 0x9a, 0x27, 0xa3, 0x92, 0xf2, 0x33,
      0x64, 0xc5, 0x48, 0xb4, 0x14, 0xfd, 0xe4, 0xb3,
      0x73, 0x06, 0x3b, 0x30, 0x9a, 0x69, 0xee, 0x79,
      0x6d, 0x97, 0x2e, 0x33, 0xcf, 0x8f, 0x54, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char full_name_interfaces__srv__FullNameSumService__TYPE_NAME[] = "full_name_interfaces/srv/FullNameSumService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char full_name_interfaces__srv__FullNameSumService_Event__TYPE_NAME[] = "full_name_interfaces/srv/FullNameSumService_Event";
static char full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME[] = "full_name_interfaces/srv/FullNameSumService_Request";
static char full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME[] = "full_name_interfaces/srv/FullNameSumService_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char full_name_interfaces__srv__FullNameSumService__FIELD_NAME__request_message[] = "request_message";
static char full_name_interfaces__srv__FullNameSumService__FIELD_NAME__response_message[] = "response_message";
static char full_name_interfaces__srv__FullNameSumService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field full_name_interfaces__srv__FullNameSumService__FIELDS[] = {
  {
    {full_name_interfaces__srv__FullNameSumService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {full_name_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription full_name_interfaces__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
full_name_interfaces__srv__FullNameSumService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {full_name_interfaces__srv__FullNameSumService__TYPE_NAME, 43, 43},
      {full_name_interfaces__srv__FullNameSumService__FIELDS, 3, 3},
    },
    {full_name_interfaces__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = full_name_interfaces__srv__FullNameSumService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = full_name_interfaces__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = full_name_interfaces__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__last_name[] = "last_name";
static char full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__name[] = "name";
static char full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field full_name_interfaces__srv__FullNameSumService_Request__FIELDS[] = {
  {
    {full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Request__FIELD_NAME__first_name, 10, 10},
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
full_name_interfaces__srv__FullNameSumService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
      {full_name_interfaces__srv__FullNameSumService_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char full_name_interfaces__srv__FullNameSumService_Response__FIELD_NAME__full_name[] = "full_name";

static rosidl_runtime_c__type_description__Field full_name_interfaces__srv__FullNameSumService_Response__FIELDS[] = {
  {
    {full_name_interfaces__srv__FullNameSumService_Response__FIELD_NAME__full_name, 9, 9},
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
full_name_interfaces__srv__FullNameSumService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
      {full_name_interfaces__srv__FullNameSumService_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__info[] = "info";
static char full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__request[] = "request";
static char full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field full_name_interfaces__srv__FullNameSumService_Event__FIELDS[] = {
  {
    {full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription full_name_interfaces__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
full_name_interfaces__srv__FullNameSumService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {full_name_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 49, 49},
      {full_name_interfaces__srv__FullNameSumService_Event__FIELDS, 3, 3},
    },
    {full_name_interfaces__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = full_name_interfaces__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = full_name_interfaces__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
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
full_name_interfaces__srv__FullNameSumService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {full_name_interfaces__srv__FullNameSumService__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
full_name_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {full_name_interfaces__srv__FullNameSumService_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
full_name_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {full_name_interfaces__srv__FullNameSumService_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
full_name_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {full_name_interfaces__srv__FullNameSumService_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
full_name_interfaces__srv__FullNameSumService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *full_name_interfaces__srv__FullNameSumService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *full_name_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(NULL);
    sources[3] = *full_name_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[4] = *full_name_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
full_name_interfaces__srv__FullNameSumService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *full_name_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
full_name_interfaces__srv__FullNameSumService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *full_name_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
full_name_interfaces__srv__FullNameSumService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *full_name_interfaces__srv__FullNameSumService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *full_name_interfaces__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[3] = *full_name_interfaces__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
