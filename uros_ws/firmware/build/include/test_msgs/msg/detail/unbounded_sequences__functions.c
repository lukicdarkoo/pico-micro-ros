// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:msg/UnboundedSequences.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bool_values`
// Member `byte_values`
// Member `char_values`
// Member `float32_values`
// Member `float64_values`
// Member `int8_values`
// Member `uint8_values`
// Member `int16_values`
// Member `uint16_values`
// Member `int32_values`
// Member `uint32_values`
// Member `int64_values`
// Member `uint64_values`
// Member `bool_values_default`
// Member `byte_values_default`
// Member `char_values_default`
// Member `float32_values_default`
// Member `float64_values_default`
// Member `int8_values_default`
// Member `uint8_values_default`
// Member `int16_values_default`
// Member `uint16_values_default`
// Member `int32_values_default`
// Member `uint32_values_default`
// Member `int64_values_default`
// Member `uint64_values_default`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
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
test_msgs__msg__UnboundedSequences__init(test_msgs__msg__UnboundedSequences * msg)
{
  if (!msg) {
    return false;
  }
  // bool_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bool_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // byte_values
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->byte_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // char_values
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->char_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // float32_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->float32_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // float64_values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->float64_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // int8_values
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->int8_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // uint8_values
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->uint8_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // int16_values
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->int16_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // uint16_values
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->uint16_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // int32_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->int32_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // uint32_values
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->uint32_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // int64_values
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->int64_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // uint64_values
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->uint64_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // string_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->string_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // basic_types_values
  if (!test_msgs__msg__BasicTypes__Sequence__init(&msg->basic_types_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // constants_values
  if (!test_msgs__msg__Constants__Sequence__init(&msg->constants_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // defaults_values
  if (!test_msgs__msg__Defaults__Sequence__init(&msg->defaults_values, 0)) {
    test_msgs__msg__UnboundedSequences__fini(msg);
    return false;
  }
  // bool_values_default
  {
    bool success = rosidl_runtime_c__boolean__Sequence__init(&msg->bool_values_default, 3);
    if (!success) {
      goto abort_init_0;
    }
  }
  msg->bool_values_default.data[0] = false;
  msg->bool_values_default.data[1] = true;
  msg->bool_values_default.data[2] = false;
  // byte_values_default
  {
    bool success = rosidl_runtime_c__octet__Sequence__init(&msg->byte_values_default, 3);
    if (!success) {
      goto abort_init_1;
    }
  }
  msg->byte_values_default.data[0] = 0;
  msg->byte_values_default.data[1] = 1;
  msg->byte_values_default.data[2] = 255;
  // char_values_default
  {
    bool success = rosidl_runtime_c__uint8__Sequence__init(&msg->char_values_default, 3);
    if (!success) {
      goto abort_init_2;
    }
  }
  msg->char_values_default.data[0] = 0;
  msg->char_values_default.data[1] = 1;
  msg->char_values_default.data[2] = 127;
  // float32_values_default
  {
    bool success = rosidl_runtime_c__float__Sequence__init(&msg->float32_values_default, 3);
    if (!success) {
      goto abort_init_3;
    }
  }
  msg->float32_values_default.data[0] = 1.125f;
  msg->float32_values_default.data[1] = 0.0f;
  msg->float32_values_default.data[2] = -1.125f;
  // float64_values_default
  {
    bool success = rosidl_runtime_c__double__Sequence__init(&msg->float64_values_default, 3);
    if (!success) {
      goto abort_init_4;
    }
  }
  msg->float64_values_default.data[0] = 3.1415l;
  msg->float64_values_default.data[1] = 0.0l;
  msg->float64_values_default.data[2] = -3.1415l;
  // int8_values_default
  {
    bool success = rosidl_runtime_c__int8__Sequence__init(&msg->int8_values_default, 3);
    if (!success) {
      goto abort_init_5;
    }
  }
  msg->int8_values_default.data[0] = 0;
  msg->int8_values_default.data[1] = 127;
  msg->int8_values_default.data[2] = -128;
  // uint8_values_default
  {
    bool success = rosidl_runtime_c__uint8__Sequence__init(&msg->uint8_values_default, 3);
    if (!success) {
      goto abort_init_6;
    }
  }
  msg->uint8_values_default.data[0] = 0;
  msg->uint8_values_default.data[1] = 1;
  msg->uint8_values_default.data[2] = 255;
  // int16_values_default
  {
    bool success = rosidl_runtime_c__int16__Sequence__init(&msg->int16_values_default, 3);
    if (!success) {
      goto abort_init_7;
    }
  }
  msg->int16_values_default.data[0] = 0;
  msg->int16_values_default.data[1] = 32767;
  msg->int16_values_default.data[2] = -32768;
  // uint16_values_default
  {
    bool success = rosidl_runtime_c__uint16__Sequence__init(&msg->uint16_values_default, 3);
    if (!success) {
      goto abort_init_8;
    }
  }
  msg->uint16_values_default.data[0] = 0;
  msg->uint16_values_default.data[1] = 1;
  msg->uint16_values_default.data[2] = 65535;
  // int32_values_default
  {
    bool success = rosidl_runtime_c__int32__Sequence__init(&msg->int32_values_default, 3);
    if (!success) {
      goto abort_init_9;
    }
  }
  msg->int32_values_default.data[0] = 0l;
  msg->int32_values_default.data[1] = 2147483647l;
  msg->int32_values_default.data[2] = (-2147483647l - 1);
  // uint32_values_default
  {
    bool success = rosidl_runtime_c__uint32__Sequence__init(&msg->uint32_values_default, 3);
    if (!success) {
      goto abort_init_10;
    }
  }
  msg->uint32_values_default.data[0] = 0ul;
  msg->uint32_values_default.data[1] = 1ul;
  msg->uint32_values_default.data[2] = 4294967295ul;
  // int64_values_default
  {
    bool success = rosidl_runtime_c__int64__Sequence__init(&msg->int64_values_default, 3);
    if (!success) {
      goto abort_init_11;
    }
  }
  msg->int64_values_default.data[0] = 0ll;
  msg->int64_values_default.data[1] = 9223372036854775807ll;
  msg->int64_values_default.data[2] = (-9223372036854775807ll - 1);
  // uint64_values_default
  {
    bool success = rosidl_runtime_c__uint64__Sequence__init(&msg->uint64_values_default, 3);
    if (!success) {
      goto abort_init_12;
    }
  }
  msg->uint64_values_default.data[0] = 0ull;
  msg->uint64_values_default.data[1] = 1ull;
  msg->uint64_values_default.data[2] = 18446744073709551615ull;
  // string_values_default
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->string_values_default, 3);
    if (!success) {
      goto abort_init_13;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default.data[0], "");
    if (!success) {
      goto abort_init_14;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default.data[1], "max value");
    if (!success) {
      goto abort_init_15;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_values_default.data[2], "min value");
    if (!success) {
      goto abort_init_16;
    }
  }
  // alignment_check
  return true;
abort_init_16:
  rosidl_runtime_c__String__fini(&msg->string_values_default.data[1]);
abort_init_15:
  rosidl_runtime_c__String__fini(&msg->string_values_default.data[0]);
abort_init_14:
  rosidl_runtime_c__String__Sequence__fini(&msg->string_values_default);
abort_init_13:
  rosidl_runtime_c__uint64__Sequence__fini(&msg->uint64_values_default);
abort_init_12:
  rosidl_runtime_c__int64__Sequence__fini(&msg->int64_values_default);
abort_init_11:
  rosidl_runtime_c__uint32__Sequence__fini(&msg->uint32_values_default);
abort_init_10:
  rosidl_runtime_c__int32__Sequence__fini(&msg->int32_values_default);
abort_init_9:
  rosidl_runtime_c__uint16__Sequence__fini(&msg->uint16_values_default);
abort_init_8:
  rosidl_runtime_c__int16__Sequence__fini(&msg->int16_values_default);
abort_init_7:
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uint8_values_default);
abort_init_6:
  rosidl_runtime_c__int8__Sequence__fini(&msg->int8_values_default);
abort_init_5:
  rosidl_runtime_c__double__Sequence__fini(&msg->float64_values_default);
abort_init_4:
  rosidl_runtime_c__float__Sequence__fini(&msg->float32_values_default);
abort_init_3:
  rosidl_runtime_c__uint8__Sequence__fini(&msg->char_values_default);
abort_init_2:
  rosidl_runtime_c__octet__Sequence__fini(&msg->byte_values_default);
abort_init_1:
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bool_values_default);
abort_init_0:
  return false;
}

