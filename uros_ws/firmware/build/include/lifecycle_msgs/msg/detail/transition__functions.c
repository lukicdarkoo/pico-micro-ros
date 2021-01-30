// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lifecycle_msgs:msg/Transition.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
lifecycle_msgs__msg__Transition__init(lifecycle_msgs__msg__Transition * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    lifecycle_msgs__msg__Transition__fini(msg);
    return false;
  }
  return true;
}

void
lifecycle_msgs__msg__Transition__fini(lifecycle_msgs__msg__Transition * msg)
{
  if (!msg) {
    return;
  }
  // id
  // label
  rosidl_runtime_c__String__fini(&msg->label);
}

lifecycle_msgs__msg__Transition *
lifecycle_msgs__msg__Transition__create()
{
  lifecycle_msgs__msg__Transition * msg = (lifecycle_msgs__msg__Transition *)malloc(sizeof(lifecycle_msgs__msg__Transition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__msg__Transition));
  bool success = lifecycle_msgs__msg__Transition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__msg__Transition__destroy(lifecycle_msgs__msg__Transition * msg)
{
  if (msg) {
    lifecycle_msgs__msg__Transition__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__msg__Transition__Sequence__init(lifecycle_msgs__msg__Transition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__msg__Transition * data = NULL;
  if (size) {
    data = (lifecycle_msgs__msg__Transition *)calloc(size, sizeof(lifecycle_msgs__msg__Transition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__msg__Transition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__msg__Transition__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lifecycle_msgs__msg__Transition__Sequence__fini(lifecycle_msgs__msg__Transition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__msg__Transition__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lifecycle_msgs__msg__Transition__Sequence *
lifecycle_msgs__msg__Transition__Sequence__create(size_t size)
{
  lifecycle_msgs__msg__Transition__Sequence * array = (lifecycle_msgs__msg__Transition__Sequence *)malloc(sizeof(lifecycle_msgs__msg__Transition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__msg__Transition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__msg__Transition__Sequence__destroy(lifecycle_msgs__msg__Transition__Sequence * array)
{
  if (array) {
    lifecycle_msgs__msg__Transition__Sequence__fini(array);
  }
  free(array);
}
