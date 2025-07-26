cmake_minimum_required(VERSION 3.10)
project(MyProject)

find_package(Eigen3 REQUIRED NO_MODULE)

# サブディレクトリを追加
add_subdirectory(lib)
add_subdirectory(exe)


