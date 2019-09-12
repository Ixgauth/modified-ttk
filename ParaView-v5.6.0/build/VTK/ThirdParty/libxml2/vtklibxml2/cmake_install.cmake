# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/VTK/ThirdParty/libxml2/vtklibxml2

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtklibxml2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtklibxml2-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtklibxml2-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtklibxml2-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtklibxml2-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtklibxml2-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6/vtklibxml2/libxml" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlversion.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/DOCBparser.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/HTMLparser.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/HTMLtree.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/SAX.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/SAX2.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/c14n.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/catalog.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/chvalid.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/debugXML.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/dict.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/encoding.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/entities.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/globals.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/hash.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/list.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/nanoftp.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/nanohttp.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/parser.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/parserInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/pattern.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/relaxng.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/schemasInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/schematron.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/threads.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/tree.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/uri.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/valid.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/vtk_libxml2_mangle.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xinclude.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xlink.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlIO.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlautomata.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlerror.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlexports.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlmemory.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlmodule.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlreader.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlregexp.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlsave.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemas.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemastypes.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlstring.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlunicode.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xmlwriter.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpath.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpathInternals.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/VTK/ThirdParty/libxml2/vtklibxml2/libxml/xpointer.h"
    )
endif()

