# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkm/cont/arg" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/ControlSignatureTagBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/Transport.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagArrayIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagArrayInOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagArrayOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagAtomicArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagCellSetIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagExecObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagKeyedValuesIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagKeyedValuesInOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagKeyedValuesOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagKeysIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagTopologyFieldIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagWholeArrayIn.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagWholeArrayInOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TransportTagWholeArrayOut.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheck.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagAtomicArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagCellSet.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagCellSetStructured.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagExecObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/TypeCheckTagKeys.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/arg/testing/cmake_install.cmake")

endif()

