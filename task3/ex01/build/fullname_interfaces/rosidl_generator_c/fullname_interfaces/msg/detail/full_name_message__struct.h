// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fullname_interfaces:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fullname_interfaces/msg/full_name_message.h"


#ifndef FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_
#define FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'last_name'
// Member 'name'
// Member 'first_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FullNameMessage in the package fullname_interfaces.
typedef struct fullname_interfaces__msg__FullNameMessage
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} fullname_interfaces__msg__FullNameMessage;

// Struct for a sequence of fullname_interfaces__msg__FullNameMessage.
typedef struct fullname_interfaces__msg__FullNameMessage__Sequence
{
  fullname_interfaces__msg__FullNameMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fullname_interfaces__msg__FullNameMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_
