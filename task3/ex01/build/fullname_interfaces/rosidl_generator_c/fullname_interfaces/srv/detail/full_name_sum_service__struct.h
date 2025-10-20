// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fullname_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fullname_interfaces/srv/full_name_sum_service.h"


#ifndef FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_
#define FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_

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

/// Struct defined in srv/FullNameSumService in the package fullname_interfaces.
typedef struct fullname_interfaces__srv__FullNameSumService_Request
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} fullname_interfaces__srv__FullNameSumService_Request;

// Struct for a sequence of fullname_interfaces__srv__FullNameSumService_Request.
typedef struct fullname_interfaces__srv__FullNameSumService_Request__Sequence
{
  fullname_interfaces__srv__FullNameSumService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fullname_interfaces__srv__FullNameSumService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FullNameSumService in the package fullname_interfaces.
typedef struct fullname_interfaces__srv__FullNameSumService_Response
{
  rosidl_runtime_c__String full_name;
} fullname_interfaces__srv__FullNameSumService_Response;

// Struct for a sequence of fullname_interfaces__srv__FullNameSumService_Response.
typedef struct fullname_interfaces__srv__FullNameSumService_Response__Sequence
{
  fullname_interfaces__srv__FullNameSumService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fullname_interfaces__srv__FullNameSumService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  fullname_interfaces__srv__FullNameSumService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  fullname_interfaces__srv__FullNameSumService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/FullNameSumService in the package fullname_interfaces.
typedef struct fullname_interfaces__srv__FullNameSumService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  fullname_interfaces__srv__FullNameSumService_Request__Sequence request;
  fullname_interfaces__srv__FullNameSumService_Response__Sequence response;
} fullname_interfaces__srv__FullNameSumService_Event;

// Struct for a sequence of fullname_interfaces__srv__FullNameSumService_Event.
typedef struct fullname_interfaces__srv__FullNameSumService_Event__Sequence
{
  fullname_interfaces__srv__FullNameSumService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fullname_interfaces__srv__FullNameSumService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FULLNAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_
