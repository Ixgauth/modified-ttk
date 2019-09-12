# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkm/exec" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/BoundingIntervalHierarchyExec.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/AtomicArrayExecutionObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellDerivative.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellEdge.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellFace.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellInside.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellInterpolate.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/CellMeasure.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ColorTable.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ConnectivityExplicit.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ConnectivityPermuted.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ConnectivityStructured.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ExecutionWholeArray.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/FunctorBase.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/Jacobian.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ParametricCoordinates.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/PointLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/PointLocatorUniformGrid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/TaskBase.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkm/exec" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/ColorTable.hxx")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/internal/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/arg/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/serial/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/tbb/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/openmp/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/cuda/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/vtkm/exec/testing/cmake_install.cmake")

endif()

