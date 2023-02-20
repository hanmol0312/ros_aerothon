cmake_minimum_required(VERSION 3.0.2)
project(arduino_robot_test)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)
catkin_package(

)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(simple_publisher ${arduino_robot_test_SOURCE_DIR}/simple_publisher.cpp)
target_link_libraries(simple_publisher ${catkin_LIBRARIES})


add_executable(simple_subscriber ${arduino_robot_test_SOURCE_DIR}/simple_subscriber.cpp)
target_link_libraries(simple_subscriber ${catkin_LIBRARIES})