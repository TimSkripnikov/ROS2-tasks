// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from current_target_message:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#ifndef CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "current_target_message/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "current_target_message/msg/detail/current_target__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace current_target_message
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
cdr_serialize(
  const current_target_message::msg::CurrentTarget & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  current_target_message::msg::CurrentTarget & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
get_serialized_size(
  const current_target_message::msg::CurrentTarget & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
max_serialized_size_CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
cdr_serialize_key(
  const current_target_message::msg::CurrentTarget & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
get_serialized_size_key(
  const current_target_message::msg::CurrentTarget & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
max_serialized_size_key_CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace current_target_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_current_target_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, current_target_message, msg, CurrentTarget)();

#ifdef __cplusplus
}
#endif

#endif  // CURRENT_TARGET_MESSAGE__MSG__DETAIL__CURRENT_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
