cmake_minimum_required(VERSION 3.24)
project(demo)

set(CMAKE_CXX_STANDARD 17)

set (SOURCES source/bootstrap.cpp)

include (${CMAKE_BINARY_DIR}/../conanbuildinfo.cmake)
conan_basic_setup ()

add_executable(demo ${SOURCES})
target_link_libraries(demo ${CONAN_LIBS})
