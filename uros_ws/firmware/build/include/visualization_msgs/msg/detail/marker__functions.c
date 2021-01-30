// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ns`
// Member `text`
// Member `mesh_resource`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `scale`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `color`
// Member `colors`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
visualization_msgs__msg__Marker__init(visualization_msgs__msg__Marker * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // ns
  if (!rosidl_runtime_c__String__init(&msg->ns)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // id
  // type
  // action
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // scale
  if (!geometry_msgs__msg__Vector3__init(&msg->scale)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // frame_locked
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // colors
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->colors, 0)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // mesh_resource
  if (!rosidl_runtime_c__String__init(&msg->mesh_resource)) {
    visualization_msgs__msg__Marker__fini(msg);
    return false;
  }
  // mesh_use_embedded_materials
  return true;
}

void
visualization_msgs__msg__Marker__fini(visualization_msgs__msg__Marker * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ns
  rosidl_runtime_c__String__fini(&msg->ns);
  // id
  // type
  // action
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // scale
  geometry_msgs__msg__Vector3__fini(&msg->scale);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // lifetime
  builtin_interfaces__msg__Duration__fini(&msg->lifetime);
  // frame_locked
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // colors
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->colors);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // mesh_resource
  rosidl_runtime_c__String__fini(&msg->mesh_resource);
  // mesh_use_embedded_materials
}

visualization_msgs__msg__Marker *
visualization_msgs__msg__Marker__create()
{
  visualization_msgs__msg__Marker * msg = (visualization_msgs__msg__Marker *)malloc(sizeof(visualization_msgs__msg__Marker));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__msg__Marker));
  bool success = visualization_msgs__msg__Marker__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__msg__Marker__destroy(visualization_msgs__msg__Marker * msg)
{
  if (msg) {
    visualization_msgs__msg__Marker__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__msg__Marker__Sequence__init(visualization_msgs__msg__Marker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__msg__Marker * data = NULL;
  if (size) {
    data = (visualization_msgs__msg__Marker *)calloc(size, sizeof(visualization_msgs__msg__Marker));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__msg__Marker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__msg__Marker__fini(&data[i - 1]);
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
visualization_msgs__msg__Marker__Sequence__fini(visualization_msgs__msg__Marker__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__msg__Marker__fini(&array->data[i]);
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

visualization_msgs__msg__Marker__Sequence *
visualization_msgs__msg__Marker__Sequence__create(size_t size)
{
  visualization_msgs__msg__Marker__Sequence * array = (visualization_msgs__msg__Marker__Sequence *)malloc(sizeof(visualization_msgs__msg__Marker__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__msg__Marker__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__msg__Marker__Sequence__destroy(visualization_msgs__msg__Marker__Sequence * array)
{
  if (array) {
    visualization_msgs__msg__Marker__Sequence__fini(array);
  }
  free(array);
}
