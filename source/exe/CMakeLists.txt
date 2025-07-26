add_executable(myapp main.cpp)

target_link_libraries(myapp PRIVATE mylib ${MY_DEPS_LIBRARIES})
target_include_directories(myapp PRIVATE ${PROJECT_SOURCE_DIR}/lib ${MY_DEPS_INCLUDE_DIRS})

