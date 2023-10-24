cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "/usr/local")
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARIES})

add_executable(Rasterizer main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Rasterizer ${OpenCV_LIBRARIES})
