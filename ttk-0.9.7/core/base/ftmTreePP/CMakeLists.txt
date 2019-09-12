ttk_add_base_library(ftmTreePP
		SOURCES FTMTreePP.cpp
		HEADERS FTMTreePP.h
		LINK ftmTree geometry ttkTopologicalSimplificationHelper ttkTriangulation)

find_package(VTK REQUIRED)

include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})

include_directories(/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper /home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper)

link_directories(/home/ian/ttk/ttk-0.9.7/core/base/topologicalSimplificationHelper /home/ian/ttk/ttk-0.9.7/core/vtk/ttkTopologicalSimplificationHelper)



