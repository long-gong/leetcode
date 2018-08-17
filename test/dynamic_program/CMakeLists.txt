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