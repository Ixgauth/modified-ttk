# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreRendering-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVClientServerCoreRendering-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVClientServerCoreRendering-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreRendering-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVClientServerCoreRendering-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ClientServerCore/Rendering//CMakeFiles/vtkPVClientServerCoreRendering.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVClientServerCoreRenderingHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkStreamingPriorityQueue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkGeometryRepresentationInternal.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtk3DWidgetRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkAMROutlineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkAMRStreamingPriorityQueue.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkAMRStreamingVolumeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkCacheSizeKeeper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkCaveSynchronizedRenderers.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkChartSelectionRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkChartWarning.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkClientServerMoveData.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkCompositeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkDataLabelRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkFeatureEdgesRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkGeometryRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkGeometryRepresentationWithFaces.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkGeometrySliceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkGlyph3DRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkImageSliceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkImageVolumeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkMoleculeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkMPIMoveData.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkOutlineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPExtentTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPolarAxesRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkProgressBarSourceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVBagChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVBoxChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVCacheKeeper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVCacheKeeperPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVCacheSizeInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVClientServerSynchronizedRenderers.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVCompositeOrthographicSliceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVCompositeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVContextInteractorStyle.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVContextView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVDataDeliveryManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVDataRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVDataRepresentationPipeline.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVGridAxes3DRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVHardwareSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVHistogramChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVImageSliceMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVImplicitCylinderRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVImplicitPlaneRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVLastSelectionInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVLight.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVMultiSliceView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVOpenGLInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVOrthographicSliceView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVMaterialLibrary.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVParallelCoordinatesRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVPlotMatrixRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVPlotMatrixView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVProminentValuesInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVRayCastPickingHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVRenderingCapabilitiesInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVRenderView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVRenderViewSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVRepresentedDataInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVSelectionInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVStreamingPiecesInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVSynchronizedRenderer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVSynchronizedRenderWindows.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVXYChartView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkQuartileChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkRulerSourceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkSelectionDeliveryFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkSelectionRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkSpreadSheetRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkSpreadSheetView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkStructuredGridVolumeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkTableExtentTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkTextSourceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkThreeSliceFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkUnstructuredGridVolumeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkXYChartRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPointGaussianRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPythonRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPythonView.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVDisplayInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ClientServerCore/Rendering/vtkPVOpenGLExtensionsInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ClientServerCore/Rendering/vtkPVClientServerCoreRenderingModule.h"
    )
endif()

