cmake_minimum_required(VERSION 3.2)
project(offline_ros)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wno-unused-parameter -Wno-deprecated-declarations")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -Wno-deprecated-declarations")

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 9)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-catch-value")
endif()

add_definitions(-D_FILE_OFFSET_BITS=64)
find_package(BZip2 REQUIRED)
include_directories(${BZIP2_INCLUDE_DIR})
add_definitions(${BZIP2_DEFINITIONS})

find_library(lz4_LIBRARIES NAMES lz4)
include_directories(${lz4_INCLUDE_DIRS})

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

find_package(PCL REQUIRED COMPONENTS common io)
include_directories(${PCL_INCLUDE_DIRS})

find_package(Boost REQUIRED system thread date_time filesystem program_options regex)
include_directories(${Boost_INCLUDE_DIRS})

set(_opencv_version 4)
find_package(OpenCV ${_opencv_version} QUIET)
if(NOT OpenCV_FOUND)
  message(STATUS "Did not find OpenCV 4, trying OpenCV 3")
  set(_opencv_version 3)
endif()

find_package(OpenCV ${_opencv_version} REQUIRED
  COMPONENTS
    opencv_core
    opencv_imgproc
    opencv_imgcodecs
  CONFIG
)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(include)

file(GLOB CONSOLE_BRIDGE_SRCS src/console_bridge/console.cpp)
file(GLOB CPP_COMMON_SRCS src/cpp_common/*.cpp)
file(GLOB ROSCPP_SERIALIZATION_SRCS src/roscpp_serialization/serialization.cpp)
file(GLOB ROSTIME_SRCS src/rostime/*.cpp)
file(GLOB CV_BRIDGE_SRCS src/cv_bridge/*.cpp)
file(GLOB ROSBAG_SRCS src/rosbag_storage/*.cpp)
file(GLOB ROSLZ4_SRCS src/roslz4/*.c)

add_library(${PROJECT_NAME} STATIC 
  ${ROSBAG_SRCS} 
  ${ROSTIME_SRCS} 
  ${CPP_COMMON_SRCS} 
  ${ROSCPP_SERIALIZATION_SRCS} 
  ${ROSLZ4_SRCS} 
  ${CONSOLE_BRIDGE_SRCS} 
  ${CV_BRIDGE_SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/thirdparty>
)
target_link_libraries(${PROJECT_NAME} PUBLIC ${Boost_LIBRARIES} ${BZIP2_LIBRARIES} ${lz4_LIBRARIES} ${OpenCV_LIBRARIES})