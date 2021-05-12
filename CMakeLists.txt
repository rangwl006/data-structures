cmake_minimum_required(VERSION 3.20)
project(data_structures)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(linked-list)
add_subdirectory(trees)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC LinkedList Trees)