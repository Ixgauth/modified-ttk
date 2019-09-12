ttk_add_paraview_plugin(ttkBettiNumbers
	SOURCES ${VTKWRAPPER_DIR}/ttkBettiNumbers/ttkBettiNumbers.cpp
	PLUGIN_VERSION 1.0
	PLUGIN_XML BettiNumbers.xml
	LINK bettiNumbers)

