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
include Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/flags.make

Wrapping/ClientServer/vtkVPICReaderClientServer.cxx: bin/vtkWrapClientServer-pv5.6
Wrapping/ClientServer/vtkVPICReaderClientServer.cxx: Wrapping/ClientServer/vtkIOVPICCS.args
Wrapping/ClientServer/vtkVPICReaderClientServer.cxx: ../VTK/IO/VPIC/vtkVPICReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "CS Wrapping - generating vtkVPICReaderClientServer.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv5.6 @/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOVPICCS.args -o /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkVPICReaderClientServer.cxx /home/ian/ttk/ParaView-v5.6.0/VTK/IO/VPIC/vtkVPICReader.h

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o: Wrapping/ClientServer/vtkVPICReaderClientServer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkVPICReaderClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkVPICReaderClientServer.cxx > CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkVPICReaderClientServer.cxx -o CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o


Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o: Wrapping/ClientServer/vtkIOVPICCSInit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOVPICCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOVPICCSInit.cxx > CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOVPICCSInit.cxx -o CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o


# Object files for target vtkIOVPICCS
vtkIOVPICCS_OBJECTS = \
"CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o" \
"CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o"

# External object files for target vtkIOVPICCS
vtkIOVPICCS_EXTERNAL_OBJECTS =

lib/libvtkIOVPICCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o
lib/libvtkIOVPICCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o
lib/libvtkIOVPICCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/build.make
lib/libvtkIOVPICCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../lib/libvtkIOVPICCS-pv5.6.a"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOVPICCS.dir/cmake_clean_target.cmake
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOVPICCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/build: lib/libvtkIOVPICCS-pv5.6.a

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkVPICReaderClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/vtkIOVPICCSInit.cxx.o.requires

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOVPICCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/depend: Wrapping/ClientServer/vtkVPICReaderClientServer.cxx
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOVPICCS.dir/depend

