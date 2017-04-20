cmake_minimum_required (VERSION 3.1)
project (inih)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
	ini.c
	cpp/INIReader.cpp
)

include_directories(include/)

add_library(inih STATIC ${SOURCES})
