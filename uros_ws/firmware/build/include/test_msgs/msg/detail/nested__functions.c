// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:msg/Nested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `basic_types_value`
#include "test_msgs/msg/detail/basic_types__functions.h"

bool
test_msgs__msg__Nested__init(test_msgs__msg__Nested * msg)
{
  if (!msg) {
    return false;
  }
  // basic_types_value
  if (!test_msgs__msg__BasicTypes__init(&msg->basic_types_value)) {
    test_msgs__msg__Nested__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__msg__Nested__fini(test_msgs__msg__Nested * msg)
{
  if (!msg) {
    return;
  }
  // basic_types_value
  test_msgs__msg__BasicTypes__fini(&msg->basic_types_value);
}

test_msgs__msg__Nested *
test_msgs__msg__Nested__create()
{
  test_msgs__msg__Nested * msg = (test_msgs__msg__Nested *)malloc(sizeof(test_msgs__msg__Nested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__msg__Nested));
  bool success = test_msgs__msg__Nested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__msg__Nested__destroy(test_msgs__msg__Nested * msg)
{
  if (msg) {
    test_msgs__msg__Nested__fini(msg);
  }
  free(msg);
}


bool
test_msgs__msg__Nested__Sequence__init(test_msgs__msg__Nested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__msg__Nested * data = NULL;
  if (size) {
    data = (test_msgs__msg__Nested *)calloc(size, sizeof(test_msgs__msg__Nested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__msg__Nested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__msg__Nested__fini(&data[i - 1]);
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
test_msgs__msg__Nested__Sequence__fini(test_msgs__msg__Nested__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__msg__Nested__fini(&array->data[i]);
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

test_msgs__msg__Nested__Sequence *
test_msgs__msg__Nested__Sequence__create(size_t size)
{
  test_msgs__msg__Nested__Sequence * array = (test_msgs__msg__Nested__Sequence *)malloc(sizeof(test_msgs__msg__Nested__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__msg__Nested__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__msg__Nested__Sequence__destroy(test_msgs__msg__Nested__Sequence * array)
{
  if (array) {
    test_msgs__msg__Nested__Sequence__fini(array);
  }
  free(array);
}
