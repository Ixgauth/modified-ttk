# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVVTKExtensionsRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVVTKExtensionsRendering-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVVTKExtensionsRendering-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVVTKExtensionsRendering-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVVTKExtensionsRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVVTKExtensionsRendering-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/VTKExtensions/Rendering//CMakeFiles/vtkPVVTKExtensionsRendering.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVVTKExtensionsRenderingHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkAttributeDataToTableFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkBlockDeliveryPreprocessor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCameraInterpolator2.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCameraManipulator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCameraManipulatorGUIHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCleanArrays.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCompositeDataToUnstructuredGridFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkContext2DScalarBarActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCSVExporter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkImageCompressor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkImageTransparencyFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkKdTreeGenerator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkKdTreeManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkLZ4Compressor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkMarkSelectedRows.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkMultiSliceContextItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkOrderedCompositeDistributor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPartitionOrdering.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPartitionOrderingInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVAxesActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVAxesWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVCameraCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVCenterAxesActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkBoundingRectContextDevice2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVDefaultPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVDiscretizableColorTransferFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVGeometryFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVGL2PSExporter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVInteractiveViewLinkRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVInteractorStyle.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVJoystickFly.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVJoystickFlyIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVJoystickFlyOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVLODActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVLODVolume.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVMergeTables.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVMergeTablesMultiBlock.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVPlotTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVRecoverGeometryWireframe.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVScalarBarActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVScalarBarRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballMoveActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballMultiRotate.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballPan.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballRoll.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballRotate.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballZoom.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVTrackballZoomToMouse.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkPVUpdateSuppressor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkResampledAMRImageSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkSelectionConverter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkSortedTableStreamer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkSquirtCompressor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkTileDisplayHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkTilesHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkTrackballPan.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkUpdateSuppressorPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkViewLayout.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkVolumeRepresentationPreprocessor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkZlibImageCompressor.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/VTKExtensions/Rendering/vtkCinemaExporter.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/VTKExtensions/Rendering/vtkPVVTKExtensionsRenderingModule.h"
    )
endif()

