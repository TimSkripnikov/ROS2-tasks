// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from fullname_interfaces:msg/FullNameMessage.idl
// generated code does not contain a copyright notice
#ifndef FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fullname_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fullname_interfaces/msg/detail/full_name_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
bool cdr_serialize_fullname_interfaces__msg__FullNameMessage(
  const fullname_interfaces__msg__FullNameMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
bool cdr_deserialize_fullname_interfaces__msg__FullNameMessage(
  eprosima::fastcdr::Cdr &,
  fullname_interfaces__msg__FullNameMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
size_t get_serialized_size_fullname_interfaces__msg__FullNameMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
size_t max_serialized_size_fullname_interfaces__msg__FullNameMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
bool cdr_serialize_key_fullname_interfaces__msg__FullNameMessage(
  const fullname_interfaces__msg__FullNameMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
size_t get_serialized_size_key_fullname_interfaces__msg__FullNameMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
size_t max_serialized_size_key_fullname_interfaces__msg__FullNameMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fullname_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fullname_interfaces, msg, FullNameMessage)();

#ifdef __cplusplus
}
#endif

#endif  // FULLNAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
