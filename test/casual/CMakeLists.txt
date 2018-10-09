file(GLOB SRCs "*.cpp")


foreach(src ${SRCs})
    get_filename_component(src_we ${src} NAME_WE)
    add_executable(${src_we}_casual ${src})
endforeach()