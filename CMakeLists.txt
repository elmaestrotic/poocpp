cmake_minimum_required(VERSION 3.20)
project(pooc__)

set(CMAKE_CXX_STANDARD 14)

add_executable(pooc__ cmake-build-debug/main.cpp cmake-build-debug/AutoMovil.cpp cmake-build-debug/AutoMovil.h)
