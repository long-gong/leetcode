set(target_name "assign_cookies_test")
add_executable(${target_name} "455_assign_cookies_test.cpp")
target_link_libraries(${target_name} cookie_assign
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)


set(target_name "non_overlapping_intervals_test")
add_executable(${target_name} "435_non_overlapping_intervals_test.cpp")
target_link_libraries(${target_name} non_overlapping_intervals
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)