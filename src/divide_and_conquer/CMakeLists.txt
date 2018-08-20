set(target_name "different_ways_adding_parentheses")
add_library(${target_name} STATIC 241_different_ways_add_parentheses.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})