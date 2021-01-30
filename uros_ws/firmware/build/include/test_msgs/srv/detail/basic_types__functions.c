// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/basic_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `string_value`
#include "rosidl_runtime_c/string_functions.h"

bool
test_msgs__srv__BasicTypes_Request__init(test_msgs__srv__BasicTypes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    test_msgs__srv__BasicTypes_Request__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__srv__BasicTypes_Request__fini(test_msgs__srv__BasicTypes_Request * msg)
{
  if (!msg) {
    return;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
}

test_msgs__srv__BasicTypes_Request *
test_msgs__srv__BasicTypes_Request__create()
{
  test_msgs__srv__BasicTypes_Request * msg = (test_msgs__srv__BasicTypes_Request *)malloc(sizeof(test_msgs__srv__BasicTypes_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__srv__BasicTypes_Request));
  bool success = test_msgs__srv__BasicTypes_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__srv__BasicTypes_Request__destroy(test_msgs__srv__BasicTypes_Request * msg)
{
  if (msg) {
    test_msgs__srv__BasicTypes_Request__fini(msg);
  }
  free(msg);
}


bool
test_msgs__srv__BasicTypes_Request__Sequence__init(test_msgs__srv__BasicTypes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__srv__BasicTypes_Request * data = NULL;
  if (size) {
    data = (test_msgs__srv__BasicTypes_Request *)calloc(size, sizeof(test_msgs__srv__BasicTypes_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__srv__BasicTypes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__srv__BasicTypes_Request__fini(&data[i - 1]);
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
test_msgs__srv__BasicTypes_Request__Sequence__fini(test_msgs__srv__BasicTypes_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__srv__BasicTypes_Request__fini(&array->data[i]);
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

test_msgs__srv__BasicTypes_Request__Sequence *
test_msgs__srv__BasicTypes_Request__Sequence__create(size_t size)
{
  test_msgs__srv__BasicTypes_Request__Sequence * array = (test_msgs__srv__BasicTypes_Request__Sequence *)malloc(sizeof(test_msgs__srv__BasicTypes_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__srv__BasicTypes_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__srv__BasicTypes_Request__Sequence__destroy(test_msgs__srv__BasicTypes_Request__Sequence * array)
{
  if (array) {
    test_msgs__srv__BasicTypes_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `string_value`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
test_msgs__srv__BasicTypes_Response__init(test_msgs__srv__BasicTypes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    test_msgs__srv__BasicTypes_Response__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__srv__BasicTypes_Response__fini(test_msgs__srv__BasicTypes_Response * msg)
{
  if (!msg) {
    return;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
}

test_msgs__srv__BasicTypes_Response *
test_msgs__srv__BasicTypes_Response__create()
{
  test_msgs__srv__BasicTypes_Response * msg = (test_msgs__srv__BasicTypes_Response *)malloc(sizeof(test_msgs__srv__BasicTypes_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__srv__BasicTypes_Response));
  bool success = test_msgs__srv__BasicTypes_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__srv__BasicTypes_Response__destroy(test_msgs__srv__BasicTypes_Response * msg)
{
  if (msg) {
    test_msgs__srv__BasicTypes_Response__fini(msg);
  }
  free(msg);
}


bool
test_msgs__srv__BasicTypes_Response__Sequence__init(test_msgs__srv__BasicTypes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__srv__BasicTypes_Response * data = NULL;
  if (size) {
    data = (test_msgs__srv__BasicTypes_Response *)calloc(size, sizeof(test_msgs__srv__BasicTypes_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__srv__BasicTypes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__srv__BasicTypes_Response__fini(&data[i - 1]);
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
test_msgs__srv__BasicTypes_Response__Sequence__fini(test_msgs__srv__BasicTypes_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__srv__BasicTypes_Response__fini(&array->data[i]);
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

test_msgs__srv__BasicTypes_Response__Sequence *
test_msgs__srv__BasicTypes_Response__Sequence__create(size_t size)
{
  test_msgs__srv__BasicTypes_Response__Sequence * array = (test_msgs__srv__BasicTypes_Response__Sequence *)malloc(sizeof(test_msgs__srv__BasicTypes_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__srv__BasicTypes_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__srv__BasicTypes_Response__Sequence__destroy(test_msgs__srv__BasicTypes_Response__Sequence * array)
{
  if (array) {
    test_msgs__srv__BasicTypes_Response__Sequence__fini(array);
  }
  free(array);
}
