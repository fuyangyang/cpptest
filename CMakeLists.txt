cmake_minimum_required(VERSION 3.10)
project(cpptest)

set(CMAKE_CXX_STANDARD 11)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package (Threads REQUIRED)
add_executable(cpptest thread/threadtest1.cpp)
        #basic/Circle.cpp basic/Circle.h
target_link_libraries (cpptest ${CMAKE_THREAD_LIBS_INIT})
