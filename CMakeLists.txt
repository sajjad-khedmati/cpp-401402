cmake_minimum_required(VERSION 3.21)
project(project_test_hospital)

set(CMAKE_CXX_STANDARD 20)

add_executable(project_test_hospital main.cpp pages/mainMenu.h classes/Person.h)
