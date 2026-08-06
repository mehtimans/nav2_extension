cmake_minimum_required(VERSION 3.8)
project(nav2_extension)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake REQUIRED)
find_package(nav2_core REQUIRED)

ament_package()