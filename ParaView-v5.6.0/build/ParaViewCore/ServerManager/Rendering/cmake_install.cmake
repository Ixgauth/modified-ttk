# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerRendering-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerRendering-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerRendering-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerRendering-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Rendering//CMakeFiles/vtkPVServerManagerRendering.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVServerManagerRenderingHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionPresetsBuiltin.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkPVComparativeAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkPVComparativeView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkPVRepresentedArrayListSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMBagChartSeriesListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMBoxRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMCameraLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMCameraProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMChartRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMChartSeriesListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMChartSeriesSelectionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMChartUseIndexForAxisDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMComparativeAnimationCueProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMComparativeAnimationCueUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMComparativeViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMContextViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMDataDeliveryManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMFunctionalBagChartSeriesSelectionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMImplicitPlaneRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMLightProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMMaterialDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMMaterialLibraryProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMMultiSliceViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMNewWidgetRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMOrthographicSliceViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMPlotMatrixViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMPVRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMRenderViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMRepresentationTypeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMRepresentedArrayListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMSaveScreenshotProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMScalarBarWidgetRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMSelectionHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMSelectionLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMSpreadSheetRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMSpreadSheetViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMTextWidgetRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionPresets.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMTransferFunctionProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMUtilities.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMViewLayoutProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMViewProxyInteractorHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMViewResolutionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMWidgetRepresentationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMPythonViewProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Rendering/vtkSMParaViewPipelineControllerWithRendering.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Rendering/vtkPVServerManagerRenderingObjectFactory.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Rendering/vtkPVServerManagerRenderingModule.h"
    )
endif()

