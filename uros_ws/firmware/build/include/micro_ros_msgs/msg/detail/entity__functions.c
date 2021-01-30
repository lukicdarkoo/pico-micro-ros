// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `types`
#include "rosidl_runtime_c/string_functions.h"

bool
micro_ros_msgs__msg__Entity__init(micro_ros_msgs__msg__Entity * msg)
{
  if (!msg) {
    return false;
  }
  // entity_type
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    micro_ros_msgs__msg__Entity__fini(msg);
    return false;
  }
  // types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->types, 0)) {
    micro_ros_msgs__msg__Entity__fini(msg);
    return false;
  }
  return true;
}

void
micro_ros_msgs__msg__Entity__fini(micro_ros_msgs__msg__Entity * msg)
{
  if (!msg) {
    return;
  }
  // entity_type
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // types
  rosidl_runtime_c__String__Sequence__fini(&msg->types);
}

micro_ros_msgs__msg__Entity *
micro_ros_msgs__msg__Entity__create()
{
  micro_ros_msgs__msg__Entity * msg = (micro_ros_msgs__msg__Entity *)malloc(sizeof(micro_ros_msgs__msg__Entity));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(micro_ros_msgs__msg__Entity));
  bool success = micro_ros_msgs__msg__Entity__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
micro_ros_msgs__msg__Entity__destroy(micro_ros_msgs__msg__Entity * msg)
{
  if (msg) {
    micro_ros_msgs__msg__Entity__fini(msg);
  }
  free(msg);
}


bool
micro_ros_msgs__msg__Entity__Sequence__init(micro_ros_msgs__msg__Entity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  micro_ros_msgs__msg__Entity * data = NULL;
  if (size) {
    data = (micro_ros_msgs__msg__Entity *)calloc(size, sizeof(micro_ros_msgs__msg__Entity));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = micro_ros_msgs__msg__Entity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        micro_ros_msgs__msg__Entity__fini(&data[i - 1]);
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
micro_ros_msgs__msg__Entity__Sequence__fini(micro_ros_msgs__msg__Entity__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      micro_ros_msgs__msg__Entity__fini(&array->data[i]);
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

micro_ros_msgs__msg__Entity__Sequence *
micro_ros_msgs__msg__Entity__Sequence__create(size_t size)
{
  micro_ros_msgs__msg__Entity__Sequence * array = (micro_ros_msgs__msg__Entity__Sequence *)malloc(sizeof(micro_ros_msgs__msg__Entity__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = micro_ros_msgs__msg__Entity__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
micro_ros_msgs__msg__Entity__Sequence__destroy(micro_ros_msgs__msg__Entity__Sequence * array)
{
  if (array) {
    micro_ros_msgs__msg__Entity__Sequence__fini(array);
  }
  free(array);
}
