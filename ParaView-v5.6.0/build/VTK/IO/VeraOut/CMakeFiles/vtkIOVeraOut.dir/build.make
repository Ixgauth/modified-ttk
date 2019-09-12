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
include VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/depend.make

# Include the progress variables for this target.
include VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/progress.make

# Include the compile flags for this target's objects.
include VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/flags.make

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/flags.make
VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o: ../VTK/IO/VeraOut/vtkVeraOutReader.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/VTK/IO/VeraOut/vtkVeraOutReader.cxx

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/VTK/IO/VeraOut/vtkVeraOutReader.cxx > CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.i

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/VTK/IO/VeraOut/vtkVeraOutReader.cxx -o CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.s

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.requires:

.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.requires

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.provides: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.requires
	$(MAKE) -f VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/build.make VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.provides.build
.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.provides

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.provides.build: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o


# Object files for target vtkIOVeraOut
vtkIOVeraOut_OBJECTS = \
"CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o"

# External object files for target vtkIOVeraOut
vtkIOVeraOut_EXTERNAL_OBJECTS =

lib/libvtkIOVeraOut-pv5.6.so.1: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o
lib/libvtkIOVeraOut-pv5.6.so.1: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/build.make
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkCommonExecutionModel-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkCommonDataModel-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkhdf5-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkhdf5_hl-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkCommonTransforms-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkCommonMath-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: lib/libvtkCommonCore-pv5.6.so.1
lib/libvtkIOVeraOut-pv5.6.so.1: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../../lib/libvtkIOVeraOut-pv5.6.so"
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOVeraOut.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../lib/libvtkIOVeraOut-pv5.6.so.1 ../../../lib/libvtkIOVeraOut-pv5.6.so.1 ../../../lib/libvtkIOVeraOut-pv5.6.so

lib/libvtkIOVeraOut-pv5.6.so: lib/libvtkIOVeraOut-pv5.6.so.1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libvtkIOVeraOut-pv5.6.so

# Rule to build all files generated by this target.
VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/build: lib/libvtkIOVeraOut-pv5.6.so

.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/build

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/requires: VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/vtkVeraOutReader.cxx.o.requires

.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/requires

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOVeraOut.dir/cmake_clean.cmake
.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/clean

VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/VTK/IO/VeraOut /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut /home/ian/ttk/ParaView-v5.6.0/build/VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : VTK/IO/VeraOut/CMakeFiles/vtkIOVeraOut.dir/depend

