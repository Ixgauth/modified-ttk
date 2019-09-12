#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vtkm_cont" for configuration "Release"
set_property(TARGET vtkm_cont APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkm_cont PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libvtkm_cont-pv5.6.so.1"
  IMPORTED_SONAME_RELEASE "libvtkm_cont-pv5.6.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkm_cont )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkm_cont "${_IMPORT_PREFIX}/lib/libvtkm_cont-pv5.6.so.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
