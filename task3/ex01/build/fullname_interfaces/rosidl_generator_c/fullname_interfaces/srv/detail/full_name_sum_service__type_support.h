// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from fullname_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fullname_interfaces/srv/full_name_sum_service.h"


#ifndef FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TYPE_SUPPORT_H_
#define FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "fullname_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_fullname_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  fullname_interfaces,
  srv,
  FullNameSumService
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TYPE_SUPPORT_H_
