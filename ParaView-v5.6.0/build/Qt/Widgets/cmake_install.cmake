# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/Qt/Widgets

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimeLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqWidgets-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqWidgets-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqWidgets-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqWidgets-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqWidgets-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqWidgets-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/ian/ttk/ParaView-v5.6.0/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Widgets//CMakeFiles/pqWidgets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqAnimationKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqAnimationModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqAnimationTrack.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqAnimationWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqCheckableHeaderView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqCheckBoxPixMaps.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqCollapsedGroup.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqColorButtonEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqColorButtonEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqColorChooserButton.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqColorDialogEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqColorDialogEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqConnect.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqConsoleWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqConsoleWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqConsoleWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDelimitedTextParser.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDiscreteDoubleWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleLineEdit.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleLineEditEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleLineEditEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleRangeDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleRangeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleSliderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqDoubleSpinBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqExpandableTableView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqExpanderButton.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqFlatTreeView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqHeaderView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqHighlightablePushButton.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqHighlightableToolButton.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqLineEdit.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqLineEditEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqListWidgetCheckHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqListWidgetItemObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqProgressWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqQuickLaunchDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqScaleByButton.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqSectionVisibilityContextMenu.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqSetData.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqSetName.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqSignalAdaptors.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqSpinBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTableView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTextEdit.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeViewExpandState.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeViewSelectionHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeWidgetCheckHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeWidgetItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeWidgetItemObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqTreeWidgetSelectionHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqWaitCursor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Widgets/pqHelpWindow.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Widgets/pqWidgetsModule.h"
    )
endif()

