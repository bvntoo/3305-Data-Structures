cmake_minimum_required(VERSION 3.15)
project(Lab11)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab11  bintree.h bintree.template build_tree.cpp build_tree.h main.cpp)