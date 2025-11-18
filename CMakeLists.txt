include(${CMAKE_SOURCE_DIR}/cmake/pr_common.cmake)

set(PROJ_NAME pr_dmx)
pr_add_module(${PROJ_NAME} SHARED "modules/")

pr_add_dependency(${PROJ_NAME} ishared TARGET PUBLIC)
pr_add_dependency(${PROJ_NAME} util_dmx TARGET PUBLIC)

pr_init_module(${PROJ_NAME})

pr_finalize(${PROJ_NAME})
