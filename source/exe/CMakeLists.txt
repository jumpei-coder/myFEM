set(EXE myapp)

file(GLOB SRC CONFIGURE_DEPENDS *.cpp)
add_executable(${EXE} ${SRC})

target_link_libraries(${EXE} PRIVATE Eigen3::Eigen mylib)
target_include_directories(${EXE} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})


