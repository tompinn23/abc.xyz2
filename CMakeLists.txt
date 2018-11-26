# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project (tdot2 C)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
    ${CMAKE_BINARY_DIR}/lib CACHE
    PATH "Directory where all the .lib files are dumped." FORCE)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_BINARY_DIR}/bin CACHE
    PATH "Directory where .exe and .dll files are dumped." FORCE)


if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

# Include sub-projects.
add_subdirectory(tdot2)
