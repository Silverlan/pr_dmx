cmake_minimum_required(VERSION 3.12)

include("../CMakeShared.txt")

set(PROJ_NAME pr_dmx)

project(${PROJ_NAME} CXX)

link_external_library(util_dmx)

add_external_library(lua)

add_include_dir(glm)

add_subdirectory(third_party/util_dmx)

link_generic_module_libraries()
register_pragma_module(${PROJ_NAME})

add_dependencies(${PROJ_NAME} util_dmx)