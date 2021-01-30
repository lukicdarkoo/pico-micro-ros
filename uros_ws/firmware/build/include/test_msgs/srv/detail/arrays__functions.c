// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/arrays__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `string_values`
// Member `string_values_default`
#include "rosidl_runtime_c/string_functions.h"
// Member `basic_types_values`
#include "test_msgs/msg/detail/basic_types__functions.h"
// Member `constants_values`
#include "test_msgs/msg/detail/constants__functions.h"
// Member `defaults_values`
#include "test_msgs/msg/detail/defaults__functions.h"

bool
test_msgs__srv__Arrays_Request__init(test_msgs__srv__Arrays_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bool_values
  // byte_values
  // char_values
  // float32_values
  // float64_values
  // int8_values
  // uint8_values
  // int16_values
  // uint16_values
  // int32_values
  // uint32_values
  // int64_values
  // uint64_values
  // string_values
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->string_values[i])) {
      test_msgs__srv__Arrays_Request__fini(msg);
      return false;
    }
  }
  // basic_types_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__BasicTypes__init(&msg->basic_types_values[i])) {
      test_msgs__srv__Arrays_Request__fini(msg);
      return false;
    }
  }
  // constants_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__Constants__init(&msg->constants_values[i])) {
      test_msgs__srv__Arrays_Request__fini(msg);
      return false;
    }
  }
  // defaults_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__Defaults__init(&msg->defaults_values[i])) {
      test_msgs__srv__Arrays_Request__fini(msg);
      return false;
    }
  }
  // bool_values_default
  msg->bool_values_default[0] = false;
  msg->bool_values_default[1] = true;
  msg->bool_values_default[2] = false;
  // byte_values_default
  msg->byte_values_default[0] = 0;
  msg->byte_values_default[1] = 1;
  msg->byte_values_default[2] = 255;
  // char_values_default
  msg->char_values_default[0] = 0;
  msg->char_values_default[1] = 1;
  msg->char_values_default[2] = 127;
  // float32_values_default
  msg->float32_values_default[0] = 1.125f;
  msg->float32_values_default[1] = 0.0f;
  msg->float32_values_default[2] = -1.125f;
  // float64_values_default
  msg->float64_values_default[0] = 3.1415l;
  msg->float64_values_default[1] = 0.0l;
  msg->float64_values_default[2] = -3.1415l;
  // int8_values_default
  msg->int8_values_default[0] = 0;
  msg->int8_values_default[1] = 127;
  msg->int8_values_default[2] = -128;
  // uint8_values_default
  msg->uint8_values_default[0] = 0;
  msg->uint8_values_default[1] = 1;
  msg->uint8_values_default[2] = 255;
  // int16_values_default
  msg->int16_values_default[0] = 0;
  msg->int16_values_default[1] = 32767;
  msg->int16_values_default[2] = -32768;
  // uint16_values_default
  msg->uint16_values_default[0] = 0;
  msg->uint16_values_default[1] = 1;
  msg->uint16_values_default[2] = 65535;
  // int32_values_default
  msg->int32_values_default[0] = 0l;
  msg->int32_values_default[1] = 2147483647l;
  msg->int32_values_default[2] = (-2147483647l - 1);
  // uint32_values_default
  msg->uint32_values_default[0] = 0ul;
  msg->uint32_values_default[1] = 1ul;
  msg->uint32_values_default[2] = 4294967295ul;
  // int64_values_default
  msg->int64_values_default[0] = 0ll;
  msg->int64_values_default[1] = 9223372036854775807ll;
  msg->int64_values_default[2] = (-9223372036854775807ll - 1);
  // uint64_values_default
  msg->uint64_values_default[0] = 0ull;
  msg->uint64_values_default[1] = 1ull;
  msg->uint64_values_default[2] = 18446744073709551615ull;
  // string_values_default
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->string_values_default[i])) {
      test_msgs__srv__Arrays_Request__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[0], "");
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[1], "max value");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[2], "min value");
    if (!success) {
      goto abort_init_2;
    }
  }
  return true;
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->string_values_default[1]);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->string_values_default[0]);
abort_init_0:
  return false;
}

