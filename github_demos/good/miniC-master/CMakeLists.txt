cmake_minimum_required(VERSION 3.7)
project(miniC)

set(CMAKE_C_STANDARD 99)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

find_package(BISON)
find_package(FLEX)


BISON_TARGET(MyParser c.y ${CMAKE_CURRENT_BINARY_DIR}/parser.c)
FLEX_TARGET(MyScanner c.l ${CMAKE_CURRENT_BINARY_DIR}/lexer.c)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)


add_executable(miniC

        y.tab.c
        )
target_link_libraries(miniC l y)