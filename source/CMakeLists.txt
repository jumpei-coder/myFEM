cmake_minimum_required(VERSION 3.10)
project(MyProject)

# 依存ライブラリの設定を読み込む
add_subdirectory(cmake)

# サブディレクトリを追加
add_subdirectory(lib)
add_subdirectory(exe)


