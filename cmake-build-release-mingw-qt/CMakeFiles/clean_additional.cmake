# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "9counter_autogen"
  "CMakeFiles\\9counter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\9counter_autogen.dir\\ParseCache.txt"
  )
endif()
