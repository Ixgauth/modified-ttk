set(pqApplicationComponents_LOADED 1)
set(pqApplicationComponents_DEPENDS "pqComponents;vtkGUISupportQt;vtkPVAnimation;vtkPVCinemaReader;vtkPVClientServerCoreDefault;vtkPVServerManagerApplication;vtkPVServerManagerDefault;vtkPVServerManagerRendering;vtkUtilitiesLegacyColorMapXMLToJSON;vtkjsoncpp;vtksys")
set(pqApplicationComponents_LIBRARIES "pqApplicationComponents")
set(pqApplicationComponents_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/Qt/ApplicationComponents/;/home/ian/ttk/ParaView-v5.6.0/Qt/ApplicationComponents/")
set(pqApplicationComponents_LIBRARY_DIRS "")
set(pqApplicationComponents_RUNTIME_LIBRARY_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
set(pqApplicationComponents_WRAP_HIERARCHY_FILE "")
set(pqApplicationComponents_KIT "")
set(pqApplicationComponents_TARGETS_FILE "")
set(pqApplicationComponents_EXCLUDE_FROM_WRAPPING 1)
include(${ParaView_CMAKE_DIR}/ParaViewQt.cmake)
    pv_find_package_qt(__pqApplicationComponents_qt_targets REQUIRED QUIET
      QT5_COMPONENTS Widgets Help)

