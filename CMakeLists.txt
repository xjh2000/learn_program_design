cmake_minimum_required(VERSION 3.23)
project(learn_program_design)


set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(learn_program_design part_1.cpp part_2.cpp part_3.cpp part_4.cpp part_5.cpp)

target_link_libraries(learn_program_design gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(learn_program_design)