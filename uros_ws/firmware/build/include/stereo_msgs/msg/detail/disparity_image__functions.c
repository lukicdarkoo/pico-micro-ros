// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice
#include "stereo_msgs/msg/detail/disparity_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `valid_window`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
stereo_msgs__msg__DisparityImage__init(stereo_msgs__msg__DisparityImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stereo_msgs__msg__DisparityImage__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    stereo_msgs__msg__DisparityImage__fini(msg);
    return false;
  }
  // f
  // t
  // valid_window
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->valid_window)) {
    stereo_msgs__msg__DisparityImage__fini(msg);
    return false;
  }
  // min_disparity
  // max_disparity
  // delta_d
  return true;
}

void
stereo_msgs__msg__DisparityImage__fini(stereo_msgs__msg__DisparityImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // f
  // t
  // valid_window
  sensor_msgs__msg__RegionOfInterest__fini(&msg->valid_window);
  // min_disparity
  // max_disparity
  // delta_d
}

stereo_msgs__msg__DisparityImage *
stereo_msgs__msg__DisparityImage__create()
{
  stereo_msgs__msg__DisparityImage * msg = (stereo_msgs__msg__DisparityImage *)malloc(sizeof(stereo_msgs__msg__DisparityImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stereo_msgs__msg__DisparityImage));
  bool success = stereo_msgs__msg__DisparityImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
stereo_msgs__msg__DisparityImage__destroy(stereo_msgs__msg__DisparityImage * msg)
{
  if (msg) {
    stereo_msgs__msg__DisparityImage__fini(msg);
  }
  free(msg);
}


bool
stereo_msgs__msg__DisparityImage__Sequence__init(stereo_msgs__msg__DisparityImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  stereo_msgs__msg__DisparityImage * data = NULL;
  if (size) {
    data = (stereo_msgs__msg__DisparityImage *)calloc(size, sizeof(stereo_msgs__msg__DisparityImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stereo_msgs__msg__DisparityImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stereo_msgs__msg__DisparityImage__fini(&data[i - 1]);
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
stereo_msgs__msg__DisparityImage__Sequence__fini(stereo_msgs__msg__DisparityImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      stereo_msgs__msg__DisparityImage__fini(&array->data[i]);
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

stereo_msgs__msg__DisparityImage__Sequence *
stereo_msgs__msg__DisparityImage__Sequence__create(size_t size)
{
  stereo_msgs__msg__DisparityImage__Sequence * array = (stereo_msgs__msg__DisparityImage__Sequence *)malloc(sizeof(stereo_msgs__msg__DisparityImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = stereo_msgs__msg__DisparityImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
stereo_msgs__msg__DisparityImage__Sequence__destroy(stereo_msgs__msg__DisparityImage__Sequence * array)
{
  if (array) {
    stereo_msgs__msg__DisparityImage__Sequence__fini(array);
  }
  free(array);
}
