# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkImagingCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkImagingCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Imaging/Core/CMakeFiles/vtkImagingCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkImagingCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkExtractVOI.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageAppendComponents.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageBlend.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageCacheFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageCast.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageChangeInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageClip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageConstantPad.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageDataStreamer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageDecomposeFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageDifference.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageExtractComponents.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageFlip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageIterateFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageMagnify.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageMapToColors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageMask.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageMirrorPad.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImagePadFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImagePermute.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImagePointDataIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImagePointIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageResample.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageReslice.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageResliceToColors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageShiftScale.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageShrink3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageStencilIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageThreshold.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageTranslateExtent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageWrapPad.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkRTAnalyticSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageResize.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageBSplineCoefficients.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageStencilData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageStencilAlgorithm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkAbstractImageInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageBSplineInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageBSplineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageSincInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Imaging/Core/vtkImageStencilSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Imaging/Core/vtkImagingCoreModule.h"
    )
endif()

