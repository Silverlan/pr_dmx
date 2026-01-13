include(${CMAKE_SOURCE_DIR}/cmake/pr_common.cmake)

pr_fetch_external_lib("util_dmx" "https://github.com/Silverlan/util_dmx" "b0285681651fa9d3b5952e478db22ff293ca1a0c")

set(PROJ_NAME pr_dmx)
pr_add_module(${PROJ_NAME} SHARED "modules/")

pr_add_dependency(${PROJ_NAME} ishared TARGET PUBLIC)
pr_add_dependency(${PROJ_NAME} util_dmx TARGET PUBLIC)

pr_init_module(${PROJ_NAME})

pr_finalize(${PROJ_NAME})
