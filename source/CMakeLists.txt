cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # -std=c++17 を使い、拡張は無効に

find_package(Eigen3 REQUIRED NO_MODULE)

# サブディレクトリを追加
add_subdirectory(lib)
add_subdirectory(exe)


