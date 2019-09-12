# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersPoints-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkFiltersPoints-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Points/CMakeFiles/vtkFiltersPoints.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkFiltersPointsHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkBoundedPointSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkConnectedPointsFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkDensifyPointCloudFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkEllipsoidalGaussianKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkEuclideanClusterExtraction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkExtractHierarchicalBins.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkExtractEnclosedPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkExtractPointCloudPiece.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkExtractPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkExtractSurface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkFitImplicitFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkGaussianKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkGeneralizedKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkHierarchicalBinningFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkInterpolationKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkLinearKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkMaskPointsFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPCACurvatureEstimation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPCANormalEstimation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPointCloudFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPointDensityFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPointInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPointInterpolator2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkPointOccupancyFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkProbabilisticVoronoiKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkRadiusOutlierRemoval.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSPHInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSPHCubicKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSPHKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSPHQuarticKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSPHQuinticKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkShepardKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkSignedDistance.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkStatisticalOutlierRemoval.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkUnsignedDistance.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkVoxelGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkVoronoiKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Filters/Points/vtkWendlandQuinticKernel.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Filters/Points/vtkFiltersPointsModule.h"
    )
endif()

