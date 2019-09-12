set(vtkPVVTKExtensionsPoints_HEADERS_LOADED 1)
set(vtkPVVTKExtensionsPoints_HEADERS "vtkBoundedPlaneSource;vtkBoundedVolumeSource")

foreach(header ${vtkPVVTKExtensionsPoints_HEADERS})
  set(vtkPVVTKExtensionsPoints_HEADER_${header}_EXISTS 1)
endforeach()
