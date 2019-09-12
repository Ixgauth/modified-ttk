set(vtkPVPythonAlgorithm_HEADERS_LOADED 1)
set(vtkPVPythonAlgorithm_HEADERS "vtkSIPythonSourceProxy;vtkPVPythonAlgorithmPlugin")

foreach(header ${vtkPVPythonAlgorithm_HEADERS})
  set(vtkPVPythonAlgorithm_HEADER_${header}_EXISTS 1)
endforeach()
