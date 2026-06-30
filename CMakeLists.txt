cmake_minimum_required(VERSION 3.20)
project(planning)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)#动态库和exe都指定到bin目录下
#CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib #这是静态库的输出目录 在linux下用
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin #这是可执行文件的输出目录 在linux下用


# 路径变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

#添加子目录
add_subdirectory(src)
