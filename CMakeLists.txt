cmake_minimum_required(VERSION 3.19)
project(ConvertImage)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak -O1")

add_library(ConvertImage SHARED ConvertImage.cpp ConvertImage.h IConvertImage.h IConvertImage.cpp IPO.h IEO.h)

link_libraries(ConvertImage)

add_executable(Test main.cpp ${ConvertImage})
