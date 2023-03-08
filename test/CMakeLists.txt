cmake_minimum_required(VERSION 3.24)

set(This Test)

add_executable(Test testEntityStatus.cpp)

target_link_libraries(Test PUBLIC
        gmock gmock_main
        gtest gtest_main
)

add_test(NAME Test
        COMMAND Test
)
