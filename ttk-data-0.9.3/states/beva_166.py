# state file generated using paraview version 5.6.0

# ----------------------------------------------------------------
# setup views used in the visualization
# ----------------------------------------------------------------

# trace generated using paraview version 5.6.0
#
# To ensure correct image size when batch processing, please search 
# for and uncomment the line `# renderView*.ViewSize = [*,*]`

#### import the simple module from the paraview
from paraview.simple import *
#### disable automatic camera reset on 'Show'
paraview.simple._DisableFirstRenderCameraReset()

# Create a new 'Render View'
renderView1 = CreateView('RenderView')
renderView1.ViewSize = [335, 772]
renderView1.InteractionMode = '2D'
renderView1.AxesGrid = 'GridAxes3DActor'
renderView1.CenterOfRotation = [354.0, 274.5, 0.0]
renderView1.StereoType = 0
renderView1.CameraPosition = [354.0, 274.5, 10000.0]
renderView1.CameraFocalPoint = [354.0, 274.5, 0.0]
renderView1.CameraParallelScale = 686.9955471229115
renderView1.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView1.AxesGrid.XTitleFontFile = ''
renderView1.AxesGrid.YTitleFontFile = ''
renderView1.AxesGrid.ZTitleFontFile = ''
renderView1.AxesGrid.XLabelFontFile = ''
renderView1.AxesGrid.YLabelFontFile = ''
renderView1.AxesGrid.ZLabelFontFile = ''

# Create a new 'Render View'
renderView2 = CreateView('RenderView')
renderView2.ViewSize = [477, 371]
renderView2.InteractionMode = '2D'
renderView2.AxesGrid = 'GridAxes3DActor'
renderView2.CenterOfRotation = [354.0, 274.5, 0.0]
renderView2.StereoType = 0
renderView2.CameraPosition = [354.0, 274.5, 10000.0]
renderView2.CameraFocalPoint = [354.0, 274.5, 0.0]
renderView2.CameraParallelScale = 533.6781987666541
renderView2.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView2.AxesGrid.XTitleFontFile = ''
renderView2.AxesGrid.YTitleFontFile = ''
renderView2.AxesGrid.ZTitleFontFile = ''
renderView2.AxesGrid.XLabelFontFile = ''
renderView2.AxesGrid.YLabelFontFile = ''
renderView2.AxesGrid.ZLabelFontFile = ''

# Create a new 'Render View'
renderView3 = CreateView('RenderView')
renderView3.ViewSize = [476, 371]
renderView3.InteractionMode = '2D'
renderView3.AxesGrid = 'GridAxes3DActor'
renderView3.CenterOfRotation = [127.5, 127.5, 0.0]
renderView3.StereoType = 0
renderView3.CameraPosition = [127.5, 127.5, 1106.192423743329]
renderView3.CameraFocalPoint = [127.5, 127.5, 0.0]
renderView3.CameraParallelScale = 292.43916164786503
renderView3.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView3.AxesGrid.XTitleFontFile = ''
renderView3.AxesGrid.YTitleFontFile = ''
renderView3.AxesGrid.ZTitleFontFile = ''
renderView3.AxesGrid.XLabelFontFile = ''
renderView3.AxesGrid.YLabelFontFile = ''
renderView3.AxesGrid.ZLabelFontFile = ''

# Create a new 'Render View'
renderView4 = CreateView('RenderView')
renderView4.ViewSize = [476, 371]
renderView4.InteractionMode = '2D'
renderView4.AxesGrid = 'GridAxes3DActor'
renderView4.CenterOfRotation = [60.0, 127.5, 0.0]
renderView4.StereoType = 0
renderView4.CameraPosition = [60.0, 127.5, 10000.0]
renderView4.CameraFocalPoint = [60.0, 127.5, 0.0]
renderView4.CameraParallelScale = 140.91220671041953
renderView4.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView4.AxesGrid.XTitleFontFile = ''
renderView4.AxesGrid.YTitleFontFile = ''
renderView4.AxesGrid.ZTitleFontFile = ''
renderView4.AxesGrid.XLabelFontFile = ''
renderView4.AxesGrid.YLabelFontFile = ''
renderView4.AxesGrid.ZLabelFontFile = ''

