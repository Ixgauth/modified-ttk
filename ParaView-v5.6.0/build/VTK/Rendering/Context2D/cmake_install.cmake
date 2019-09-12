# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingContext2D-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingContext2D-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingContext2D-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingContext2D-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingContext2D-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingContext2D-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Context2D/CMakeFiles/vtkRenderingContext2D.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkRenderingContext2DHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkAbstractContextBufferId.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkAbstractContextItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkBlockItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkBrush.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContext2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContext3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextClip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextDevice2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextDevice3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextKeyEvent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextMapper2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextMouseEvent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextScene.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkContextTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkImageItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkMarkerUtilities.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkPen.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkPolyDataItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkPropItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Context2D/vtkTooltipItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Context2D/vtkRenderingContext2DModule.h"
    )
endif()

