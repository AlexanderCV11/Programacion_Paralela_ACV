cmake_minimum_required(VERSION 3.26)
project(Actividad_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Actividad_2 main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(Actividad_2 ${OpenCV_LIBS})