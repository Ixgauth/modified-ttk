set(vtkIOTRUCHAS_HEADERS_LOADED 1)
set(vtkIOTRUCHAS_HEADERS "vtkTRUCHASReader")

foreach(header ${vtkIOTRUCHAS_HEADERS})
  set(vtkIOTRUCHAS_HEADER_${header}_EXISTS 1)
endforeach()
