cmake_minimum_required(VERSION 3.30)
project(class_demo)

include_directories(include)

set(CMAKE_CXX_STANDARD 20)

add_executable(class_demo main.cpp
        header.h
        src/Person.cpp
        include/Person.h
        src/SoccerPlayer.cpp
        include/SoccerPlayer.h
        src/functions.cpp
        include/functions.h)
