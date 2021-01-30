// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/marker_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/detail/marker__functions.h"

bool
visualization_msgs__msg__MarkerArray__init(visualization_msgs__msg__MarkerArray * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__Marker__Sequence__init(&msg->markers, 0)) {
    visualization_msgs__msg__MarkerArray__fini(msg);
    return false;
  }
  return true;
}

void
visualization_msgs__msg__MarkerArray__fini(visualization_msgs__msg__MarkerArray * msg)
{
  if (!msg) {
    return;
  }
  // markers
  visualization_msgs__msg__Marker__Sequence__fini(&msg->markers);
}

visualization_msgs__msg__MarkerArray *
visualization_msgs__msg__MarkerArray__create()
{
  visualization_msgs__msg__MarkerArray * msg = (visualization_msgs__msg__MarkerArray *)malloc(sizeof(visualization_msgs__msg__MarkerArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__msg__MarkerArray));
  bool success = visualization_msgs__msg__MarkerArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__msg__MarkerArray__destroy(visualization_msgs__msg__MarkerArray * msg)
{
  if (msg) {
    visualization_msgs__msg__MarkerArray__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__msg__MarkerArray__Sequence__init(visualization_msgs__msg__MarkerArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__msg__MarkerArray * data = NULL;
  if (size) {
    data = (visualization_msgs__msg__MarkerArray *)calloc(size, sizeof(visualization_msgs__msg__MarkerArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__msg__MarkerArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__msg__MarkerArray__fini(&data[i - 1]);
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
visualization_msgs__msg__MarkerArray__Sequence__fini(visualization_msgs__msg__MarkerArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__msg__MarkerArray__fini(&array->data[i]);
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

visualization_msgs__msg__MarkerArray__Sequence *
visualization_msgs__msg__MarkerArray__Sequence__create(size_t size)
{
  visualization_msgs__msg__MarkerArray__Sequence * array = (visualization_msgs__msg__MarkerArray__Sequence *)malloc(sizeof(visualization_msgs__msg__MarkerArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__msg__MarkerArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__msg__MarkerArray__Sequence__destroy(visualization_msgs__msg__MarkerArray__Sequence * array)
{
  if (array) {
    visualization_msgs__msg__MarkerArray__Sequence__fini(array);
  }
  free(array);
}
