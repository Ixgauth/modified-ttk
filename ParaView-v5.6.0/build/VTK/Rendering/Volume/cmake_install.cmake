# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingVolume-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingVolume-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Volume/CMakeFiles/vtkRenderingVolume.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkRenderingVolumeHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkDirectionEncoder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkEncodedGradientEstimator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkEncodedGradientShader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFiniteDifferenceGradientEstimator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointRayCastImage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastMIPHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkFixedPointVolumeRayCastMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkGPUVolumeRayCastMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkMultiVolume.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkOSPRayVolumeInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkProjectedTetrahedraMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkRayCastImageDisplayHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkRecursiveSphereDirectionEncoder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkSphericalDirectionEncoder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridBunykRayCastFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridLinearRayIntegrator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridPartialPreIntegration.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridPreIntegration.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayCastMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeRayIntegrator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkUnstructuredGridVolumeZSweepMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkVolumeMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkVolumeOutlineSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkVolumePicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Volume/vtkVolumeRayCastSpaceLeapingImageFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Volume/vtkRenderingVolumeModule.h"
    )
endif()

