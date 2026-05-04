include(${CMAKE_SOURCE_DIR}/cmake/pr_common.cmake)

pr_fetch_external_lib("util_dmx" "https://github.com/Silverlan/util_dmx" "47dc016b32ce8284399766eb0fd789abfad5f1ea")

set(PROJ_NAME pr_dmx)
pr_add_module(${PROJ_NAME} "modules/")

pr_add_dependency(${PROJ_NAME} ishared TARGET PUBLIC)
pr_add_dependency(${PROJ_NAME} util_dmx TARGET PUBLIC)

pr_init_module(${PROJ_NAME})

pr_finalize(${PROJ_NAME})
