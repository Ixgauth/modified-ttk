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

# Utility rule file for CinemaPython.

# Include the progress variables for this target.
include ThirdParty/cinema/CMakeFiles/CinemaPython.dir/progress.make

ThirdParty/cinema/CMakeFiles/CinemaPython: ThirdParty/cinema/cinema_python.build-complete


ThirdParty/cinema/cinema_python.build-complete: ThirdParty/cinema/cinema_python.copy-complete
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Compiling Python package 'cinema_python'"
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && /usr/bin/python3 -m compileall /home/ian/ttk/ParaView-v5.6.0/build/lib/python3.6/site-packages/cinema_python
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && /usr/bin/python3 -O -m compileall /home/ian/ttk/ParaView-v5.6.0/build/lib/python3.6/site-packages/cinema_python
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && /usr/bin/cmake -E touch /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema/cinema_python.build-complete

ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/explorers.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/paraview/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/paraview/cinemareader.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/paraview/progress.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/paraview/pv_explorers.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/paraview/pv_introspect.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/vtk/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/adaptors/vtk/vtk_explorers.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/file_store.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/oexr_helper.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/raster_wrangler.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/store.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/database/vti_store.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/__init__.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/camera_utils.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/compositor.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/layer_rasters.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/lookup_tables.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/querymaker.py
ThirdParty/cinema/cinema_python.copy-complete: ../ThirdParty/cinema/vtkcinemapython/cinema_python/images/querymaker_specb.py
ThirdParty/cinema/cinema_python.copy-complete: ThirdParty/cinema/cinema_python.copy-complete.cfr.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ian/ttk/ParaView-v5.6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying files for Python package 'cinema_python'"
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && /usr/bin/cmake -DOUTDIR=/home/ian/ttk/ParaView-v5.6.0/build/lib/python3.6/site-packages/cinema_python -DSRCDIR=/home/ian/ttk/ParaView-v5.6.0/ThirdParty/cinema/vtkcinemapython/cinema_python/ -P /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema/cinema_python.copy-complete.cfr.cmake
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && /usr/bin/cmake -E touch /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema/cinema_python.copy-complete

CinemaPython: ThirdParty/cinema/CMakeFiles/CinemaPython
CinemaPython: ThirdParty/cinema/cinema_python.build-complete
CinemaPython: ThirdParty/cinema/cinema_python.copy-complete
CinemaPython: ThirdParty/cinema/CMakeFiles/CinemaPython.dir/build.make

.PHONY : CinemaPython

# Rule to build all files generated by this target.
ThirdParty/cinema/CMakeFiles/CinemaPython.dir/build: CinemaPython

.PHONY : ThirdParty/cinema/CMakeFiles/CinemaPython.dir/build

ThirdParty/cinema/CMakeFiles/CinemaPython.dir/clean:
	cd /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema && $(CMAKE_COMMAND) -P CMakeFiles/CinemaPython.dir/cmake_clean.cmake
.PHONY : ThirdParty/cinema/CMakeFiles/CinemaPython.dir/clean

ThirdParty/cinema/CMakeFiles/CinemaPython.dir/depend:
	cd /home/ian/ttk/ParaView-v5.6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ian/ttk/ParaView-v5.6.0 /home/ian/ttk/ParaView-v5.6.0/ThirdParty/cinema /home/ian/ttk/ParaView-v5.6.0/build /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema /home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/cinema/CMakeFiles/CinemaPython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ThirdParty/cinema/CMakeFiles/CinemaPython.dir/depend

