# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkmetaio-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkmetaio-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkmetaio" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/localMetaConfiguration.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaArrow.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaBlob.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaCommand.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaContour.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaDTITube.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaEllipse.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaEvent.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaFEMObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaForm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaGaussian.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaGroup.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaITKUtils.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaImage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaImageTypes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaImageUtils.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaLandmark.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaLine.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaMesh.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaOutput.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaScene.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaSurface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaTube.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaTubeGraph.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaTypes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaUtils.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/Utilities/MetaIO/vtkmetaio/metaVesselTube.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/Utilities/MetaIO/vtkmetaio/metaIOConfig.h"
    )
endif()

