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

set(target_name "minimum_number_of_arrows_test")
add_executable(${target_name} "452_minimum_number_of_arrows_test.cpp")
target_link_libraries(${target_name} minimum_number_of_arrows
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)


set(target_name "queue_reconstruction_test")
add_executable(${target_name} "406_queue_reconstruction_test.cpp")
target_link_libraries(${target_name} queue_reconstruction
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "partition_labels_test")
add_executable(${target_name} "763_partition_labels_test.cpp")
target_link_libraries(${target_name} partition_labels
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "can_place_flowers_test")
add_executable(${target_name} "605_can_place_flowers_test.cpp")
target_link_libraries(${target_name} can_place_flowers
        gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)