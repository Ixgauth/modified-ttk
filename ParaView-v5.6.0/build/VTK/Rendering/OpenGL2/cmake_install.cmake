# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingOpenGL2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingOpenGL2-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingOpenGL2-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkRenderingOpenGL2-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingOpenGL2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingOpenGL2-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/CMakeFiles/vtkRenderingOpenGL2.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkRenderingOpenGL2Hierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGL.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/vtkTDxConfigure.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/vtkOpenGLError.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/vtkRenderingOpenGLConfigure.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/vtkRenderingOpenGL2ObjectFactory.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkCameraPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkClearRGBPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkClearZPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkCompositePolyDataMapper2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDefaultPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDepthOfFieldPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDepthImageProcessingPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDepthPeelingPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDualDepthPeelingPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkEDLShading.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkFramebufferPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkGaussianBlurPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkGenericOpenGLRenderWindow.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkHiddenLineRemovalPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkImageProcessingPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkLightingMapPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkLightsPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpaquePass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLBillboardTextActor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLBufferObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLCamera.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLFXAAFilter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLFramebufferObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLGL2PSHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLGlyph3DHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLGlyph3DMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLHardwareSelector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLImageAlgorithmHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLImageMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLImageSliceMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLIndexBufferObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLInstanceCulling.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLLabeledContourMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLLight.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLPointGaussianMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLPolyDataMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLPolyDataMapper2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLQuadHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderTimer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderTimerLog.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderUtilities.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderWindow.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLRenderer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLShaderCache.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLSkybox.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLSphereMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLState.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLStickMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLTextActor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLTextActor3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLTextMapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLTexture.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLVertexArrayObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLVertexBufferObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLVertexBufferObjectCache.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOpenGLVertexBufferObjectGroup.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkOverlayPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkPixelBufferObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkPointFillPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkRenderPassCollection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkRenderStepsPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkRenderbuffer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkSSAAPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkSequencePass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkShader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkShaderProgram.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkShadowMapBakerPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkShadowMapPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkSimpleMotionBlurPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkSobelGradientMagnitudePass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkTextureObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkTextureUnitManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkToneMappingPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkTransformFeedback.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkTranslucentPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkValuePass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkVolumetricPass.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDataTransferHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkDummyGPUInfoList.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkXRenderWindowInteractor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Rendering/OpenGL2/vtkXOpenGLRenderWindow.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Rendering/OpenGL2/vtkRenderingOpenGL2Module.h"
    )
endif()

