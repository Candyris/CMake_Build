# Adding the cmake should be required for this to build
cmake_minimum_required(VERSION 3.28.3)

# c++ std to be using like C++11
set(CMAKE_CXX_STARDARD 11)

# project name and version
project(Hello VERSION 1.0.0)

# this will run main.cpp file
add_executable(Hello src/main.cpp)

# see in future cmake i will be using this instead 
# add_executable(${PROJECT_NAME} main.cpp)