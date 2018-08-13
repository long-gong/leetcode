set(target_name "cookie_assign")
add_library(${target_name} STATIC 455_assign_cookies.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "non_overlapping_intervals")
add_library(${target_name} STATIC 435_non_overlapping_intervals.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "minimum_number_of_arrows")
add_library(${target_name} STATIC 452_minimum_number_of_arrows.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "queue_reconstruction")
add_library(${target_name} STATIC 406_queue_reconstruction.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "partition_labels")
add_library(${target_name} STATIC 763_partition_labels.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "can_place_flowers")
add_library(${target_name} STATIC 605_can_place_flowers.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "is_subsequence")
add_library(${target_name} STATIC 392_is_subsequence.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "non_decreasing_array")
add_library(${target_name} STATIC 665_non_decreasing_array.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "buy_sell_stock_II")
add_library(${target_name} STATIC 122_best_time_buy_sell_stock_II.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})