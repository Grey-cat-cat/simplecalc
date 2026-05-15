include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(flow_tests test_calc.cpp)

target_link_libraries(flow_tests 
    flow_h
    GTest::gtest_main
)

add_test(NAME FlowTests COMMAND flow_tests)