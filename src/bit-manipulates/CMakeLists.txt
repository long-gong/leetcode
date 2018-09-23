file(GLOB SRCs "*.cc")

foreach(src ${SRCs})
    get_filename_component(src_we ${src} NAME_WE)
    set(target_name ${src_we})
    message("add lib: ${src_we}")
    add_library(${target_name} STATIC ${src})
    target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
endforeach()