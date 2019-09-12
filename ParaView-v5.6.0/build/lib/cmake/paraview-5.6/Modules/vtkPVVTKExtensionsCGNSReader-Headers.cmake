set(vtkPVVTKExtensionsCGNSReader_HEADERS_LOADED 1)
set(vtkPVVTKExtensionsCGNSReader_HEADERS "vtkCGNSFileSeriesReader;vtkCGNSReader;vtkCGNSSubsetInclusionLattice")

foreach(header ${vtkPVVTKExtensionsCGNSReader_HEADERS})
  set(vtkPVVTKExtensionsCGNSReader_HEADER_${header}_EXISTS 1)
endforeach()
