set(target_name "kth_element_test")
add_executable(${target_name} 215_kth_element_test.cpp)
target_link_libraries(${target_name} kth_element gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)