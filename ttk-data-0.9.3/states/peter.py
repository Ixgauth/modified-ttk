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
renderView1.ViewSize = [477, 371]
renderView1.InteractionMode = '2D'
renderView1.AxesGrid = 'GridAxes3DActor'
renderView1.CenterOfRotation = [0.0, 0.0, 1.5547927387524396]
renderView1.StereoType = 0
renderView1.CameraPosition = [1.3378118296548438, 0.6307174689365194, 13.954236799823047]
renderView1.CameraFocalPoint = [-0.6759311715051547, -0.4850427877215127, 1.7101611955213882]
renderView1.CameraViewUp = [0.9820028632422163, -0.11318660510499168, -0.15119248992227044]
renderView1.CameraParallelScale = 3.2245308004068063
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
renderView2.ViewSize = [406, 371]
renderView2.AxesGrid = 'GridAxes3DActor'
renderView2.CenterOfRotation = [0.0, 0.0, 1.5547927387524396]
renderView2.StereoType = 0
renderView2.CameraPosition = [4.104157666025413, -11.173552856664719, 5.232438132295814]
renderView2.CameraFocalPoint = [8.463311347768633e-16, 1.0026418768071992e-15, 1.5547927387524396]
renderView2.CameraViewUp = [0.42272650418819385, 0.4196492748493256, 0.8032414262071299]
renderView2.CameraParallelScale = 3.2245308004068063
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
renderView3.ViewSize = [405, 371]
renderView3.InteractionMode = '2D'
renderView3.AxesGrid = 'GridAxes3DActor'
renderView3.CenterOfRotation = [0.9735609658528119, 1.5547927387524396, 0.0]
renderView3.StereoType = 0
renderView3.CameraPosition = [0.9735609658528119, 1.5547927387524396, 10000.0]
renderView3.CameraFocalPoint = [0.9735609658528119, 1.5547927387524396, 0.0]
renderView3.CameraParallelScale = 2.047454070433332
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
renderView4.ViewSize = [405, 371]
renderView4.AxesGrid = 'GridAxes3DActor'
renderView4.CenterOfRotation = [0.9735609740018845, 0.9735609740018845, 0.0]
renderView4.StereoType = 0
renderView4.CameraPosition = [0.9735609740018846, 0.9735609740018846, 9.063776985906806]
renderView4.CameraFocalPoint = [0.9735609740018846, 0.9735609740018846, 3.6451927144334206]
renderView4.CameraParallelScale = 1.4024328069502814
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
renderView5.ViewSize = [406, 371]
renderView5.AxesGrid = 'GridAxes3DActor'
renderView5.CenterOfRotation = [0.0, 0.0, 1.5547927387524396]
renderView5.StereoType = 0
renderView5.CameraPosition = [4.104157666025413, -11.173552856664719, 5.232438132295814]
renderView5.CameraFocalPoint = [8.463311347768633e-16, 1.0026418768071992e-15, 1.5547927387524396]
renderView5.CameraViewUp = [0.42272650418819385, 0.4196492748493256, 0.8032414262071299]
renderView5.CameraParallelScale = 3.2245308004068063
renderView5.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView5.AxesGrid.XTitleFontFile = ''
renderView5.AxesGrid.YTitleFontFile = ''
renderView5.AxesGrid.ZTitleFontFile = ''
renderView5.AxesGrid.XLabelFontFile = ''
renderView5.AxesGrid.YLabelFontFile = ''
renderView5.AxesGrid.ZLabelFontFile = ''

# Create a new 'Render View'
renderView6 = CreateView('RenderView')
renderView6.ViewSize = [477, 371]
renderView6.InteractionMode = '2D'
renderView6.AxesGrid = 'GridAxes3DActor'
renderView6.CenterOfRotation = [0.0, 0.0, 1.5547927387524396]
renderView6.StereoType = 0
renderView6.CameraPosition = [1.3378118296548438, 0.6307174689365194, 13.954236799823047]
renderView6.CameraFocalPoint = [-0.6759311715051547, -0.4850427877215127, 1.7101611955213882]
renderView6.CameraViewUp = [0.9820028632422163, -0.11318660510499168, -0.15119248992227044]
renderView6.CameraParallelScale = 3.2245308004068063
renderView6.Background = [0.32, 0.34, 0.43]

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView6.AxesGrid.XTitleFontFile = ''
renderView6.AxesGrid.YTitleFontFile = ''
renderView6.AxesGrid.ZTitleFontFile = ''
renderView6.AxesGrid.XLabelFontFile = ''
renderView6.AxesGrid.YLabelFontFile = ''
renderView6.AxesGrid.ZLabelFontFile = ''

# ----------------------------------------------------------------
# restore active view
SetActiveView(renderView1)
# ----------------------------------------------------------------

# ----------------------------------------------------------------
# setup the data processing pipelines
# ----------------------------------------------------------------

# create a new 'Plane'
plane1 = Plane()
plane1.Origin = [-2.0, -2.0, 0.0]
plane1.Point1 = [2.0, -2.0, 0.0]
plane1.Point2 = [-2.0, 2.0, 0.0]
plane1.XResolution = 100
plane1.YResolution = 100

# create a new 'Python Calculator'
pythonCalculator1 = PythonCalculator(Input=plane1)
pythonCalculator1.Expression = 'exp(-((inputs[0].Points[:,0]-0.25)*(inputs[0].Points[:,0]-0.25)+(inputs[0].Points[:,1]+0.25)*(inputs[0].Points[:,1]+0.25))/2.0)'
pythonCalculator1.ArrayName = 'gaussian0'

# create a new 'Python Calculator'
pythonCalculator2 = PythonCalculator(Input=pythonCalculator1)
pythonCalculator2.Expression = '2*exp(-((inputs[0].Points[:,0]-0.5)*(inputs[0].Points[:,0]-0.5)+(inputs[0].Points[:,1]+0.4)*(inputs[0].Points[:,1]+0.4))/(2.0*0.5*0.5))'
pythonCalculator2.ArrayName = 'gaussian1'

