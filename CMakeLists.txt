cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(untitled main.cpp Tests/Potencia.cpp Tests/Potencia.h Tests/testRecursividad.cpp Tests/Sumatoria.cpp Tests/Sumatoria.h Tests/testLista.cpp Tests/InvierteLista.h)
set(SOURCE_FILES main.cpp)

target_link_libraries(untitled gtest gtest_main)

