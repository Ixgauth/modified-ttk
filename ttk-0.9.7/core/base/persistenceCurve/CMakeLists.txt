ttk_add_base_library(persistenceCurve
	SOURCES PersistenceCurve.cpp
	HEADERS PersistenceCurve.h
	LINK discreteGradient
		triangulation morseSmaleComplex3D ftmTreePP)


find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
