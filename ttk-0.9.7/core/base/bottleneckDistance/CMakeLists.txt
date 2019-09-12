ttk_add_base_library(bottleneckDistance
  SOURCES BottleneckDistance.cpp
  HEADERS BottleneckDistance.h BottleneckDistanceImpl.h BottleneckDistanceMainImpl.h
          Munkres.h GabowTarjan.h GabowTarjanImpl.h MatchingGraph.h
	LINK triangulation persistenceDiagram)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
include_directories(${VTK_INCLUDE_DIRS})
