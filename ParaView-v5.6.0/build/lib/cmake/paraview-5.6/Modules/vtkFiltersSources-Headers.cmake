set(vtkFiltersSources_HEADERS_LOADED 1)
set(vtkFiltersSources_HEADERS "vtkArcSource;vtkArrowSource;vtkButtonSource;vtkCellTypeSource;vtkConeSource;vtkCubeSource;vtkCylinderSource;vtkDiskSource;vtkEllipseArcSource;vtkEllipticalButtonSource;vtkFrustumSource;vtkGlyphSource2D;vtkHyperTreeGridSource;vtkLineSource;vtkOutlineCornerFilter;vtkOutlineCornerSource;vtkOutlineSource;vtkParametricFunctionSource;vtkPlaneSource;vtkPlatonicSolidSource;vtkPointSource;vtkPolyLineSource;vtkProgrammableDataObjectSource;vtkProgrammableSource;vtkRandomHyperTreeGridSource;vtkRectangularButtonSource;vtkRegularPolygonSource;vtkSelectionSource;vtkSphereSource;vtkSuperquadricSource;vtkTessellatedBoxSource;vtkTextSource;vtkTexturedSphereSource;vtkGraphToPolyData;vtkDiagonalMatrixSource")

foreach(header ${vtkFiltersSources_HEADERS})
  set(vtkFiltersSources_HEADER_${header}_EXISTS 1)
endforeach()