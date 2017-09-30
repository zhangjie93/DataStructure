cmake_minimum_required(VERSION 3.7)
project(datastructure)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES list/linkedList.h list/linkedList.c sort/bucketSort.c fatal.h sort/radixSort.c testSwitch.h sort/countingSort.c tree/tree.h tree/tree.c sort/sort.c hash/HashSeq.h)
add_executable(datastructure ${SOURCE_FILES})