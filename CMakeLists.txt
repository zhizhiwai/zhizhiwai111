cmake_minimum_required(VERSION 3.4.19)
project(zzywrite)

# 设置OpenCV路径
set(OpenCV_DIR "D:\\Programs\\Environments\\Opencv\\OpenCV-MinGW-Build-OpenCV-3.4.8-x64")

# 添加OpenCV包
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)

add_executable(zzywrite
#        main.cpp
#        车牌检测.cpp
        license_plate_detection.cpp

)

# 链接OpenCV库
target_link_libraries(zzywrite ${OpenCV_LIBS})