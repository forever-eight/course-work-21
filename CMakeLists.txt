cmake_minimum_required(VERSION 3.17)
project(kurs)

set(CMAKE_CXX_STANDARD 14)

add_executable(kurs main.cpp interview.h AbstractFactory.h out.h Front_list.h decorator.h)