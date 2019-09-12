set(pqComponents_LOADED 1)
set(pqComponents_DEPENDS "pqCore;pqPython;vtkChartsCore;vtkIOImage;vtkPVAnimation;vtkPVClientServerCoreDefault;vtkPVServerManagerDefault;vtkPVServerManagerRendering;vtkjsoncpp;vtkpugixml;vtksys")
set(pqComponents_LIBRARIES "pqComponents")
set(pqComponents_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Components/;/home/ian/ttk/ParaView-v5.6.0/Qt/Components/")
set(pqComponents_LIBRARY_DIRS "")
set(pqComponents_RUNTIME_LIBRARY_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
set(pqComponents_WRAP_HIERARCHY_FILE "")
set(pqComponents_KIT "")
set(pqComponents_TARGETS_FILE "")
set(pqComponents_EXCLUDE_FROM_WRAPPING 1)
include(${ParaView_CMAKE_DIR}/ParaViewQt.cmake)
  pv_find_package_qt(__pqComponents_qt_targets REQUIRED QUIET
    QT5_COMPONENTS Widgets Network)

