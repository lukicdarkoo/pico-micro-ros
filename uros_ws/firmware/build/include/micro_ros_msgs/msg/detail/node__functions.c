// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `node_namespace`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `entities`
#include "micro_ros_msgs/msg/detail/entity__functions.h"

bool
micro_ros_msgs__msg__Node__init(micro_ros_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__init(&msg->node_namespace)) {
    micro_ros_msgs__msg__Node__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    micro_ros_msgs__msg__Node__fini(msg);
    return false;
  }
  // entities
  if (!micro_ros_msgs__msg__Entity__Sequence__init(&msg->entities, 0)) {
    micro_ros_msgs__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
micro_ros_msgs__msg__Node__fini(micro_ros_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // node_namespace
  rosidl_runtime_c__String__fini(&msg->node_namespace);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // entities
  micro_ros_msgs__msg__Entity__Sequence__fini(&msg->entities);
}

micro_ros_msgs__msg__Node *
micro_ros_msgs__msg__Node__create()
{
  micro_ros_msgs__msg__Node * msg = (micro_ros_msgs__msg__Node *)malloc(sizeof(micro_ros_msgs__msg__Node));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(micro_ros_msgs__msg__Node));
  bool success = micro_ros_msgs__msg__Node__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
micro_ros_msgs__msg__Node__destroy(micro_ros_msgs__msg__Node * msg)
{
  if (msg) {
    micro_ros_msgs__msg__Node__fini(msg);
  }
  free(msg);
}


bool
micro_ros_msgs__msg__Node__Sequence__init(micro_ros_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  micro_ros_msgs__msg__Node * data = NULL;
  if (size) {
    data = (micro_ros_msgs__msg__Node *)calloc(size, sizeof(micro_ros_msgs__msg__Node));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = micro_ros_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        micro_ros_msgs__msg__Node__fini(&data[i - 1]);
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
micro_ros_msgs__msg__Node__Sequence__fini(micro_ros_msgs__msg__Node__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      micro_ros_msgs__msg__Node__fini(&array->data[i]);
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

micro_ros_msgs__msg__Node__Sequence *
micro_ros_msgs__msg__Node__Sequence__create(size_t size)
{
  micro_ros_msgs__msg__Node__Sequence * array = (micro_ros_msgs__msg__Node__Sequence *)malloc(sizeof(micro_ros_msgs__msg__Node__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = micro_ros_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
micro_ros_msgs__msg__Node__Sequence__destroy(micro_ros_msgs__msg__Node__Sequence * array)
{
  if (array) {
    micro_ros_msgs__msg__Node__Sequence__fini(array);
  }
  free(array);
}
