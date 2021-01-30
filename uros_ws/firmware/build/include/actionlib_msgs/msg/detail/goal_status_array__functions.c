// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_status_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status_list`
#include "actionlib_msgs/msg/detail/goal_status__functions.h"

bool
actionlib_msgs__msg__GoalStatusArray__init(actionlib_msgs__msg__GoalStatusArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    actionlib_msgs__msg__GoalStatusArray__fini(msg);
    return false;
  }
  // status_list
  if (!actionlib_msgs__msg__GoalStatus__Sequence__init(&msg->status_list, 0)) {
    actionlib_msgs__msg__GoalStatusArray__fini(msg);
    return false;
  }
  return true;
}

void
actionlib_msgs__msg__GoalStatusArray__fini(actionlib_msgs__msg__GoalStatusArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status_list
  actionlib_msgs__msg__GoalStatus__Sequence__fini(&msg->status_list);
}

actionlib_msgs__msg__GoalStatusArray *
actionlib_msgs__msg__GoalStatusArray__create()
{
  actionlib_msgs__msg__GoalStatusArray * msg = (actionlib_msgs__msg__GoalStatusArray *)malloc(sizeof(actionlib_msgs__msg__GoalStatusArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actionlib_msgs__msg__GoalStatusArray));
  bool success = actionlib_msgs__msg__GoalStatusArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
actionlib_msgs__msg__GoalStatusArray__destroy(actionlib_msgs__msg__GoalStatusArray * msg)
{
  if (msg) {
    actionlib_msgs__msg__GoalStatusArray__fini(msg);
  }
  free(msg);
}


bool
actionlib_msgs__msg__GoalStatusArray__Sequence__init(actionlib_msgs__msg__GoalStatusArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  actionlib_msgs__msg__GoalStatusArray * data = NULL;
  if (size) {
    data = (actionlib_msgs__msg__GoalStatusArray *)calloc(size, sizeof(actionlib_msgs__msg__GoalStatusArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actionlib_msgs__msg__GoalStatusArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actionlib_msgs__msg__GoalStatusArray__fini(&data[i - 1]);
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
actionlib_msgs__msg__GoalStatusArray__Sequence__fini(actionlib_msgs__msg__GoalStatusArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actionlib_msgs__msg__GoalStatusArray__fini(&array->data[i]);
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

actionlib_msgs__msg__GoalStatusArray__Sequence *
actionlib_msgs__msg__GoalStatusArray__Sequence__create(size_t size)
{
  actionlib_msgs__msg__GoalStatusArray__Sequence * array = (actionlib_msgs__msg__GoalStatusArray__Sequence *)malloc(sizeof(actionlib_msgs__msg__GoalStatusArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = actionlib_msgs__msg__GoalStatusArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
actionlib_msgs__msg__GoalStatusArray__Sequence__destroy(actionlib_msgs__msg__GoalStatusArray__Sequence * array)
{
  if (array) {
    actionlib_msgs__msg__GoalStatusArray__Sequence__fini(array);
  }
  free(array);
}
