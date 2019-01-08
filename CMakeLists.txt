cmake_minimum_required(VERSION 3.13)
project(functionPointers C)

set(CMAKE_C_STANDARD 99)

add_executable(functionPointers main.c di.c dependencies.c dependencies.h di.h)