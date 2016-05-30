cmake_minimum_required(VERSION 2.6)
project(headers2)

add_executable(headers2 src/main.cpp)

install(TARGETS headers2 RUNTIME DESTINATION bin)

add_subdirectory(src)

cmake_minimum_required(VERSION 2.6)

set(cmake_verbose_makefile off)

add_definitions( -O2 -Wall --std=c++11)

set( sdk_path "/home/utnso/devel/sdk" CACHE PATH "path to sdk" )