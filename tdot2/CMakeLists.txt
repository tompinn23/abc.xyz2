# CMakeList.txt : CMake project for tdot2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_subdirectory(deps/sdl2)
add_subdirectory(deps/lodepng)
add_subdirectory(deps/physfs)
add_subdirectory(deps/lua)
add_subdirectory(deps/zlib)


# Add source to this project's executable.
add_executable(tdot2 tdot2.c log.c engine.c file.c noise.c)

target_include_directories(tdot2 PUBLIC . deps/sdl2/include deps/physfs/src)
target_link_libraries(tdot2 SDL2 lodepng physfs)

# TODO: Add tests and install targets if needed.
