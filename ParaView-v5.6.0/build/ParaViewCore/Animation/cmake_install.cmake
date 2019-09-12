# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVAnimation-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVAnimation-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVAnimation-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVAnimation-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVAnimation-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVAnimation-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/Animation//CMakeFiles/vtkPVAnimation.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVAnimationHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkAnimationPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkCompositeAnimationPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVBooleanKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVCameraAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVCameraCueManipulator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVCameraKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVCompositeKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVCueManipulator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVExponentialKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVKeyFrameAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVKeyFrameAnimationCueForProxies.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVKeyFrameCueManipulator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVRampKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVRepresentationAnimationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPVSinusoidKeyFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkRealtimeAnimationPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSequenceAnimationPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSIXMLAnimationWriterRepresentationProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMAnimationFrameWindowDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMAnimationScene.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMAnimationSceneGeometryWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMAnimationSceneProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMAnimationSceneWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkSMSaveAnimationProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkTimestepsAnimationPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkXMLPVAnimationWriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/Animation/vtkPythonAnimationCue.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/Animation/vtkPVAnimationModule.h"
    )
endif()