# Create a new 'Render View'
renderView5 = CreateView('RenderView')
renderView5.ViewSize = [477, 371]
renderView5.AxesGrid = 'GridAxes3DActor'
renderView5.CenterOfRotation = [354.0, 274.5, 127.5]
renderView5.StereoType = 0
renderView5.CameraPosition = [-256.75016659703516, 66.5066816910299, 678.4489355021082]
renderView5.CameraFocalPoint = [1038.6596736849585, 507.66348521936254, -490.1216381563844]
renderView5.CameraViewUp = [0.19471039804506823, 0.8266684593209118, 0.5279271912462185]
renderView5.CameraParallelScale = 465.74939613487425
renderView5.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView5.AxesGrid.XTitleFontFile = ''
renderView5.AxesGrid.YTitleFontFile = ''
renderView5.AxesGrid.ZTitleFontFile = ''
renderView5.AxesGrid.XLabelFontFile = ''
renderView5.AxesGrid.YLabelFontFile = ''
renderView5.AxesGrid.ZLabelFontFile = ''

# ----------------------------------------------------------------
# restore active view
SetActiveView(renderView5)
# ----------------------------------------------------------------

# ----------------------------------------------------------------
# setup the data processing pipelines
# ----------------------------------------------------------------

# create a new 'PNG Series Reader'
beva_a002_3_31_06_116png = PNGSeriesReader(FileNames=['/home/ian/ttk/ttk-data-0.9.3/beva_a002_3_31_06_116.png'])

# create a new 'Tetrahedralize'
tetrahedralize1 = Tetrahedralize(Input=beva_a002_3_31_06_116png)

# create a new 'Programmable Filter'
programmableFilter1 = ProgrammableFilter(Input=tetrahedralize1)
programmableFilter1.Script = """output.Points[:,2]=inputs[0].PointData["PNGImage"]
output.PointData.append(inputs[0].PointData["PNGImage"], "PNGImage")
output.PointData.append(inputs[0].PointData["PNGImage"], "simplifiedImage")"""
programmableFilter1.RequestInformationScript = ''
programmableFilter1.RequestUpdateExtentScript = ''
programmableFilter1.PythonPath = ''

# create a new 'Clean to Grid'
cleantoGrid1 = CleantoGrid(Input=programmableFilter1)

# create a new 'TTK PersistenceDiagram'
tTKPersistenceDiagram1 = TTKPersistenceDiagram(Input=programmableFilter1)
tTKPersistenceDiagram1.ScalarField = 'PNGImage'
tTKPersistenceDiagram1.InputOffsetField = 'PNGImage'

# create a new 'Threshold'
threshold1 = Threshold(Input=tTKPersistenceDiagram1)
threshold1.Scalars = ['CELLS', 'Persistence']
threshold1.ThresholdRange = [50.0, 160.0]

# create a new 'TTK TopologicalSimplification'
tTKTopologicalSimplification1 = TTKTopologicalSimplification(Domain=cleantoGrid1,
    Constraints=threshold1)
tTKTopologicalSimplification1.ScalarField = 'simplifiedImage'
tTKTopologicalSimplification1.InputOffsetField = 'PNGImage'
tTKTopologicalSimplification1.Vertexidentifierfield = 'CriticalType'
tTKTopologicalSimplification1.NumericalPerturbation = 1
tTKTopologicalSimplification1.OutputOffsetScalarField = ''

# create a new 'Programmable Filter'
programmableFilter2 = ProgrammableFilter(Input=tTKTopologicalSimplification1)
programmableFilter2.Script = """output.Points[:,2]=inputs[0].PointData["simplifiedImage"]
output.PointData.append(inputs[0].PointData["PNGImage"], "PNGImage")
output.PointData.append(inputs[0].PointData["simplifiedImage"], "simplifiedImage")
output.PointData.append(inputs[0].PointData["ttkOffsetScalarField"], "ttkOffsetScalarField")"""
programmableFilter2.RequestInformationScript = ''
programmableFilter2.RequestUpdateExtentScript = ''
programmableFilter2.PythonPath = ''

# create a new 'TTK Merge and Contour Tree (FTM)'
tTKMergeandContourTreeFTM1 = TTKMergeandContourTreeFTM(Input=programmableFilter2)
tTKMergeandContourTreeFTM1.ScalarField = 'simplifiedImage'
tTKMergeandContourTreeFTM1.InputOffset = 'PNGImage'
tTKMergeandContourTreeFTM1.ArcSampling = 10

# find source
tTKMergeandContourTreeFTM1_1 = FindSource('TTKMergeandContourTreeFTM1')

