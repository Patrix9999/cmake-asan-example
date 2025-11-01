cmake_minimum_required(VERSION 3.21)

add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

add_subdirectory(dll)
add_subdirectory(exe)

if (OUT_FILE_SUFFIX STREQUAL "x86")
    configure_file("${CMAKE_SOURCE_DIR}/clang_rt.asan_dynamic-i386.dll" "${CMAKE_CURRENT_BINARY_DIR}/exe/" COPYONLY)
elseif (OUT_FILE_SUFFIX STREQUAL "x64")
    configure_file("${CMAKE_SOURCE_DIR}/clang_rt.asan_dynamic-x86_64.dll" "${CMAKE_CURRENT_BINARY_DIR}/exe/" COPYONLY)
endif()