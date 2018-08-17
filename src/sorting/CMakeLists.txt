set(target_name "kth_element")
add_library(${target_name} STATIC 215_kth_element.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "top_k")
add_library(${target_name} STATIC 347_top_k_frequent.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "sort_by_frequency")
add_library(${target_name} STATIC 451_sort_characters_by_frequency.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "sort_colors")
add_library(${target_name} STATIC 075_sort_colors.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})