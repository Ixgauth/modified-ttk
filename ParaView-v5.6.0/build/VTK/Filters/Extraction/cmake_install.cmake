# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersExtraction-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersExtraction-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Extraction/CMakeFiles/vtkFiltersExtraction.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersExtractionHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkBlockSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkConvertSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractBlock.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractCells.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractDataArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractDataOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractDataSets.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractEdges.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractGeometry.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractLevel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractPolyDataGeometry.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractRectilinearGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedBlock.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedIds.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedLocations.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedPolyDataIds.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedRows.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectedThresholds.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractTemporalFieldData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractTensorComponents.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractTimeSteps.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractUnstructuredGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractVectorComponents.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkFrustumSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkHierarchicalDataExtractDataSets.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkHierarchicalDataExtractLevel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkLocationSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkProbeSelectedLocations.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkValueSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Extraction/vtkExtractSelectionLegacy.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Extraction/vtkFiltersExtractionModule.h"
    )
endif()

