cmake_minimum_required(VERSION 3.1)
project(task_2)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./results/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./results/bin)
set(CMAKE_INSTALL_PREFIX ./install)

add_subdirectory(src)

install(DIRECTORY include DESTINATION .)