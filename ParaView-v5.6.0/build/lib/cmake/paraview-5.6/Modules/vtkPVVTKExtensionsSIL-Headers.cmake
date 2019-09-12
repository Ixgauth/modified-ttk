set(vtkPVVTKExtensionsSIL_HEADERS_LOADED 1)
set(vtkPVVTKExtensionsSIL_HEADERS "vtkSubsetInclusionLattice")

foreach(header ${vtkPVVTKExtensionsSIL_HEADERS})
  set(vtkPVVTKExtensionsSIL_HEADER_${header}_EXISTS 1)
endforeach()