# create a new 'Python Calculator'
pythonCalculator3 = PythonCalculator(Input=pythonCalculator2)
pythonCalculator3.Expression = '3*exp(-((inputs[0].Points[:,0]-1.5)*(inputs[0].Points[:,0]-1.5)+(inputs[0].Points[:,1]-1.5)*(inputs[0].Points[:,1]-1.5))/(2.0*0.75*0.75))'
pythonCalculator3.ArrayName = 'gaussian2'

# create a new 'Python Calculator'
pythonCalculator4 = PythonCalculator(Input=pythonCalculator3)
pythonCalculator4.Expression = '(gaussian0+gaussian1+gaussian2)'
pythonCalculator4.ArrayName = 'multiGaussian'

# create a new 'Tetrahedralize'
tetrahedralize1 = Tetrahedralize(Input=pythonCalculator4)

# create a new 'Programmable Filter'
programmableFilter1 = ProgrammableFilter(Input=tetrahedralize1)
programmableFilter1.Script = """output.Points[:,2]=inputs[0].PointData["multiGaussian"]
output.PointData.append(inputs[0].PointData["multiGaussian"], "multiGaussian")
output.PointData.append(inputs[0].PointData["multiGaussian"], "simplifiedGaussian")"""
programmableFilter1.RequestInformationScript = ''
programmableFilter1.RequestUpdateExtentScript = ''
programmableFilter1.PythonPath = ''

# create a new 'Threshold'
threshold1 = Threshold(Input=programmableFilter1)
threshold1.Scalars = ['POINTS', 'multiGaussian']
threshold1.ThresholdRange = [1.3999509200220928, 3.103210926055908]

# create a new 'Clean to Grid'
cleantoGrid1 = CleantoGrid(Input=programmableFilter1)

# create a new 'TTK PersistenceDiagram'
tTKPersistenceDiagram1 = TTKPersistenceDiagram(Input=programmableFilter1)
tTKPersistenceDiagram1.ScalarField = 'multiGaussian'
tTKPersistenceDiagram1.InputOffsetField = 'multiGaussian'

# create a new 'Threshold'
threshold3 = Threshold(Input=tTKPersistenceDiagram1)
threshold3.Scalars = ['CELLS', 'PairIdentifier']
threshold3.ThresholdRange = [0.0, 4.0]

# create a new 'Extract Surface'
extractSurface2 = ExtractSurface(Input=threshold3)

# create a new 'Tube'
tube3 = Tube(Input=extractSurface2)
tube3.Scalars = ['POINTS', 'CriticalType']
tube3.Vectors = ['POINTS', 'Coordinates']
tube3.Radius = 0.03096836374606937

# create a new 'Threshold'
threshold4 = Threshold(Input=threshold3)
threshold4.Scalars = ['CELLS', 'Persistence']
threshold4.ThresholdRange = [2.0, 10.0]

# create a new 'Threshold'
threshold2 = Threshold(Input=tTKPersistenceDiagram1)
threshold2.Scalars = ['POINTS', 'CriticalType']
threshold2.ThresholdRange = [-10.0, 0.0]

# create a new 'Extract Surface'
extractSurface1 = ExtractSurface(Input=threshold2)

# create a new 'Tube'
tube2 = Tube(Input=extractSurface1)
tube2.Scalars = ['POINTS', 'CriticalType']
tube2.Vectors = ['POINTS', 'Coordinates']
tube2.Radius = 0.03934372828807682

# create a new 'Contour'
contour1 = Contour(Input=programmableFilter1)
contour1.ContourBy = ['POINTS', 'multiGaussian']
contour1.Isosurfaces = [1.5547927387524396]
contour1.PointMergeMethod = 'Uniform Binning'

# create a new 'Tube'
tube1 = Tube(Input=contour1)
tube1.Scalars = [None, 'simplifiedGaussian']
tube1.Vectors = [None, '']
tube1.Radius = 0.030554188489913942

# create a new 'TTK TopologicalSimplification'
tTKTopologicalSimplification1 = TTKTopologicalSimplification(Domain=cleantoGrid1,
    Constraints=threshold4)
tTKTopologicalSimplification1.ScalarField = 'simplifiedGaussian'
tTKTopologicalSimplification1.InputOffsetField = 'multiGaussian'
tTKTopologicalSimplification1.Vertexidentifierfield = 'CriticalType'
tTKTopologicalSimplification1.NumericalPerturbation = 1
tTKTopologicalSimplification1.OutputOffsetScalarField = ''

# create a new 'Programmable Filter'
programmableFilter2 = ProgrammableFilter(Input=tTKTopologicalSimplification1)
programmableFilter2.Script = """output.Points[:,2]=inputs[0].PointData["simplifiedGaussian"]
output.PointData.append(inputs[0].PointData["multiGaussian"], "multiGaussian")
output.PointData.append(inputs[0].PointData["simplifiedGaussian"], "simplifiedGaussian")
output.PointData.append(inputs[0].PointData["ttkOffsetScalarField"], "ttkOffsetScalarField")"""
programmableFilter2.RequestInformationScript = ''
programmableFilter2.RequestUpdateExtentScript = ''
programmableFilter2.PythonPath = ''

# create a new 'TTK ScalarFieldCriticalPoints'
tTKScalarFieldCriticalPoints2 = TTKScalarFieldCriticalPoints(Input=programmableFilter2)
tTKScalarFieldCriticalPoints2.ScalarField = 'simplifiedGaussian'
tTKScalarFieldCriticalPoints2.InputOffsetfield = 'multiGaussian'

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint3 = TTKSphereFromPoint(Input=tTKScalarFieldCriticalPoints2)
tTKSphereFromPoint3.Radius = 0.15

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint2 = TTKSphereFromPoint(Input=threshold3)
tTKSphereFromPoint2.Radius = 0.055

