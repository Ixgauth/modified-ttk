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

# Utility rule file for protobuf_code_generation.

# Include the progress variables for this target.
include ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/progress.make

ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation: ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h
ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation: ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.cc


ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h: ../ParaViewCore/ServerImplementation/Core/vtkPVMessage.proto
ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h: bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating vtkPVMessage.pb.h, vtkPVMessage.pb.cc"
	cd /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core && /home/ian/ttk/ParaView-v5.6.0/build/bin/protoc --cpp_out=dllexport_decl=VTKPVSERVERIMPLEMENTATIONCORE_EXPORT:/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core --proto_path /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core/vtkPVMessage.proto

ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.cc: ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.cc

protobuf_code_generation: ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation
protobuf_code_generation: ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.h
protobuf_code_generation: ParaViewCore/ServerImplementation/Core/vtkPVMessage.pb.cc
protobuf_code_generation: ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/build.make

.PHONY : protobuf_code_generation

# Rule to build all files generated by this target.
ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/build: protobuf_code_generation

.PHONY : ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/build

ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core && $(CMAKE_COMMAND) -P CMakeFiles/protobuf_code_generation.dir/cmake_clean.cmake
.PHONY : ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/clean

ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerImplementation/Core /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core /home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ParaViewCore/ServerImplementation/Core/CMakeFiles/protobuf_code_generation.dir/depend
