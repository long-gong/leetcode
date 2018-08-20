set(target_name "climbing_stairs")
add_library(${target_name} STATIC 070_climbing_stairs.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "house_robber")
add_library(${target_name} STATIC 198_house_robber.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "house_robber_II")
add_library(${target_name} STATIC 213_house_robber_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "minimum_path_sum")
add_library(${target_name} STATIC 064_minimum_path_sum.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "unique_paths")
add_library(${target_name} STATIC 062_unique_paths.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "range_sum_query")
add_library(${target_name} STATIC 303_range_sum_query.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})