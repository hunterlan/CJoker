cmake_minimum_required(VERSION 3.31)
project(CJoker C)

set(CMAKE_C_STANDARD 99)

add_executable(CJoker src/main.c
        include/card.h
        src/card.c)
