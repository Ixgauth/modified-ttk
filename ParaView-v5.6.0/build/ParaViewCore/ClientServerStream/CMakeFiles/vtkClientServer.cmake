set(vtkClientServer_LOADED 1)
set(vtkClientServer_DEPENDS "vtkCommonCore;vtkPython;vtkPythonInterpreter;vtkWrappingPythonCore;vtksys")
set(vtkClientServer_LIBRARIES "vtkClientServer")
set(vtkClientServer_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkClientServer_LIBRARY_DIRS "")
set(vtkClientServer_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkClientServer_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkClientServerHierarchy.txt")
set(vtkClientServer_KIT "vtkPVCore")
set(vtkClientServer_TARGETS_FILE "")


