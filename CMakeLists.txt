cmake_minimum_required(VERSION 3.28.3)
project(cpp_primer VERSION 1.0
                   DESCRIPTION "C++ Primer"
                   LANGUAGES CXX)

# Set compiler to use c++ 17 features
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use GNUInstalDirs to install libraries into correct location on all platform
include(GNUInstallDirs)

# Put all binary files into /bin and libraries into /lib
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

add_subdirectory(src/chapter2)
add_subdirectory(src/chapter3)
add_subdirectory(src/chapter6)
add_subdirectory(src/chapter7)