# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkIOXML-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkIOXML-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/XML/CMakeFiles/vtkIOXML.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkIOXMLHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkRTXMLPolyDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLCompositeDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLCompositeDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLDataSetWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLDataObjectWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLFileReadTester.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLGenericDataObjectReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHierarchicalBoxDataFileConverter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHierarchicalBoxDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHierarchicalBoxDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHierarchicalDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHyperTreeGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLHyperTreeGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLImageDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLImageDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLMultiBlockDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLMultiBlockDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLMultiGroupDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPDataObjectReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPImageDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPolyDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPolyDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPPolyDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPRectilinearGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPStructuredDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPStructuredGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPTableReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPUnstructuredDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPUnstructuredGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPartitionedDataSetReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPartitionedDataSetWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPartitionedDataSetCollectionReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLPartitionedDataSetCollectionWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLRectilinearGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLRectilinearGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLStructuredDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLStructuredDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLStructuredGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLStructuredGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLTableReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLTableWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUniformGridAMRReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUniformGridAMRWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUnstructuredDataReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUnstructuredDataWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUnstructuredGridReader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLUnstructuredGridWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLWriterC.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/IO/XML/vtkXMLWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/XML/vtkIOXMLModule.h"
    )
endif()