# create a new 'TTK GeometrySmoother'
tTKGeometrySmoother1 = TTKGeometrySmoother(Input=OutputPort(tTKMergeandContourTreeFTM1_1,1))
tTKGeometrySmoother1.IterationNumber = 30
tTKGeometrySmoother1.InputMaskField = 'ttkMaskScalarField'

# create a new 'Extract Surface'
extractSurface1 = ExtractSurface(Input=tTKGeometrySmoother1)

# create a new 'Tube'
tube1 = Tube(Input=extractSurface1)
tube1.Scalars = ['POINTS', 'Scalar']
tube1.Vectors = [None, '']
tube1.Radius = 6.42

# ----------------------------------------------------------------
# setup the visualization in view 'renderView1'
# ----------------------------------------------------------------

# show data from beva_a002_3_31_06_116png
beva_a002_3_31_06_116pngDisplay = Show(beva_a002_3_31_06_116png, renderView1)

# get color transfer function/color map for 'PNGImage'
pNGImageLUT = GetColorTransferFunction('PNGImage')
pNGImageLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 127.5, 0.865003, 0.865003, 0.865003, 255.0, 0.705882, 0.0156863, 0.14902]
pNGImageLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'PNGImage'
pNGImagePWF = GetOpacityTransferFunction('PNGImage')
pNGImagePWF.Points = [0.0, 0.0, 0.5, 0.0, 255.0, 1.0, 0.5, 0.0]
pNGImagePWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
beva_a002_3_31_06_116pngDisplay.Representation = 'Slice'
beva_a002_3_31_06_116pngDisplay.ColorArrayName = ['POINTS', 'PNGImage']
beva_a002_3_31_06_116pngDisplay.LookupTable = pNGImageLUT
beva_a002_3_31_06_116pngDisplay.OSPRayScaleArray = 'PNGImage'
beva_a002_3_31_06_116pngDisplay.OSPRayScaleFunction = 'PiecewiseFunction'
beva_a002_3_31_06_116pngDisplay.SelectOrientationVectors = 'None'
beva_a002_3_31_06_116pngDisplay.ScaleFactor = 70.8
beva_a002_3_31_06_116pngDisplay.SelectScaleArray = 'PNGImage'
beva_a002_3_31_06_116pngDisplay.GlyphType = 'Arrow'
beva_a002_3_31_06_116pngDisplay.GlyphTableIndexArray = 'PNGImage'
beva_a002_3_31_06_116pngDisplay.GaussianRadius = 3.54
beva_a002_3_31_06_116pngDisplay.SetScaleArray = ['POINTS', 'PNGImage']
beva_a002_3_31_06_116pngDisplay.ScaleTransferFunction = 'PiecewiseFunction'
beva_a002_3_31_06_116pngDisplay.OpacityArray = ['POINTS', 'PNGImage']
beva_a002_3_31_06_116pngDisplay.OpacityTransferFunction = 'PiecewiseFunction'
beva_a002_3_31_06_116pngDisplay.DataAxesGrid = 'GridAxesRepresentation'
beva_a002_3_31_06_116pngDisplay.SelectionCellLabelFontFile = ''
beva_a002_3_31_06_116pngDisplay.SelectionPointLabelFontFile = ''
beva_a002_3_31_06_116pngDisplay.PolarAxes = 'PolarAxesRepresentation'
beva_a002_3_31_06_116pngDisplay.ScalarOpacityUnitDistance = 12.276237890795404
beva_a002_3_31_06_116pngDisplay.ScalarOpacityFunction = pNGImagePWF
beva_a002_3_31_06_116pngDisplay.IsosurfaceValues = [127.5]

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.XTitleFontFile = ''
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.YTitleFontFile = ''
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.ZTitleFontFile = ''
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.XLabelFontFile = ''
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.YLabelFontFile = ''
beva_a002_3_31_06_116pngDisplay.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
beva_a002_3_31_06_116pngDisplay.PolarAxes.PolarAxisTitleFontFile = ''
beva_a002_3_31_06_116pngDisplay.PolarAxes.PolarAxisLabelFontFile = ''
beva_a002_3_31_06_116pngDisplay.PolarAxes.LastRadialAxisTextFontFile = ''
beva_a002_3_31_06_116pngDisplay.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for pNGImageLUT in view renderView1
pNGImageLUTColorBar = GetScalarBar(pNGImageLUT, renderView1)
pNGImageLUTColorBar.Title = 'PNGImage'
pNGImageLUTColorBar.ComponentTitle = ''
pNGImageLUTColorBar.TitleFontFile = ''
pNGImageLUTColorBar.LabelFontFile = ''

