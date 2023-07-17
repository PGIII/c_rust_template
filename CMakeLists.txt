cmake_minimum_required(VERSION 3.22)
project(rusty_c C CXX ASM)
include(ExternalProject)

set(CMAKE_COLOR_DIAGNOSTICS ON)
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release)
endif()

add_executable(rusty_c)
target_sources(rusty_c 
	PUBLIC src/main.c
)
target_link_libraries(rusty_c
	rust_hello_world
)

add_subdirectory(lib/rust_hello_world)
