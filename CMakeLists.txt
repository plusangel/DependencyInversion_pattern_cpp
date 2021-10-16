cmake_minimum_required(VERSION 3.20)
project(DependencyInversion_cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

# plain approach
add_library(light_bulb_plain INTERFACE include/light_bulb_plain.h)
add_library(electric_power_switch_plain INTERFACE include/electric_power_switch_plain.h)

add_executable(plain_approach plain.cpp)

# dependency inversion approach
add_library(switchable INTERFACE include/switchable.h)
add_library(light_bulb INTERFACE include/light_bulb.h)
add_library(fan INTERFACE include/fan.h)
add_library(electric_power_switch INTERFACE include/electric_power_switch.h)

add_executable(di_approach di_approach.cpp)