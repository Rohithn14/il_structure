cmake_minimum_required(VERSION 3.10)         # Minimum CMake version

project(il_fs VERSION 1.0 LANGUAGES CXX)               # Project name and version

set(CMAKE_CXX_STANDARD 23)                    # Use C++23 standard
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)                  # Disable compiler-specific extensions

# include(CTEST)
# enable_testing()

# Specify your source files here
set(SOURCES
    il_main.cpp
    il_handler.cpp
)

# Create the executable target named 'il_executable' using the sources
add_executable(il_fs ${SOURCES})

# If you have include folders, add them like this:
target_include_directories(il_fs PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Add g++ flags here:
target_compile_options(il_fs PRIVATE -Wall -Wextra -O2)