void
test_msgs__msg__UnboundedSequences__fini(test_msgs__msg__UnboundedSequences * msg)
{
  if (!msg) {
    return;
  }
  // bool_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bool_values);
  // byte_values
  rosidl_runtime_c__octet__Sequence__fini(&msg->byte_values);
  // char_values
  rosidl_runtime_c__uint8__Sequence__fini(&msg->char_values);
  // float32_values
  rosidl_runtime_c__float__Sequence__fini(&msg->float32_values);
  // float64_values
  rosidl_runtime_c__double__Sequence__fini(&msg->float64_values);
  // int8_values
  rosidl_runtime_c__int8__Sequence__fini(&msg->int8_values);
  // uint8_values
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uint8_values);
  // int16_values
  rosidl_runtime_c__int16__Sequence__fini(&msg->int16_values);
  // uint16_values
  rosidl_runtime_c__uint16__Sequence__fini(&msg->uint16_values);
  // int32_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->int32_values);
  // uint32_values
  rosidl_runtime_c__uint32__Sequence__fini(&msg->uint32_values);
  // int64_values
  rosidl_runtime_c__int64__Sequence__fini(&msg->int64_values);
  // uint64_values
  rosidl_runtime_c__uint64__Sequence__fini(&msg->uint64_values);
  // string_values
  rosidl_runtime_c__String__Sequence__fini(&msg->string_values);
  // basic_types_values
  test_msgs__msg__BasicTypes__Sequence__fini(&msg->basic_types_values);
  // constants_values
  test_msgs__msg__Constants__Sequence__fini(&msg->constants_values);
  // defaults_values
  test_msgs__msg__Defaults__Sequence__fini(&msg->defaults_values);
  // bool_values_default
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bool_values_default);
  // byte_values_default
  rosidl_runtime_c__octet__Sequence__fini(&msg->byte_values_default);
  // char_values_default
  rosidl_runtime_c__uint8__Sequence__fini(&msg->char_values_default);
  // float32_values_default
  rosidl_runtime_c__float__Sequence__fini(&msg->float32_values_default);
  // float64_values_default
  rosidl_runtime_c__double__Sequence__fini(&msg->float64_values_default);
  // int8_values_default
  rosidl_runtime_c__int8__Sequence__fini(&msg->int8_values_default);
  // uint8_values_default
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uint8_values_default);
  // int16_values_default
  rosidl_runtime_c__int16__Sequence__fini(&msg->int16_values_default);
  // uint16_values_default
  rosidl_runtime_c__uint16__Sequence__fini(&msg->uint16_values_default);
  // int32_values_default
  rosidl_runtime_c__int32__Sequence__fini(&msg->int32_values_default);
  // uint32_values_default
  rosidl_runtime_c__uint32__Sequence__fini(&msg->uint32_values_default);
  // int64_values_default
  rosidl_runtime_c__int64__Sequence__fini(&msg->int64_values_default);
  // uint64_values_default
  rosidl_runtime_c__uint64__Sequence__fini(&msg->uint64_values_default);
  // string_values_default
  rosidl_runtime_c__String__Sequence__fini(&msg->string_values_default);
  // alignment_check
}

