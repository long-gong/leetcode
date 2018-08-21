set(target_name "intersection_two_linked_list")
add_library(${target_name} STATIC 160_intersection_of_two_linked_lists.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "reverse_linked_list")
add_library(${target_name} STATIC 206_reverse_linked_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "merge_two_linked_list")
add_library(${target_name} STATIC 021_merge_two_linked_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "remove_duplicates")
add_library(${target_name} STATIC 083_remove_duplicates.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})