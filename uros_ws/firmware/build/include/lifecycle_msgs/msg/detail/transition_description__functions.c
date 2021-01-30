// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transition`
#include "lifecycle_msgs/msg/detail/transition__functions.h"
// Member `start_state`
// Member `goal_state`
#include "lifecycle_msgs/msg/detail/state__functions.h"

bool
lifecycle_msgs__msg__TransitionDescription__init(lifecycle_msgs__msg__TransitionDescription * msg)
{
  if (!msg) {
    return false;
  }
  // transition
  if (!lifecycle_msgs__msg__Transition__init(&msg->transition)) {
    lifecycle_msgs__msg__TransitionDescription__fini(msg);
    return false;
  }
  // start_state
  if (!lifecycle_msgs__msg__State__init(&msg->start_state)) {
    lifecycle_msgs__msg__TransitionDescription__fini(msg);
    return false;
  }
  // goal_state
  if (!lifecycle_msgs__msg__State__init(&msg->goal_state)) {
    lifecycle_msgs__msg__TransitionDescription__fini(msg);
    return false;
  }
  return true;
}

void
lifecycle_msgs__msg__TransitionDescription__fini(lifecycle_msgs__msg__TransitionDescription * msg)
{
  if (!msg) {
    return;
  }
  // transition
  lifecycle_msgs__msg__Transition__fini(&msg->transition);
  // start_state
  lifecycle_msgs__msg__State__fini(&msg->start_state);
  // goal_state
  lifecycle_msgs__msg__State__fini(&msg->goal_state);
}

lifecycle_msgs__msg__TransitionDescription *
lifecycle_msgs__msg__TransitionDescription__create()
{
  lifecycle_msgs__msg__TransitionDescription * msg = (lifecycle_msgs__msg__TransitionDescription *)malloc(sizeof(lifecycle_msgs__msg__TransitionDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__msg__TransitionDescription));
  bool success = lifecycle_msgs__msg__TransitionDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__msg__TransitionDescription__destroy(lifecycle_msgs__msg__TransitionDescription * msg)
{
  if (msg) {
    lifecycle_msgs__msg__TransitionDescription__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__msg__TransitionDescription__Sequence__init(lifecycle_msgs__msg__TransitionDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__msg__TransitionDescription * data = NULL;
  if (size) {
    data = (lifecycle_msgs__msg__TransitionDescription *)calloc(size, sizeof(lifecycle_msgs__msg__TransitionDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__msg__TransitionDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__msg__TransitionDescription__fini(&data[i - 1]);
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
lifecycle_msgs__msg__TransitionDescription__Sequence__fini(lifecycle_msgs__msg__TransitionDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__msg__TransitionDescription__fini(&array->data[i]);
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

lifecycle_msgs__msg__TransitionDescription__Sequence *
lifecycle_msgs__msg__TransitionDescription__Sequence__create(size_t size)
{
  lifecycle_msgs__msg__TransitionDescription__Sequence * array = (lifecycle_msgs__msg__TransitionDescription__Sequence *)malloc(sizeof(lifecycle_msgs__msg__TransitionDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__msg__TransitionDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__msg__TransitionDescription__Sequence__destroy(lifecycle_msgs__msg__TransitionDescription__Sequence * array)
{
  if (array) {
    lifecycle_msgs__msg__TransitionDescription__Sequence__fini(array);
  }
  free(array);
}
