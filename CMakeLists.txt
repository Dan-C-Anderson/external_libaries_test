cmake_minimum_required(VERSION 3.30)
project(class_demo)

include_directories(include)

set(CMAKE_CXX_STANDARD 20)

find_package(CGAL REQUIRED)

add_executable(class_demo main.cpp
        src/Person.cpp
        include/Person.h
        src/SoccerPlayer.cpp
        include/SoccerPlayer.h
        src/functions.cpp
        include/functions.h)

target_link_libraries(class_demo CGAL::CGAL)

target_include_directories(class_demo PRIVATE ${CGAL_INCLUDE_DIRS})