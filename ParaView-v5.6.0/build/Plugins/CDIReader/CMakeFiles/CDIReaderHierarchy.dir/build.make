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

# Utility rule file for CDIReaderHierarchy.

# Include the progress variables for this target.
include Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/progress.make

Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy: Plugins/CDIReader/CDIReaderHierarchy.txt


Plugins/CDIReader/CDIReaderHierarchy.txt: bin/vtkWrapHierarchy-pv5.6
Plugins/CDIReader/CDIReaderHierarchy.txt: Plugins/CDIReader/CDIReaderHierarchy.Release.args
Plugins/CDIReader/CDIReaderHierarchy.txt: Plugins/CDIReader/CDIReaderHierarchy.data
Plugins/CDIReader/CDIReaderHierarchy.txt: ../Plugins/CDIReader/vtkCDIReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For CDIReader - updating CDIReaderHierarchy.txt"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader && ../../bin/vtkWrapHierarchy-pv5.6 @CDIReaderHierarchy.Release.args -o /home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader/CDIReaderHierarchy.txt CDIReaderHierarchy.data @CDIReaderOtherHierarchyFiles.args

CDIReaderHierarchy: Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy
CDIReaderHierarchy: Plugins/CDIReader/CDIReaderHierarchy.txt
CDIReaderHierarchy: Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/build.make

.PHONY : CDIReaderHierarchy

# Rule to build all files generated by this target.
Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/build: CDIReaderHierarchy

.PHONY : Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/build

Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader && $(CMAKE_COMMAND) -P CMakeFiles/CDIReaderHierarchy.dir/cmake_clean.cmake
.PHONY : Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/clean

Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Plugins/CDIReader /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader /home/ian/ttk/ParaView-v5.6.0/build/Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Plugins/CDIReader/CMakeFiles/CDIReaderHierarchy.dir/depend
