cmake_minimum_required(VERSION 3.5)

# name of the project
project(FillHoles)

set(CMAKE_CXX_STANDARD 11)

find_package(VTK REQUIRED)
find_package(TTKBase REQUIRED PATHS /usr/local/lib/cmake/ttk)
find_package(TTKVTK REQUIRED PATHS /usr/local/lib/cmake/ttk)

include(${VTK_USE_FILE})

add_executable(FillHoles FillHoles.cxx)

include_directories(/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper /home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper)

target_link_libraries(FillHoles PUBLIC
  ${VTK_LIBRARIES}
  ttk::vtk::ttkAll)
