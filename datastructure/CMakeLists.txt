cmake_minimum_required(VERSION 3.7)
project(datastructure)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES linkedList.h linkedList.c bucketSort.c fatal.h radixSort.c testSwitch.h countingSort.c tree.h tree.c sort.c)
add_executable(datastructure ${SOURCE_FILES})