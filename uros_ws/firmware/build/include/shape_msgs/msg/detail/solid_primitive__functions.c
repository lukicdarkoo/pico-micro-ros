// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/solid_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `dimensions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
shape_msgs__msg__SolidPrimitive__init(shape_msgs__msg__SolidPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // dimensions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->dimensions, 0)) {
    shape_msgs__msg__SolidPrimitive__fini(msg);
    return false;
  }
  return true;
}

void
shape_msgs__msg__SolidPrimitive__fini(shape_msgs__msg__SolidPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // type
  // dimensions
  rosidl_runtime_c__double__Sequence__fini(&msg->dimensions);
}

shape_msgs__msg__SolidPrimitive *
shape_msgs__msg__SolidPrimitive__create()
{
  shape_msgs__msg__SolidPrimitive * msg = (shape_msgs__msg__SolidPrimitive *)malloc(sizeof(shape_msgs__msg__SolidPrimitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_msgs__msg__SolidPrimitive));
  bool success = shape_msgs__msg__SolidPrimitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
shape_msgs__msg__SolidPrimitive__destroy(shape_msgs__msg__SolidPrimitive * msg)
{
  if (msg) {
    shape_msgs__msg__SolidPrimitive__fini(msg);
  }
  free(msg);
}


bool
shape_msgs__msg__SolidPrimitive__Sequence__init(shape_msgs__msg__SolidPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  shape_msgs__msg__SolidPrimitive * data = NULL;
  if (size) {
    data = (shape_msgs__msg__SolidPrimitive *)calloc(size, sizeof(shape_msgs__msg__SolidPrimitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_msgs__msg__SolidPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_msgs__msg__SolidPrimitive__fini(&data[i - 1]);
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
shape_msgs__msg__SolidPrimitive__Sequence__fini(shape_msgs__msg__SolidPrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_msgs__msg__SolidPrimitive__fini(&array->data[i]);
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

shape_msgs__msg__SolidPrimitive__Sequence *
shape_msgs__msg__SolidPrimitive__Sequence__create(size_t size)
{
  shape_msgs__msg__SolidPrimitive__Sequence * array = (shape_msgs__msg__SolidPrimitive__Sequence *)malloc(sizeof(shape_msgs__msg__SolidPrimitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = shape_msgs__msg__SolidPrimitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
shape_msgs__msg__SolidPrimitive__Sequence__destroy(shape_msgs__msg__SolidPrimitive__Sequence * array)
{
  if (array) {
    shape_msgs__msg__SolidPrimitive__Sequence__fini(array);
  }
  free(array);
}
