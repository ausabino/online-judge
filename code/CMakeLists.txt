# cmake -H. -Bbuild/
# cd build/
# make VERBOSE=1
# ctest -R OnJudgeT -D ExperimentalMemCheck
# uftrace OnJudge

cmake_minimum_required(VERSION 3.10)

# set the project name
project(OnJudge)

# add the executable
add_executable(OnJudge 12250.cc)

# Uftrace
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg -finstrument-functions")

# Valgrind
set(CMAKE_BUILD_TYPE RelWithDebInfo)
include(CTest)
find_program(MEMORYCHECK_COMMAND valgrind)
set(MEMORYCHECK_COMMAND_OPTIONS "--trace-children=yes --leak-check=full --log-fd=2")
add_test(OnJudgeT OnJudge)
