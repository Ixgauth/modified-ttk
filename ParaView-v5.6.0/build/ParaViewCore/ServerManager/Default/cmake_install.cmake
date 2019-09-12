# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerDefault-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerDefault-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerDefault-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerDefault-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerDefault-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerDefault-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Default//CMakeFiles/vtkPVServerManagerDefault.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVServerManagerDefaultHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkLoadStateOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkPVGeneralSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkPVMultiServerDataSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkPVX3DExporter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMCameraConfigurationReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMCameraConfigurationWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMCSVExporterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMCSVProxiesInitializationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMDirectoryProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMEnsembleDataReaderProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMExporterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMGL2PSExporterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMInteractionUndoStackBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMInteractiveSelectionPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMLoadStateOptionsProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMMultiServerSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMPLYWriterProxyInitializationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMPreselectionPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMPropertyModificationUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMProxyClipboard.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMProxyConfigurationReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMProxyConfigurationWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMPSWriterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMReaderReloadHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMRenderViewExporterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMSpreadSheetRepresentationInitializationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMTesting.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMTooltipSelectionPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMViewExportHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Default/vtkSMXYChartRepresentationInitializationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Default/vtkPVServerManagerDefaultModule.h"
    )
endif()

