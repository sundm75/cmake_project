cmake_minimum_required(VERSION 3.20)
project(planning)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)#动态库和exe都指定到bin目录下
#CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib #这是静态库的输出目录 在linux下用
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin #这是可执行文件的输出目录 在linux下用

#用 file 的文件表 生成动态库 common
file(GLOB_RECURSE SRC_LISTS ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_library(common
SHARED
${SRC_LISTS}
)
#动态库头文件
target_include_directories(common
    PUBLIC
    ${PROJECT_SOURCE_DIR}/inc
)


#生成可执行文件
add_executable( planning_main  main.cpp)

#可执行 头文件
target_include_directories(common
    PUBLIC
    ${PROJECT_SOURCE_DIR}/inc
)
#可执行调用的库 链接库
target_link_libraries(planning_main common)