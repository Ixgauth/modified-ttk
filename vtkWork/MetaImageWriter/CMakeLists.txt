
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(MetaImageWriter)

find_package(VTK COMPONENTS 
  vtkCommonCore
  vtkCommonDataModel
  vtkIOImage
  vtkImagingCore
  vtkImagingSources
  vtkInteractionStyle
  vtkRenderingCore
  vtkRenderingFreeType
  vtkRenderingOpenGL2 QUIET)
if (NOT VTK_FOUND)
  message("Skipping MetaImageWriter: ${VTK_NOT_FOUND_MESSAGE}")
  return ()
endif()
message (STATUS "VTK_VERSION: ${VTK_VERSION}")
if (VTK_VERSION VERSION_LESS "8.90.0")
  # old system
  include(${VTK_USE_FILE})
  add_executable(MetaImageWriter MACOSX_BUNDLE MetaImageWriter.cxx )
  target_link_libraries(MetaImageWriter PRIVATE ${VTK_LIBRARIES})
else ()
  # include all components
  add_executable(MetaImageWriter MACOSX_BUNDLE MetaImageWriter.cxx )
  target_link_libraries(MetaImageWriter PRIVATE ${VTK_LIBRARIES})
  # vtk_module_autoinit is needed
  vtk_module_autoinit(
    TARGETS MetaImageWriter
    MODULES ${VTK_LIBRARIES}
    )
endif () 
