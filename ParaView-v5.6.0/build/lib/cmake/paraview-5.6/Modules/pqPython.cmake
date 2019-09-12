set(pqPython_LOADED 1)
set(pqPython_DEPENDS "Pygments;pqCore;vtkPythonInterpreter;vtkWrappingPythonCore")
set(pqPython_LIBRARIES "pqPython")
set(pqPython_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Python/;/home/ian/ttk/ParaView-v5.6.0/Qt/Python/")
set(pqPython_LIBRARY_DIRS "")
set(pqPython_RUNTIME_LIBRARY_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
set(pqPython_WRAP_HIERARCHY_FILE "")
set(pqPython_KIT "")
set(pqPython_TARGETS_FILE "")
set(pqPython_EXCLUDE_FROM_WRAPPING 1)
include(${ParaView_CMAKE_DIR}/ParaViewQt.cmake)
  pv_find_package_qt(__pqPython_qt_targets REQUIRED QUIET
    QT5_COMPONENTS Widgets)

