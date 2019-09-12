set(vtkWebCore_LOADED 1)
set(vtkWebCore_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonSystem;vtkFiltersGeneral;vtkFiltersGeometry;vtkIOCore;vtkIOImage;vtkParallelCore;vtkPython;vtkPython;vtkRenderingCore;vtkWebGLExporter;vtksys")
set(vtkWebCore_LIBRARIES "vtkWebCore")
set(vtkWebCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkWebCore_LIBRARY_DIRS "")
set(vtkWebCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkWebCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWebCoreHierarchy.txt")
set(vtkWebCore_KIT "")
set(vtkWebCore_TARGETS_FILE "")


