cmake_minimum_required(VERSION 3.4.19)
project(zzywrite)

# 添加OpenCV包
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)
set(OpenCV_DIR /environment/opencv)

add_executable(zzywrite main.cpp
        车牌检测.cpp

)

# 链接OpenCV库
target_link_libraries(zzywrite ${OpenCV_LIBS})