# set color bar visibility
pNGImageLUTColorBar.Visibility = 1

# show color legend
beva_a002_3_31_06_116pngDisplay.SetScalarBarVisibility(renderView1, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView2'
# ----------------------------------------------------------------

# show data from programmableFilter1
programmableFilter1Display = Show(programmableFilter1, renderView2)

# trace defaults for the display properties.
programmableFilter1Display.Representation = 'Surface'
programmableFilter1Display.ColorArrayName = ['POINTS', 'PNGImage']
programmableFilter1Display.LookupTable = pNGImageLUT
programmableFilter1Display.OSPRayScaleArray = 'PNGImage'
programmableFilter1Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter1Display.SelectOrientationVectors = 'None'
programmableFilter1Display.ScaleFactor = 70.8
programmableFilter1Display.SelectScaleArray = 'None'
programmableFilter1Display.GlyphType = 'Arrow'
programmableFilter1Display.GlyphTableIndexArray = 'None'
programmableFilter1Display.GaussianRadius = 3.54
programmableFilter1Display.SetScaleArray = ['POINTS', 'PNGImage']
programmableFilter1Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.OpacityArray = ['POINTS', 'PNGImage']
programmableFilter1Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter1Display.SelectionCellLabelFontFile = ''
programmableFilter1Display.SelectionPointLabelFontFile = ''
programmableFilter1Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter1Display.ScalarOpacityFunction = pNGImagePWF
programmableFilter1Display.ScalarOpacityUnitDistance = 9.743656471030247

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
programmableFilter1Display.DataAxesGrid.XTitleFontFile = ''
programmableFilter1Display.DataAxesGrid.YTitleFontFile = ''
programmableFilter1Display.DataAxesGrid.ZTitleFontFile = ''
programmableFilter1Display.DataAxesGrid.XLabelFontFile = ''
programmableFilter1Display.DataAxesGrid.YLabelFontFile = ''
programmableFilter1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
programmableFilter1Display.PolarAxes.PolarAxisTitleFontFile = ''
programmableFilter1Display.PolarAxes.PolarAxisLabelFontFile = ''
programmableFilter1Display.PolarAxes.LastRadialAxisTextFontFile = ''
programmableFilter1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for pNGImageLUT in view renderView2
pNGImageLUTColorBar_1 = GetScalarBar(pNGImageLUT, renderView2)
pNGImageLUTColorBar_1.Title = 'PNGImage'
pNGImageLUTColorBar_1.ComponentTitle = ''
pNGImageLUTColorBar_1.TitleFontFile = ''
pNGImageLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
pNGImageLUTColorBar_1.Visibility = 1

# show color legend
programmableFilter1Display.SetScalarBarVisibility(renderView2, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView3'
# ----------------------------------------------------------------

# show data from tTKPersistenceDiagram1
tTKPersistenceDiagram1Display = Show(tTKPersistenceDiagram1, renderView3)

# trace defaults for the display properties.
tTKPersistenceDiagram1Display.Representation = 'Surface'
tTKPersistenceDiagram1Display.ColorArrayName = [None, '']
tTKPersistenceDiagram1Display.OSPRayScaleArray = 'Coordinates'
tTKPersistenceDiagram1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.SelectOrientationVectors = 'Coordinates'
tTKPersistenceDiagram1Display.ScaleFactor = 25.5
tTKPersistenceDiagram1Display.SelectScaleArray = 'Coordinates'
tTKPersistenceDiagram1Display.GlyphType = 'Arrow'
tTKPersistenceDiagram1Display.GlyphTableIndexArray = 'Coordinates'
tTKPersistenceDiagram1Display.GaussianRadius = 1.2750000000000001
tTKPersistenceDiagram1Display.SetScaleArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.OpacityArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKPersistenceDiagram1Display.SelectionCellLabelFontFile = ''
tTKPersistenceDiagram1Display.SelectionPointLabelFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes = 'PolarAxesRepresentation'
tTKPersistenceDiagram1Display.ScalarOpacityUnitDistance = 15.226543422943394

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKPersistenceDiagram1Display.DataAxesGrid.XTitleFontFile = ''
tTKPersistenceDiagram1Display.DataAxesGrid.YTitleFontFile = ''
tTKPersistenceDiagram1Display.DataAxesGrid.ZTitleFontFile = ''
tTKPersistenceDiagram1Display.DataAxesGrid.XLabelFontFile = ''
tTKPersistenceDiagram1Display.DataAxesGrid.YLabelFontFile = ''
tTKPersistenceDiagram1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKPersistenceDiagram1Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# ----------------------------------------------------------------
# setup the visualization in view 'renderView4'
# ----------------------------------------------------------------

# show data from threshold1
threshold1Display = Show(threshold1, renderView4)

# trace defaults for the display properties.
threshold1Display.Representation = 'Surface'
threshold1Display.ColorArrayName = [None, '']
threshold1Display.OSPRayScaleArray = 'Coordinates'
threshold1Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold1Display.SelectOrientationVectors = 'Coordinates'
threshold1Display.ScaleFactor = 25.5
threshold1Display.SelectScaleArray = 'Coordinates'
threshold1Display.GlyphType = 'Arrow'
threshold1Display.GlyphTableIndexArray = 'Coordinates'
threshold1Display.GaussianRadius = 1.2750000000000001
threshold1Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold1Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display.OpacityArray = ['POINTS', 'Coordinates']
threshold1Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display.SelectionCellLabelFontFile = ''
threshold1Display.SelectionPointLabelFontFile = ''
threshold1Display.PolarAxes = 'PolarAxesRepresentation'
threshold1Display.ScalarOpacityUnitDistance = 147.325955036393

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
threshold1Display.DataAxesGrid.XTitleFontFile = ''
threshold1Display.DataAxesGrid.YTitleFontFile = ''
threshold1Display.DataAxesGrid.ZTitleFontFile = ''
threshold1Display.DataAxesGrid.XLabelFontFile = ''
threshold1Display.DataAxesGrid.YLabelFontFile = ''
threshold1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
threshold1Display.PolarAxes.PolarAxisTitleFontFile = ''
threshold1Display.PolarAxes.PolarAxisLabelFontFile = ''
threshold1Display.PolarAxes.LastRadialAxisTextFontFile = ''
threshold1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# ----------------------------------------------------------------
# setup the visualization in view 'renderView5'
# ----------------------------------------------------------------

# find source
tTKMergeandContourTreeFTM1_2 = FindSource('TTKMergeandContourTreeFTM1')

# show data from tTKMergeandContourTreeFTM1_2
tTKMergeandContourTreeFTM1Display = Show(OutputPort(tTKMergeandContourTreeFTM1, 2), renderView5)

# get color transfer function/color map for 'RegionType'
regionTypeLUT = GetColorTransferFunction('RegionType')
regionTypeLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 2.0, 0.865003, 0.865003, 0.865003, 4.0, 0.705882, 0.0156863, 0.14902]
regionTypeLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'RegionType'
regionTypePWF = GetOpacityTransferFunction('RegionType')
regionTypePWF.Points = [0.0, 0.0, 0.5, 0.0, 4.0, 1.0, 0.5, 0.0]
regionTypePWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
tTKMergeandContourTreeFTM1Display.Representation = 'Surface'
tTKMergeandContourTreeFTM1Display.ColorArrayName = ['POINTS', 'RegionType']
tTKMergeandContourTreeFTM1Display.LookupTable = regionTypeLUT
tTKMergeandContourTreeFTM1Display.Opacity = 0.79
tTKMergeandContourTreeFTM1Display.OSPRayScaleArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.SelectOrientationVectors = 'None'
tTKMergeandContourTreeFTM1Display.ScaleFactor = 70.8
tTKMergeandContourTreeFTM1Display.SelectScaleArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.GlyphType = 'Arrow'
tTKMergeandContourTreeFTM1Display.GlyphTableIndexArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.GaussianRadius = 3.54
tTKMergeandContourTreeFTM1Display.SetScaleArray = ['POINTS', 'SegmentationId']
tTKMergeandContourTreeFTM1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.OpacityArray = ['POINTS', 'SegmentationId']
tTKMergeandContourTreeFTM1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKMergeandContourTreeFTM1Display.SelectionCellLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.SelectionPointLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.PolarAxes = 'PolarAxesRepresentation'
tTKMergeandContourTreeFTM1Display.ScalarOpacityFunction = regionTypePWF
tTKMergeandContourTreeFTM1Display.ScalarOpacityUnitDistance = 10.130644997454299

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKMergeandContourTreeFTM1Display.DataAxesGrid.XTitleFontFile = ''
tTKMergeandContourTreeFTM1Display.DataAxesGrid.YTitleFontFile = ''
tTKMergeandContourTreeFTM1Display.DataAxesGrid.ZTitleFontFile = ''
tTKMergeandContourTreeFTM1Display.DataAxesGrid.XLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.DataAxesGrid.YLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKMergeandContourTreeFTM1Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKMergeandContourTreeFTM1Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKMergeandContourTreeFTM1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube1
tube1Display = Show(tube1, renderView5)

# get color transfer function/color map for 'SegmentationId'
segmentationIdLUT = GetColorTransferFunction('SegmentationId')
segmentationIdLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 1001.5, 0.865003, 0.865003, 0.865003, 2003.0, 0.705882, 0.0156863, 0.14902]
segmentationIdLUT.ScalarRangeInitialized = 1.0

