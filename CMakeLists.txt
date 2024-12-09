cmake_minimum_required(VERSION 3.17.0)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
list(
  APPEND
  EXTRA_COMPONENT_DIRS
  components
  .pio/libdeps/tidbyt
  )
project(firmware)
