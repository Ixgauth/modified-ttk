# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkCommonTransforms-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkCommonTransforms-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkCommonTransforms-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkCommonTransforms-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkCommonTransforms-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkCommonTransforms-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Common/Transforms/CMakeFiles/vtkCommonTransforms.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkCommonTransformsHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkAbstractTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkCylindricalTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkGeneralTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkHomogeneousTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkIdentityTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkLinearTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkMatrixToHomogeneousTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkMatrixToLinearTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkPerspectiveTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkSphericalTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkThinPlateSplineTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkTransform2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkTransformCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkWarpTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Common/Transforms/vtkLandmarkTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Common/Transforms/vtkCommonTransformsModule.h"
    )
endif()

