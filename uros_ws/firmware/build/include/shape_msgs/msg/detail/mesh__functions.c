// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `triangles`
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"
// Member `vertices`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
shape_msgs__msg__Mesh__init(shape_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return false;
  }
  // triangles
  if (!shape_msgs__msg__MeshTriangle__Sequence__init(&msg->triangles, 0)) {
    shape_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertices, 0)) {
    shape_msgs__msg__Mesh__fini(msg);
    return false;
  }
  return true;
}

void
shape_msgs__msg__Mesh__fini(shape_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return;
  }
  // triangles
  shape_msgs__msg__MeshTriangle__Sequence__fini(&msg->triangles);
  // vertices
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertices);
}

shape_msgs__msg__Mesh *
shape_msgs__msg__Mesh__create()
{
  shape_msgs__msg__Mesh * msg = (shape_msgs__msg__Mesh *)malloc(sizeof(shape_msgs__msg__Mesh));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_msgs__msg__Mesh));
  bool success = shape_msgs__msg__Mesh__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
shape_msgs__msg__Mesh__destroy(shape_msgs__msg__Mesh * msg)
{
  if (msg) {
    shape_msgs__msg__Mesh__fini(msg);
  }
  free(msg);
}


bool
shape_msgs__msg__Mesh__Sequence__init(shape_msgs__msg__Mesh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  shape_msgs__msg__Mesh * data = NULL;
  if (size) {
    data = (shape_msgs__msg__Mesh *)calloc(size, sizeof(shape_msgs__msg__Mesh));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_msgs__msg__Mesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_msgs__msg__Mesh__fini(&data[i - 1]);
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
shape_msgs__msg__Mesh__Sequence__fini(shape_msgs__msg__Mesh__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_msgs__msg__Mesh__fini(&array->data[i]);
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

shape_msgs__msg__Mesh__Sequence *
shape_msgs__msg__Mesh__Sequence__create(size_t size)
{
  shape_msgs__msg__Mesh__Sequence * array = (shape_msgs__msg__Mesh__Sequence *)malloc(sizeof(shape_msgs__msg__Mesh__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = shape_msgs__msg__Mesh__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
shape_msgs__msg__Mesh__Sequence__destroy(shape_msgs__msg__Mesh__Sequence * array)
{
  if (array) {
    shape_msgs__msg__Mesh__Sequence__fini(array);
  }
  free(array);
}
