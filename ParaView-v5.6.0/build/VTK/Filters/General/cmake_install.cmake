# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersGeneral-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersGeneral-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersGeneral-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersGeneral-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersGeneral-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersGeneral-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/General/CMakeFiles/vtkFiltersGeneral.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersGeneralHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkAnnotationLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkAppendPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkApproximatingSubdivisionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkAreaContourSpectrumFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkAxes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBlankStructuredGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBlankStructuredGridWithImage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBlockIdScalars.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBoxClipDataSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBrownianPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCellCenters.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCellDerivatives.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCellValidator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkClipClosedSurface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkClipConvexPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkClipDataSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkClipVolume.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCoincidentPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkContourTriangulator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCountFaces.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCountVertices.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCursor2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCursor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCurvatures.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDataSetGradient.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDataSetGradientPrecompute.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDataSetTriangleFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDeformPointSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDensifyPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDicer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDiscreteFlyingEdges2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDiscreteFlyingEdges3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDiscreteFlyingEdgesClipper2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDiscreteMarchingCubes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkEdgePoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkExtractSelectedFrustum.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkExtractSelectionBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkGradientFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkGraphLayoutFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkGraphToPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkHierarchicalDataLevelFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkHyperStreamline.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkIconGlyphFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkImageMarchingCubes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkInterpolateDataSetAttributes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkInterpolatingSubdivisionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkLevelIdScalars.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkLinkEdgels.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMergeCells.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMultiBlockDataGroupFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMultiBlockFromTimeSeriesFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMultiBlockMergeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMultiThreshold.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkOBBDicer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkOBBTree.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkPassThrough.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkPointConnectivityFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkPolyDataStreamer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkPolyDataToReebGraphFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkProbePolyhedron.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkQuadraturePointInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkQuadraturePointsGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkQuadratureSchemeDictionaryGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkQuantizePolyDataPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRandomAttributeGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRectilinearGridClip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRectilinearGridToTetrahedra.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRecursiveDividingCubes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkReflectionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRotationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSampleImplicitFunctionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkShrinkFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkShrinkPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSpatialRepresentationFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSplineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSplitByCellScalarFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSplitField.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkStructuredGridClip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSubdivisionFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSubPixelPositionEdgels.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSynchronizeTimeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTableBasedClipDataSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTableToPolyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTableToStructuredGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTemporalPathLineFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTemporalStatistics.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTessellatorFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTimeSourceExample.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTransformFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkTransformPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkUncertaintyTubeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkVertexGlyphFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkVolumeContourSpectrumFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkVoxelContoursToSurfaceFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkWarpLens.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkWarpScalar.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkWarpTo.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkWarpVector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkYoungsMaterialInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMarchingContourFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkRectilinearGridToPointSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkGraphWeightEuclideanDistanceFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkGraphWeightFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkImageDataToPointSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkIntersectionPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkBooleanOperationPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkLoopBooleanPolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkDistancePolyDataFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkOverlappingAMRLevelIdScalars.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkExtractArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkMatricizeArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkNormalizeMatrixVectors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkPassArrays.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkSplitColumnComponents.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/General/vtkCellTreeLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/General/vtkFiltersGeneralModule.h"
    )
endif()

