# Raspberry Pi Pico and ROS 2

The Pico is an amazing microcontroller and I couldn't wait for ROS 2 support or Arduino Core, so here is my approach.
Once the [Arduino Core for RP2040](https://blog.arduino.cc/2021/01/20/welcome-raspberry-pi-to-the-world-of-microcontrollers/) is out it will be easier to use [`micro_ros_arduino`](https://github.com/micro-ROS/micro_ros_arduino).

## Getting Started

Here is a quick way to compile the example given in this repository.

### 1. Install Pico SDK

First, make sure you the Pico SDK properly installed and configured:

```bash
# Install dependencies
sudo apt install cmake gcc-arm-none-eabi doxygen libnewlib-arm-none-eabi
git clone --recurse-submodules https://github.com/raspberrypi/pico-sdk.git $HOME/pico-sdk

# Configure environment
echo "export PICO_SDK_PATH=$HOME/pico-sdk" >> ~/.bashrc
source ~/.bashrc
```

### 2. Compile Example

Once the Pico SDK is ready compile the example: 

```bash
mkdir build
cd build
cmake ..
make
```

To flash, hold the boot button, plug the USB and run:
```
cp pico_micro_ros_example.uf2 /media/$USER/RPI-RP2
```

### 3. Start Micro-ROS Agent
Micro-ROS follows the client-server architecture, so you need to start the Micro-ROS Agent:

```bash
docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:foxy serial --dev /dev/ttyACM0 -b 115200
```

## What files are relavant?
- `pico_ros.c`: Contains the board specific implementation of the serial transport (no change needed).
- `CMakeLists.txt`: CMake file.
- `pico_micro_ros_example.c`: The actual ROS 2 publisher.

## How Micro-ROS is compiled?

Micro-ROS is precompiled for Raspberry Pi Pico in [`uros_ws/firmware/build`](uros_ws/firmware/build).
If you want to compile by yourself then check the [`uros_ws`](uros_ws) directory.

## How to use Pico SDK?

Here is a Raspberry Pi Pico C/C++ SDK documentation:  
https://datasheets.raspberrypi.org/pico/raspberry-pi-pico-c-sdk.pdf