# create a new 'TTK ScalarFieldCriticalPoints'
tTKScalarFieldCriticalPoints1 = TTKScalarFieldCriticalPoints(Input=programmableFilter1)
tTKScalarFieldCriticalPoints1.ScalarField = 'multiGaussian'
tTKScalarFieldCriticalPoints1.InputOffsetfield = 'multiGaussian'

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint1 = TTKSphereFromPoint(Input=tTKScalarFieldCriticalPoints1)
tTKSphereFromPoint1.Radius = 0.1

# ----------------------------------------------------------------
# setup the visualization in view 'renderView1'
# ----------------------------------------------------------------

# show data from programmableFilter1
programmableFilter1Display = Show(programmableFilter1, renderView1)

# get color transfer function/color map for 'multiGaussian'
multiGaussianLUT = GetColorTransferFunction('multiGaussian')
multiGaussianLUT.RGBPoints = [0.00212485040538013, 0.231373, 0.298039, 0.752941, 1.5526678882306442, 0.865003, 0.865003, 0.865003, 3.103210926055908, 0.705882, 0.0156863, 0.14902]
multiGaussianLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'multiGaussian'
multiGaussianPWF = GetOpacityTransferFunction('multiGaussian')
multiGaussianPWF.Points = [0.00212485040538013, 0.0, 0.5, 0.0, 3.103210926055908, 1.0, 0.5, 0.0]
multiGaussianPWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
programmableFilter1Display.Representation = 'Surface'
programmableFilter1Display.ColorArrayName = ['POINTS', 'multiGaussian']
programmableFilter1Display.LookupTable = multiGaussianLUT
programmableFilter1Display.OSPRayScaleArray = 'multiGaussian'
programmableFilter1Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter1Display.SelectOrientationVectors = 'None'
programmableFilter1Display.ScaleFactor = 0.4
programmableFilter1Display.SelectScaleArray = 'None'
programmableFilter1Display.GlyphType = 'Arrow'
programmableFilter1Display.GlyphTableIndexArray = 'None'
programmableFilter1Display.GaussianRadius = 0.02
programmableFilter1Display.SetScaleArray = ['POINTS', 'multiGaussian']
programmableFilter1Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.OpacityArray = ['POINTS', 'multiGaussian']
programmableFilter1Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter1Display.SelectionCellLabelFontFile = ''
programmableFilter1Display.SelectionPointLabelFontFile = ''
programmableFilter1Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter1Display.ScalarOpacityFunction = multiGaussianPWF
programmableFilter1Display.ScalarOpacityUnitDistance = 0.20840029238347657

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

# show data from threshold1
threshold1Display = Show(threshold1, renderView1)

# trace defaults for the display properties.
threshold1Display.Representation = 'Surface'
threshold1Display.ColorArrayName = ['POINTS', 'multiGaussian']
threshold1Display.LookupTable = multiGaussianLUT
threshold1Display.OSPRayScaleArray = 'multiGaussian'
threshold1Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold1Display.SelectOrientationVectors = 'None'
threshold1Display.ScaleFactor = 0.30800000429153446
threshold1Display.SelectScaleArray = 'None'
threshold1Display.GlyphType = 'Arrow'
threshold1Display.GlyphTableIndexArray = 'None'
threshold1Display.GaussianRadius = 0.015400000214576721
threshold1Display.SetScaleArray = ['POINTS', 'multiGaussian']
threshold1Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display.OpacityArray = ['POINTS', 'multiGaussian']
threshold1Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display.SelectionCellLabelFontFile = ''
threshold1Display.SelectionPointLabelFontFile = ''
threshold1Display.PolarAxes = 'PolarAxesRepresentation'
threshold1Display.ScalarOpacityFunction = multiGaussianPWF
threshold1Display.ScalarOpacityUnitDistance = 0.23885680442891222

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

# show data from contour1
contour1Display = Show(contour1, renderView1)

# trace defaults for the display properties.
contour1Display.Representation = 'Surface'
contour1Display.ColorArrayName = [None, '']
contour1Display.OSPRayScaleFunction = 'PiecewiseFunction'
contour1Display.SelectOrientationVectors = 'None'
contour1Display.ScaleFactor = 0.3055418848991394
contour1Display.SelectScaleArray = 'None'
contour1Display.GlyphType = 'Arrow'
contour1Display.GlyphTableIndexArray = 'None'
contour1Display.GaussianRadius = 0.015277094244956971
contour1Display.SetScaleArray = [None, '']
contour1Display.ScaleTransferFunction = 'PiecewiseFunction'
contour1Display.OpacityArray = [None, '']
contour1Display.OpacityTransferFunction = 'PiecewiseFunction'
contour1Display.DataAxesGrid = 'GridAxesRepresentation'
contour1Display.SelectionCellLabelFontFile = ''
contour1Display.SelectionPointLabelFontFile = ''
contour1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
contour1Display.DataAxesGrid.XTitleFontFile = ''
contour1Display.DataAxesGrid.YTitleFontFile = ''
contour1Display.DataAxesGrid.ZTitleFontFile = ''
contour1Display.DataAxesGrid.XLabelFontFile = ''
contour1Display.DataAxesGrid.YLabelFontFile = ''
contour1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
contour1Display.PolarAxes.PolarAxisTitleFontFile = ''
contour1Display.PolarAxes.PolarAxisLabelFontFile = ''
contour1Display.PolarAxes.LastRadialAxisTextFontFile = ''
contour1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube1
tube1Display = Show(tube1, renderView1)

