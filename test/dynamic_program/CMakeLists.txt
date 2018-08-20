set(target_name "climbing_stairs_test")
add_executable(${target_name} 070_climbing_stairs_test.cpp)
target_link_libraries(${target_name} climbing_stairs gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "house_robber_test")
add_executable(${target_name} 198_house_robber_test.cpp)
target_link_libraries(${target_name} house_robber gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "house_robber_II_test")
add_executable(${target_name} 213_house_robber_II_test.cpp)
target_link_libraries(${target_name} house_robber_II gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "minimum_path_sum_test")
add_executable(${target_name} 064_minimum_path_sum_test.cpp)
target_link_libraries(${target_name} minimum_path_sum gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "unique_paths_test")
add_executable(${target_name} 062_unique_paths_test.cpp)
target_link_libraries(${target_name} unique_paths gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "range_sum_query_test")
add_executable(${target_name} 303_range_sum_query_test.cpp)
target_link_libraries(${target_name} range_sum_query gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)