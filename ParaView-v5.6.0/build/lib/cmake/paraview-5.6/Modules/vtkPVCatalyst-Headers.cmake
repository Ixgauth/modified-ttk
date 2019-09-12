set(vtkPVCatalyst_HEADERS_LOADED 1)
set(vtkPVCatalyst_HEADERS "CAdaptorAPI;vtkCPAdaptorAPI;vtkCPCxxHelper;vtkCPDataDescription;vtkCPInputDataDescription;vtkCPPipeline;vtkCPProcessor;vtkCPXMLPWriterPipeline")

foreach(header ${vtkPVCatalyst_HEADERS})
  set(vtkPVCatalyst_HEADER_${header}_EXISTS 1)
endforeach()
