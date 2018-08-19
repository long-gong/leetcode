set(target_name "sqrt")
add_library(${target_name} STATIC 069_sqrt.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "smallest_greater_letter")
add_library(${target_name} STATIC 744_smallest_greater_letter.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "single_element")
add_library(${target_name} STATIC 540_single_element.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(target_name "remove_element")
add_library(${target_name} STATIC 278_remove_element.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
