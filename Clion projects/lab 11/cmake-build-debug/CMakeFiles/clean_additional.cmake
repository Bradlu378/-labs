# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qtTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qtTest_autogen.dir\\ParseCache.txt"
  "qtTest_autogen"
  )
endif()
