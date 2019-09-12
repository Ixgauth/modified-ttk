# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/libQtTesting-pv5.6.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQtTesting-pv5.6.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/QtTestingExport.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pq3DViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pq3DViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractActivateEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractBooleanEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractButtonEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractDoubleEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractIntEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventPlayerBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractItemViewEventTranslatorBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractMiscellaneousEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractSliderEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqAbstractStringEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqBasicWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqBasicWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqCheckEventOverlay.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqComboBoxEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqComboBoxEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqCommentEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqDoubleSpinBoxEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventComment.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventDispatcher.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventObserver.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventRecorder.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqEventTypes.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqLineEditEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqListViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqListViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqMenuEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqNativeFileDialogEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqNativeFileDialogEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqObjectNaming.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqPlayBackEventsDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqRecordEventsDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqSpinBoxEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqStdoutEventObserver.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTabBarEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTabBarEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTableViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTableViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTestUtility.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqThreadedEventSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTimer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTreeViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqTreeViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting/pqWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/QtTestingConfigure.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/QtTestingConfig.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake"
         "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting/ParaViewTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qttesting" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/CMakeFiles/Export/lib/cmake/qttesting/ParaViewTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/Examples/cmake_install.cmake")

endif()

