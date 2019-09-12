##============================================================================
##  Copyright (c) Kitware, Inc.
##  All rights reserved.
##  See LICENSE.txt for details.
##  This software is distributed WITHOUT ANY WARRANTY; without even
##  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
##  PURPOSE.  See the above copyright notice for more information.
##
##  Copyright 2014 National Technology & Engineering Solutions of Sandia, LLC (NTESS).
##  Copyright 2014 UT-Battelle, LLC.
##  Copyright 2014 Los Alamos National Security.
##
##  Under the terms of Contract DE-NA0003525 with NTESS,
##  the U.S. Government retains certain rights in this software.
##
##  Under the terms of Contract DE-AC52-06NA25396 with Los Alamos National
##  Laboratory (LANL), the U.S. Government retains certain rights in
##  this software.
##============================================================================

# When this file is run by CMake through the find_package command, the
# following targets will exist:
#   vtkm_cont       Target that contains most of VTK-m
#
#   vtkm_rendering  Target that contains all the rendering code
#
#   vtkm::tbb       Target that contains tbb related link information
#                   implicitly linked to by `vtkm_cont` if tbb is enabled
#
#   vtkm::openmp    Target that contains openmp related link information
#                   implicitly linked to by `vtkm_cont` if openmp is enabled
#
#   vtkm::cuda      Target that contains cuda related link information
#                   implicitly linked to by `vtkm_cont` if cuda is enabled
#
# The following local variables will also be defined:
#
#  VTKm_VERSION         Holds the version string of "Major.Minor"
#  VTKm_VERSION_FULL    Holds the version string of "Major.Minor.Patch.GitSha1"
#  VTKm_VERSION_MAJOR   Holds just the major version number
#  VTKm_VERSION_MINOR   Holds just the minor version number
#  VTKm_VERSION_PATCH   Holds just the patch version number
#
#  VTKm_BUILD_SHARED_LIBS     Will be enabled if VTK-m was built shared/dynamic
#  VTKm_ENABLE_CUDA           Will be enabled if VTK-m was built with CUDA support
#  VTKm_ENABLE_TBB            Will be enabled if VTK-m was built with TBB support
#  VTKm_ENABLE_OPENMP         Will be enabled if VTK-m was built with OpenMP support
#  VTKm_ENABLE_MPI            Will be enabled if VTK-m was built with MPI support
#  VTKm_ENABLE_RENDERING      Will be enabled if VTK-m was built with rendering support
#  VTKm_ENABLE_GL_CONTEXT     Will be enabled if VTK-m rendering was built with a GL context
#  VTKm_ENABLE_OSMESA_CONTEXT Will be enabled if VTK-m rendering was built with a osmesa context
#  VTKm_ENABLE_EGL_CONTEXT    Will be enabled if VTK-m rendering was built with a EGL context
#
#

if (CMAKE_VERSION VERSION_LESS "3.3")
  message(FATAL_ERROR "VTK-m requires CMake 3.3+")
endif()
if("${CMAKE_GENERATOR}" MATCHES "Visual Studio" AND
   CMAKE_VERSION VERSION_LESS "3.11")
  message(FATAL_ERROR "VTK-m requires CMake 3.11+ when using the Visual Studio Generators")
endif()


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was VTKmConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# The VTKm version number
set(VTKm_VERSION_MAJOR "1")
set(VTKm_VERSION_MINOR "2")
set(VTKm_VERSION_PATCH "0")
set(VTKm_VERSION_FULL "1.2.0")
set(VTKm_VERSION "1.2")

set(VTKm_BUILD_SHARED_LIBS "ON")
set(VTKm_ENABLE_CUDA "OFF")
set(VTKm_ENABLE_TBB "OFF")
set(VTKm_ENABLE_OPENMP "OFF")
set(VTKm_ENABLE_RENDERING "OFF")
set(VTKm_ENABLE_GL_CONTEXT "")
set(VTKm_ENABLE_OSMESA_CONTEXT "")
set(VTKm_ENABLE_EGL_CONTEXT "")
set(VTKm_ENABLE_MPI "OFF")

# This is true when the package is still in the build directory (not installed)
if(CMAKE_CURRENT_LIST_DIR STREQUAL "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/lib/cmake/paraview-5.6/vtkm")
  set(VTKm_PACKAGE_IN_BUILD TRUE)
endif()

if(VTKm_PACKAGE_IN_BUILD)
  set_and_check(VTKm_CMAKE_MODULE_PATH "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/vtkm/vtk-m/CMake")
else()
  set_and_check(VTKm_CMAKE_MODULE_PATH "${PACKAGE_PREFIX_DIR}/lib/cmake/paraview-5.6/vtkm")
endif()

# Load the library exports, but only if not compiling VTK-m itself
set_and_check(VTKm_CONFIG_DIR "${PACKAGE_PREFIX_DIR}/lib/cmake/paraview-5.6/vtkm")
if(NOT "${CMAKE_BINARY_DIR}" STREQUAL "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m")
  include(${VTKm_CONFIG_DIR}/VTKmTargets.cmake)
endif()

# VTKm requires some CMake Find modules not included with CMake, so
# include the CMake modules distributed with VTKm.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${VTKm_CMAKE_MODULE_PATH})

# This includes a host of functions used by VTK-m CMake.
include(VTKmWrappers)
include(VTKmRenderingContexts)
