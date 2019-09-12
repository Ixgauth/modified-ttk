set(vtkPVCinemaReader_HEADERS_LOADED 1)
set(vtkPVCinemaReader_HEADERS "vtkSMCinemaDatabaseImporter;vtkCinemaDatabase;vtkCinemaDatabaseReader;vtkCinemaLayerMapper;vtkCinemaLayerRepresentation;vtkPVCinemaDatabaseInformation")

foreach(header ${vtkPVCinemaReader_HEADERS})
  set(vtkPVCinemaReader_HEADER_${header}_EXISTS 1)
endforeach()
