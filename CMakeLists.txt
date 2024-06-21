cmake_minimum_required(VERSION 3.28)
project(cvm C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(cvm main.c
        common.h
        chunk.h
        chunk.c
        memory.c
        memory.h
        debug.c
        debug.h
        value.c
        value.h
        vm.c
        vm.h
        compiler.c
        compiler.h
        scanner.c
        scanner.h
)
