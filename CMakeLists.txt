cmake_minimum_required(VERSION 3.0)

project(estudando_leet_code)

add_definitions("-std=c++11")

set(SRC src/add_strings.cpp
        src/arithmetic_slices.cpp
        src/fizz_buzz.cpp
        src/hex_string.cpp
        src/largest_palyndrome.cpp
        src/third_max_number.cpp
        src/nth_digit.cpp
        src/rotate_function.cpp
        src/find_the_difference.cpp
        src/find_unique.cpp
        src/ransom_note.cpp
        src/reverse_vowels.cpp
        src/main.cpp)

include_directories(.)

add_executable(leet_code ${SRC})
target_link_libraries(leet_code pthread)
