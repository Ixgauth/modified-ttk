# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Core/CMakeFiles/vtkFiltersCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAppendArcLength.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAppendFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAppendPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAppendSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkArrayCalculator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAssignAttribute.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAttributeDataToFieldDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkBinCellDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCellDataToPointData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCleanPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkClipPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCompositeDataProbeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkConnectivityFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkContourFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkContourGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkContourHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDataObjectGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDataObjectToDataSetFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDataSetEdgeSubdivisionCriterion.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDataSetToDataObjectFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDecimatePolylineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDecimatePro.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDelaunay2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkDelaunay3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkElevationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkExecutionTimer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkFeatureEdges.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkFieldDataToAttributeDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkFlyingEdges2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkFlyingEdges3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkFlyingEdgesPlaneCutter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkGlyph2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkGlyph3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkHedgeHog.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkHull.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkIdFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMarchingCubes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMarchingSquares.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMaskFields.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMaskPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMaskPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMassProperties.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMergeDataObjectFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMergeFields.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMergeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMoleculeAppend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkMultiObjectMassProperties.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkPlaneCutter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkPointDataToCellData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkPolyDataConnectivityFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkPolyDataNormals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkProbeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkQuadricClustering.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkQuadricDecimation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkRearrangeFields.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkResampleToImage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkResampleWithDataSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkReverseSense.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSimpleElevationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSmoothPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSphereTreeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStaticCleanPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStripper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStructuredGridOutlineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSynchronizedTemplates2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSynchronizedTemplates3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkSynchronizedTemplatesCutter3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkTensorGlyph.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkThreshold.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkThresholdPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkTransposeTable.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkTriangleFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkTriangleMeshPointNormals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkTubeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkUnstructuredGridQuadricDecimation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkVectorDot.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkVectorNorm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkVoronoi2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkWindowedSincPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCutter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCompositeCutter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkGridSynchronizedTemplates3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkRectilinearSynchronizedTemplates.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkEdgeSubdivisionCriterion.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStreamingTessellator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkImplicitPolyDataDistance.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStreamerBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkCenterOfMass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkImageAppend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkStructuredGridAppend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Core/vtkAppendCompositeDataLeaves.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Core/vtkFiltersCoreModule.h"
    )
endif()

