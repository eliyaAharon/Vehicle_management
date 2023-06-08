cmake_minimum_required(VERSION 3.24)
project(Vehicle_management)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vehicle_management main.cpp manageCar.cpp manageCar.h MyCar.cpp MyCar.h)
