set(vtkIOMotionFX_HEADERS_LOADED 1)
set(vtkIOMotionFX_HEADERS "vtkMotionFXCFGReader")

foreach(header ${vtkIOMotionFX_HEADERS})
  set(vtkIOMotionFX_HEADER_${header}_EXISTS 1)
endforeach()
