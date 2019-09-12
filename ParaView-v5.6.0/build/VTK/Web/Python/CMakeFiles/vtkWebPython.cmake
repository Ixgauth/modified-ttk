set(vtkWebPython_LOADED 1)
set(vtkWebPython_DEPENDS "vtkCommonCore;vtkFiltersGeometry;vtkPython;vtkWebCore")
set(vtkWebPython_LIBRARIES "vtkCommonCore")
set(vtkWebPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkWebPython_LIBRARY_DIRS "")
set(vtkWebPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkWebPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWebPythonHierarchy.txt")
set(vtkWebPython_KIT "")
set(vtkWebPython_TARGETS_FILE "")
set(vtkWebPython_EXCLUDE_FROM_WRAPPING 1)


