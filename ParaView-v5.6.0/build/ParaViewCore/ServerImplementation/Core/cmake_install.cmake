# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerImplementationCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerImplementationCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerImplementationCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerImplementationCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerImplementationCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerImplementationCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core//CMakeFiles/vtkPVServerImplementationCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVServerImplementationCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSMMessageMinimal.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIVectorPropertyTemplate.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVCatalystSessionCore.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVFilePathEncodingHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVProxyDefinitionIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVSessionBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVSessionCore.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVSessionCoreInterpreterHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVSessionServer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIArraySelectionProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSICollaborationManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSICompoundSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIDataArrayProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIDataArraySelectionProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIDirectoryProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIDoubleMapProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIDoubleVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIIdTypeVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIIndexSelectionProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIInputProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIIntVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIMetaReaderProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIProxyDefinitionManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIProxyProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSISILProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSISourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIStringVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSITimeLabelProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSITimeRangeProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSITimeStepsProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSIWriterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkSMMessage.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core/vtkPVServerImplementationCoreModule.h"
    )
endif()

