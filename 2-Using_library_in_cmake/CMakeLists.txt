cmake_minimum_required(VERSION 3.28.3)
project(Make_Library VERSION 1.0.0)

#set(CMAKE_BUILD_TYPE Release)

add_library(CandyMath STATIC
    CandyMath/math.cpp 
    )


add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CandyMath)