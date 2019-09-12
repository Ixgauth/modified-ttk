# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkChartsCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkChartsCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Charts/Core/CMakeFiles/vtkChartsCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkChartsCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkAxis.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkAxisExtended.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkCategoryLegend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChart.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartHistogram2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartLegend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartMatrix.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartParallelCoordinates.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartPie.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartXY.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkChartXYZ.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkColorLegend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkColorTransferControlPointsItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkColorTransferFunctionItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkCompositeControlPointsItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkCompositeTransferFunctionItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkContextArea.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkContextPolygon.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkControlPointsItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkInteractiveArea.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkLookupTableItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPiecewiseControlPointsItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPiecewiseFunctionItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPiecewisePointHandleItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlot.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlot3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotArea.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotBag.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotBar.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotFunctionalBag.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotHistogram2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotLine.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotLine3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotParallelCoordinates.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotPie.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotPoints3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotStacked.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkPlotSurface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkScalarsToColorsItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Charts/Core/vtkScatterPlotMatrix.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Charts/Core/vtkChartsCoreModule.h"
    )
endif()

