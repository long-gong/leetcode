set(target_name "sqrt_test")
add_executable(${target_name} 069_sqrt_test.cpp)
target_link_libraries(${target_name} sqrt gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "smallest_greater_letter_test")
add_executable(${target_name} 744_smallest_greater_letter_test.cpp)
target_link_libraries(${target_name} smallest_greater_letter gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "single_element_test")
add_executable(${target_name} 540_single_element_test.cpp)
target_link_libraries(${target_name} single_element gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "remove_element_test")
add_executable(${target_name} 278_remove_element_test.cpp)
target_link_libraries(${target_name} remove_element gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "min_element_rotated_sorted_test")
add_executable(${target_name} 153_min_rotated_sorted_array_test.cpp)
target_link_libraries(${target_name} min_element_rotated_sorted gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "first_last_position_sorted_test")
add_executable(${target_name} 034_first_last_position_sorted_array_test.cpp)
target_link_libraries(${target_name} first_last_position_sorted gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)