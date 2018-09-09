set(target_name "intersection_two_linked_lists_test")
add_executable(${target_name} 160_intersection_of_two_linked_list_test.cpp)
target_link_libraries(${target_name} intersection_two_linked_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "reverse_linked_list_test")
add_executable(${target_name} 206_reverse_linked_list_test.cc)
target_link_libraries(${target_name} reverse_linked_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "merge_two_linked_list_test")
add_executable(${target_name} 021_merge_two_linked_list_test.cpp)
target_link_libraries(${target_name} merge_two_linked_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "remove_duplicates_test")
add_executable(${target_name} 083_remove_duplicates_test.cpp)
target_link_libraries(${target_name} remove_duplicates gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "remove_nth_node_test")
add_executable(${target_name} 019_remove_nth_node_test.cpp)
target_link_libraries(${target_name} remove_nth_node gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "swap_node_test")
add_executable(${target_name} 024_swap_node_test.cpp)
target_link_libraries(${target_name} swap_node gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "add_numbers_II_test")
add_executable(${target_name} 445_add_numbers_II_test.cpp)
target_link_libraries(${target_name} add_numbers_II gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "palindrome_test")
add_executable(${target_name} 234_palindrome_test.cpp)
target_link_libraries(${target_name} palindrome gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "split_linked_list_test")
add_executable(${target_name} 725_split_linked_list_test.cpp)
target_link_libraries(${target_name} split_linked_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "odd_even_linked_list_test")
add_executable(${target_name} 328_odd_even_linked_list_test.cpp)
target_link_libraries(${target_name} odd_even_linked_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "rotate_list_test")
add_executable(${target_name} 061_rotate_list_test.cpp)
target_link_libraries(${target_name} rotate_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "duplicates_remove_II_test")
add_executable(${target_name} 082_remove_duplicates_from_sorted_list_II_test.cpp)
target_link_libraries(${target_name} duplicates_remove_II gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)


set(target_name "partition_list_test")
add_executable(${target_name} 086_partition_list_test.cpp)
target_link_libraries(${target_name} partition_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "reverse_linked_list_II_test")
add_executable(${target_name} 092_reverse_linked_list_II_test.cpp)
target_link_libraries(${target_name} reverse_linked_list_II gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)


set(target_name "linked_list_cycle_II_test")
add_executable(${target_name} 142_linked_list_cycle_II_test.cpp)
target_link_libraries(${target_name} linked_list_cycle_II gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "reorder_list_test")
add_executable(${target_name} 143_reorder_list_test.cpp)
target_link_libraries(${target_name} reorder_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "insertion_sort_list_test")
add_executable(${target_name} 147_insertion_sort_list_test.cpp)
target_link_libraries(${target_name} insertion_sort_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "sort_list_test")
add_executable(${target_name} 148_sort_list_test.cpp)
target_link_libraries(${target_name} sort_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "remove_list_test")
add_executable(${target_name} 203_remove_linked_list_test.cpp)
target_link_libraries(${target_name} remove_list gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "ll2bst_test")
add_executable(${target_name} 109_convert_sorted_list_to_bst_test.cpp)
target_link_libraries(${target_name} ll2bst gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "copy_list_wr_test")
add_executable(${target_name} 138_copy_list_with_random_pointer_test.cpp)
target_link_libraries(${target_name} copy_list_wr gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)