void
test_msgs__srv__Arrays_Request__fini(test_msgs__srv__Arrays_Request * msg)
{
  if (!msg) {
    return;
  }
  // bool_values
  // byte_values
  // char_values
  // float32_values
  // float64_values
  // int8_values
  // uint8_values
  // int16_values
  // uint16_values
  // int32_values
  // uint32_values
  // int64_values
  // uint64_values
  // string_values
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->string_values[i]);
  }
  // basic_types_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__BasicTypes__fini(&msg->basic_types_values[i]);
  }
  // constants_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__Constants__fini(&msg->constants_values[i]);
  }
  // defaults_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__Defaults__fini(&msg->defaults_values[i]);
  }
  // bool_values_default
  // byte_values_default
  // char_values_default
  // float32_values_default
  // float64_values_default
  // int8_values_default
  // uint8_values_default
  // int16_values_default
  // uint16_values_default
  // int32_values_default
  // uint32_values_default
  // int64_values_default
  // uint64_values_default
  // string_values_default
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->string_values_default[i]);
  }
}

test_msgs__srv__Arrays_Request *
test_msgs__srv__Arrays_Request__create()
{
  test_msgs__srv__Arrays_Request * msg = (test_msgs__srv__Arrays_Request *)malloc(sizeof(test_msgs__srv__Arrays_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__srv__Arrays_Request));
  bool success = test_msgs__srv__Arrays_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__srv__Arrays_Request__destroy(test_msgs__srv__Arrays_Request * msg)
{
  if (msg) {
    test_msgs__srv__Arrays_Request__fini(msg);
  }
  free(msg);
}


bool
test_msgs__srv__Arrays_Request__Sequence__init(test_msgs__srv__Arrays_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__srv__Arrays_Request * data = NULL;
  if (size) {
    data = (test_msgs__srv__Arrays_Request *)calloc(size, sizeof(test_msgs__srv__Arrays_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__srv__Arrays_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__srv__Arrays_Request__fini(&data[i - 1]);
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
test_msgs__srv__Arrays_Request__Sequence__fini(test_msgs__srv__Arrays_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__srv__Arrays_Request__fini(&array->data[i]);
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

test_msgs__srv__Arrays_Request__Sequence *
test_msgs__srv__Arrays_Request__Sequence__create(size_t size)
{
  test_msgs__srv__Arrays_Request__Sequence * array = (test_msgs__srv__Arrays_Request__Sequence *)malloc(sizeof(test_msgs__srv__Arrays_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__srv__Arrays_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__srv__Arrays_Request__Sequence__destroy(test_msgs__srv__Arrays_Request__Sequence * array)
{
  if (array) {
    test_msgs__srv__Arrays_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `string_values`
// Member `string_values_default`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `basic_types_values`
// already included above
// #include "test_msgs/msg/detail/basic_types__functions.h"
// Member `constants_values`
// already included above
// #include "test_msgs/msg/detail/constants__functions.h"
// Member `defaults_values`
// already included above
// #include "test_msgs/msg/detail/defaults__functions.h"

bool
test_msgs__srv__Arrays_Response__init(test_msgs__srv__Arrays_Response * msg)
{
  if (!msg) {
    return false;
  }
  // bool_values
  // byte_values
  // char_values
  // float32_values
  // float64_values
  // int8_values
  // uint8_values
  // int16_values
  // uint16_values
  // int32_values
  // uint32_values
  // int64_values
  // uint64_values
  // string_values
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->string_values[i])) {
      test_msgs__srv__Arrays_Response__fini(msg);
      return false;
    }
  }
  // basic_types_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__BasicTypes__init(&msg->basic_types_values[i])) {
      test_msgs__srv__Arrays_Response__fini(msg);
      return false;
    }
  }
  // constants_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__Constants__init(&msg->constants_values[i])) {
      test_msgs__srv__Arrays_Response__fini(msg);
      return false;
    }
  }
  // defaults_values
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__Defaults__init(&msg->defaults_values[i])) {
      test_msgs__srv__Arrays_Response__fini(msg);
      return false;
    }
  }
  // bool_values_default
  msg->bool_values_default[0] = false;
  msg->bool_values_default[1] = true;
  msg->bool_values_default[2] = false;
  // byte_values_default
  msg->byte_values_default[0] = 0;
  msg->byte_values_default[1] = 1;
  msg->byte_values_default[2] = 255;
  // char_values_default
  msg->char_values_default[0] = 0;
  msg->char_values_default[1] = 1;
  msg->char_values_default[2] = 127;
  // float32_values_default
  msg->float32_values_default[0] = 1.125f;
  msg->float32_values_default[1] = 0.0f;
  msg->float32_values_default[2] = -1.125f;
  // float64_values_default
  msg->float64_values_default[0] = 3.1415l;
  msg->float64_values_default[1] = 0.0l;
  msg->float64_values_default[2] = -3.1415l;
  // int8_values_default
  msg->int8_values_default[0] = 0;
  msg->int8_values_default[1] = 127;
  msg->int8_values_default[2] = -128;
  // uint8_values_default
  msg->uint8_values_default[0] = 0;
  msg->uint8_values_default[1] = 1;
  msg->uint8_values_default[2] = 255;
  // int16_values_default
  msg->int16_values_default[0] = 0;
  msg->int16_values_default[1] = 32767;
  msg->int16_values_default[2] = -32768;
  // uint16_values_default
  msg->uint16_values_default[0] = 0;
  msg->uint16_values_default[1] = 1;
  msg->uint16_values_default[2] = 65535;
  // int32_values_default
  msg->int32_values_default[0] = 0l;
  msg->int32_values_default[1] = 2147483647l;
  msg->int32_values_default[2] = (-2147483647l - 1);
  // uint32_values_default
  msg->uint32_values_default[0] = 0ul;
  msg->uint32_values_default[1] = 1ul;
  msg->uint32_values_default[2] = 4294967295ul;
  // int64_values_default
  msg->int64_values_default[0] = 0ll;
  msg->int64_values_default[1] = 9223372036854775807ll;
  msg->int64_values_default[2] = (-9223372036854775807ll - 1);
  // uint64_values_default
  msg->uint64_values_default[0] = 0ull;
  msg->uint64_values_default[1] = 1ull;
  msg->uint64_values_default[2] = 18446744073709551615ull;
  // string_values_default
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->string_values_default[i])) {
      test_msgs__srv__Arrays_Response__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[0], "");
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[1], "max value");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default[2], "min value");
    if (!success) {
      goto abort_init_2;
    }
  }
  return true;
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->string_values_default[1]);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->string_values_default[0]);
abort_init_0:
  return false;
}

