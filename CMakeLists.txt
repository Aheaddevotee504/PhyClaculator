cmake_minimum_required(VERSION 3.9)
project(PhyCalculator)

set(CMAKE_CXX_STANDARD 11)

add_executable(PhyCalculator main.cpp Kinematics.cpp Kinematics.h Problems.cpp Problems.h)