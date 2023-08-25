#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fastcdr" for configuration "Debug"
set_property(TARGET fastcdr APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(fastcdr PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/fastcdrd-1.0.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/fastcdrd-1.0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS fastcdr )
list(APPEND _IMPORT_CHECK_FILES_FOR_fastcdr "${_IMPORT_PREFIX}/lib/fastcdrd-1.0.lib" "${_IMPORT_PREFIX}/bin/fastcdrd-1.0.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
