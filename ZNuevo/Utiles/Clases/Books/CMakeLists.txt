# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author F. de Sande
# @author Himar Edhey Hernández Alonso alu0101552392
# @date Jun 16, 2023
# @brief CMakeLists.txt simple example. You can use this as a template for your projects
#        This does not generate documentation
#        It doesn't build any library
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(Books                # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Change-Case application"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)             # Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "Books" to be built from the source files listed in the command invocation.
add_executable(Books
    src/Books.h
    src/Books.cc
    src/Books_main.cc)

# Add expected compiler features to a target.
target_compile_features(Books PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(Books PRIVATE -Wall -Wextra -Wpedantic -Weffc++)