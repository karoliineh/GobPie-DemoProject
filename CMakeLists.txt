cmake_minimum_required(VERSION 3.12)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the project name
project(gobpie-demoproject VERSION 1.0)

# Add subdirectories
add_subdirectory(src/subproblems)

add_executable(main src/main.c)
