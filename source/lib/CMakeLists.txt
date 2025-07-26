set(LIB mylib)

file(GLOB SRC CONFIGURE_DEPENDS *.cpp)

# ライブラリを作成
add_library(${LIB} STATIC ${SRC})

# インクルードパスと依存ライブラリを設定
target_link_libraries(${LIB} PRIVATE)
target_include_directories(${LIB} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


