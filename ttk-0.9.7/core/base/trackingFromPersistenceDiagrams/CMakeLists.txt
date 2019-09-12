ttk_add_base_library(trackingFromPersistenceDiagrams
	SOURCES TrackingFromPersistenceDiagrams.cpp
	HEADERS TrackingFromPersistenceDiagrams.h
	LINK persistenceDiagram bottleneckDistance)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
