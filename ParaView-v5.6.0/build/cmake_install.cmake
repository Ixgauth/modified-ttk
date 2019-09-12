# Install script for directory: /home/ian/ttk/ParaView-v5.6.0

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/vtkPVConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimeLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVPythonCatalystPython36D-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVPythonCatalystPython36D-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVPythonCatalystPython36D-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVPythonCatalystPython36D-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVPythonCatalystPython36D-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVPythonCatalystPython36D-pv5.6.so"
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimeLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules" TYPE MODULE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so"
         OLD_RPATH "/home/ian/ttk/ParaView-v5.6.0/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/vtkmodules/vtkPVPythonCatalystPython.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-5.6/plugins" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/paraview-5.6/plugins/.plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles/ParaViewConfig.cmake"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6" TYPE DIRECTORY FILES "/home/ian/ttk/ParaView-v5.6.0/CMake/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/VTK/CMake/TopologicalSort.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/paraview-5.6/examples" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/TTK/Data/Example1.vti")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/paraview-5.6/examples" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/TTK/Data/Example2.vti")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/paraview-5.6/examples" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/TTK/Data/Example3.vti")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/Python/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Utilities/PythonInitializer/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/CoProcessing/PythonCatalyst/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/AcceleratedAlgorithms/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/AnalyzeNIfTIReaderWriter/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/ArrowGlyph/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/DigitalRockPhysics/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/EmbossingRepresentations/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/EyeDomeLighting/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/GeodesicMeasurementPlugin/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/LagrangianParticleTracker/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/MOOSETools/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/Moments/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/NetCDFTimeAnnotationPlugin/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/NonOrthogonalSource/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/SLACTools/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/SierraPlotTools/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/StreamLinesRepresentation/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/StreamingParticles/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/SurfaceLIC/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/TestPlugin/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/ThickenLayeredCells/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Plugins/VTKm/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables/cmake_install.cmake")
  include("/home/ian/ttk/ParaView-v5.6.0/build/Applications/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ian/ttk/ParaView-v5.6.0/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
