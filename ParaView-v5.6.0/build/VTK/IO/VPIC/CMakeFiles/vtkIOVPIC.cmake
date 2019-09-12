set(vtkIOVPIC_LOADED 1)
set(vtkIOVPIC_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonExecutionModel;vtkCommonMisc;vtkParallelCore;vtkVPIC")
set(vtkIOVPIC_LIBRARIES "vtkIOVPIC")
set(vtkIOVPIC_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkIOVPIC_LIBRARY_DIRS "")
set(vtkIOVPIC_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkIOVPIC_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOVPICHierarchy.txt")
set(vtkIOVPIC_KIT "vtkParallel")
set(vtkIOVPIC_TARGETS_FILE "")


