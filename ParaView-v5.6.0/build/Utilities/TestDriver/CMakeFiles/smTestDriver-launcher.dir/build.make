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
include Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/depend.make

# Include the progress variables for this target.
include Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/progress.make

# Include the compile flags for this target's objects.
include Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/flags.make

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/flags.make
Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o: Utilities/TestDriver/smTestDriver-forward.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o   -c /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver/smTestDriver-forward.c

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver/smTestDriver-forward.c > CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.i

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver/smTestDriver-forward.c -o CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.s

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.requires:

.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.requires

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.provides: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.requires
	$(MAKE) -f Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/build.make Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.provides.build
.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.provides

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.provides.build: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o


# Object files for target smTestDriver-launcher
smTestDriver__launcher_OBJECTS = \
"CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o"

# External object files for target smTestDriver-launcher
smTestDriver__launcher_EXTERNAL_OBJECTS =

Utilities/TestDriver/launcher/smTestDriver: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o
Utilities/TestDriver/launcher/smTestDriver: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/build.make
Utilities/TestDriver/launcher/smTestDriver: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable launcher/smTestDriver"
	cd /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/smTestDriver-launcher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/build: Utilities/TestDriver/launcher/smTestDriver

.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/build

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/requires: Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/smTestDriver-forward.c.o.requires

.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/requires

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver && $(CMAKE_COMMAND) -P CMakeFiles/smTestDriver-launcher.dir/cmake_clean.cmake
.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/clean

Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/Utilities/TestDriver /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver /home/ian/ttk/ParaView-v5.6.0/build/Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Utilities/TestDriver/CMakeFiles/smTestDriver-launcher.dir/depend

