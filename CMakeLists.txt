cmake_minimum_required(VERSION 2.8)

project(cpp-template)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include_directories(${PROJECT_SOURCE_DIR}/inc)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)

add_executable(cpp-template ${SRCS})

set_target_properties(cpp-template PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
)