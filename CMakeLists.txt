cmake_minimum_required(VERSION 3.10)
project(nbody)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(nbody SHARED ${SOURCES})
#add_library(nbody SHARED include/utils.h src/utils.cpp)

# this is for install
#install(TARGETS nbody DESTINATION lib)

add_executable(nbody-app main.cpp)

target_link_libraries(nbody-app nbody)

