set(vtkPVServerManagerCore_LOADED 1)
set(vtkPVServerManagerCore_DEPENDS "vtkCommonCore;vtkPVServerImplementationCore;vtkPythonInterpreter;vtkjsoncpp;vtkpugixml;vtksys")
set(vtkPVServerManagerCore_LIBRARIES "vtkPVServerManagerCore")
set(vtkPVServerManagerCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkPVServerManagerCore_LIBRARY_DIRS "")
set(vtkPVServerManagerCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkPVServerManagerCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVServerManagerCoreHierarchy.txt")
set(vtkPVServerManagerCore_KIT "vtkPVServerManager")
set(vtkPVServerManagerCore_TARGETS_FILE "")


