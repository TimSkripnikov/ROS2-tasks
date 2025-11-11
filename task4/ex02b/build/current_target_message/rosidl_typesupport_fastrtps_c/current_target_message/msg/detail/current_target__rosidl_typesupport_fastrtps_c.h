// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from current_target_message:msg/CurrentTarget.idl
// generated code does not contain a copyright notice
#ifndef CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "current_target_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "current_target_message/msg/detail/current_target__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
bool cdr_serialize_current_target_message__msg__CurrentTarget(
  const current_target_message__msg__CurrentTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
bool cdr_deserialize_current_target_message__msg__CurrentTarget(
  eprosima::fastcdr::Cdr &,
  current_target_message__msg__CurrentTarget * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
size_t get_serialized_size_current_target_message__msg__CurrentTarget(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
size_t max_serialized_size_current_target_message__msg__CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
bool cdr_serialize_key_current_target_message__msg__CurrentTarget(
  const current_target_message__msg__CurrentTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
size_t get_serialized_size_key_current_target_message__msg__CurrentTarget(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
size_t max_serialized_size_key_current_target_message__msg__CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_current_target_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, current_target_message, msg, CurrentTarget)();

#ifdef __cplusplus
}
#endif

#endif  // CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
