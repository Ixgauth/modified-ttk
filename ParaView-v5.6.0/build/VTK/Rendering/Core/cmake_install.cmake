# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Core/CMakeFiles/vtkRenderingCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkRenderingCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGPUInfoListArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkNoise200x200.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPythagoreanQuadruples.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRayCastStructures.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderingCoreEnums.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTDxMotionEventInfo.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractMapper3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractVolumeMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkActor2DCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkActor2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkActorCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAssembly.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkBackgroundColorMonitor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkBillboardTextActor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCameraActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCamera.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCameraInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCellCenterDepthSort.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCIEDE2000.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkColorTransferFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCompositeDataDisplayAttributes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCompositeDataDisplayAttributesLegacy.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCompositePolyDataMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCoordinate.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCullerCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCuller.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkDataSetMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkDiscretizableColorTransferFunction.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkDistanceToCamera.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkFollower.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkFrameBufferObjectBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkFrustumCoverageCuller.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkFXAAOptions.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGenericRenderWindowInteractor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGenericVertexAttributeMapping.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGlyph3DMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGPUInfo.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGPUInfoList.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGraphicsFactory.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGraphMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkGraphToGlyphs.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkHardwareSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkHierarchicalPolyDataMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageMapper3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageSlice.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkImageSliceMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkInteractorEventRecorder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkInteractorObserver.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLabeledContourMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLightActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLightCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLight.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLightKit.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLogLookupTable.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLookupTableWithEnabling.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkMapArrayValues.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkMapper2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkMapperCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkObserverMediator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPointGaussianMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPolyDataMapper2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPolyDataMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProp3DCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProp3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProp3DFollower.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPropAssembly.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPropCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProp.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProperty2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRendererCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRendererDelegate.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRendererSource.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderState.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderTimerLog.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderWindowCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderWindow.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderWindowInteractor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderWindowInteractor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkSelectVisiblePoints.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkShaderDeviceAdapter2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkSkybox.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextActor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTexture.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTexturedActor2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTransformCoordinateSystems.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTransformInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTupleInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkViewDependentErrorMetric.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkViewport.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkVisibilitySort.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkVolumeCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkVolume.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkVolumeProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkWindowLevelLookupTable.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkWindowToImageFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAssemblyNode.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAssemblyPath.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAssemblyPaths.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAreaPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractPropPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPropPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPickingManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkLODProp3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkWorldPointPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkCellPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkPointPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderedAreaPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkScenePicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkInteractorStyle.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkInteractorStyleSwitchBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkInteractorStyle3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTDxInteractorStyle.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTDxInteractorStyleCamera.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTDxInteractorStyleSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkStringToImage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextPropertyCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkTextRenderer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractInteractionDevice.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkAbstractRenderDevice.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/Core/vtkRenderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/Core/vtkRenderingCoreModule.h"
    )
endif()

