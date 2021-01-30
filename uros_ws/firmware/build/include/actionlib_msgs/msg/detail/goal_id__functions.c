// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
actionlib_msgs__msg__GoalID__init(actionlib_msgs__msg__GoalID * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    actionlib_msgs__msg__GoalID__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    actionlib_msgs__msg__GoalID__fini(msg);
    return false;
  }
  return true;
}

void
actionlib_msgs__msg__GoalID__fini(actionlib_msgs__msg__GoalID * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

actionlib_msgs__msg__GoalID *
actionlib_msgs__msg__GoalID__create()
{
  actionlib_msgs__msg__GoalID * msg = (actionlib_msgs__msg__GoalID *)malloc(sizeof(actionlib_msgs__msg__GoalID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actionlib_msgs__msg__GoalID));
  bool success = actionlib_msgs__msg__GoalID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
actionlib_msgs__msg__GoalID__destroy(actionlib_msgs__msg__GoalID * msg)
{
  if (msg) {
    actionlib_msgs__msg__GoalID__fini(msg);
  }
  free(msg);
}


bool
actionlib_msgs__msg__GoalID__Sequence__init(actionlib_msgs__msg__GoalID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  actionlib_msgs__msg__GoalID * data = NULL;
  if (size) {
    data = (actionlib_msgs__msg__GoalID *)calloc(size, sizeof(actionlib_msgs__msg__GoalID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actionlib_msgs__msg__GoalID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actionlib_msgs__msg__GoalID__fini(&data[i - 1]);
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
actionlib_msgs__msg__GoalID__Sequence__fini(actionlib_msgs__msg__GoalID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actionlib_msgs__msg__GoalID__fini(&array->data[i]);
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

actionlib_msgs__msg__GoalID__Sequence *
actionlib_msgs__msg__GoalID__Sequence__create(size_t size)
{
  actionlib_msgs__msg__GoalID__Sequence * array = (actionlib_msgs__msg__GoalID__Sequence *)malloc(sizeof(actionlib_msgs__msg__GoalID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = actionlib_msgs__msg__GoalID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
actionlib_msgs__msg__GoalID__Sequence__destroy(actionlib_msgs__msg__GoalID__Sequence * array)
{
  if (array) {
    actionlib_msgs__msg__GoalID__Sequence__fini(array);
  }
  free(array);
}
