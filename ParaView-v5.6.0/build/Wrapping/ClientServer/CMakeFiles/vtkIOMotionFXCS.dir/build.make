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
include Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/flags.make

Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx: bin/vtkWrapClientServer-pv5.6
Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx: Wrapping/ClientServer/vtkIOMotionFXCS.args
Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx: ../VTK/IO/MotionFX/vtkMotionFXCFGReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "CS Wrapping - generating vtkMotionFXCFGReaderClientServer.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv5.6 @/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOMotionFXCS.args -o /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx /home/ian/ttk/ParaView-v5.6.0/VTK/IO/MotionFX/vtkMotionFXCFGReader.h

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o: Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx > CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx -o CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o


Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o: Wrapping/ClientServer/vtkIOMotionFXCSInit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOMotionFXCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOMotionFXCSInit.cxx > CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOMotionFXCSInit.cxx -o CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o


# Object files for target vtkIOMotionFXCS
vtkIOMotionFXCS_OBJECTS = \
"CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o" \
"CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o"

# External object files for target vtkIOMotionFXCS
vtkIOMotionFXCS_EXTERNAL_OBJECTS =

lib/libvtkIOMotionFXCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o
lib/libvtkIOMotionFXCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o
lib/libvtkIOMotionFXCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/build.make
lib/libvtkIOMotionFXCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../lib/libvtkIOMotionFXCS-pv5.6.a"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOMotionFXCS.dir/cmake_clean_target.cmake
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOMotionFXCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/build: lib/libvtkIOMotionFXCS-pv5.6.a

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkMotionFXCFGReaderClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/vtkIOMotionFXCSInit.cxx.o.requires

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOMotionFXCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/depend: Wrapping/ClientServer/vtkMotionFXCFGReaderClientServer.cxx
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOMotionFXCS.dir/depend

