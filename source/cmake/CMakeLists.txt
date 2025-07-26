# 依存ライブラリの検索（例：Eigen3）
find_package(Eigen3 REQUIRED NO_MODULE)

# 依存ライブラリの include/lib パスをまとめる変数
set(MY_DEPS_INCLUDE_DIRS "")
set(MY_DEPS_LIBRARIES "")

# Eigen3 はヘッダオンリーなので include パスは通常不要
# ただし他のライブラリと統一するために残しておいてもOK
# list(APPEND MY_DEPS_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})  # 通常は不要

# モダンCMakeのターゲットを追加
list(APPEND MY_DEPS_LIBRARIES Eigen3::Eigen)

# 他のライブラリもここでまとめて設定可能
# find_package(fmt REQUIRED)
# list(APPEND MY_DEPS_LIBRARIES fmt::fmt)

# find_package(Catch2 REQUIRED)
# list(APPEND MY_DEPS_LIBRARIES Catch2::Catch2WithMain)