test_msgs__msg__UnboundedSequences *
test_msgs__msg__UnboundedSequences__create()
{
  test_msgs__msg__UnboundedSequences * msg = (test_msgs__msg__UnboundedSequences *)malloc(sizeof(test_msgs__msg__UnboundedSequences));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__msg__UnboundedSequences));
  bool success = test_msgs__msg__UnboundedSequences__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__msg__UnboundedSequences__destroy(test_msgs__msg__UnboundedSequences * msg)
{
  if (msg) {
    test_msgs__msg__UnboundedSequences__fini(msg);
  }
  free(msg);
}


bool
test_msgs__msg__UnboundedSequences__Sequence__init(test_msgs__msg__UnboundedSequences__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__msg__UnboundedSequences * data = NULL;
  if (size) {
    data = (test_msgs__msg__UnboundedSequences *)calloc(size, sizeof(test_msgs__msg__UnboundedSequences));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__msg__UnboundedSequences__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__msg__UnboundedSequences__fini(&data[i - 1]);
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
test_msgs__msg__UnboundedSequences__Sequence__fini(test_msgs__msg__UnboundedSequences__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__msg__UnboundedSequences__fini(&array->data[i]);
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

test_msgs__msg__UnboundedSequences__Sequence *
test_msgs__msg__UnboundedSequences__Sequence__create(size_t size)
{
  test_msgs__msg__UnboundedSequences__Sequence * array = (test_msgs__msg__UnboundedSequences__Sequence *)malloc(sizeof(test_msgs__msg__UnboundedSequences__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__msg__UnboundedSequences__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__msg__UnboundedSequences__Sequence__destroy(test_msgs__msg__UnboundedSequences__Sequence * array)
{
  if (array) {
    test_msgs__msg__UnboundedSequences__Sequence__fini(array);
  }
  free(array);
}
