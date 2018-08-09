set(target_name "cookie_assign")
add_library(${target_name} STATIC 455_assign_cookies.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "non_overlapping_intervals")
add_library(${target_name} STATIC 435_non_overlapping_intervals.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})