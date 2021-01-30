// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/load_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `package_name`
// Member `plugin_name`
// Member `node_name`
// Member `node_namespace`
// Member `remap_rules`
#include "rosidl_runtime_c/string_functions.h"
// Member `parameters`
// Member `extra_arguments`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
composition_interfaces__srv__LoadNode_Request__init(composition_interfaces__srv__LoadNode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // package_name
  if (!rosidl_runtime_c__String__init(&msg->package_name)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // plugin_name
  if (!rosidl_runtime_c__String__init(&msg->plugin_name)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__init(&msg->node_namespace)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // log_level
  // remap_rules
  if (!rosidl_runtime_c__String__Sequence__init(&msg->remap_rules, 0)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->parameters, 0)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  // extra_arguments
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->extra_arguments, 0)) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
    return false;
  }
  return true;
}

void
composition_interfaces__srv__LoadNode_Request__fini(composition_interfaces__srv__LoadNode_Request * msg)
{
  if (!msg) {
    return;
  }
  // package_name
  rosidl_runtime_c__String__fini(&msg->package_name);
  // plugin_name
  rosidl_runtime_c__String__fini(&msg->plugin_name);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // node_namespace
  rosidl_runtime_c__String__fini(&msg->node_namespace);
  // log_level
  // remap_rules
  rosidl_runtime_c__String__Sequence__fini(&msg->remap_rules);
  // parameters
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->parameters);
  // extra_arguments
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->extra_arguments);
}

composition_interfaces__srv__LoadNode_Request *
composition_interfaces__srv__LoadNode_Request__create()
{
  composition_interfaces__srv__LoadNode_Request * msg = (composition_interfaces__srv__LoadNode_Request *)malloc(sizeof(composition_interfaces__srv__LoadNode_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(composition_interfaces__srv__LoadNode_Request));
  bool success = composition_interfaces__srv__LoadNode_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
composition_interfaces__srv__LoadNode_Request__destroy(composition_interfaces__srv__LoadNode_Request * msg)
{
  if (msg) {
    composition_interfaces__srv__LoadNode_Request__fini(msg);
  }
  free(msg);
}


bool
composition_interfaces__srv__LoadNode_Request__Sequence__init(composition_interfaces__srv__LoadNode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  composition_interfaces__srv__LoadNode_Request * data = NULL;
  if (size) {
    data = (composition_interfaces__srv__LoadNode_Request *)calloc(size, sizeof(composition_interfaces__srv__LoadNode_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = composition_interfaces__srv__LoadNode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        composition_interfaces__srv__LoadNode_Request__fini(&data[i - 1]);
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
composition_interfaces__srv__LoadNode_Request__Sequence__fini(composition_interfaces__srv__LoadNode_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      composition_interfaces__srv__LoadNode_Request__fini(&array->data[i]);
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

composition_interfaces__srv__LoadNode_Request__Sequence *
composition_interfaces__srv__LoadNode_Request__Sequence__create(size_t size)
{
  composition_interfaces__srv__LoadNode_Request__Sequence * array = (composition_interfaces__srv__LoadNode_Request__Sequence *)malloc(sizeof(composition_interfaces__srv__LoadNode_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = composition_interfaces__srv__LoadNode_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
composition_interfaces__srv__LoadNode_Request__Sequence__destroy(composition_interfaces__srv__LoadNode_Request__Sequence * array)
{
  if (array) {
    composition_interfaces__srv__LoadNode_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_message`
// Member `full_node_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
composition_interfaces__srv__LoadNode_Response__init(composition_interfaces__srv__LoadNode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    composition_interfaces__srv__LoadNode_Response__fini(msg);
    return false;
  }
  // full_node_name
  if (!rosidl_runtime_c__String__init(&msg->full_node_name)) {
    composition_interfaces__srv__LoadNode_Response__fini(msg);
    return false;
  }
  // unique_id
  return true;
}

void
composition_interfaces__srv__LoadNode_Response__fini(composition_interfaces__srv__LoadNode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // full_node_name
  rosidl_runtime_c__String__fini(&msg->full_node_name);
  // unique_id
}

composition_interfaces__srv__LoadNode_Response *
composition_interfaces__srv__LoadNode_Response__create()
{
  composition_interfaces__srv__LoadNode_Response * msg = (composition_interfaces__srv__LoadNode_Response *)malloc(sizeof(composition_interfaces__srv__LoadNode_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(composition_interfaces__srv__LoadNode_Response));
  bool success = composition_interfaces__srv__LoadNode_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
composition_interfaces__srv__LoadNode_Response__destroy(composition_interfaces__srv__LoadNode_Response * msg)
{
  if (msg) {
    composition_interfaces__srv__LoadNode_Response__fini(msg);
  }
  free(msg);
}


bool
composition_interfaces__srv__LoadNode_Response__Sequence__init(composition_interfaces__srv__LoadNode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  composition_interfaces__srv__LoadNode_Response * data = NULL;
  if (size) {
    data = (composition_interfaces__srv__LoadNode_Response *)calloc(size, sizeof(composition_interfaces__srv__LoadNode_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = composition_interfaces__srv__LoadNode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        composition_interfaces__srv__LoadNode_Response__fini(&data[i - 1]);
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
composition_interfaces__srv__LoadNode_Response__Sequence__fini(composition_interfaces__srv__LoadNode_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      composition_interfaces__srv__LoadNode_Response__fini(&array->data[i]);
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

composition_interfaces__srv__LoadNode_Response__Sequence *
composition_interfaces__srv__LoadNode_Response__Sequence__create(size_t size)
{
  composition_interfaces__srv__LoadNode_Response__Sequence * array = (composition_interfaces__srv__LoadNode_Response__Sequence *)malloc(sizeof(composition_interfaces__srv__LoadNode_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = composition_interfaces__srv__LoadNode_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
composition_interfaces__srv__LoadNode_Response__Sequence__destroy(composition_interfaces__srv__LoadNode_Response__Sequence * array)
{
  if (array) {
    composition_interfaces__srv__LoadNode_Response__Sequence__fini(array);
  }
  free(array);
}
