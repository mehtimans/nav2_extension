cmake_minimum_required(VERSION 3.8)
project(nav2_extension)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake REQUIRED)
find_package(nav2_core REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(nav2_costmap_2d REQUIRED)

add_library(threshold_goal_checker SHARED
  src/threshold_goal_checker.cpp
)

target_include_directories(threshold_goal_checker PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

ament_target_dependencies(threshold_goal_checker
  nav2_core
  rclcpp_lifecycle
  nav2_costmap_2d
)

ament_package()