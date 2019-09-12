#-----------------------------------------------------------------------------
#
# ParaViewConfig.cmake - ParaView CMake configuration file for external projects.
#
# This file is configured by ParaView and used by the UseParaView.cmake module
# to load ParaView's settings for an external project.
set (__pv_install_tree TRUE)
if (__pv_install_tree)
  get_filename_component(location "${CMAKE_CURRENT_LIST_FILE}" PATH)
  set (VTK_CONFIG_FILE "${location}/VTKConfig.cmake")
  set (ParaView_CMAKE_DIR "${location}")
  set (PARAVIEW_CONFIG_TARGETS_FILE "${location}/ParaViewTargets.cmake")
else()
  # The ParaView is in the build-location.
  set (VTK_CONFIG_FILE "/home/ian/ttk/ParaView-v5.6.0/build/VTK/VTKConfig.cmake")
  set (ParaView_CMAKE_DIR "/home/ian/ttk/ParaView-v5.6.0/CMake")
  set (PARAVIEW_CONFIG_TARGETS_FILE "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewTargets.cmake")
endif()

#------------------------------------------------------------------------------
# Version information for ParaView
SET(PARAVIEW_VERSION_MAJOR "5")
SET(PARAVIEW_VERSION_MINOR "6")
SET(PARAVIEW_VERSION_PATCH "0")
SET(PARAVIEW_VERSION_FULL  "5.6.0")
SET(PARAVIEW_VERSION       "5.6")

# The location of the UseParaView.cmake file
# FIXME: I don't like this mixing of case, we need to fix that to be consistent.
set (ParaView_USE_FILE "${ParaView_CMAKE_DIR}/UseParaView.cmake")

set (PARAVIEW_USE_FILE ${ParaView_USE_FILE})
set (PARAVIEW_CMAKE_DIR ${ParaView_CMAKE_DIR})

# Setup VTK-m if it was enabled
set(PARAVIEW_USE_VTKM ON)
if(PARAVIEW_USE_VTKM)
   set(VTKM_CMAKE_DIR "${VTK_CMAKE_DIR}")
  if(NOT __vtk_install_tree)
    set(VTKM_CMAKE_DIR "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/vtkm/vtk-m/lib/cmake/paraview-5.6/vtkm")
  endif()
  get_filename_component(VTKM_CMAKE_DIR "${VTKM_CMAKE_DIR}" PATH)
  find_package(VTKm
               PATHS "${CMAKE_CURRENT_LIST_DIR}"
                     "${VTKM_CMAKE_DIR}"
                     "${VTK_RUNTIME_DIRS}"
               NO_DEFAULT_PATH
               )
endif()

# Import ParaView targets.
if(NOT TARGET vtkPVCommon)
  include("${PARAVIEW_CONFIG_TARGETS_FILE}")
endif()

# load VTK config. This will bring in information about all modules (including
# ParaView's modules).
set (paraview_build_qt_gui "ON")
if (paraview_build_qt_gui)
  set (VTK_FIND_COMPONENTS pqApplicationComponents)
else()
  set (VTK_FIND_COMPONENTS vtkPVServerManagerApplication)
endif()

set (PARAVIEW_QT_VERSION "5")
set (VTK_FIND_COMPONENTS ${VTK_FIND_COMPONENTS} ${ParaView_FIND_COMPONENTS})
include("${VTK_CONFIG_FILE}")

if (__pv_install_tree)
  if (WIN32)
    set (PARAVIEW_RUNTIME_DIRS "${VTK_INSTALL_PREFIX}/bin")
  else ()
    set (PARAVIEW_RUNTIME_DIRS "${VTK_INSTALL_PREFIX}/lib")
  endif ()
  set (PARAVIEW_WWW_DIR "${VTK_INSTALL_PREFIX}/www")
else()
  if (WIN32)
    set (PARAVIEW_RUNTIME_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/bin")
  else ()
    set (PARAVIEW_RUNTIME_DIRS "/home/ian/ttk/ParaView-v5.6.0/build/lib")
  endif ()
  list(APPEND VTK_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/build")
  set (PARAVIEW_WWW_DIR "/home/ian/ttk/ParaView-v5.6.0/build/www")
endif()

# unless using external vtk (when we start supporting it, that is)
# PARAVIEW_INCLUDE_DIRS is same as VTK_INCLUDE_DIRS, but to make it easier for
# ParaView users.
set (PARAVIEW_INCLUDE_DIRS ${VTK_INCLUDE_DIRS})

#------------------------------------------------------------------------------
# ParaView global configuration options.

set (PARAVIEW_BUILD_SHARED_LIBS "ON")
set (PARAVIEW_BUILD_QT_GUI "ON")
set (PARAVIEW_ENABLE_EMBEDDED_DOCUMENTATION "ON")
set (PARAVIEW_USE_MPI "OFF")
set (PARAVIEW_ENABLE_PYTHON "ON")
set (PARAVIEW_ENABLE_QT_SUPPORT "ON")
set (PARAVIEW_USE_VISITBRIDGE "OFF")
set (PARAVIEW_ENABLE_COPROCESSING "")
set (PARAVIEW_ENABLE_WEB "ON")

if (NOT OFF)
  if (PARAVIEW_ENABLE_PYTHON)
    if (__pv_install_tree)
      set(PARAVIEW_PYTHONPATH "${VTK_INSTALL_PREFIX}/lib/python3.6/site-packages")
    else ()
      set(PARAVIEW_PYTHONPATH "/home/ian/ttk/ParaView-v5.6.0/build/lib/python3.6/site-packages")
    endif ()
  endif ()
endif ()

if(PARAVIEW_ENABLE_QT_SUPPORT)
  # If Qt support is enabled, provides clues to Qt version used to build ParaView.
  if(PARAVIEW_QT_VERSION VERSION_GREATER "4")
    # nothing to do. the module system handles it properly.
  else()
    set(PARAVIEW_QT_QMAKE_EXECUTABLE "")
  endif()
endif()

# cleanup
unset(__pv_install_tree)
