set(target_name "kth_element_test")
add_executable(${target_name} 215_kth_element_test.cpp)
target_link_libraries(${target_name} kth_element gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "top_k_test")
add_executable(${target_name} 347_top_k_frequent_test.cc)
target_link_libraries(${target_name} top_k gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "sort_by_frequency_test")
add_executable(${target_name} 451_sort_characters_by_frequency_test.cc)
target_link_libraries(${target_name} sort_by_frequency gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)

set(target_name "sort_colors_test")
add_executable(${target_name} 075_sort_colors_test.cc)
target_link_libraries(${target_name} sort_colors gtest_main)
add_test(NAME ${target_name}
        COMMAND $<TARGET_FILE:${target_name}>)