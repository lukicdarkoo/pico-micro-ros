// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `nodes`
#include "micro_ros_msgs/msg/detail/node__functions.h"

bool
micro_ros_msgs__msg__Graph__init(micro_ros_msgs__msg__Graph * msg)
{
  if (!msg) {
    return false;
  }
  // nodes
  if (!micro_ros_msgs__msg__Node__Sequence__init(&msg->nodes, 0)) {
    micro_ros_msgs__msg__Graph__fini(msg);
    return false;
  }
  return true;
}

void
micro_ros_msgs__msg__Graph__fini(micro_ros_msgs__msg__Graph * msg)
{
  if (!msg) {
    return;
  }
  // nodes
  micro_ros_msgs__msg__Node__Sequence__fini(&msg->nodes);
}

micro_ros_msgs__msg__Graph *
micro_ros_msgs__msg__Graph__create()
{
  micro_ros_msgs__msg__Graph * msg = (micro_ros_msgs__msg__Graph *)malloc(sizeof(micro_ros_msgs__msg__Graph));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(micro_ros_msgs__msg__Graph));
  bool success = micro_ros_msgs__msg__Graph__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
micro_ros_msgs__msg__Graph__destroy(micro_ros_msgs__msg__Graph * msg)
{
  if (msg) {
    micro_ros_msgs__msg__Graph__fini(msg);
  }
  free(msg);
}


bool
micro_ros_msgs__msg__Graph__Sequence__init(micro_ros_msgs__msg__Graph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  micro_ros_msgs__msg__Graph * data = NULL;
  if (size) {
    data = (micro_ros_msgs__msg__Graph *)calloc(size, sizeof(micro_ros_msgs__msg__Graph));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = micro_ros_msgs__msg__Graph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        micro_ros_msgs__msg__Graph__fini(&data[i - 1]);
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
micro_ros_msgs__msg__Graph__Sequence__fini(micro_ros_msgs__msg__Graph__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      micro_ros_msgs__msg__Graph__fini(&array->data[i]);
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

micro_ros_msgs__msg__Graph__Sequence *
micro_ros_msgs__msg__Graph__Sequence__create(size_t size)
{
  micro_ros_msgs__msg__Graph__Sequence * array = (micro_ros_msgs__msg__Graph__Sequence *)malloc(sizeof(micro_ros_msgs__msg__Graph__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = micro_ros_msgs__msg__Graph__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
micro_ros_msgs__msg__Graph__Sequence__destroy(micro_ros_msgs__msg__Graph__Sequence * array)
{
  if (array) {
    micro_ros_msgs__msg__Graph__Sequence__fini(array);
  }
  free(array);
}
