# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkm/worklet/contourtree" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/ActiveEdgeTransferrer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/ChainDoubler.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/ChainGraph.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/ContourTree.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/CopyJoinSplit.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/CopyNeighbors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/CopySupernodes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/DegreeDelta.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/DegreeSubrangeOffset.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/EdgePeakComparator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/FillSupernodes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/FindLeaves.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/GoverningSaddleFinder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/JoinArcConnector.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/JoinSuperArcFinder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/JoinTreeTransferrer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/LinkComponentCaseTable2D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/LinkComponentCaseTable3D.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/MergeTree.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh2D_DEM_SaddleStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh2D_DEM_Triangulation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh2D_DEM_Triangulation_Macros.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh2D_DEM_VertexOutdegreeStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh2D_DEM_VertexStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh3D_DEM_SaddleStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh3D_DEM_Triangulation.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh3D_DEM_Triangulation_Macros.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh3D_DEM_VertexOutdegreeStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Mesh3D_DEM_VertexStarter.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/PrintVectors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/RegularPointTransferrer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/RegularToCandidate.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/RegularToCriticalDown.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/RegularToCriticalUp.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/ResetDegrees.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SaddleAscentFunctor.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SaddleAscentTransferrer.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SetJoinAndSplitArcs.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SetSupernodeInward.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SkipVertex.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/SubrangeOffset.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/TrunkBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/Types.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/UpdateOutbound.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/VertexDegreeUpdater.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/VertexMergeComparator.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/vtkm/worklet/contourtree/VertexValueComparator.h"
    )
endif()

