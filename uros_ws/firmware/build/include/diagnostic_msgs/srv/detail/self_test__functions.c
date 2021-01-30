// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/srv/detail/self_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
diagnostic_msgs__srv__SelfTest_Request__init(diagnostic_msgs__srv__SelfTest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
diagnostic_msgs__srv__SelfTest_Request__fini(diagnostic_msgs__srv__SelfTest_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

diagnostic_msgs__srv__SelfTest_Request *
diagnostic_msgs__srv__SelfTest_Request__create()
{
  diagnostic_msgs__srv__SelfTest_Request * msg = (diagnostic_msgs__srv__SelfTest_Request *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__srv__SelfTest_Request));
  bool success = diagnostic_msgs__srv__SelfTest_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__srv__SelfTest_Request__destroy(diagnostic_msgs__srv__SelfTest_Request * msg)
{
  if (msg) {
    diagnostic_msgs__srv__SelfTest_Request__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__srv__SelfTest_Request__Sequence__init(diagnostic_msgs__srv__SelfTest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__srv__SelfTest_Request * data = NULL;
  if (size) {
    data = (diagnostic_msgs__srv__SelfTest_Request *)calloc(size, sizeof(diagnostic_msgs__srv__SelfTest_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__srv__SelfTest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__srv__SelfTest_Request__fini(&data[i - 1]);
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
diagnostic_msgs__srv__SelfTest_Request__Sequence__fini(diagnostic_msgs__srv__SelfTest_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__srv__SelfTest_Request__fini(&array->data[i]);
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

diagnostic_msgs__srv__SelfTest_Request__Sequence *
diagnostic_msgs__srv__SelfTest_Request__Sequence__create(size_t size)
{
  diagnostic_msgs__srv__SelfTest_Request__Sequence * array = (diagnostic_msgs__srv__SelfTest_Request__Sequence *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__srv__SelfTest_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__srv__SelfTest_Request__Sequence__destroy(diagnostic_msgs__srv__SelfTest_Request__Sequence * array)
{
  if (array) {
    diagnostic_msgs__srv__SelfTest_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `status`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
diagnostic_msgs__srv__SelfTest_Response__init(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    diagnostic_msgs__srv__SelfTest_Response__fini(msg);
    return false;
  }
  // passed
  // status
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->status, 0)) {
    diagnostic_msgs__srv__SelfTest_Response__fini(msg);
    return false;
  }
  return true;
}

void
diagnostic_msgs__srv__SelfTest_Response__fini(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // passed
  // status
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->status);
}

diagnostic_msgs__srv__SelfTest_Response *
diagnostic_msgs__srv__SelfTest_Response__create()
{
  diagnostic_msgs__srv__SelfTest_Response * msg = (diagnostic_msgs__srv__SelfTest_Response *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__srv__SelfTest_Response));
  bool success = diagnostic_msgs__srv__SelfTest_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__srv__SelfTest_Response__destroy(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (msg) {
    diagnostic_msgs__srv__SelfTest_Response__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__srv__SelfTest_Response__Sequence__init(diagnostic_msgs__srv__SelfTest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__srv__SelfTest_Response * data = NULL;
  if (size) {
    data = (diagnostic_msgs__srv__SelfTest_Response *)calloc(size, sizeof(diagnostic_msgs__srv__SelfTest_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__srv__SelfTest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__srv__SelfTest_Response__fini(&data[i - 1]);
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
diagnostic_msgs__srv__SelfTest_Response__Sequence__fini(diagnostic_msgs__srv__SelfTest_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__srv__SelfTest_Response__fini(&array->data[i]);
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

diagnostic_msgs__srv__SelfTest_Response__Sequence *
diagnostic_msgs__srv__SelfTest_Response__Sequence__create(size_t size)
{
  diagnostic_msgs__srv__SelfTest_Response__Sequence * array = (diagnostic_msgs__srv__SelfTest_Response__Sequence *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__srv__SelfTest_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__srv__SelfTest_Response__Sequence__destroy(diagnostic_msgs__srv__SelfTest_Response__Sequence * array)
{
  if (array) {
    diagnostic_msgs__srv__SelfTest_Response__Sequence__fini(array);
  }
  free(array);
}
