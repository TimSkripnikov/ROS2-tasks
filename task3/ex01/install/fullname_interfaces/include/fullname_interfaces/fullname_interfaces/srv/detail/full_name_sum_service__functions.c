// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fullname_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice
#include "fullname_interfaces/srv/detail/full_name_sum_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

bool
fullname_interfaces__srv__FullNameSumService_Request__init(fullname_interfaces__srv__FullNameSumService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    fullname_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    fullname_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    fullname_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Request__fini(fullname_interfaces__srv__FullNameSumService_Request * msg)
{
  if (!msg) {
    return;
  }
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
}

bool
fullname_interfaces__srv__FullNameSumService_Request__are_equal(const fullname_interfaces__srv__FullNameSumService_Request * lhs, const fullname_interfaces__srv__FullNameSumService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Request__copy(
  const fullname_interfaces__srv__FullNameSumService_Request * input,
  fullname_interfaces__srv__FullNameSumService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  return true;
}

fullname_interfaces__srv__FullNameSumService_Request *
fullname_interfaces__srv__FullNameSumService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Request * msg = (fullname_interfaces__srv__FullNameSumService_Request *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fullname_interfaces__srv__FullNameSumService_Request));
  bool success = fullname_interfaces__srv__FullNameSumService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fullname_interfaces__srv__FullNameSumService_Request__destroy(fullname_interfaces__srv__FullNameSumService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fullname_interfaces__srv__FullNameSumService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fullname_interfaces__srv__FullNameSumService_Request__Sequence__init(fullname_interfaces__srv__FullNameSumService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Request * data = NULL;

  if (size) {
    data = (fullname_interfaces__srv__FullNameSumService_Request *)allocator.zero_allocate(size, sizeof(fullname_interfaces__srv__FullNameSumService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fullname_interfaces__srv__FullNameSumService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fullname_interfaces__srv__FullNameSumService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Request__Sequence__fini(fullname_interfaces__srv__FullNameSumService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fullname_interfaces__srv__FullNameSumService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fullname_interfaces__srv__FullNameSumService_Request__Sequence *
fullname_interfaces__srv__FullNameSumService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Request__Sequence * array = (fullname_interfaces__srv__FullNameSumService_Request__Sequence *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fullname_interfaces__srv__FullNameSumService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fullname_interfaces__srv__FullNameSumService_Request__Sequence__destroy(fullname_interfaces__srv__FullNameSumService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fullname_interfaces__srv__FullNameSumService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fullname_interfaces__srv__FullNameSumService_Request__Sequence__are_equal(const fullname_interfaces__srv__FullNameSumService_Request__Sequence * lhs, const fullname_interfaces__srv__FullNameSumService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Request__Sequence__copy(
  const fullname_interfaces__srv__FullNameSumService_Request__Sequence * input,
  fullname_interfaces__srv__FullNameSumService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fullname_interfaces__srv__FullNameSumService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fullname_interfaces__srv__FullNameSumService_Request * data =
      (fullname_interfaces__srv__FullNameSumService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fullname_interfaces__srv__FullNameSumService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fullname_interfaces__srv__FullNameSumService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
fullname_interfaces__srv__FullNameSumService_Response__init(fullname_interfaces__srv__FullNameSumService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__init(&msg->full_name)) {
    fullname_interfaces__srv__FullNameSumService_Response__fini(msg);
    return false;
  }
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Response__fini(fullname_interfaces__srv__FullNameSumService_Response * msg)
{
  if (!msg) {
    return;
  }
  // full_name
  rosidl_runtime_c__String__fini(&msg->full_name);
}

bool
fullname_interfaces__srv__FullNameSumService_Response__are_equal(const fullname_interfaces__srv__FullNameSumService_Response * lhs, const fullname_interfaces__srv__FullNameSumService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_name), &(rhs->full_name)))
  {
    return false;
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Response__copy(
  const fullname_interfaces__srv__FullNameSumService_Response * input,
  fullname_interfaces__srv__FullNameSumService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__copy(
      &(input->full_name), &(output->full_name)))
  {
    return false;
  }
  return true;
}

fullname_interfaces__srv__FullNameSumService_Response *
fullname_interfaces__srv__FullNameSumService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Response * msg = (fullname_interfaces__srv__FullNameSumService_Response *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fullname_interfaces__srv__FullNameSumService_Response));
  bool success = fullname_interfaces__srv__FullNameSumService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fullname_interfaces__srv__FullNameSumService_Response__destroy(fullname_interfaces__srv__FullNameSumService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fullname_interfaces__srv__FullNameSumService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fullname_interfaces__srv__FullNameSumService_Response__Sequence__init(fullname_interfaces__srv__FullNameSumService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Response * data = NULL;

  if (size) {
    data = (fullname_interfaces__srv__FullNameSumService_Response *)allocator.zero_allocate(size, sizeof(fullname_interfaces__srv__FullNameSumService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fullname_interfaces__srv__FullNameSumService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fullname_interfaces__srv__FullNameSumService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Response__Sequence__fini(fullname_interfaces__srv__FullNameSumService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fullname_interfaces__srv__FullNameSumService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fullname_interfaces__srv__FullNameSumService_Response__Sequence *
fullname_interfaces__srv__FullNameSumService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Response__Sequence * array = (fullname_interfaces__srv__FullNameSumService_Response__Sequence *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fullname_interfaces__srv__FullNameSumService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fullname_interfaces__srv__FullNameSumService_Response__Sequence__destroy(fullname_interfaces__srv__FullNameSumService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fullname_interfaces__srv__FullNameSumService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fullname_interfaces__srv__FullNameSumService_Response__Sequence__are_equal(const fullname_interfaces__srv__FullNameSumService_Response__Sequence * lhs, const fullname_interfaces__srv__FullNameSumService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Response__Sequence__copy(
  const fullname_interfaces__srv__FullNameSumService_Response__Sequence * input,
  fullname_interfaces__srv__FullNameSumService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fullname_interfaces__srv__FullNameSumService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fullname_interfaces__srv__FullNameSumService_Response * data =
      (fullname_interfaces__srv__FullNameSumService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fullname_interfaces__srv__FullNameSumService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fullname_interfaces__srv__FullNameSumService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "fullname_interfaces/srv/detail/full_name_sum_service__functions.h"

bool
fullname_interfaces__srv__FullNameSumService_Event__init(fullname_interfaces__srv__FullNameSumService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    fullname_interfaces__srv__FullNameSumService_Event__fini(msg);
    return false;
  }
  // request
  if (!fullname_interfaces__srv__FullNameSumService_Request__Sequence__init(&msg->request, 0)) {
    fullname_interfaces__srv__FullNameSumService_Event__fini(msg);
    return false;
  }
  // response
  if (!fullname_interfaces__srv__FullNameSumService_Response__Sequence__init(&msg->response, 0)) {
    fullname_interfaces__srv__FullNameSumService_Event__fini(msg);
    return false;
  }
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Event__fini(fullname_interfaces__srv__FullNameSumService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  fullname_interfaces__srv__FullNameSumService_Request__Sequence__fini(&msg->request);
  // response
  fullname_interfaces__srv__FullNameSumService_Response__Sequence__fini(&msg->response);
}

bool
fullname_interfaces__srv__FullNameSumService_Event__are_equal(const fullname_interfaces__srv__FullNameSumService_Event * lhs, const fullname_interfaces__srv__FullNameSumService_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!fullname_interfaces__srv__FullNameSumService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!fullname_interfaces__srv__FullNameSumService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Event__copy(
  const fullname_interfaces__srv__FullNameSumService_Event * input,
  fullname_interfaces__srv__FullNameSumService_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!fullname_interfaces__srv__FullNameSumService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!fullname_interfaces__srv__FullNameSumService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

fullname_interfaces__srv__FullNameSumService_Event *
fullname_interfaces__srv__FullNameSumService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Event * msg = (fullname_interfaces__srv__FullNameSumService_Event *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fullname_interfaces__srv__FullNameSumService_Event));
  bool success = fullname_interfaces__srv__FullNameSumService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fullname_interfaces__srv__FullNameSumService_Event__destroy(fullname_interfaces__srv__FullNameSumService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fullname_interfaces__srv__FullNameSumService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fullname_interfaces__srv__FullNameSumService_Event__Sequence__init(fullname_interfaces__srv__FullNameSumService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Event * data = NULL;

  if (size) {
    data = (fullname_interfaces__srv__FullNameSumService_Event *)allocator.zero_allocate(size, sizeof(fullname_interfaces__srv__FullNameSumService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fullname_interfaces__srv__FullNameSumService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fullname_interfaces__srv__FullNameSumService_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fullname_interfaces__srv__FullNameSumService_Event__Sequence__fini(fullname_interfaces__srv__FullNameSumService_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fullname_interfaces__srv__FullNameSumService_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fullname_interfaces__srv__FullNameSumService_Event__Sequence *
fullname_interfaces__srv__FullNameSumService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fullname_interfaces__srv__FullNameSumService_Event__Sequence * array = (fullname_interfaces__srv__FullNameSumService_Event__Sequence *)allocator.allocate(sizeof(fullname_interfaces__srv__FullNameSumService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fullname_interfaces__srv__FullNameSumService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fullname_interfaces__srv__FullNameSumService_Event__Sequence__destroy(fullname_interfaces__srv__FullNameSumService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fullname_interfaces__srv__FullNameSumService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fullname_interfaces__srv__FullNameSumService_Event__Sequence__are_equal(const fullname_interfaces__srv__FullNameSumService_Event__Sequence * lhs, const fullname_interfaces__srv__FullNameSumService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fullname_interfaces__srv__FullNameSumService_Event__Sequence__copy(
  const fullname_interfaces__srv__FullNameSumService_Event__Sequence * input,
  fullname_interfaces__srv__FullNameSumService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fullname_interfaces__srv__FullNameSumService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fullname_interfaces__srv__FullNameSumService_Event * data =
      (fullname_interfaces__srv__FullNameSumService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fullname_interfaces__srv__FullNameSumService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fullname_interfaces__srv__FullNameSumService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fullname_interfaces__srv__FullNameSumService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
