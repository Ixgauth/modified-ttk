# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersStatistics-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersStatistics-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersStatistics-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersStatistics-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersStatistics-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersStatistics-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Statistics/CMakeFiles/vtkFiltersStatistics.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersStatisticsHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkAutoCorrelativeStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkBivariateLinearTableThreshold.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkComputeQuartiles.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkContingencyStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkCorrelativeStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkDescriptiveStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkHighestDensityRegionsStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkExtractFunctionalBagPlot.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkKMeansDistanceFunctorCalculator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkKMeansDistanceFunctor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkKMeansStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkMultiCorrelativeStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkOrderStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkPCAStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkStatisticsAlgorithm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkStrahlerMetric.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Statistics/vtkStreamingStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Statistics/vtkFiltersStatisticsModule.h"
    )
endif()

