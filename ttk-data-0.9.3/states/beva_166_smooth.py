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
renderView1.ViewSize = [649, 762]
renderView1.InteractionMode = '2D'
renderView1.AxesGrid = 'GridAxes3DActor'
renderView1.CenterOfRotation = [354.0, 274.5, 0.0]
renderView1.StereoType = 0
renderView1.CameraPosition = [351.6485151374159, 262.74257568707964, 10000.0]
renderView1.CameraFocalPoint = [351.6485151374159, 262.74257568707964, 0.0]
renderView1.CameraParallelScale = 447.9578663222692
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
renderView2.ViewSize = [320, 366]
renderView2.AxesGrid = 'GridAxes3DActor'
renderView2.CenterOfRotation = [354.0000958442688, 274.4999740123749, 127.03382110595703]
renderView2.StereoType = 0
renderView2.CameraPosition = [307.2308818006518, 222.27489022337556, 2140.9705974432577]
renderView2.CameraFocalPoint = [354.0000958442688, 274.49997401237465, 127.03382110595727]
renderView2.CameraViewUp = [0.08017704559799697, 0.9963956716135052, 0.027700305937819344]
renderView2.CameraParallelScale = 525.7254274246751
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
renderView3.ViewSize = [319, 366]
renderView3.InteractionMode = '2D'
renderView3.AxesGrid = 'GridAxes3DActor'
renderView3.CenterOfRotation = [126.9997329711914, 127.03382110595703, 0.0]
renderView3.StereoType = 0
renderView3.CameraPosition = [126.9997329711914, 127.03382110595703, 10000.0]
renderView3.CameraFocalPoint = [126.9997329711914, 127.03382110595703, 0.0]
renderView3.CameraParallelScale = 429.08208141009766
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
renderView4.ViewSize = [319, 366]
renderView4.InteractionMode = '2D'
renderView4.AxesGrid = 'GridAxes3DActor'
renderView4.CenterOfRotation = [95.50199890136719, 127.03382110595703, 0.0]
renderView4.StereoType = 0
renderView4.CameraPosition = [95.50199890136719, 127.03382110595703, 10000.0]
renderView4.CameraFocalPoint = [95.50199890136719, 127.03382110595703, 0.0]
renderView4.CameraParallelScale = 182.34413676952605
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
renderView5.ViewSize = [320, 366]
renderView5.AxesGrid = 'GridAxes3DActor'
renderView5.CenterOfRotation = [354.0000958442688, 274.4999740123749, 127.03382110595703]
renderView5.StereoType = 0
renderView5.CameraPosition = [307.2308818006518, 222.27489022337556, 2140.9705974432577]
renderView5.CameraFocalPoint = [354.0000958442688, 274.49997401237465, 127.03382110595727]
renderView5.CameraViewUp = [0.08017704559799697, 0.9963956716135052, 0.027700305937819344]
renderView5.CameraParallelScale = 525.7254274246751
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
"""
programmableFilter1.RequestInformationScript = ''
programmableFilter1.RequestUpdateExtentScript = ''
programmableFilter1.PythonPath = ''

# create a new 'TTK GeometrySmoother'
tTKGeometrySmoother1 = TTKGeometrySmoother(Input=programmableFilter1)
tTKGeometrySmoother1.IterationNumber = 50
tTKGeometrySmoother1.InputMaskField = ''

# create a new 'Programmable Filter'
programmableFilter2 = ProgrammableFilter(Input=tTKGeometrySmoother1)
programmableFilter2.Script = """output.Points[:,2]=inputs[0].Points[:,2]
output.PointData.append(inputs[0].Points[:,2], "smoothedImage")
output.PointData.append(inputs[0].Points[:,2], "simplifiedImage")
"""
programmableFilter2.RequestInformationScript = ''
programmableFilter2.RequestUpdateExtentScript = ''
programmableFilter2.PythonPath = ''

# create a new 'TTK PersistenceDiagram'
tTKPersistenceDiagram1 = TTKPersistenceDiagram(Input=programmableFilter2)
tTKPersistenceDiagram1.ScalarField = 'smoothedImage'
tTKPersistenceDiagram1.InputOffsetField = 'simplifiedImage'

# create a new 'Threshold'
threshold1 = Threshold(Input=tTKPersistenceDiagram1)
threshold1.Scalars = ['CELLS', 'Persistence']
threshold1.ThresholdRange = [50.81352844238282, 260.0]

# create a new 'Clean to Grid'
cleantoGrid1 = CleantoGrid(Input=programmableFilter2)

# create a new 'TTK TopologicalSimplification'
tTKTopologicalSimplification1 = TTKTopologicalSimplification(Domain=cleantoGrid1,
    Constraints=threshold1)
tTKTopologicalSimplification1.ScalarField = 'simplifiedImage'
tTKTopologicalSimplification1.InputOffsetField = 'simplifiedImage'
tTKTopologicalSimplification1.Vertexidentifierfield = 'CriticalType'
tTKTopologicalSimplification1.NumericalPerturbation = 1
tTKTopologicalSimplification1.OutputOffsetScalarField = ''

# create a new 'Programmable Filter'
programmableFilter3 = ProgrammableFilter(Input=tTKTopologicalSimplification1)
programmableFilter3.Script = """output.Points[:,2]=inputs[0].PointData["simplifiedImage"]
output.PointData.append(inputs[0].Points[:,2], "smoothedImage")
output.PointData.append(inputs[0].Points[:,2], "simplifiedImage")"""
programmableFilter3.RequestInformationScript = ''
programmableFilter3.RequestUpdateExtentScript = ''
programmableFilter3.PythonPath = ''

# create a new 'TTK Merge and Contour Tree (FTM)'
tTKMergeandContourTreeFTM1 = TTKMergeandContourTreeFTM(Input=programmableFilter3)
tTKMergeandContourTreeFTM1.ScalarField = 'simplifiedImage'
tTKMergeandContourTreeFTM1.InputOffset = 'simplifiedImage'
tTKMergeandContourTreeFTM1.ArcSampling = 10

# find source
tTKMergeandContourTreeFTM1_1 = FindSource('TTKMergeandContourTreeFTM1')

# create a new 'TTK GeometrySmoother'
tTKGeometrySmoother2 = TTKGeometrySmoother(Input=OutputPort(tTKMergeandContourTreeFTM1_1,1))
tTKGeometrySmoother2.IterationNumber = 30
tTKGeometrySmoother2.InputMaskField = 'ttkMaskScalarField'

# create a new 'Extract Surface'
extractSurface1 = ExtractSurface(Input=tTKGeometrySmoother2)

# create a new 'Tube'
tube1 = Tube(Input=extractSurface1)
tube1.Scalars = ['POINTS', 'Scalar']
tube1.Vectors = [None, '']
tube1.Radius = 5.62

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

# show data from programmableFilter2
programmableFilter2Display = Show(programmableFilter2, renderView2)

# get color transfer function/color map for 'smoothedImage'
smoothedImageLUT = GetColorTransferFunction('smoothedImage')
smoothedImageLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 127.03382110595703, 0.865003, 0.865003, 0.865003, 254.06764221191406, 0.705882, 0.0156863, 0.14902]
smoothedImageLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'smoothedImage'
smoothedImagePWF = GetOpacityTransferFunction('smoothedImage')
smoothedImagePWF.Points = [0.0, 0.0, 0.5, 0.0, 254.06764221191406, 1.0, 0.5, 0.0]
smoothedImagePWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
programmableFilter2Display.Representation = 'Surface'
programmableFilter2Display.ColorArrayName = ['POINTS', 'smoothedImage']
programmableFilter2Display.LookupTable = smoothedImageLUT
programmableFilter2Display.OSPRayScaleArray = 'simplifiedImage'
programmableFilter2Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter2Display.SelectOrientationVectors = 'None'
programmableFilter2Display.ScaleFactor = 69.91467809677124
programmableFilter2Display.SelectScaleArray = 'None'
programmableFilter2Display.GlyphType = 'Arrow'
programmableFilter2Display.GlyphTableIndexArray = 'None'
programmableFilter2Display.GaussianRadius = 3.4957339048385623
programmableFilter2Display.SetScaleArray = ['POINTS', 'simplifiedImage']
programmableFilter2Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.OpacityArray = ['POINTS', 'simplifiedImage']
programmableFilter2Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter2Display.SelectionCellLabelFontFile = ''
programmableFilter2Display.SelectionPointLabelFontFile = ''
programmableFilter2Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter2Display.ScalarOpacityFunction = smoothedImagePWF
programmableFilter2Display.ScalarOpacityUnitDistance = 9.997989402730582

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
programmableFilter2Display.DataAxesGrid.XTitleFontFile = ''
programmableFilter2Display.DataAxesGrid.YTitleFontFile = ''
programmableFilter2Display.DataAxesGrid.ZTitleFontFile = ''
programmableFilter2Display.DataAxesGrid.XLabelFontFile = ''
programmableFilter2Display.DataAxesGrid.YLabelFontFile = ''
programmableFilter2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
programmableFilter2Display.PolarAxes.PolarAxisTitleFontFile = ''
programmableFilter2Display.PolarAxes.PolarAxisLabelFontFile = ''
programmableFilter2Display.PolarAxes.LastRadialAxisTextFontFile = ''
programmableFilter2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for smoothedImageLUT in view renderView2
smoothedImageLUTColorBar = GetScalarBar(smoothedImageLUT, renderView2)
smoothedImageLUTColorBar.Title = 'smoothedImage'
smoothedImageLUTColorBar.ComponentTitle = ''
smoothedImageLUTColorBar.TitleFontFile = ''
smoothedImageLUTColorBar.LabelFontFile = ''

# set color bar visibility
smoothedImageLUTColorBar.Visibility = 1

# show color legend
programmableFilter2Display.SetScalarBarVisibility(renderView2, True)

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
tTKPersistenceDiagram1Display.ScaleFactor = 25.40676422119141
tTKPersistenceDiagram1Display.SelectScaleArray = 'Coordinates'
tTKPersistenceDiagram1Display.GlyphType = 'Arrow'
tTKPersistenceDiagram1Display.GlyphTableIndexArray = 'Coordinates'
tTKPersistenceDiagram1Display.GaussianRadius = 1.2703382110595702
tTKPersistenceDiagram1Display.SetScaleArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.OpacityArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKPersistenceDiagram1Display.SelectionCellLabelFontFile = ''
tTKPersistenceDiagram1Display.SelectionPointLabelFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes = 'PolarAxesRepresentation'
tTKPersistenceDiagram1Display.ScalarOpacityUnitDistance = 38.961356143996554

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
threshold1Display.ScaleFactor = 25.40676422119141
threshold1Display.SelectScaleArray = 'Coordinates'
threshold1Display.GlyphType = 'Arrow'
threshold1Display.GlyphTableIndexArray = 'Coordinates'
threshold1Display.GaussianRadius = 1.2703382110595702
threshold1Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold1Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display.OpacityArray = ['POINTS', 'Coordinates']
threshold1Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display.SelectionCellLabelFontFile = ''
threshold1Display.SelectionPointLabelFontFile = ''
threshold1Display.PolarAxes = 'PolarAxesRepresentation'
threshold1Display.ScalarOpacityUnitDistance = 123.61801229456152

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

# show data from programmableFilter3
programmableFilter3Display = Show(programmableFilter3, renderView5)

# get color transfer function/color map for 'simplifiedImage'
simplifiedImageLUT = GetColorTransferFunction('simplifiedImage')
simplifiedImageLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 127.03382110595703, 0.865003, 0.865003, 0.865003, 254.06764221191406, 0.705882, 0.0156863, 0.14902]
simplifiedImageLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'simplifiedImage'
simplifiedImagePWF = GetOpacityTransferFunction('simplifiedImage')
simplifiedImagePWF.Points = [0.0, 0.0, 0.5, 0.0, 254.06764221191406, 1.0, 0.5, 0.0]
simplifiedImagePWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
programmableFilter3Display.Representation = 'Surface'
programmableFilter3Display.ColorArrayName = ['POINTS', 'simplifiedImage']
programmableFilter3Display.LookupTable = simplifiedImageLUT
programmableFilter3Display.OSPRayScaleArray = 'simplifiedImage'
programmableFilter3Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter3Display.SelectOrientationVectors = 'None'
programmableFilter3Display.ScaleFactor = 69.91467809677124
programmableFilter3Display.SelectScaleArray = 'None'
programmableFilter3Display.GlyphType = 'Arrow'
programmableFilter3Display.GlyphTableIndexArray = 'None'
programmableFilter3Display.GaussianRadius = 3.4957339048385623
programmableFilter3Display.SetScaleArray = [None, 'simplifiedImage']
programmableFilter3Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter3Display.OpacityArray = [None, 'simplifiedImage']
programmableFilter3Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter3Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter3Display.SelectionCellLabelFontFile = ''
programmableFilter3Display.SelectionPointLabelFontFile = ''
programmableFilter3Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter3Display.ScalarOpacityFunction = simplifiedImagePWF
programmableFilter3Display.ScalarOpacityUnitDistance = 9.997989402730582

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
programmableFilter3Display.DataAxesGrid.XTitleFontFile = ''
programmableFilter3Display.DataAxesGrid.YTitleFontFile = ''
programmableFilter3Display.DataAxesGrid.ZTitleFontFile = ''
programmableFilter3Display.DataAxesGrid.XLabelFontFile = ''
programmableFilter3Display.DataAxesGrid.YLabelFontFile = ''
programmableFilter3Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
programmableFilter3Display.PolarAxes.PolarAxisTitleFontFile = ''
programmableFilter3Display.PolarAxes.PolarAxisLabelFontFile = ''
programmableFilter3Display.PolarAxes.LastRadialAxisTextFontFile = ''
programmableFilter3Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

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
tTKMergeandContourTreeFTM1Display.Opacity = 0.19
tTKMergeandContourTreeFTM1Display.OSPRayScaleArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.SelectOrientationVectors = 'None'
tTKMergeandContourTreeFTM1Display.ScaleFactor = 69.91467809677124
tTKMergeandContourTreeFTM1Display.SelectScaleArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.GlyphType = 'Arrow'
tTKMergeandContourTreeFTM1Display.GlyphTableIndexArray = 'SegmentationId'
tTKMergeandContourTreeFTM1Display.GaussianRadius = 3.4957339048385623
tTKMergeandContourTreeFTM1Display.SetScaleArray = ['POINTS', 'SegmentationId']
tTKMergeandContourTreeFTM1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.OpacityArray = ['POINTS', 'SegmentationId']
tTKMergeandContourTreeFTM1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKMergeandContourTreeFTM1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKMergeandContourTreeFTM1Display.SelectionCellLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.SelectionPointLabelFontFile = ''
tTKMergeandContourTreeFTM1Display.PolarAxes = 'PolarAxesRepresentation'
tTKMergeandContourTreeFTM1Display.ScalarOpacityFunction = regionTypePWF
tTKMergeandContourTreeFTM1Display.ScalarOpacityUnitDistance = 9.997989402730582

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
segmentationIdLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 780.5, 0.865003, 0.865003, 0.865003, 1561.0, 0.705882, 0.0156863, 0.14902]
segmentationIdLUT.ScalarRangeInitialized = 1.0

# trace defaults for the display properties.
tube1Display.Representation = 'Surface'
tube1Display.ColorArrayName = ['CELLS', 'SegmentationId']
tube1Display.LookupTable = segmentationIdLUT
tube1Display.OSPRayScaleArray = 'Scalar'
tube1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube1Display.SelectOrientationVectors = 'None'
tube1Display.ScaleFactor = 56.992312622070315
tube1Display.SelectScaleArray = 'SegmentationId'
tube1Display.GlyphType = 'Arrow'
tube1Display.GlyphTableIndexArray = 'SegmentationId'
tube1Display.GaussianRadius = 2.8496156311035157
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

# get color legend/bar for simplifiedImageLUT in view renderView5
simplifiedImageLUTColorBar = GetScalarBar(simplifiedImageLUT, renderView5)
simplifiedImageLUTColorBar.Title = 'simplifiedImage'
simplifiedImageLUTColorBar.ComponentTitle = ''
simplifiedImageLUTColorBar.TitleFontFile = ''
simplifiedImageLUTColorBar.LabelFontFile = ''

# set color bar visibility
simplifiedImageLUTColorBar.Visibility = 1

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
regionTypeLUTColorBar.WindowLocation = 'UpperLeftCorner'
regionTypeLUTColorBar.Title = 'RegionType'
regionTypeLUTColorBar.ComponentTitle = ''
regionTypeLUTColorBar.TitleFontFile = ''
regionTypeLUTColorBar.LabelFontFile = ''

# set color bar visibility
regionTypeLUTColorBar.Visibility = 1

# show color legend
programmableFilter3Display.SetScalarBarVisibility(renderView5, True)

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
segmentationIdPWF.Points = [0.0, 0.0, 0.5, 0.0, 1561.0, 1.0, 0.5, 0.0]
segmentationIdPWF.ScalarRangeInitialized = 1

# ----------------------------------------------------------------
# finally, restore active source
SetActiveSource(tube1)
# ----------------------------------------------------------------
