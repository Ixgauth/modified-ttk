# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkAcceleratorsVTKm-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkAcceleratorsVTKm-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkAcceleratorsVTKm-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkAcceleratorsVTKm-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkAcceleratorsVTKm-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkAcceleratorsVTKm-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/ian/ttk/ParaView-v5.6.0/build/lib:/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Accelerators/Vtkm/CMakeFiles/vtkAcceleratorsVTKm.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkAcceleratorsVTKmHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmTags.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmFilterPolicy.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Accelerators/Vtkm/vtkmConfig.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmAverageToCells.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmAverageToPoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmCleanGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmClip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmContour.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmExternalFaces.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmExtractVOI.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmGradient.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmHistogram.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmLevelOfDetail.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmNDHistogram.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmPointElevation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmPolyDataNormals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmProbe.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmThreshold.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmTriangleMeshPointNormals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmWarpScalar.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmWarpVector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmCellSetExplicit.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmCellSetSingleType.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmConnectivityExec.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Accelerators/Vtkm/vtkAcceleratorsVTKmModule.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE DIRECTORY FILES "/home/ian/ttk/ParaView-v5.6.0/VTK/Accelerators/Vtkm/vtkmlib" FILES_MATCHING REGEX "/[^/]*\\.h[^/]*$")
endif()

