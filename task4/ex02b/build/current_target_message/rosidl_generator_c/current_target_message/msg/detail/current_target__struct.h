// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from current_target_message:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "current_target_message/msg/current_target.h"


#ifndef CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_
#define CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CurrentTarget in the package current_target_message.
typedef struct current_target_message__msg__CurrentTarget
{
  /// "carrot1", "carrot2", "static_target"
  rosidl_runtime_c__String target_name;
  /// текущие координаты цели
  double target_x;
  double target_y;
  /// расстояние до цели
  double distance_to_target;
} current_target_message__msg__CurrentTarget;

// Struct for a sequence of current_target_message__msg__CurrentTarget.
typedef struct current_target_message__msg__CurrentTarget__Sequence
{
  current_target_message__msg__CurrentTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} current_target_message__msg__CurrentTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_
