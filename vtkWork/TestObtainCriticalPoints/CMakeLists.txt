cmake_minimum_required(VERSION 3.5)

# name of the project
project(TestObtainCriticalPoints)

set(CMAKE_CXX_STANDARD 11)

find_package(VTK REQUIRED)
find_package(TTKBase REQUIRED PATHS /usr/local/lib/cmake/ttk)
find_package(TTKVTK REQUIRED PATHS /usr/local/lib/cmake/ttk)

include(${VTK_USE_FILE})


include_directories(/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper /home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper)

link_directories(/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper /home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper)

add_executable(TestObtainCriticalPoints main.cxx ${TopologicalSimplification}
	/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper/TopologicalSimplificationHelper.h
	/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper/TopologicalSimplificationHelper.cpp
	/home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper/ttkTopologicalSimplificationHelper.h
	/home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper/ttkTopologicalSimplificationHelper.cpp)

target_link_libraries(TestObtainCriticalPoints PUBLIC
  ${VTK_LIBRARIES}
  ttk::vtk::ttkAll)

