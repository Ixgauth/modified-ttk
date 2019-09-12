ttk_add_base_library(topologicalCompression
	SOURCES TopologicalCompression.cpp
	HEADERS TopologicalCompression.h PersistenceDiagramCompression.h OtherCompression.h
	LINK triangulation persistenceDiagram topologicalSimplification)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
