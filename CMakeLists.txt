cmake_minimum_required(VERSION 3.14)

# Set the project name
project(FactorialProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
# add_executable(Factorial main.cpp)

# Include GoogleTest using FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(TestFactorial test/test_factorial.cpp)

# Link GoogleTest libraries
target_link_libraries(TestFactorial gtest gtest_main)

# Discover and add tests
include(GoogleTest)

# Enable testing
enable_testing()
gtest_discover_tests(TestFactorial)