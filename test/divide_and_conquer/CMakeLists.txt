set(target_name "different_ways_adding_parentheses_test")
add_executable(${target_name} 241_different_ways_add_parentheses_test.cpp)
target_link_libraries(${target_name} different_ways_adding_parentheses gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)