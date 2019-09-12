set(vtkRenderingParallel_LOADED 1)
set(vtkRenderingParallel_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonMath;vtkCommonSystem;vtkFiltersParallel;vtkIOImage;vtkImagingCore;vtkParallelCore;vtkRenderingCore;vtkRenderingOpenGL2;vtkglew")
set(vtkRenderingParallel_LIBRARIES "vtkRenderingParallel")
set(vtkRenderingParallel_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkRenderingParallel_LIBRARY_DIRS "")
set(vtkRenderingParallel_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkRenderingParallel_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingParallelHierarchy.txt")
set(vtkRenderingParallel_KIT "vtkParallel")
set(vtkRenderingParallel_TARGETS_FILE "")


