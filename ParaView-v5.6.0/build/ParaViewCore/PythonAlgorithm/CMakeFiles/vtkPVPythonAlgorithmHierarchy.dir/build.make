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

# Utility rule file for vtkPVPythonAlgorithmHierarchy.

# Include the progress variables for this target.
include ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/progress.make

ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy: lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt


lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt: bin/vtkWrapHierarchy-pv5.6
lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt: ParaViewCore/PythonAlgorithm/vtkPVPythonAlgorithmHierarchy.Release.args
lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt: ParaViewCore/PythonAlgorithm/vtkPVPythonAlgorithmHierarchy.data
lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt: ../ParaViewCore/PythonAlgorithm/vtkSIPythonSourceProxy.h
lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt: ../ParaViewCore/PythonAlgorithm/vtkPVPythonAlgorithmPlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For vtkPVPythonAlgorithm - updating vtkPVPythonAlgorithmHierarchy.txt"
	cd /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/PythonAlgorithm && ../../bin/vtkWrapHierarchy-pv5.6 @vtkPVPythonAlgorithmHierarchy.Release.args -o /home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt vtkPVPythonAlgorithmHierarchy.data @vtkPVPythonAlgorithmOtherHierarchyFiles.args

vtkPVPythonAlgorithmHierarchy: ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy
vtkPVPythonAlgorithmHierarchy: lib/cmake/paraview-5.6/Modules/vtkPVPythonAlgorithmHierarchy.txt
vtkPVPythonAlgorithmHierarchy: ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/build.make

.PHONY : vtkPVPythonAlgorithmHierarchy

# Rule to build all files generated by this target.
ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/build: vtkPVPythonAlgorithmHierarchy

.PHONY : ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/build

ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/PythonAlgorithm && $(CMAKE_COMMAND) -P CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/cmake_clean.cmake
.PHONY : ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/clean

ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/PythonAlgorithm /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/PythonAlgorithm /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ParaViewCore/PythonAlgorithm/CMakeFiles/vtkPVPythonAlgorithmHierarchy.dir/depend

