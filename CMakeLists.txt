cmake_minimum_required(VERSION 3.21)
project(hospitalManagement)

set(CMAKE_CXX_STANDARD 20)

add_executable(hospitalManagement main.cpp classes/Person.h pages/mainMenu.h)
