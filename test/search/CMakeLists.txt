file(GLOB SRCs "*.cpp")

foreach(src ${SRCs})
    get_filename_component(src_we "${src}" NAME_WE)
    set(target_name "${src_we}")
    add_executable(${target_name} "${src}")
    string(REPLACE "_test" "" lib_name ${target_name})
    message("add lib: ${lib_name}")
    target_link_libraries(${target_name} ${lib_name} gtest_main)
    add_test(NAME ${target_name}
            COMMAND $<TARGET_FILE:${target_name}>)
endforeach()