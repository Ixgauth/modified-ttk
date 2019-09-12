ttk_add_base_library(persistenceDiagram
	SOURCES PersistenceDiagram.cpp
	HEADERS PersistenceDiagram.h
	LINK discreteGradient triangulation
		morseSmaleComplex3D ftmTreePP)


find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
