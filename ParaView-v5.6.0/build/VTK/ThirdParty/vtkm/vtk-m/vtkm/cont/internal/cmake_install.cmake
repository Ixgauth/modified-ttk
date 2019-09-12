# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkm/cont/internal" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayExportMacros.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayHandleBasicImpl.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayHandleBasicImpl.hxx"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayHandleExecutionManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayManagerExecution.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayManagerExecutionShareWithControl.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayPortalFromIterators.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayPortalShrink.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ArrayTransfer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ConnectivityExplicitInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterAlgorithmGeneral.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterAtomicArrayImplementation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterDefaultSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterError.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterListHelpers.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DeviceAdapterTag.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/DynamicTransform.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/FunctorsGeneral.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/IteratorFromArrayPortal.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/KXSort.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ParallelRadixSort.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ParallelRadixSortInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/ReverseConnectivityBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/SimplePolymorphicContainer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/StorageError.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/VirtualObjectTransfer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/VirtualObjectTransferShareWithControl.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/cont/internal/testing/cmake_install.cmake")

endif()