# trace defaults for the display properties.
tube1Display.Representation = 'Surface'
tube1Display.ColorArrayName = ['CELLS', 'SegmentationId']
tube1Display.LookupTable = segmentationIdLUT
tube1Display.OSPRayScaleArray = 'Scalar'
tube1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube1Display.SelectOrientationVectors = 'None'
tube1Display.ScaleFactor = 65.44951934814453
tube1Display.SelectScaleArray = 'SegmentationId'
tube1Display.GlyphType = 'Arrow'
tube1Display.GlyphTableIndexArray = 'SegmentationId'
tube1Display.GaussianRadius = 3.272475967407227
tube1Display.SetScaleArray = ['POINTS', 'Scalar']
tube1Display.ScaleTransferFunction = 'PiecewiseFunction'
tube1Display.OpacityArray = ['POINTS', 'Scalar']
tube1Display.OpacityTransferFunction = 'PiecewiseFunction'
tube1Display.DataAxesGrid = 'GridAxesRepresentation'
tube1Display.SelectionCellLabelFontFile = ''
tube1Display.SelectionPointLabelFontFile = ''
tube1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube1Display.DataAxesGrid.XTitleFontFile = ''
tube1Display.DataAxesGrid.YTitleFontFile = ''
tube1Display.DataAxesGrid.ZTitleFontFile = ''
tube1Display.DataAxesGrid.XLabelFontFile = ''
tube1Display.DataAxesGrid.YLabelFontFile = ''
tube1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube1Display.PolarAxes.PolarAxisTitleFontFile = ''
tube1Display.PolarAxes.PolarAxisLabelFontFile = ''
tube1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tube1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for segmentationIdLUT in view renderView5
segmentationIdLUTColorBar = GetScalarBar(segmentationIdLUT, renderView5)
segmentationIdLUTColorBar.WindowLocation = 'UpperRightCorner'
segmentationIdLUTColorBar.Title = 'SegmentationId'
segmentationIdLUTColorBar.ComponentTitle = ''
segmentationIdLUTColorBar.TitleFontFile = ''
segmentationIdLUTColorBar.LabelFontFile = ''

