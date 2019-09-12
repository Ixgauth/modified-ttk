# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkIOParallelXML-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkIOParallelXML-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/ParallelXML/CMakeFiles/vtkIOParallelXML.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkIOParallelXMLHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPDataSetWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPDataObjectWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPImageDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPPolyDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPRectilinearGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPStructuredDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPStructuredGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPTableWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPUnstructuredDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPUnstructuredGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPHierarchicalBoxDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPMultiBlockDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/ParallelXML/vtkXMLPUniformGridAMRWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/ParallelXML/vtkIOParallelXMLModule.h"
    )
endif()

