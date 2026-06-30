project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)

#生成可执行文件
add_executable( ${PROJECT_NAME}   main.cpp)

#可执行 头文件
target_include_directories(${PROJECT_NAME} 
    PUBLIC
    ${Process_Dir} 
)

#可执行调用的库 链接库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    process
)