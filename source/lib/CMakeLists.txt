# ライブラリ名を変数で指定
set(MYLIB_NAME mylib)

# lib/ フォルダ内のすべての .cpp ファイルを収集
file(GLOB LIB_SOURCES CONFIGURE_DEPENDS *.cpp)

# ライブラリを作成
add_library(${MYLIB_NAME} STATIC ${LIB_SOURCES})

# インクルードパスと依存ライブラリを設定
target_include_directories(${MYLIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${MYLIB_NAME} PRIVATE ${MY_DEPS_INCLUDE_DIRS})
target_link_libraries(${MYLIB_NAME} PRIVATE ${MY_DEPS_LIBRARIES})

