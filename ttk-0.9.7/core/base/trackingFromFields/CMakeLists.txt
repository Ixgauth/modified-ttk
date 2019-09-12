ttk_add_base_library(trackingFromFields
	SOURCES TrackingFromFields.cpp
	HEADERS TrackingFromFields.h
	LINK persistenceDiagram bottleneckDistance trackingFromPersistenceDiagrams)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
