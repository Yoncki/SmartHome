cmake_minimum_required(VERSION 3.5.0)
project(SmartHome VERSION 0.1.0 LANGUAGES C CXX)

add_executable(SmartHome src/main.cpp)

target_include_directories(SmartHome PRIVATE include)