# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ian/ttk/ParaView-v5.6.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ian/ttk/ParaView-v5.6.0/build

# Include any dependencies generated for this target.
include VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/depend.make

# Include the progress variables for this target.
include VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/progress.make

# Include the compile flags for this target's objects.
include VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/flags.make

VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx: bin/vtkWrapPythonInit-pv5.6
VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx: VTK/Wrapping/Python/vtkImagingColorPythonInit.data
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Python Wrapping - generating vtkImagingColorPythonInit.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && ../../../bin/vtkWrapPythonInit-pv5.6 /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInit.data /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInitImpl.cxx

VTK/Wrapping/Python/vtkImagingColorPythonInitImpl.cxx: VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate VTK/Wrapping/Python/vtkImagingColorPythonInitImpl.cxx

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/flags.make
VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o: VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx > CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.i

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx -o CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.s

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.requires:

.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.requires

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.provides: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.requires
	$(MAKE) -f VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/build.make VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.provides.build
.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.provides

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.provides.build: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o


# Object files for target vtkImagingColorPython
vtkImagingColorPython_OBJECTS = \
"CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o"

# External object files for target vtkImagingColorPython
vtkImagingColorPython_EXTERNAL_OBJECTS =

lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/build.make
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkImagingColorPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkImagingCorePython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonExecutionModelPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonDataModelPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonMiscPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonTransformsPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonMathPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonSystemPython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonCorePython36D-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkWrappingPython36Core-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkImagingColor-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkImagingCore-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonExecutionModel-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonDataModel-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonMisc-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonTransforms-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonMath-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonSystem-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtkCommonCore-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: lib/libvtksys-pv5.6.so.1
lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared module ../../../lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkImagingColorPython.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/build: lib/python3.6/site-packages/vtkmodules/vtkImagingColorPython.so

.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/build

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/requires: VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/vtkImagingColorPythonInit.cxx.o.requires

.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/requires

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python && $(CMAKE_COMMAND) -P CMakeFiles/vtkImagingColorPython.dir/cmake_clean.cmake
.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/clean

VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/depend: VTK/Wrapping/Python/vtkImagingColorPythonInit.cxx
VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/depend: VTK/Wrapping/Python/vtkImagingColorPythonInitImpl.cxx
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/VTK/Wrapping/Python /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python /home/ian/ttk/ParaView-v5.6.0/build/VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : VTK/Wrapping/Python/CMakeFiles/vtkImagingColorPython.dir/depend