# set color bar visibility
segmentationIdLUTColorBar.Visibility = 1

# get color legend/bar for regionTypeLUT in view renderView5
regionTypeLUTColorBar = GetScalarBar(regionTypeLUT, renderView5)
regionTypeLUTColorBar.Title = 'RegionType'
regionTypeLUTColorBar.ComponentTitle = ''
regionTypeLUTColorBar.TitleFontFile = ''
regionTypeLUTColorBar.LabelFontFile = ''

# set color bar visibility
regionTypeLUTColorBar.Visibility = 1

# show color legend
tTKMergeandContourTreeFTM1Display.SetScalarBarVisibility(renderView5, True)

# show color legend
tube1Display.SetScalarBarVisibility(renderView5, True)

# ----------------------------------------------------------------
# setup color maps and opacity mapes used in the visualization
# note: the Get..() functions create a new object, if needed
# ----------------------------------------------------------------

# get opacity transfer function/opacity map for 'SegmentationId'
segmentationIdPWF = GetOpacityTransferFunction('SegmentationId')
segmentationIdPWF.Points = [0.0, 0.0, 0.5, 0.0, 2003.0, 1.0, 0.5, 0.0]
segmentationIdPWF.ScalarRangeInitialized = 1

# ----------------------------------------------------------------
# finally, restore active source
SetActiveSource(tube1)
# ----------------------------------------------------------------