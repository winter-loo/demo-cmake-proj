cmake_minimum_required(VERSION 3.10)

project(bblog)

add_library(bblog bblog.cc)
target_include_directories(bblog INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