# trace defaults for the display properties.
tube1Display.Representation = 'Surface'
tube1Display.ColorArrayName = [None, '']
tube1Display.OSPRayScaleArray = 'TubeNormals'
tube1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube1Display.SelectOrientationVectors = 'None'
tube1Display.ScaleFactor = 0.30978831052780154
tube1Display.SelectScaleArray = 'None'
tube1Display.GlyphType = 'Arrow'
tube1Display.GlyphTableIndexArray = 'None'
tube1Display.GaussianRadius = 0.015489415526390077
tube1Display.SetScaleArray = ['POINTS', 'TubeNormals']
tube1Display.ScaleTransferFunction = 'PiecewiseFunction'
tube1Display.OpacityArray = ['POINTS', 'TubeNormals']
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

# show data from tTKSphereFromPoint3
tTKSphereFromPoint3Display = Show(tTKSphereFromPoint3, renderView1)

# get color transfer function/color map for 'CriticalType'
criticalTypeLUT = GetColorTransferFunction('CriticalType')
criticalTypeLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 1.5, 0.865003, 0.865003, 0.865003, 3.0, 0.705882, 0.0156863, 0.14902]
criticalTypeLUT.ScalarRangeInitialized = 1.0

# trace defaults for the display properties.
tTKSphereFromPoint3Display.Representation = 'Surface'
tTKSphereFromPoint3Display.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint3Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint3Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint3Display.ScaleFactor = 0.4298975467681885
tTKSphereFromPoint3Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint3Display.GlyphType = 'Arrow'
tTKSphereFromPoint3Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint3Display.GaussianRadius = 0.021494877338409425
tTKSphereFromPoint3Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint3Display.SelectionCellLabelFontFile = ''
tTKSphereFromPoint3Display.SelectionPointLabelFontFile = ''
tTKSphereFromPoint3Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint3Display.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint3Display.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint3Display.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint3Display.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint3Display.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint3Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint3Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint3Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint3Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint3Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for multiGaussianLUT in view renderView1
multiGaussianLUTColorBar = GetScalarBar(multiGaussianLUT, renderView1)
multiGaussianLUTColorBar.Title = 'multiGaussian'
multiGaussianLUTColorBar.ComponentTitle = ''
multiGaussianLUTColorBar.TitleFontFile = ''
multiGaussianLUTColorBar.LabelFontFile = ''

# set color bar visibility
multiGaussianLUTColorBar.Visibility = 1

# get color legend/bar for criticalTypeLUT in view renderView1
criticalTypeLUTColorBar = GetScalarBar(criticalTypeLUT, renderView1)
criticalTypeLUTColorBar.WindowLocation = 'UpperRightCorner'
criticalTypeLUTColorBar.Title = 'CriticalType'
criticalTypeLUTColorBar.ComponentTitle = ''
criticalTypeLUTColorBar.TitleFontFile = ''
criticalTypeLUTColorBar.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar.Visibility = 1

# show color legend
programmableFilter1Display.SetScalarBarVisibility(renderView1, True)

# show color legend
threshold1Display.SetScalarBarVisibility(renderView1, True)