void
test_msgs__srv__Arrays_Response__fini(test_msgs__srv__Arrays_Response * msg)
{
  if (!msg) {
    return;
  }
  // bool_values
  // byte_values
  // char_values
  // float32_values
  // float64_values
  // int8_values
  // uint8_values
  // int16_values
  // uint16_values
  // int32_values
  // uint32_values
  // int64_values
  // uint64_values
  // string_values
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->string_values[i]);
  }
  // basic_types_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__BasicTypes__fini(&msg->basic_types_values[i]);
  }
  // constants_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__Constants__fini(&msg->constants_values[i]);
  }
  // defaults_values
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__Defaults__fini(&msg->defaults_values[i]);
  }
  // bool_values_default
  // byte_values_default
  // char_values_default
  // float32_values_default
  // float64_values_default
  // int8_values_default
  // uint8_values_default
  // int16_values_default
  // uint16_values_default
  // int32_values_default
  // uint32_values_default
  // int64_values_default
  // uint64_values_default
  // string_values_default
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->string_values_default[i]);
  }
}

test_msgs__srv__Arrays_Response *
test_msgs__srv__Arrays_Response__create()
{
  test_msgs__srv__Arrays_Response * msg = (test_msgs__srv__Arrays_Response *)malloc(sizeof(test_msgs__srv__Arrays_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__srv__Arrays_Response));
  bool success = test_msgs__srv__Arrays_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__srv__Arrays_Response__destroy(test_msgs__srv__Arrays_Response * msg)
{
  if (msg) {
    test_msgs__srv__Arrays_Response__fini(msg);
  }
  free(msg);
}


bool
test_msgs__srv__Arrays_Response__Sequence__init(test_msgs__srv__Arrays_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__srv__Arrays_Response * data = NULL;
  if (size) {
    data = (test_msgs__srv__Arrays_Response *)calloc(size, sizeof(test_msgs__srv__Arrays_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__srv__Arrays_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__srv__Arrays_Response__fini(&data[i - 1]);
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
test_msgs__srv__Arrays_Response__Sequence__fini(test_msgs__srv__Arrays_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__srv__Arrays_Response__fini(&array->data[i]);
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

test_msgs__srv__Arrays_Response__Sequence *
test_msgs__srv__Arrays_Response__Sequence__create(size_t size)
{
  test_msgs__srv__Arrays_Response__Sequence * array = (test_msgs__srv__Arrays_Response__Sequence *)malloc(sizeof(test_msgs__srv__Arrays_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__srv__Arrays_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__srv__Arrays_Response__Sequence__destroy(test_msgs__srv__Arrays_Response__Sequence * array)
{
  if (array) {
    test_msgs__srv__Arrays_Response__Sequence__fini(array);
  }
  free(array);
}
