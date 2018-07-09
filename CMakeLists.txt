cmake_minimum_required(VERSION 3.10)
project(cpptest)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpptest
        thread/threadtest.cpp)
