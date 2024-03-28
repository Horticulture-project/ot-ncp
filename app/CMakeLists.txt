set(BOARD_ROOT ${CMAKE_CURRENT_LIST_DIR})

# ===== DO NOT REMOVE =====
cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
# ===== DO NOT REMOVE =====
project(ot_ncp)

FILE(GLOB app_sources src/*.c)

target_sources(app PRIVATE ${app_sources})

# Define the two required variables before including
# the source code for watching a git repository.





