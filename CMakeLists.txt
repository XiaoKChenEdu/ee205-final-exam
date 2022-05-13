cmake_minimum_required(VERSION 3.22)
project(ee205-final-exam)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205-final-exam src/config.h src/main.cpp src/classShape.h src/classRectangle.cpp src/classRectangle.h src/classSquare.cpp src/classSquare.h)
add_executable(Debug src/config.h debug/debugMain.cpp src/classShape.h src/classRectangle.cpp src/classRectangle.h src/classSquare.cpp src/classSquare.h)