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
include Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/flags.make

Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx: bin/vtkWrapClientServer-pv5.6
Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx: Wrapping/ClientServer/vtkPVPythonAlgorithmCS.args
Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx: ../ParaViewCore/PythonAlgorithm/vtkSIPythonSourceProxy.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "CS Wrapping - generating vtkSIPythonSourceProxyClientServer.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv5.6 @/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmCS.args -o /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/PythonAlgorithm/vtkSIPythonSourceProxy.h

Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx: bin/vtkWrapClientServer-pv5.6
Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx: Wrapping/ClientServer/vtkPVPythonAlgorithmCS.args
Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx: ../ParaViewCore/PythonAlgorithm/vtkPVPythonAlgorithmPlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "CS Wrapping - generating vtkPVPythonAlgorithmPluginClientServer.cxx"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv5.6 @/home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmCS.args -o /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/PythonAlgorithm/vtkPVPythonAlgorithmPlugin.h

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o: Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx > CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o


Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o: Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx > CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o


Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o: Wrapping/ClientServer/vtkPVPythonAlgorithmCSInit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o -c /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmCSInit.cxx > CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/vtkPVPythonAlgorithmCSInit.cxx -o CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.requires:

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o


# Object files for target vtkPVPythonAlgorithmCS
vtkPVPythonAlgorithmCS_OBJECTS = \
"CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o" \
"CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o" \
"CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o"

# External object files for target vtkPVPythonAlgorithmCS
vtkPVPythonAlgorithmCS_EXTERNAL_OBJECTS =

lib/libvtkPVPythonAlgorithmCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o
lib/libvtkPVPythonAlgorithmCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o
lib/libvtkPVPythonAlgorithmCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o
lib/libvtkPVPythonAlgorithmCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build.make
lib/libvtkPVPythonAlgorithmCS-pv5.6.a: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../lib/libvtkPVPythonAlgorithmCS-pv5.6.a"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkPVPythonAlgorithmCS.dir/cmake_clean_target.cmake
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkPVPythonAlgorithmCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build: lib/libvtkPVPythonAlgorithmCS-pv5.6.a

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkSIPythonSourceProxyClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmPluginClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/vtkPVPythonAlgorithmCSInit.cxx.o.requires

.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkPVPythonAlgorithmCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/depend: Wrapping/ClientServer/vtkSIPythonSourceProxyClientServer.cxx
Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/depend: Wrapping/ClientServer/vtkPVPythonAlgorithmPluginClientServer.cxx
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer /home/ian/ttk/ParaView-v5.6.0/build/Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVPythonAlgorithmCS.dir/depend

