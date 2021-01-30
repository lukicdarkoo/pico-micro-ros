// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `client_id`
// Member `marker_name`
// Member `control_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `mouse_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
visualization_msgs__msg__InteractiveMarkerFeedback__init(visualization_msgs__msg__InteractiveMarkerFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // client_id
  if (!rosidl_runtime_c__String__init(&msg->client_id)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // marker_name
  if (!rosidl_runtime_c__String__init(&msg->marker_name)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // control_name
  if (!rosidl_runtime_c__String__init(&msg->control_name)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // event_type
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // menu_entry_id
  // mouse_point
  if (!geometry_msgs__msg__Point__init(&msg->mouse_point)) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
    return false;
  }
  // mouse_point_valid
  return true;
}

void
visualization_msgs__msg__InteractiveMarkerFeedback__fini(visualization_msgs__msg__InteractiveMarkerFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // client_id
  rosidl_runtime_c__String__fini(&msg->client_id);
  // marker_name
  rosidl_runtime_c__String__fini(&msg->marker_name);
  // control_name
  rosidl_runtime_c__String__fini(&msg->control_name);
  // event_type
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // menu_entry_id
  // mouse_point
  geometry_msgs__msg__Point__fini(&msg->mouse_point);
  // mouse_point_valid
}

visualization_msgs__msg__InteractiveMarkerFeedback *
visualization_msgs__msg__InteractiveMarkerFeedback__create()
{
  visualization_msgs__msg__InteractiveMarkerFeedback * msg = (visualization_msgs__msg__InteractiveMarkerFeedback *)malloc(sizeof(visualization_msgs__msg__InteractiveMarkerFeedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__msg__InteractiveMarkerFeedback));
  bool success = visualization_msgs__msg__InteractiveMarkerFeedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__msg__InteractiveMarkerFeedback__destroy(visualization_msgs__msg__InteractiveMarkerFeedback * msg)
{
  if (msg) {
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__init(visualization_msgs__msg__InteractiveMarkerFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__msg__InteractiveMarkerFeedback * data = NULL;
  if (size) {
    data = (visualization_msgs__msg__InteractiveMarkerFeedback *)calloc(size, sizeof(visualization_msgs__msg__InteractiveMarkerFeedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__msg__InteractiveMarkerFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__msg__InteractiveMarkerFeedback__fini(&data[i - 1]);
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
visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__fini(visualization_msgs__msg__InteractiveMarkerFeedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__msg__InteractiveMarkerFeedback__fini(&array->data[i]);
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

visualization_msgs__msg__InteractiveMarkerFeedback__Sequence *
visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__create(size_t size)
{
  visualization_msgs__msg__InteractiveMarkerFeedback__Sequence * array = (visualization_msgs__msg__InteractiveMarkerFeedback__Sequence *)malloc(sizeof(visualization_msgs__msg__InteractiveMarkerFeedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__destroy(visualization_msgs__msg__InteractiveMarkerFeedback__Sequence * array)
{
  if (array) {
    visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__fini(array);
  }
  free(array);
}
