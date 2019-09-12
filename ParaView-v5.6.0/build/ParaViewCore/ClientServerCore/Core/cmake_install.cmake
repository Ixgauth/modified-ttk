# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVClientServerCoreCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVClientServerCoreCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ClientServerCore/Core//CMakeFiles/vtkPVClientServerCoreCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVClientServerCoreCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkCompleteArrays.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkExtractsDeliveryHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkMPIMToNSocketConnection.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkMPIMToNSocketConnectionPortInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkNetworkAccessManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPConvertSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkProcessModuleAutoMPI.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkProcessModule.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVAlgorithmPortsInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVArrayInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVClassNameInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVCompositeDataInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVCompositeDataInformationIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVDataInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVDataInformationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVDataSetAttributesInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVDataSizeInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVDisableStackTraceSignalHandler.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVEnableStackTraceSignalHandler.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVExtractSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVFileInformationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVGenericAttributeInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVMemoryUseInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVMultiClientsInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVOptionsXMLParser.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPlugin.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPluginLoader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPluginsInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPluginTracker.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVProgressHandler.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPythonInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPythonModule.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPythonOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVPythonPluginInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVServerInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVServerManagerPluginInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVServerOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVSession.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVSILInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVSystemConfigInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVSystemInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVTemporalDataInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPVTimerInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkSession.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkSessionIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkTCPNetworkAccessManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkEnvironmentAnnotationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPythonExtractSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPythonProgrammableFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPythonAnnotationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Core/vtkPythonSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ClientServerCore/Core/vtkPVClientServerCoreCoreModule.h"
    )
endif()

