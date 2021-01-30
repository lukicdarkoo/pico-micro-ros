// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/srv/detail/get_interactive_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
visualization_msgs__srv__GetInteractiveMarkers_Request__init(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__fini(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

visualization_msgs__srv__GetInteractiveMarkers_Request *
visualization_msgs__srv__GetInteractiveMarkers_Request__create()
{
  visualization_msgs__srv__GetInteractiveMarkers_Request * msg = (visualization_msgs__srv__GetInteractiveMarkers_Request *)malloc(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request));
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  if (msg) {
    visualization_msgs__srv__GetInteractiveMarkers_Request__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__srv__GetInteractiveMarkers_Request * data = NULL;
  if (size) {
    data = (visualization_msgs__srv__GetInteractiveMarkers_Request *)calloc(size, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&data[i - 1]);
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
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&array->data[i]);
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

visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__create(size_t size)
{
  visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array = (visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence *)malloc(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array)
{
  if (array) {
    visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__init(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_number
  // markers
  if (!visualization_msgs__msg__InteractiveMarker__Sequence__init(&msg->markers, 0)) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__fini(msg);
    return false;
  }
  return true;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__fini(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  if (!msg) {
    return;
  }
  // sequence_number
  // markers
  visualization_msgs__msg__InteractiveMarker__Sequence__fini(&msg->markers);
}

visualization_msgs__srv__GetInteractiveMarkers_Response *
visualization_msgs__srv__GetInteractiveMarkers_Response__create()
{
  visualization_msgs__srv__GetInteractiveMarkers_Response * msg = (visualization_msgs__srv__GetInteractiveMarkers_Response *)malloc(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response));
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  if (msg) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__srv__GetInteractiveMarkers_Response * data = NULL;
  if (size) {
    data = (visualization_msgs__srv__GetInteractiveMarkers_Response *)calloc(size, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&data[i - 1]);
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
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&array->data[i]);
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

visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__create(size_t size)
{
  visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array = (visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence *)malloc(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array)
{
  if (array) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(array);
  }
  free(array);
}
