cmake_minimum_required(VERSION 3.0.2)
project(kindr_simpletest)

find_package(catkin REQUIRED
  kindr
)

catkin_package(
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/kindr_simpletest_node.cpp)
