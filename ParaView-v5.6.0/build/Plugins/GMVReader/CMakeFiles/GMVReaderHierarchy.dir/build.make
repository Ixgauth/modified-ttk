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

# Utility rule file for GMVReaderHierarchy.

# Include the progress variables for this target.
include Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/progress.make

Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy: Plugins/GMVReader/GMVReaderHierarchy.txt


Plugins/GMVReader/GMVReaderHierarchy.txt: bin/vtkWrapHierarchy-pv5.6
Plugins/GMVReader/GMVReaderHierarchy.txt: Plugins/GMVReader/GMVReaderHierarchy.Release.args
Plugins/GMVReader/GMVReaderHierarchy.txt: Plugins/GMVReader/GMVReaderHierarchy.data
Plugins/GMVReader/GMVReaderHierarchy.txt: ../Plugins/GMVReader/vtkGMVReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For GMVReader - updating GMVReaderHierarchy.txt"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader && ../../bin/vtkWrapHierarchy-pv5.6 @GMVReaderHierarchy.Release.args -o /home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader/GMVReaderHierarchy.txt GMVReaderHierarchy.data @GMVReaderOtherHierarchyFiles.args

GMVReaderHierarchy: Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy
GMVReaderHierarchy: Plugins/GMVReader/GMVReaderHierarchy.txt
GMVReaderHierarchy: Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/build.make

.PHONY : GMVReaderHierarchy

# Rule to build all files generated by this target.
Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/build: GMVReaderHierarchy

.PHONY : Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/build

Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader && $(CMAKE_COMMAND) -P CMakeFiles/GMVReaderHierarchy.dir/cmake_clean.cmake
.PHONY : Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/clean

Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Plugins/GMVReader /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader /home/ian/ttk/ParaView-v5.6.0/build/Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Plugins/GMVReader/CMakeFiles/GMVReaderHierarchy.dir/depend
