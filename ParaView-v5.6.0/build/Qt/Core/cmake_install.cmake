# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/Qt/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Core//CMakeFiles/pqCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqAnimationScene.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqApplicationCore.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqAutoStartInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqBoxChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCheckBoxDelegate.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCollaborationEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCollaborationManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqComparativeContextView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqComparativeRenderView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqComparativeXYBarChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqComparativeXYChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqContextView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCoreInit.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCoreTestUtility.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqCoreUtilities.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqDataRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqDebug.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogFavoriteModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFileDialogRecentDirsModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFlatTreeViewEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqFlatTreeViewEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqGraphLayoutStrategyInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqImageUtil.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqInteractiveViewLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqInterfaceTracker.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqLinksModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqLinkViewWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqMultiSliceAxisWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqMultiSliceView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqNonEditableStyledItemDelegate.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqObjectBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqOutputPort.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqOutputWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqParallelCoordinatesChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPipelineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPipelineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPipelineSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPlotMatrixView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPluginManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqProgressManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPropertyLinks.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPropertyLinksConnection.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPropertyManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqProxyModifiedStateUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqProxySelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqQVTKWidgetBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqQVTKWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqQVTKWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqQVTKWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqRecentlyUsedResourceLoaderInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqRecentlyUsedResourcesList.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqRenderViewBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqRenderView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqScalarBarRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqScalarsToColors.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerConfiguration.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerConfigurationCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerManagerModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerManagerModelInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerManagerModelItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerManagerObserver.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqServerResource.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSMAdaptor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSMProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSpreadSheetView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSpreadSheetViewModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSpreadSheetViewSelectionModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqSpreadSheetViewWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqStandardServerManagerModelInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqTimeKeeper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqTreeLayoutStrategyInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqUndoStack.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXMLEventObserver.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXMLEventSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXMLUtil.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXYBagChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXYBarChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXYFunctionalBagChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXYHistogramChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqXYChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/vtkPVGUIPluginInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqDisplayPolicy.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Core/pqPythonView.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Core/pqCoreModule.h"
    )
endif()

