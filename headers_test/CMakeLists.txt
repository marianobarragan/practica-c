project(headers_test)

cmake_minimum_required(VERSION 2.6)

set(cmake_verbose_makefile off)

add_definitions( -O2 -Wall --std=c++11)

set( sdk_path "/home/utnso/devel/sdk" CACHE PATH "path to sdk" )

add_subdirectory(src)