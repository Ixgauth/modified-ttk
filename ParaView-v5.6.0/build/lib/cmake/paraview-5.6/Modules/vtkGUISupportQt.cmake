set(vtkGUISupportQt_LOADED 1)
set(vtkGUISupportQt_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkFiltersExtraction;vtkInteractionStyle;vtkRenderingCore;vtkRenderingOpenGL2")
set(vtkGUISupportQt_LIBRARIES "vtkGUISupportQt")
set(vtkGUISupportQt_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/VTK/GUISupport/Qt;/home/ian/ttk/ParaView-v5.6.0/VTK/GUISupport/Qt")
set(vtkGUISupportQt_LIBRARY_DIRS "")
set(vtkGUISupportQt_RUNTIME_LIBRARY_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
set(vtkGUISupportQt_WRAP_HIERARCHY_FILE "")
set(vtkGUISupportQt_KIT "")
set(vtkGUISupportQt_TARGETS_FILE "")
set(VTK_QT_RCC_EXECUTABLE "")
set(VTK_QT_MOC_EXECUTABLE "/usr/lib/qt5/bin/moc")
set(VTK_QT_UIC_EXECUTABLE "")
set(VTK_QT_QMAKE_EXECUTABLE "")
set(vtkGUISupportQt_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5_DIR)
  set(Qt5_DIR "/usr/lib/x86_64-linux-gnu/cmake/Qt5")
endif()

find_package(Qt5 REQUIRED QUIET COMPONENTS Widgets)


