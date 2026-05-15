cmake_minimum_required(VERSION 3.10)
project(flow_calc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_executable(flow_calc main.cpp)

target_include_directories(flow_calc PUBLIC include)
target_link_libraries(flow_calc flow_h)

# enable_testing()
# add_subdirectory(tests)