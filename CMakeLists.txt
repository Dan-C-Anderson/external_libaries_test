cmake_minimum_required(VERSION 3.30)
project(class_demo)

set(CMAKE_CXX_STANDARD 20)

add_executable(class_demo main.cpp
        header.h
        Person.cpp
        Person.h
        SoccerPlayer.cpp
        SoccerPlayer.h)
