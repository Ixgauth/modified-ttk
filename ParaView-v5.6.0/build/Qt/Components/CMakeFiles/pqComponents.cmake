set(pqComponents_LOADED 1)
set(pqComponents_DEPENDS "pqCore;pqPython;vtkChartsCore;vtkIOImage;vtkPVAnimation;vtkPVClientServerCoreDefault;vtkPVServerManagerDefault;vtkPVServerManagerRendering;vtkjsoncpp;vtkpugixml;vtksys")
set(pqComponents_LIBRARIES "pqComponents")
set(pqComponents_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-5.6")
set(pqComponents_LIBRARY_DIRS "")
set(pqComponents_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib")
set(pqComponents_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqComponentsHierarchy.txt")
set(pqComponents_KIT "")
set(pqComponents_TARGETS_FILE "")
set(pqComponents_EXCLUDE_FROM_WRAPPING 1)
include(${ParaView_CMAKE_DIR}/ParaViewQt.cmake)
  pv_find_package_qt(__pqComponents_qt_targets REQUIRED QUIET
    QT5_COMPONENTS Widgets Network)

