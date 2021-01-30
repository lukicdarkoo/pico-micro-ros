// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `markers`
#include "visualization_msgs/msg/detail/marker__functions.h"

bool
visualization_msgs__msg__InteractiveMarkerControl__init(visualization_msgs__msg__InteractiveMarkerControl * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    visualization_msgs__msg__InteractiveMarkerControl__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    visualization_msgs__msg__InteractiveMarkerControl__fini(msg);
    return false;
  }
  // orientation_mode
  // interaction_mode
  // always_visible
  // markers
  if (!visualization_msgs__msg__Marker__Sequence__init(&msg->markers, 0)) {
    visualization_msgs__msg__InteractiveMarkerControl__fini(msg);
    return false;
  }
  // independent_marker_orientation
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    visualization_msgs__msg__InteractiveMarkerControl__fini(msg);
    return false;
  }
  return true;
}

void
visualization_msgs__msg__InteractiveMarkerControl__fini(visualization_msgs__msg__InteractiveMarkerControl * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // orientation_mode
  // interaction_mode
  // always_visible
  // markers
  visualization_msgs__msg__Marker__Sequence__fini(&msg->markers);
  // independent_marker_orientation
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

visualization_msgs__msg__InteractiveMarkerControl *
visualization_msgs__msg__InteractiveMarkerControl__create()
{
  visualization_msgs__msg__InteractiveMarkerControl * msg = (visualization_msgs__msg__InteractiveMarkerControl *)malloc(sizeof(visualization_msgs__msg__InteractiveMarkerControl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__msg__InteractiveMarkerControl));
  bool success = visualization_msgs__msg__InteractiveMarkerControl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__msg__InteractiveMarkerControl__destroy(visualization_msgs__msg__InteractiveMarkerControl * msg)
{
  if (msg) {
    visualization_msgs__msg__InteractiveMarkerControl__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(visualization_msgs__msg__InteractiveMarkerControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__msg__InteractiveMarkerControl * data = NULL;
  if (size) {
    data = (visualization_msgs__msg__InteractiveMarkerControl *)calloc(size, sizeof(visualization_msgs__msg__InteractiveMarkerControl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__msg__InteractiveMarkerControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__msg__InteractiveMarkerControl__fini(&data[i - 1]);
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
visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(visualization_msgs__msg__InteractiveMarkerControl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__msg__InteractiveMarkerControl__fini(&array->data[i]);
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

visualization_msgs__msg__InteractiveMarkerControl__Sequence *
visualization_msgs__msg__InteractiveMarkerControl__Sequence__create(size_t size)
{
  visualization_msgs__msg__InteractiveMarkerControl__Sequence * array = (visualization_msgs__msg__InteractiveMarkerControl__Sequence *)malloc(sizeof(visualization_msgs__msg__InteractiveMarkerControl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__msg__InteractiveMarkerControl__Sequence__destroy(visualization_msgs__msg__InteractiveMarkerControl__Sequence * array)
{
  if (array) {
    visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(array);
  }
  free(array);
}
