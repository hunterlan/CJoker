cmake_minimum_required(VERSION 3.29)
project(CJoker C)

set(CMAKE_C_STANDARD 99)

file(GLOB SOURCES "src/*.c")
file(GLOB HEADERS "include/*.h")

add_executable(CJoker ${SOURCES}
        ${HEADERS})

find_package(PkgConfig REQUIRED)
pkg_check_modules(CUNIT REQUIRED cunit)

include_directories(${CUNIT_INCLUDE_DIRS})
link_directories(${CUNIT_LIBRARY_DIRS})

file(GLOB TEST_SOURCES "test/src/*.c")
file(GLOB TEST_HEADERS "test/include/*.h")

add_executable(CJokerTest
        test/main_test.c
        ${TEST_SOURCES}
        ${TEST_HEADERS}
        src/card.c
        include/card.h)
target_link_libraries(CJokerTest ${CUNIT_LIBRARIES})
