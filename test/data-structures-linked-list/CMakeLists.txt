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