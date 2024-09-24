# cmake_minimum_required(VERSION 3.22)
# project(FactorialCalculator)

# # Set C++ standard to C++17
# set(CMAKE_CXX_STANDARD 17)

# # Add the executable
# # add_executable(factorial factorial.cpp)

# add_executable(factorial factorial.cpp)

# # if you run "make install" after "cmake", this below line will save the executable in usr/local/bin
# # then you do no have to go to the build folder to run the executable
# # Your code has been integrated as an application in your OS. CRAZY!
# install(TARGETS factorial DESTINATION bin)

# # Add Google Test
# enable_testing()
# add_subdirectory(tests)

#---------------------------------------------------------------------

cmake_minimum_required(VERSION 3.12)
project(FactorialProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
add_executable(Factorial src/main.cpp src/factorial.cpp)

# Add Google Test
add_subdirectory(googletest)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add the test executable
add_executable(test_factorial tests/test_factorial.cpp src/factorial.cpp)
target_link_libraries(test_factorial gtest gtest_main)

# Add the test
add_test(NAME test_factorial COMMAND test_factorial)