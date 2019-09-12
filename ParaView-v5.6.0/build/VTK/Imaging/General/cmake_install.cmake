# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingGeneral-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingGeneral-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkImagingGeneral-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkImagingGeneral-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingGeneral-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingGeneral-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Imaging/General/CMakeFiles/vtkImagingGeneral.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkImagingGeneralHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageAnisotropicDiffusion2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageAnisotropicDiffusion3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageCheckerboard.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageCityBlockDistance.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageConvolve.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageCorrelation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageEuclideanDistance.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageEuclideanToPolar.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageGaussianSmooth.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageGradient.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageGradientMagnitude.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageHybridMedian2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageLaplacian.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageMedian3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageNormalize.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageRange3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSeparableConvolution.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSobel2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSobel3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSpatialAlgorithm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageVariance3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkSimpleImageFilterExample.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSlab.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/General/vtkImageSlabReslice.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Imaging/General/vtkImagingGeneralModule.h"
    )
endif()

