// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/plane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
shape_msgs__msg__Plane__init(shape_msgs__msg__Plane * msg)
{
  if (!msg) {
    return false;
  }
  // coef
  return true;
}

void
shape_msgs__msg__Plane__fini(shape_msgs__msg__Plane * msg)
{
  if (!msg) {
    return;
  }
  // coef
}

shape_msgs__msg__Plane *
shape_msgs__msg__Plane__create()
{
  shape_msgs__msg__Plane * msg = (shape_msgs__msg__Plane *)malloc(sizeof(shape_msgs__msg__Plane));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_msgs__msg__Plane));
  bool success = shape_msgs__msg__Plane__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
shape_msgs__msg__Plane__destroy(shape_msgs__msg__Plane * msg)
{
  if (msg) {
    shape_msgs__msg__Plane__fini(msg);
  }
  free(msg);
}


bool
shape_msgs__msg__Plane__Sequence__init(shape_msgs__msg__Plane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  shape_msgs__msg__Plane * data = NULL;
  if (size) {
    data = (shape_msgs__msg__Plane *)calloc(size, sizeof(shape_msgs__msg__Plane));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_msgs__msg__Plane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_msgs__msg__Plane__fini(&data[i - 1]);
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
shape_msgs__msg__Plane__Sequence__fini(shape_msgs__msg__Plane__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_msgs__msg__Plane__fini(&array->data[i]);
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

shape_msgs__msg__Plane__Sequence *
shape_msgs__msg__Plane__Sequence__create(size_t size)
{
  shape_msgs__msg__Plane__Sequence * array = (shape_msgs__msg__Plane__Sequence *)malloc(sizeof(shape_msgs__msg__Plane__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = shape_msgs__msg__Plane__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
shape_msgs__msg__Plane__Sequence__destroy(shape_msgs__msg__Plane__Sequence * array)
{
  if (array) {
    shape_msgs__msg__Plane__Sequence__fini(array);
  }
  free(array);
}
