# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersParallel-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersParallel-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Parallel/CMakeFiles/vtkFiltersParallel.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersParallelHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkAggregateDataSetFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkAngularPeriodicFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkCollectGraph.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkCollectPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkCollectTable.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkCutMaterial.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkDuplicatePolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkExtractCTHPart.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkExtractPolyDataPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkExtractUnstructuredGridPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkExtractUserDefinedPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkIntegrateAttributes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPassThroughFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPCellDataToPointData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPeriodicFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPExtractDataArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPExtractSelectedArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPieceRequestFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPieceScalars.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPipelineSize.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPKdTree.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPLinearExtrusionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPMaskPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPOutlineCornerFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPOutlineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPOutlineFilterInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPPolyDataNormals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPProbeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPProjectSphereFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPReflectionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPResampleFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkProcessIdScalars.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPSphereSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPYoungsMaterialInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkRectilinearGridOutlineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkRemoveGhosts.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkTransmitPolyDataPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkTransmitRectilinearGridPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkTransmitStructuredDataPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkTransmitStructuredGridPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkTransmitUnstructuredGridPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkUnstructuredGridGhostCellsGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Parallel/vtkPExtractArraysOverTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Parallel/vtkFiltersParallelModule.h"
    )
endif()

