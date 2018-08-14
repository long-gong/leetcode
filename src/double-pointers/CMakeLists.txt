set(target_name "two_sum_II")
add_library(${target_name} STATIC 167_two_sum_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "sum_of_square_numbers")
add_library(${target_name} STATIC 633_sum_square_numbers.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "reverse_vowels")
add_library(${target_name} STATIC 345_reverse_vowels.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "valid_palindrome_II")
add_library(${target_name} STATIC 680_valid_palindrome_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "merge_sorted_array")
add_library(${target_name} STATIC 088_merge_sorted_array.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})