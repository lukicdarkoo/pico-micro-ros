// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from statistics_msgs:msg/StatisticDataPoint.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/statistic_data_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
statistics_msgs__msg__StatisticDataPoint__init(statistics_msgs__msg__StatisticDataPoint * msg)
{
  if (!msg) {
    return false;
  }
  // data_type
  // data
  return true;
}

void
statistics_msgs__msg__StatisticDataPoint__fini(statistics_msgs__msg__StatisticDataPoint * msg)
{
  if (!msg) {
    return;
  }
  // data_type
  // data
}

statistics_msgs__msg__StatisticDataPoint *
statistics_msgs__msg__StatisticDataPoint__create()
{
  statistics_msgs__msg__StatisticDataPoint * msg = (statistics_msgs__msg__StatisticDataPoint *)malloc(sizeof(statistics_msgs__msg__StatisticDataPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(statistics_msgs__msg__StatisticDataPoint));
  bool success = statistics_msgs__msg__StatisticDataPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
statistics_msgs__msg__StatisticDataPoint__destroy(statistics_msgs__msg__StatisticDataPoint * msg)
{
  if (msg) {
    statistics_msgs__msg__StatisticDataPoint__fini(msg);
  }
  free(msg);
}


bool
statistics_msgs__msg__StatisticDataPoint__Sequence__init(statistics_msgs__msg__StatisticDataPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  statistics_msgs__msg__StatisticDataPoint * data = NULL;
  if (size) {
    data = (statistics_msgs__msg__StatisticDataPoint *)calloc(size, sizeof(statistics_msgs__msg__StatisticDataPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = statistics_msgs__msg__StatisticDataPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        statistics_msgs__msg__StatisticDataPoint__fini(&data[i - 1]);
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
statistics_msgs__msg__StatisticDataPoint__Sequence__fini(statistics_msgs__msg__StatisticDataPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      statistics_msgs__msg__StatisticDataPoint__fini(&array->data[i]);
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

statistics_msgs__msg__StatisticDataPoint__Sequence *
statistics_msgs__msg__StatisticDataPoint__Sequence__create(size_t size)
{
  statistics_msgs__msg__StatisticDataPoint__Sequence * array = (statistics_msgs__msg__StatisticDataPoint__Sequence *)malloc(sizeof(statistics_msgs__msg__StatisticDataPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = statistics_msgs__msg__StatisticDataPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
statistics_msgs__msg__StatisticDataPoint__Sequence__destroy(statistics_msgs__msg__StatisticDataPoint__Sequence * array)
{
  if (array) {
    statistics_msgs__msg__StatisticDataPoint__Sequence__fini(array);
  }
  free(array);
}
