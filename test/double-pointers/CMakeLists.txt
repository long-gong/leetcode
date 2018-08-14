set(target_name "two_sum_II_test")
add_executable(${target_name} 167_two_sum_II_test.cpp)
target_link_libraries(${target_name} two_sum_II
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)


set(target_name "sum_of_square_numbers_test")
add_executable(${target_name} 633_sum_square_numbers_test.cpp)
target_link_libraries(${target_name} sum_of_square_numbers
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "reverse_vowels_test")
add_executable(${target_name} 345_reverse_vowels_test.cpp)
target_link_libraries(${target_name} reverse_vowels
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "valid_palindrome_II_test")
add_executable(${target_name} 680_valid_palindrome_II_test.cpp)
target_link_libraries(${target_name} valid_palindrome_II
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "merge_sorted_array_test")
add_executable(${target_name} 088_merge_sorted_array_test.cpp)
target_link_libraries(${target_name} merge_sorted_array
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)