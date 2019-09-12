
if(NOT QtTesting_EXPORTS_INCLUDED)
  include("/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting/QtTestingExports.cmake")
  set(QtTesting_EXPORTS_INCLUDED 1)
endif()

set(QtTesting_INCLUDE_DIRS "/home/ian/ttk/ParaView-v5.6.0/ThirdParty/QtTesting/vtkqttesting;/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARY_DIR "/home/ian/ttk/ParaView-v5.6.0/build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARIES QtTesting)
include("${CMAKE_CURRENT_LIST_DIR}/QtTestingExports.cmake")
