cmake_minimum_required(VERSION 3.10)

project(Demo)

add_subdirectory(dep)

add_executable(Demo main.cpp)
target_link_libraries(Demo PUBLIC keystone)
target_include_directories(Demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/dep/keystone/include)