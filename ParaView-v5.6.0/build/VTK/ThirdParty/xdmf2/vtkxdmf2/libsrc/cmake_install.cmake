# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkxdmf2" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/Xdmf.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfArrayCopyMacro.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfAttribute.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDOM.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataDesc.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataItem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataStructure.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDataTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmBuffer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmComm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmCommMpi.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfDsmMsg.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExport.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExpr.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExprYacc.tab.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfExpression.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfGeometry.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfH5Driver.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHDF.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHDFSupport.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfHeavyData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfInformation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfLightData.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfMap.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfRegion.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfRoot.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfTime.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfTopology.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValues.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesBinary.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesHDF.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesMySQL.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfValuesXML.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/bz2stream.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/gzstream.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkxdmf2" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/xdmf2/vtkxdmf2/libsrc/XdmfConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkxdmf2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkxdmf2-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkxdmf2-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkxdmf2-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkxdmf2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkxdmf2-pv5.6.so"
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

