import os
import subprocess
import sys
import stat
from sys import platform
from pathlib import Path

# util_dmx
git_clone_commit(
    "util_dmx",
    external_libs_dir +"/util_dmx",
    "https://github.com/Silverlan/util_dmx.git",
    "377524efcadcfe67a060b5e029191f975e676376"
)

cmake_args.append("-DPME_EXTERNAL_LIB_LOCATION=" +external_libs_dir)
cmake_args.append("-DPME_EXTERNAL_LIB_BIN_LOCATION=" +external_libs_bin_dir)
cmake_args.append("-DPME_THIRD_PARTY_LIB_LOCATION=" +third_party_libs_dir)

additional_build_targets.append("pr_dmx")
