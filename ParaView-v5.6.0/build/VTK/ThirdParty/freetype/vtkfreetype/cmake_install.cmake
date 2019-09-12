# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkfreetype-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkfreetype-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkfreetype/include" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/ft2build.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_freetype_mangle.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_ftmodule.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/freetype/vtkfreetype/include/vtkFreeTypeConfig.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkfreetype/include/freetype" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/freetype.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftadvanc.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbbox.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbdf.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbitmap.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbzip2.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcache.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftchapters.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrdef.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrors.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgasp.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftglyph.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgxval.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgzip.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftimage.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftincrem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlcdfil.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlist.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlzw.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmac.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmm.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmodapi.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmoderr.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftotval.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftoutln.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftpfr.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftrender.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsizes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsnames.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftstroke.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsynth.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsystem.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttrigon.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttypes.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftwinfnt.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftxf86.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/t1tables.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttnameid.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttables.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttags.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttunpat.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftheader.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftmodule.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftoption.h"
    "/home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftstdlib.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftconfig.h"
    )
endif()

