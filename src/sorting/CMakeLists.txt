set(target_name "kth_element")
add_library(${target_name} STATIC 215_kth_element.cc)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
