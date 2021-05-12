cmake_minimum_required(VERSION 3.0)
project(math_test)
include_directories(../inc)
include_directories(../scr)
set(HEADERS ../inc/math_methods.h)
set(SOURCES ../src/math_methods.c test.c)
add_executable(math_test ${HEADERS} ${SOURCES})

