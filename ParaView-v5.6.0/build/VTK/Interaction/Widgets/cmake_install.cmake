# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInteractionWidgets-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInteractionWidgets-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkInteractionWidgets-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkInteractionWidgets-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInteractionWidgets-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInteractionWidgets-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Interaction/Widgets/CMakeFiles/vtkInteractionWidgets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkInteractionWidgetsHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtk3DWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAbstractPolygonalHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAbstractWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAffineRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAffineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAffineWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAngleRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAngleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAngleRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAngleWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAxesTransformRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkAxesTransformWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBalloonRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBalloonWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBezierContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBiDimensionalRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBiDimensionalRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBiDimensionalWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBorderRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBorderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBoundedPlanePointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBoxRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBoxWidget2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBoxWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkBrokenLineWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkButtonRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkButtonWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCameraRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCameraWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCaptionRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCaptionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCellCentersPointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCenteredSliderRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCenteredSliderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCheckerboardRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCheckerboardWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkClosedSurfacePointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkConstrainedPointHandleRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkContinuousValueWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkContinuousValueWidgetRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkContourRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkContourWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkCurveRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkDijkstraImageContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkDistanceRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkDistanceRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkDistanceRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkDistanceWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkEllipsoidTensorProbeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkEvent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkFinitePlaneRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkFinitePlaneWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkFixedSizeHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkFocalPlaneContourRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkFocalPlanePointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkHandleRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkHandleWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkHoverWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImageActorPointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImageCroppingRegionsWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImageOrthoPlanes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImagePlaneWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImageTracerWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImplicitCylinderRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImplicitCylinderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImplicitPlaneRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImplicitPlaneWidget2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkImplicitPlaneWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLinearContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLineWidget2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLineWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLogoRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkLogoWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkMeasurementCubeHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkOrientationMarkerWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkOrientedGlyphContourRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkOrientedGlyphFocalPlaneContourRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkOrientedPolygonalHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkParallelopipedRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkParallelopipedWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPlaneWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPlaybackRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPlaybackWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPointHandleRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPointHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPointWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolyDataContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolyDataPointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolyDataSourceWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolyLineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolyLineWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolygonalHandleRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolygonalSurfaceContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkPolygonalSurfacePointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkProgressBarRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkProgressBarWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkProp3DButtonRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkRectilinearWipeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkRectilinearWipeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkScalarBarRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkScalarBarWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSeedRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSeedWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSliderRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSliderRepresentation3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSliderRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSliderWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSphereHandleRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSphereRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSphereWidget2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSphereWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSplineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSplineWidget2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkSplineWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTensorProbeRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTensorProbeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTerrainContourLineInterpolator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTerrainDataPointPlacer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTextRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTexturedButtonRepresentation2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTexturedButtonRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkTextWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkWidgetCallbackMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkWidgetEvent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkWidgetRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkWidgetSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkXYPlotWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorLineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorThickLineRepresentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorPicker.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Interaction/Widgets/vtkResliceCursorPolyDataAlgorithm.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Interaction/Widgets/vtkInteractionWidgetsModule.h"
    )
endif()

