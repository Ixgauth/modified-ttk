set(vtkParaViewWeb_LOADED 1)
set(vtkParaViewWeb_DEPENDS "vtkParaViewWebCore;vtkParaViewWebPython;vtkWebCore;vtkWebGLExporter;vtkWebPython")
set(vtkParaViewWeb_LIBRARIES "vtkParaViewWebCore;;vtkWebCore;vtkWebGLExporter;vtkCommonCore")
set(vtkParaViewWeb_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(vtkParaViewWeb_LIBRARY_DIRS "")
set(vtkParaViewWeb_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(vtkParaViewWeb_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParaViewWebHierarchy.txt")
set(vtkParaViewWeb_KIT "")
set(vtkParaViewWeb_TARGETS_FILE "")
set(vtkParaViewWeb_EXCLUDE_FROM_WRAPPING 1)


