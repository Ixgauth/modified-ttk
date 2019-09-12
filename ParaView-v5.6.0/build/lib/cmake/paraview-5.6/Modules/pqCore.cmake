set(pqCore_LOADED 1)
set(pqCore_DEPENDS "pqWidgets;vtkGUISupportQt;vtkPVAnimation;vtkPVClientServerCoreDefault;vtkPVServerManagerApplication;vtkPVServerManagerDefault;vtkTestingRendering;vtksys")
set(pqCore_LIBRARIES "pqCore")
set(pqCore_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Core/;/home/ian/ttk/ParaView-v5.6.0/Qt/Core/")
set(pqCore_LIBRARY_DIRS "")
set(pqCore_RUNTIME_LIBRARY_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
set(pqCore_WRAP_HIERARCHY_FILE "")
set(pqCore_KIT "")
set(pqCore_TARGETS_FILE "")
set(pqCore_EXCLUDE_FROM_WRAPPING 1)
include(${ParaView_CMAKE_DIR}/ParaViewQt.cmake)
    pv_find_package_qt(__pqCore_qt_targets REQUIRED QUIET
      QT5_COMPONENTS Help)

