# Build micro-ROS

In general, you should not care about this folder except you want to recompile ROS 2.


## Compile

Follow [this](https://micro-ros.github.io/docs/tutorials/core/first_application_linux/) tutorial to install micro-ROS and then:
```bash
mkdir src
ros2 run micro_ros_setup create_firmware_ws.sh generate_lib

cp serial_transport_external.h firmware/mcu_ws/eProsima/Micro-XRCE-DDS-Client/include/uxr/client/profile/transport/serial/
touch firmware/mcu_ws/eProsima/Micro-XRCE-DDS-Client/src/c/profile/transport/serial/serial_transport_external.c
ros2 run micro_ros_setup build_firmware.sh ${PWD}/toolchain.cmake ${PWD}/colcon.meta
```

## Relavant Files

Here is a list of the relavant files:
- `colcon.meta`: Arguments used to configure individal ament packages.
- `serial_transport_external.h`: Declaration of the external serial transport protocol.
- `toolchain.cmake`: Toolchain configuration. 