# show color legend
tTKSphereFromPoint3Display.SetScalarBarVisibility(renderView1, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView2'
# ----------------------------------------------------------------

# show data from programmableFilter1
programmableFilter1Display_1 = Show(programmableFilter1, renderView2)

# trace defaults for the display properties.
programmableFilter1Display_1.Representation = 'Surface'
programmableFilter1Display_1.ColorArrayName = ['POINTS', 'multiGaussian']
programmableFilter1Display_1.LookupTable = multiGaussianLUT
programmableFilter1Display_1.OSPRayScaleArray = 'multiGaussian'
programmableFilter1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter1Display_1.SelectOrientationVectors = 'None'
programmableFilter1Display_1.ScaleFactor = 0.4
programmableFilter1Display_1.SelectScaleArray = 'None'
programmableFilter1Display_1.GlyphType = 'Arrow'
programmableFilter1Display_1.GlyphTableIndexArray = 'None'
programmableFilter1Display_1.GaussianRadius = 0.02
programmableFilter1Display_1.SetScaleArray = [None, 'multiGaussian']
programmableFilter1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter1Display_1.OpacityArray = [None, 'multiGaussian']
programmableFilter1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter1Display_1.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter1Display_1.SelectionCellLabelFontFile = ''
programmableFilter1Display_1.SelectionPointLabelFontFile = ''
programmableFilter1Display_1.PolarAxes = 'PolarAxesRepresentation'
programmableFilter1Display_1.ScalarOpacityFunction = multiGaussianPWF
programmableFilter1Display_1.ScalarOpacityUnitDistance = 0.20840029238347657

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
programmableFilter1Display_1.DataAxesGrid.XTitleFontFile = ''
programmableFilter1Display_1.DataAxesGrid.YTitleFontFile = ''
programmableFilter1Display_1.DataAxesGrid.ZTitleFontFile = ''
programmableFilter1Display_1.DataAxesGrid.XLabelFontFile = ''
programmableFilter1Display_1.DataAxesGrid.YLabelFontFile = ''
programmableFilter1Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
programmableFilter1Display_1.PolarAxes.PolarAxisTitleFontFile = ''
programmableFilter1Display_1.PolarAxes.PolarAxisLabelFontFile = ''
programmableFilter1Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
programmableFilter1Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from threshold1
threshold1Display_1 = Show(threshold1, renderView2)

# trace defaults for the display properties.
threshold1Display_1.Representation = 'Surface'
threshold1Display_1.ColorArrayName = ['POINTS', 'multiGaussian']
threshold1Display_1.LookupTable = multiGaussianLUT
threshold1Display_1.OSPRayScaleArray = 'multiGaussian'
threshold1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
threshold1Display_1.SelectOrientationVectors = 'None'
threshold1Display_1.ScaleFactor = 0.30800000429153446
threshold1Display_1.SelectScaleArray = 'None'
threshold1Display_1.GlyphType = 'Arrow'
threshold1Display_1.GlyphTableIndexArray = 'None'
threshold1Display_1.GaussianRadius = 0.015400000214576721
threshold1Display_1.SetScaleArray = ['POINTS', 'multiGaussian']
threshold1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display_1.OpacityArray = ['POINTS', 'multiGaussian']
threshold1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display_1.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display_1.SelectionCellLabelFontFile = ''
threshold1Display_1.SelectionPointLabelFontFile = ''
threshold1Display_1.PolarAxes = 'PolarAxesRepresentation'
threshold1Display_1.ScalarOpacityFunction = multiGaussianPWF
threshold1Display_1.ScalarOpacityUnitDistance = 0.23885680442891222

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
threshold1Display_1.DataAxesGrid.XTitleFontFile = ''
threshold1Display_1.DataAxesGrid.YTitleFontFile = ''
threshold1Display_1.DataAxesGrid.ZTitleFontFile = ''
threshold1Display_1.DataAxesGrid.XLabelFontFile = ''
threshold1Display_1.DataAxesGrid.YLabelFontFile = ''
threshold1Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
threshold1Display_1.PolarAxes.PolarAxisTitleFontFile = ''
threshold1Display_1.PolarAxes.PolarAxisLabelFontFile = ''
threshold1Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
threshold1Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from contour1
contour1Display_1 = Show(contour1, renderView2)

# trace defaults for the display properties.
contour1Display_1.Representation = 'Surface'
contour1Display_1.ColorArrayName = [None, '']
contour1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
contour1Display_1.SelectOrientationVectors = 'None'
contour1Display_1.ScaleFactor = 0.3055418848991394
contour1Display_1.SelectScaleArray = 'None'
contour1Display_1.GlyphType = 'Arrow'
contour1Display_1.GlyphTableIndexArray = 'None'
contour1Display_1.GaussianRadius = 0.015277094244956971
contour1Display_1.SetScaleArray = [None, '']
contour1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
contour1Display_1.OpacityArray = [None, '']
contour1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
contour1Display_1.DataAxesGrid = 'GridAxesRepresentation'
contour1Display_1.SelectionCellLabelFontFile = ''
contour1Display_1.SelectionPointLabelFontFile = ''
contour1Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
contour1Display_1.DataAxesGrid.XTitleFontFile = ''
contour1Display_1.DataAxesGrid.YTitleFontFile = ''
contour1Display_1.DataAxesGrid.ZTitleFontFile = ''
contour1Display_1.DataAxesGrid.XLabelFontFile = ''
contour1Display_1.DataAxesGrid.YLabelFontFile = ''
contour1Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
contour1Display_1.PolarAxes.PolarAxisTitleFontFile = ''
contour1Display_1.PolarAxes.PolarAxisLabelFontFile = ''
contour1Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
contour1Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube1
tube1Display_1 = Show(tube1, renderView2)

# trace defaults for the display properties.
tube1Display_1.Representation = 'Surface'
tube1Display_1.ColorArrayName = [None, '']
tube1Display_1.OSPRayScaleArray = 'TubeNormals'
tube1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tube1Display_1.SelectOrientationVectors = 'None'
tube1Display_1.ScaleFactor = 0.30978831052780154
tube1Display_1.SelectScaleArray = 'None'
tube1Display_1.GlyphType = 'Arrow'
tube1Display_1.GlyphTableIndexArray = 'None'
tube1Display_1.GaussianRadius = 0.015489415526390077
tube1Display_1.SetScaleArray = ['POINTS', 'TubeNormals']
tube1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tube1Display_1.OpacityArray = ['POINTS', 'TubeNormals']
tube1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tube1Display_1.DataAxesGrid = 'GridAxesRepresentation'
tube1Display_1.SelectionCellLabelFontFile = ''
tube1Display_1.SelectionPointLabelFontFile = ''
tube1Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube1Display_1.DataAxesGrid.XTitleFontFile = ''
tube1Display_1.DataAxesGrid.YTitleFontFile = ''
tube1Display_1.DataAxesGrid.ZTitleFontFile = ''
tube1Display_1.DataAxesGrid.XLabelFontFile = ''
tube1Display_1.DataAxesGrid.YLabelFontFile = ''
tube1Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube1Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tube1Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tube1Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tube1Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKScalarFieldCriticalPoints1
tTKScalarFieldCriticalPoints1Display = Show(tTKScalarFieldCriticalPoints1, renderView2)

# trace defaults for the display properties.
tTKScalarFieldCriticalPoints1Display.Representation = 'Surface'
tTKScalarFieldCriticalPoints1Display.ColorArrayName = ['POINTS', 'multiGaussian']
tTKScalarFieldCriticalPoints1Display.LookupTable = multiGaussianLUT
tTKScalarFieldCriticalPoints1Display.OSPRayScaleArray = 'CriticalType'
tTKScalarFieldCriticalPoints1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints1Display.SelectOrientationVectors = 'CriticalType'
tTKScalarFieldCriticalPoints1Display.ScaleFactor = 0.4
tTKScalarFieldCriticalPoints1Display.SelectScaleArray = 'CriticalType'
tTKScalarFieldCriticalPoints1Display.GlyphType = 'Arrow'
tTKScalarFieldCriticalPoints1Display.GlyphTableIndexArray = 'CriticalType'
tTKScalarFieldCriticalPoints1Display.GaussianRadius = 0.02
tTKScalarFieldCriticalPoints1Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKScalarFieldCriticalPoints1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints1Display.OpacityArray = ['POINTS', 'CriticalType']
tTKScalarFieldCriticalPoints1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKScalarFieldCriticalPoints1Display.SelectionCellLabelFontFile = ''
tTKScalarFieldCriticalPoints1Display.SelectionPointLabelFontFile = ''
tTKScalarFieldCriticalPoints1Display.PolarAxes = 'PolarAxesRepresentation'
tTKScalarFieldCriticalPoints1Display.ScalarOpacityFunction = multiGaussianPWF
tTKScalarFieldCriticalPoints1Display.ScalarOpacityUnitDistance = 6.449061600813613

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.XTitleFontFile = ''
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.YTitleFontFile = ''
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.ZTitleFontFile = ''
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.XLabelFontFile = ''
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.YLabelFontFile = ''
tTKScalarFieldCriticalPoints1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKScalarFieldCriticalPoints1Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKScalarFieldCriticalPoints1Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKScalarFieldCriticalPoints1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKScalarFieldCriticalPoints1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKSphereFromPoint1
tTKSphereFromPoint1Display = Show(tTKSphereFromPoint1, renderView2)

# trace defaults for the display properties.
tTKSphereFromPoint1Display.Representation = 'Surface'
tTKSphereFromPoint1Display.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint1Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint1Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint1Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint1Display.ScaleFactor = 5.38292236328125
tTKSphereFromPoint1Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint1Display.GlyphType = 'Arrow'
tTKSphereFromPoint1Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint1Display.GaussianRadius = 0.26914611816406253
tTKSphereFromPoint1Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint1Display.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint1Display.SelectionCellLabelFontFile = ''
tTKSphereFromPoint1Display.SelectionPointLabelFontFile = ''
tTKSphereFromPoint1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint1Display.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint1Display.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint1Display.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint1Display.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint1Display.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint1Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint1Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for multiGaussianLUT in view renderView2
multiGaussianLUTColorBar_1 = GetScalarBar(multiGaussianLUT, renderView2)
multiGaussianLUTColorBar_1.Title = 'multiGaussian'
multiGaussianLUTColorBar_1.ComponentTitle = ''
multiGaussianLUTColorBar_1.TitleFontFile = ''
multiGaussianLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
multiGaussianLUTColorBar_1.Visibility = 1

# get color legend/bar for criticalTypeLUT in view renderView2
criticalTypeLUTColorBar_1 = GetScalarBar(criticalTypeLUT, renderView2)
criticalTypeLUTColorBar_1.WindowLocation = 'UpperRightCorner'
criticalTypeLUTColorBar_1.Title = 'CriticalType'
criticalTypeLUTColorBar_1.ComponentTitle = ''
criticalTypeLUTColorBar_1.TitleFontFile = ''
criticalTypeLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar_1.Visibility = 1

# show color legend
programmableFilter1Display_1.SetScalarBarVisibility(renderView2, True)

# show color legend
threshold1Display_1.SetScalarBarVisibility(renderView2, True)

# show color legend
tTKScalarFieldCriticalPoints1Display.SetScalarBarVisibility(renderView2, True)

# show color legend
tTKSphereFromPoint1Display.SetScalarBarVisibility(renderView2, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView3'
# ----------------------------------------------------------------

# show data from tube2
tube2Display = Show(tube2, renderView3)

# trace defaults for the display properties.
tube2Display.Representation = 'Surface'
tube2Display.ColorArrayName = [None, '']
tube2Display.OSPRayScaleArray = 'Coordinates'
tube2Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube2Display.SelectOrientationVectors = 'Coordinates'
tube2Display.ScaleFactor = 0.19825588762760163
tube2Display.SelectScaleArray = 'Coordinates'
tube2Display.GlyphType = 'Arrow'
tube2Display.GlyphTableIndexArray = 'Coordinates'
tube2Display.GaussianRadius = 0.009912794381380081
tube2Display.SetScaleArray = ['POINTS', 'Coordinates']
tube2Display.ScaleTransferFunction = 'PiecewiseFunction'
tube2Display.OpacityArray = ['POINTS', 'Coordinates']
tube2Display.OpacityTransferFunction = 'PiecewiseFunction'
tube2Display.DataAxesGrid = 'GridAxesRepresentation'
tube2Display.SelectionCellLabelFontFile = ''
tube2Display.SelectionPointLabelFontFile = ''
tube2Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube2Display.DataAxesGrid.XTitleFontFile = ''
tube2Display.DataAxesGrid.YTitleFontFile = ''
tube2Display.DataAxesGrid.ZTitleFontFile = ''
tube2Display.DataAxesGrid.XLabelFontFile = ''
tube2Display.DataAxesGrid.YLabelFontFile = ''
tube2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube2Display.PolarAxes.PolarAxisTitleFontFile = ''
tube2Display.PolarAxes.PolarAxisLabelFontFile = ''
tube2Display.PolarAxes.LastRadialAxisTextFontFile = ''
tube2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube3
tube3Display = Show(tube3, renderView3)

# trace defaults for the display properties.
tube3Display.Representation = 'Surface'
tube3Display.ColorArrayName = [None, '']
tube3Display.OSPRayScaleArray = 'Coordinates'
tube3Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube3Display.SelectOrientationVectors = 'Coordinates'
tube3Display.ScaleFactor = 0.3096836374606937
tube3Display.SelectScaleArray = 'Coordinates'
tube3Display.GlyphType = 'Arrow'
tube3Display.GlyphTableIndexArray = 'Coordinates'
tube3Display.GaussianRadius = 0.015484181873034686
tube3Display.SetScaleArray = ['POINTS', 'Coordinates']
tube3Display.ScaleTransferFunction = 'PiecewiseFunction'
tube3Display.OpacityArray = ['POINTS', 'Coordinates']
tube3Display.OpacityTransferFunction = 'PiecewiseFunction'
tube3Display.DataAxesGrid = 'GridAxesRepresentation'
tube3Display.SelectionCellLabelFontFile = ''
tube3Display.SelectionPointLabelFontFile = ''
tube3Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube3Display.DataAxesGrid.XTitleFontFile = ''
tube3Display.DataAxesGrid.YTitleFontFile = ''
tube3Display.DataAxesGrid.ZTitleFontFile = ''
tube3Display.DataAxesGrid.XLabelFontFile = ''
tube3Display.DataAxesGrid.YLabelFontFile = ''
tube3Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube3Display.PolarAxes.PolarAxisTitleFontFile = ''
tube3Display.PolarAxes.PolarAxisLabelFontFile = ''
tube3Display.PolarAxes.LastRadialAxisTextFontFile = ''
tube3Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKSphereFromPoint2
tTKSphereFromPoint2Display = Show(tTKSphereFromPoint2, renderView3)

# trace defaults for the display properties.
tTKSphereFromPoint2Display.Representation = 'Surface'
tTKSphereFromPoint2Display.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display.DiffuseColor = [0.0, 1.0, 1.0]
tTKSphereFromPoint2Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint2Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint2Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint2Display.ScaleFactor = 0.33958117812871935
tTKSphereFromPoint2Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint2Display.GlyphType = 'Arrow'
tTKSphereFromPoint2Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint2Display.GaussianRadius = 0.016979058906435966
tTKSphereFromPoint2Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint2Display.SelectionCellLabelFontFile = ''
tTKSphereFromPoint2Display.SelectionPointLabelFontFile = ''
tTKSphereFromPoint2Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint2Display.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint2Display.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint2Display.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint2Display.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint2Display.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint2Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint2Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint2Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for criticalTypeLUT in view renderView3
criticalTypeLUTColorBar_2 = GetScalarBar(criticalTypeLUT, renderView3)
criticalTypeLUTColorBar_2.Title = 'CriticalType'
criticalTypeLUTColorBar_2.ComponentTitle = ''
criticalTypeLUTColorBar_2.TitleFontFile = ''
criticalTypeLUTColorBar_2.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar_2.Visibility = 1

# show color legend
tTKSphereFromPoint2Display.SetScalarBarVisibility(renderView3, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView4'
# ----------------------------------------------------------------

# show data from tube2
tube2Display_1 = Show(tube2, renderView4)

# trace defaults for the display properties.
tube2Display_1.Representation = 'Surface'
tube2Display_1.ColorArrayName = [None, '']
tube2Display_1.OSPRayScaleArray = 'Coordinates'
tube2Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tube2Display_1.SelectOrientationVectors = 'Coordinates'
tube2Display_1.ScaleFactor = 0.19825588762760163
tube2Display_1.SelectScaleArray = 'Coordinates'
tube2Display_1.GlyphType = 'Arrow'
tube2Display_1.GlyphTableIndexArray = 'Coordinates'
tube2Display_1.GaussianRadius = 0.009912794381380081
tube2Display_1.SetScaleArray = ['POINTS', 'Coordinates']
tube2Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tube2Display_1.OpacityArray = ['POINTS', 'Coordinates']
tube2Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tube2Display_1.DataAxesGrid = 'GridAxesRepresentation'
tube2Display_1.SelectionCellLabelFontFile = ''
tube2Display_1.SelectionPointLabelFontFile = ''
tube2Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube2Display_1.DataAxesGrid.XTitleFontFile = ''
tube2Display_1.DataAxesGrid.YTitleFontFile = ''
tube2Display_1.DataAxesGrid.ZTitleFontFile = ''
tube2Display_1.DataAxesGrid.XLabelFontFile = ''
tube2Display_1.DataAxesGrid.YLabelFontFile = ''
tube2Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube2Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tube2Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tube2Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tube2Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from threshold4
threshold4Display = Show(threshold4, renderView4)

# trace defaults for the display properties.
threshold4Display.Representation = 'Surface'
threshold4Display.ColorArrayName = [None, '']
threshold4Display.OSPRayScaleArray = 'Coordinates'
threshold4Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold4Display.SelectOrientationVectors = 'Coordinates'
threshold4Display.ScaleFactor = 0.3096836374606937
threshold4Display.SelectScaleArray = 'Coordinates'
threshold4Display.GlyphType = 'Arrow'
threshold4Display.GlyphTableIndexArray = 'Coordinates'
threshold4Display.GaussianRadius = 0.015484181873034686
threshold4Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold4Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold4Display.OpacityArray = ['POINTS', 'Coordinates']
threshold4Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold4Display.DataAxesGrid = 'GridAxesRepresentation'
threshold4Display.SelectionCellLabelFontFile = ''
threshold4Display.SelectionPointLabelFontFile = ''
threshold4Display.PolarAxes = 'PolarAxesRepresentation'
threshold4Display.ScalarOpacityUnitDistance = 2.8376975439239764

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
threshold4Display.DataAxesGrid.XTitleFontFile = ''
threshold4Display.DataAxesGrid.YTitleFontFile = ''
threshold4Display.DataAxesGrid.ZTitleFontFile = ''
threshold4Display.DataAxesGrid.XLabelFontFile = ''
threshold4Display.DataAxesGrid.YLabelFontFile = ''
threshold4Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
threshold4Display.PolarAxes.PolarAxisTitleFontFile = ''
threshold4Display.PolarAxes.PolarAxisLabelFontFile = ''
threshold4Display.PolarAxes.LastRadialAxisTextFontFile = ''
threshold4Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# ----------------------------------------------------------------
# setup the visualization in view 'renderView5'
# ----------------------------------------------------------------

# show data from programmableFilter2
programmableFilter2Display = Show(programmableFilter2, renderView5)

# trace defaults for the display properties.
programmableFilter2Display.Representation = 'Surface'
programmableFilter2Display.ColorArrayName = [None, '']
programmableFilter2Display.OSPRayScaleArray = 'multiGaussian'
programmableFilter2Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter2Display.SelectOrientationVectors = 'None'
programmableFilter2Display.ScaleFactor = 0.4
programmableFilter2Display.SelectScaleArray = 'None'
programmableFilter2Display.GlyphType = 'Arrow'
programmableFilter2Display.GlyphTableIndexArray = 'None'
programmableFilter2Display.GaussianRadius = 0.02
programmableFilter2Display.SetScaleArray = ['POINTS', 'multiGaussian']
programmableFilter2Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.OpacityArray = ['POINTS', 'multiGaussian']
programmableFilter2Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter2Display.SelectionCellLabelFontFile = ''
programmableFilter2Display.SelectionPointLabelFontFile = ''
programmableFilter2Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter2Display.ScalarOpacityUnitDistance = 0.23758546074069548

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

# ----------------------------------------------------------------
# setup the visualization in view 'renderView6'
# ----------------------------------------------------------------

# show data from programmableFilter2
programmableFilter2Display_1 = Show(programmableFilter2, renderView6)

# get color transfer function/color map for 'simplifiedGaussian'
simplifiedGaussianLUT = GetColorTransferFunction('simplifiedGaussian')
simplifiedGaussianLUT.RGBPoints = [0.006374551448971033, 0.231373, 0.298039, 0.752941, 1.5547927387524396, 0.865003, 0.865003, 0.865003, 3.103210926055908, 0.705882, 0.0156863, 0.14902]
simplifiedGaussianLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'simplifiedGaussian'
simplifiedGaussianPWF = GetOpacityTransferFunction('simplifiedGaussian')
simplifiedGaussianPWF.Points = [0.006374551448971033, 0.0, 0.5, 0.0, 3.103210926055908, 1.0, 0.5, 0.0]
simplifiedGaussianPWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
programmableFilter2Display_1.Representation = 'Surface'
programmableFilter2Display_1.ColorArrayName = ['POINTS', 'simplifiedGaussian']
programmableFilter2Display_1.LookupTable = simplifiedGaussianLUT
programmableFilter2Display_1.OSPRayScaleArray = 'multiGaussian'
programmableFilter2Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter2Display_1.SelectOrientationVectors = 'None'
programmableFilter2Display_1.ScaleFactor = 0.4
programmableFilter2Display_1.SelectScaleArray = 'None'
programmableFilter2Display_1.GlyphType = 'Arrow'
programmableFilter2Display_1.GlyphTableIndexArray = 'None'
programmableFilter2Display_1.GaussianRadius = 0.02
programmableFilter2Display_1.SetScaleArray = ['POINTS', 'multiGaussian']
programmableFilter2Display_1.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter2Display_1.OpacityArray = ['POINTS', 'multiGaussian']
programmableFilter2Display_1.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter2Display_1.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter2Display_1.SelectionCellLabelFontFile = ''
programmableFilter2Display_1.SelectionPointLabelFontFile = ''
programmableFilter2Display_1.PolarAxes = 'PolarAxesRepresentation'
programmableFilter2Display_1.ScalarOpacityFunction = simplifiedGaussianPWF
programmableFilter2Display_1.ScalarOpacityUnitDistance = 0.23758546074069548

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
programmableFilter2Display_1.DataAxesGrid.XTitleFontFile = ''
programmableFilter2Display_1.DataAxesGrid.YTitleFontFile = ''
programmableFilter2Display_1.DataAxesGrid.ZTitleFontFile = ''
programmableFilter2Display_1.DataAxesGrid.XLabelFontFile = ''
programmableFilter2Display_1.DataAxesGrid.YLabelFontFile = ''
programmableFilter2Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
programmableFilter2Display_1.PolarAxes.PolarAxisTitleFontFile = ''
programmableFilter2Display_1.PolarAxes.PolarAxisLabelFontFile = ''
programmableFilter2Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
programmableFilter2Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKSphereFromPoint3
tTKSphereFromPoint3Display_1 = Show(tTKSphereFromPoint3, renderView6)

# trace defaults for the display properties.
tTKSphereFromPoint3Display_1.Representation = 'Surface'
tTKSphereFromPoint3Display_1.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display_1.LookupTable = criticalTypeLUT
tTKSphereFromPoint3Display_1.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint3Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display_1.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint3Display_1.ScaleFactor = 0.4298975467681885
tTKSphereFromPoint3Display_1.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint3Display_1.GlyphType = 'Arrow'
tTKSphereFromPoint3Display_1.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint3Display_1.GaussianRadius = 0.021494877338409425
tTKSphereFromPoint3Display_1.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display_1.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display_1.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint3Display_1.SelectionCellLabelFontFile = ''
tTKSphereFromPoint3Display_1.SelectionPointLabelFontFile = ''
tTKSphereFromPoint3Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint3Display_1.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint3Display_1.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint3Display_1.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint3Display_1.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint3Display_1.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint3Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint3Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint3Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint3Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint3Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for simplifiedGaussianLUT in view renderView6
simplifiedGaussianLUTColorBar = GetScalarBar(simplifiedGaussianLUT, renderView6)
simplifiedGaussianLUTColorBar.Title = 'simplifiedGaussian'
simplifiedGaussianLUTColorBar.ComponentTitle = ''
simplifiedGaussianLUTColorBar.TitleFontFile = ''
simplifiedGaussianLUTColorBar.LabelFontFile = ''

# set color bar visibility
simplifiedGaussianLUTColorBar.Visibility = 1

# get color legend/bar for criticalTypeLUT in view renderView6
criticalTypeLUTColorBar_3 = GetScalarBar(criticalTypeLUT, renderView6)
criticalTypeLUTColorBar_3.WindowLocation = 'UpperRightCorner'
criticalTypeLUTColorBar_3.Title = 'CriticalType'
criticalTypeLUTColorBar_3.ComponentTitle = ''
criticalTypeLUTColorBar_3.TitleFontFile = ''
criticalTypeLUTColorBar_3.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar_3.Visibility = 1

# show color legend
programmableFilter2Display_1.SetScalarBarVisibility(renderView6, True)

# show color legend
tTKSphereFromPoint3Display_1.SetScalarBarVisibility(renderView6, True)

# ----------------------------------------------------------------
# setup color maps and opacity mapes used in the visualization
# note: the Get..() functions create a new object, if needed
# ----------------------------------------------------------------

# get opacity transfer function/opacity map for 'CriticalType'
criticalTypePWF = GetOpacityTransferFunction('CriticalType')
criticalTypePWF.Points = [0.0, 0.0, 0.5, 0.0, 3.0, 1.0, 0.5, 0.0]
criticalTypePWF.ScalarRangeInitialized = 1

# ----------------------------------------------------------------
# finally, restore active source
SetActiveSource(tTKSphereFromPoint3)
# ----------------------------------------------------------------