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
include CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/depend.make

# Include the progress variables for this target.
include CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/progress.make

# Include the compile flags for this target's objects.
include CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/flags.make

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/flags.make
CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o: CommandLineExecutables/paraview-config-forward.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o"
	cd /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o   -c /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables/paraview-config-forward.c

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.i"
	cd /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables/paraview-config-forward.c > CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.i

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.s"
	cd /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables/paraview-config-forward.c -o CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.s

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.requires:

.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.requires

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.provides: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.requires
	$(MAKE) -f CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/build.make CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.provides.build
.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.provides

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.provides.build: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o


# Object files for target paraview-config-launcher
paraview__config__launcher_OBJECTS = \
"CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o"

# External object files for target paraview-config-launcher
paraview__config__launcher_EXTERNAL_OBJECTS =

CommandLineExecutables/launcher/paraview-config: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o
CommandLineExecutables/launcher/paraview-config: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/build.make
CommandLineExecutables/launcher/paraview-config: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable launcher/paraview-config"
	cd /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/paraview-config-launcher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/build: CommandLineExecutables/launcher/paraview-config

.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/build

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/requires: CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/paraview-config-forward.c.o.requires

.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/requires

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables && $(CMAKE_COMMAND) -P CMakeFiles/paraview-config-launcher.dir/cmake_clean.cmake
.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/clean

CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/CommandLineExecutables /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables /home/ian/ttk/ParaView-v5.6.0/build/CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CommandLineExecutables/CMakeFiles/paraview-config-launcher.dir/depend

