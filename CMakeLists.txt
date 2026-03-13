project(simple_calc)

set(MAIN_SOURCE main.cpp)
include_directories(include)

add_executable(simple_calc ${MAIN_SOURCE})
add_subdirectory(src)
target_link_libraries(simple_calc calc)
