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

set(target_name "remove_nth_node")
add_library(${target_name} STATIC common.cc 019_remove_nth_node.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "swap_node")
add_library(${target_name} STATIC common.cc 024_swap_nodes.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "add_numbers_II")
add_library(${target_name} STATIC common.cc 445_add_numbers_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "palindrome")
add_library(${target_name} STATIC common.cc 234_palindrome.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "split_linked_list")
add_library(${target_name} STATIC common.cc 725_split_linked_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "odd_even_linked_list")
add_library(${target_name} STATIC common.cc 328_odd_even_linked_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "rotate_list")
add_library(${target_name} STATIC common.cc 061_rotate_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "duplicates_remove_II")
add_library(${target_name} STATIC common.cc 082_remove_duplicates_from_sorted_list_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "partition_list")
add_library(${target_name} STATIC common.cc 086_partition_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "reverse_linked_list_II")
add_library(${target_name} STATIC common.cc 092_reverse_linked_list_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "linked_list_cycle_II")
add_library(${target_name} STATIC common.cc 142_linked_list_cycle_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


set(target_name "reorder_list")
add_library(${target_name} STATIC common.cc 143_reorder_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "insertion_sort_list")
add_library(${target_name} STATIC common.cc 147_insertion_sort_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "sort_list")
add_library(${target_name} STATIC common.cc 148_sort_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "remove_list")
add_library(${target_name} STATIC common.cc 203_remove_linked_list.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "ll2bst")
add_library(${target_name} STATIC common.cc 109_convert_sorted_list_to_bst.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "copy_list_wr")
add_library(${target_name} STATIC common.cc 138_copy_list_with_random_pointer.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})