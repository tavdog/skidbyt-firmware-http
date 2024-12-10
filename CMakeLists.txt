cmake_minimum_required(VERSION 3.16.4)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
list(
  APPEND
  EXTRA_COMPONENT_DIRS
  .pio/libdeps/tidbyt
  )
project(firmware)
