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
include Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/flags.make

Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx: bin/vtkWrapClientServer-pv5.6
Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx: Wrapping/ClientServer/vtkIOTRUCHASCS.args
Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx: ../VTK/IO/TRUCHAS/vtkTRUCHASReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "CS Wrapping - generating vtkTRUCHASReaderClientServer.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv5.6 @/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOTRUCHASCS.args -o /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx /home/ian/ttk/ParaView-v5.6.0/VTK/IO/TRUCHAS/vtkTRUCHASReader.h

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o: Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx > CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx -o CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o


Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o: Wrapping/ClientServer/vtkIOTRUCHASCSInit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOTRUCHASCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOTRUCHASCSInit.cxx > CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkIOTRUCHASCSInit.cxx -o CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o


# Object files for target vtkIOTRUCHASCS
vtkIOTRUCHASCS_OBJECTS = \
"CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o" \
"CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o"

# External object files for target vtkIOTRUCHASCS
vtkIOTRUCHASCS_EXTERNAL_OBJECTS =

lib/libvtkIOTRUCHASCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o
lib/libvtkIOTRUCHASCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o
lib/libvtkIOTRUCHASCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/build.make
lib/libvtkIOTRUCHASCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../lib/libvtkIOTRUCHASCS-pv5.6.a"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOTRUCHASCS.dir/cmake_clean_target.cmake
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOTRUCHASCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/build: lib/libvtkIOTRUCHASCS-pv5.6.a

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkTRUCHASReaderClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/vtkIOTRUCHASCSInit.cxx.o.requires

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOTRUCHASCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/depend: Wrapping/ClientServer/vtkTRUCHASReaderClientServer.cxx
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOTRUCHASCS.dir/depend

