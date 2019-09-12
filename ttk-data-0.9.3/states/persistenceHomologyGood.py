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
renderView1.ViewSize = [524, 387]
renderView1.InteractionMode = '2D'
renderView1.AxesGrid = 'GridAxes3DActor'
renderView1.CenterOfRotation = [0.0, 0.0, 1.1995622149552219]
renderView1.StereoType = 0
renderView1.CameraPosition = [0.41076903692384636, 4.872774186886115, 12.016594753486492]
renderView1.CameraFocalPoint = [0.15238647795747062, -0.02640304013050176, 1.2078869070537812]
renderView1.CameraViewUp = [0.03289727866874685, 0.9100173904555657, -0.4132627712783157]
renderView1.CameraParallelScale = 2.5389931213138945
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
renderView2.ViewSize = [502, 387]
renderView2.AxesGrid = 'GridAxes3DActor'
renderView2.CenterOfRotation = [0.0, 0.0, 1.1995622149552219]
renderView2.StereoType = 0
renderView2.CameraPosition = [-5.634560394759962, 5.823232719889679, 0.9328846582585717]
renderView2.CameraFocalPoint = [-1.1351612942984035e-16, 3.6398112386802754e-16, 1.1995622149552234]
renderView2.CameraViewUp = [0.009773495171454295, 0.05518031926381573, 0.9984285708843057]
renderView2.CameraParallelScale = 3.0721816767898127
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
renderView3.ViewSize = [501, 387]
renderView3.InteractionMode = '2D'
renderView3.AxesGrid = 'GridAxes3DActor'
renderView3.CenterOfRotation = [0.7695524326409213, 1.1995622149552219, 0.0]
renderView3.StereoType = 0
renderView3.CameraPosition = [0.7695524326409213, 1.1995622149552219, 10000.0]
renderView3.CameraFocalPoint = [0.7695524326409213, 1.1995622149552219, 0.0]
renderView3.CameraParallelScale = 1.3116196815297778
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
renderView4.ViewSize = [501, 387]
renderView4.AxesGrid = 'GridAxes3DActor'
renderView4.CenterOfRotation = [0.7695524506270885, 1.1995621733367443, 0.0]
renderView4.StereoType = 0
renderView4.CameraPosition = [0.7695524506270885, 1.1995621733367443, 5.665951086184971]
renderView4.CameraFocalPoint = [0.7695524506270885, 1.1995621733367443, 0.0]
renderView4.CameraParallelScale = 1.4664560497239845
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
renderView5.ViewSize = [502, 387]
renderView5.AxesGrid = 'GridAxes3DActor'
renderView5.CenterOfRotation = [0.0, 0.0, 1.1995622149552219]
renderView5.StereoType = 0
renderView5.CameraPosition = [-5.634560394759962, 5.823232719889679, 0.9328846582585717]
renderView5.CameraFocalPoint = [-1.1351612942984035e-16, 3.6398112386802754e-16, 1.1995622149552234]
renderView5.CameraViewUp = [0.009773495171454295, 0.05518031926381573, 0.9984285708843057]
renderView5.CameraParallelScale = 3.0721816767898127
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
renderView6.ViewSize = [524, 387]
renderView6.InteractionMode = '2D'
renderView6.AxesGrid = 'GridAxes3DActor'
renderView6.CenterOfRotation = [0.0, 0.0, 1.1995622149552219]
renderView6.StereoType = 0
renderView6.CameraPosition = [0.41076903692384636, 4.872774186886115, 12.016594753486492]
renderView6.CameraFocalPoint = [0.15238647795747062, -0.02640304013050176, 1.2078869070537812]
renderView6.CameraViewUp = [0.03289727866874685, 0.9100173904555657, -0.4132627712783157]
renderView6.CameraParallelScale = 2.5389931213138945

# init the 'GridAxes3DActor' selected for 'AxesGrid'
renderView6.AxesGrid.XTitleFontFile = ''
renderView6.AxesGrid.YTitleFontFile = ''
renderView6.AxesGrid.ZTitleFontFile = ''
renderView6.AxesGrid.XLabelFontFile = ''
renderView6.AxesGrid.YLabelFontFile = ''
renderView6.AxesGrid.ZLabelFontFile = ''

# ----------------------------------------------------------------
# restore active view
SetActiveView(renderView2)
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
pythonCalculator1.Expression = '2*exp(-((inputs[0].Points[:,0]+0.9)*(inputs[0].Points[:,0]+0.9)+(inputs[0].Points[:,1]+0.8)*(inputs[0].Points[:,1]+0.8))/1.0)'
pythonCalculator1.ArrayName = 'gaussian0'

# create a new 'Python Calculator'
pythonCalculator2 = PythonCalculator(Input=pythonCalculator1)
pythonCalculator2.Expression = '3*exp(-((inputs[0].Points[:,0]-1.5)*(inputs[0].Points[:,0]-1.5)+(inputs[0].Points[:,1]-1.5)*(inputs[0].Points[:,1]-1.5))/(2.0*0.75*0.75))'
pythonCalculator2.ArrayName = 'gaussian1'

# create a new 'Python Calculator'
pythonCalculator3 = PythonCalculator(Input=pythonCalculator2)
pythonCalculator3.Expression = '2*exp(-((inputs[0].Points[:,0]-0.9)*(inputs[0].Points[:,0]-0.9)+(inputs[0].Points[:,1]+0.4)*(inputs[0].Points[:,1]+0.4))/(2.0*0.5*0.5))'
pythonCalculator3.ArrayName = 'gaussian2'

# create a new 'Python Calculator'
pythonCalculator4 = PythonCalculator(Input=pythonCalculator3)
pythonCalculator4.Expression = 'gaussian0 + .8*gaussian1 + .6*gaussian2'
pythonCalculator4.ArrayName = 'multiGauss'

# create a new 'Tetrahedralize'
tetrahedralize1 = Tetrahedralize(Input=pythonCalculator4)

# create a new 'Programmable Filter'
programmableFilter1 = ProgrammableFilter(Input=tetrahedralize1)
programmableFilter1.Script = """output.Points[0:,2] = inputs[0].PointData["multiGauss"]
output.PointData.append(inputs[0].PointData["multiGauss"], "multiGauss")
output.PointData.append(inputs[0].PointData["multiGauss"], "simplifiedGauss")"""
programmableFilter1.RequestInformationScript = ''
programmableFilter1.RequestUpdateExtentScript = ''
programmableFilter1.PythonPath = ''

# create a new 'Threshold'
threshold1 = Threshold(Input=programmableFilter1)
threshold1.Scalars = ['POINTS', 'multiGauss']
threshold1.ThresholdRange = [0.36, 2.3988537788391113]

# create a new 'TTK ScalarFieldCriticalPoints'
tTKScalarFieldCriticalPoints1 = TTKScalarFieldCriticalPoints(Input=programmableFilter1)
tTKScalarFieldCriticalPoints1.ScalarField = 'multiGauss'
tTKScalarFieldCriticalPoints1.InputOffsetfield = 'multiGauss'

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint1 = TTKSphereFromPoint(Input=tTKScalarFieldCriticalPoints1)
tTKSphereFromPoint1.Radius = 0.1

# create a new 'TTK PersistenceDiagram'
tTKPersistenceDiagram1 = TTKPersistenceDiagram(Input=programmableFilter1)
tTKPersistenceDiagram1.ScalarField = 'multiGauss'
tTKPersistenceDiagram1.InputOffsetField = 'multiGauss'

# create a new 'Threshold'
threshold2 = Threshold(Input=tTKPersistenceDiagram1)
threshold2.Scalars = ['CELLS', 'PairIdentifier']
threshold2.ThresholdRange = [-1.0, -0.01]

# create a new 'Extract Surface'
extractSurface1 = ExtractSurface(Input=threshold2)

# create a new 'Tube'
tube2 = Tube(Input=extractSurface1)
tube2.Scalars = ['POINTS', 'CriticalType']
tube2.Vectors = ['POINTS', 'Coordinates']
tube2.Radius = 0.015385635631391779

# create a new 'Threshold'
threshold3 = Threshold(Input=tTKPersistenceDiagram1)
threshold3.Scalars = ['POINTS', 'CriticalType']
threshold3.ThresholdRange = [0.0, 3.0]

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint2 = TTKSphereFromPoint(Input=threshold3)
tTKSphereFromPoint2.Radius = 0.03

# create a new 'Extract Surface'
extractSurface2 = ExtractSurface(Input=threshold3)

# create a new 'Tube'
tube3 = Tube(Input=extractSurface2)
tube3.Scalars = ['POINTS', 'CriticalType']
tube3.Vectors = ['POINTS', 'Coordinates']
tube3.Radius = 0.013671923828276339

# create a new 'Threshold'
threshold4 = Threshold(Input=threshold3)
threshold4.Scalars = ['CELLS', 'Persistence']
threshold4.ThresholdRange = [1.3592782413959503, 3.0]

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint3 = TTKSphereFromPoint(Input=threshold4)
tTKSphereFromPoint3.Radius = 0.05

# create a new 'Contour'
contour1 = Contour(Input=programmableFilter1)
contour1.ContourBy = ['POINTS', 'multiGauss']
contour1.Isosurfaces = [0.36]
contour1.PointMergeMethod = 'Uniform Binning'

# create a new 'Tube'
tube1 = Tube(Input=contour1)
tube1.Scalars = [None, '']
tube1.Vectors = [None, '']
tube1.Radius = 0.04

# create a new 'Clean to Grid'
cleantoGrid1 = CleantoGrid(Input=programmableFilter1)

# create a new 'TTK TopologicalSimplification'
tTKTopologicalSimplification1 = TTKTopologicalSimplification(Domain=cleantoGrid1,
    Constraints=threshold4)
tTKTopologicalSimplification1.ScalarField = 'simplifiedGauss'
tTKTopologicalSimplification1.InputOffsetField = 'multiGauss'
tTKTopologicalSimplification1.Vertexidentifierfield = 'CriticalType'
tTKTopologicalSimplification1.NumericalPerturbation = 1
tTKTopologicalSimplification1.OutputOffsetScalarField = ''

# create a new 'Programmable Filter'
programmableFilter2 = ProgrammableFilter(Input=tTKTopologicalSimplification1)
programmableFilter2.Script = """output.Points[0:,2] = inputs[0].PointData["simplifiedGauss"]
output.PointData.append(inputs[0].PointData["simplifiedGauss"], "simplifiedGauss")"""
programmableFilter2.RequestInformationScript = ''
programmableFilter2.RequestUpdateExtentScript = ''
programmableFilter2.PythonPath = ''

# create a new 'TTK ScalarFieldCriticalPoints'
tTKScalarFieldCriticalPoints2 = TTKScalarFieldCriticalPoints(Input=programmableFilter2)
tTKScalarFieldCriticalPoints2.ScalarField = 'simplifiedGauss'
tTKScalarFieldCriticalPoints2.InputOffsetfield = 'simplifiedGauss'

# create a new 'TTK SphereFromPoint'
tTKSphereFromPoint4 = TTKSphereFromPoint(Input=tTKScalarFieldCriticalPoints2)
tTKSphereFromPoint4.Radius = 0.1

# create a new 'Python Calculator'
pythonCalculator5 = PythonCalculator(Input=tTKSphereFromPoint4)
pythonCalculator5.Expression = 'abs(inputs[0].PointData["multiGauss"]-inputs[0].PointData["simplifiedGauss"])'
pythonCalculator5.ArrayName = 'absoluteDifference'

# ----------------------------------------------------------------
# setup the visualization in view 'renderView1'
# ----------------------------------------------------------------

# show data from plane1
plane1Display = Show(plane1, renderView1)

# trace defaults for the display properties.
plane1Display.Representation = 'Surface'
plane1Display.ColorArrayName = [None, '']
plane1Display.OSPRayScaleArray = 'Normals'
plane1Display.OSPRayScaleFunction = 'PiecewiseFunction'
plane1Display.SelectOrientationVectors = 'None'
plane1Display.ScaleFactor = 0.4
plane1Display.SelectScaleArray = 'None'
plane1Display.GlyphType = 'Arrow'
plane1Display.GlyphTableIndexArray = 'None'
plane1Display.GaussianRadius = 0.02
plane1Display.SetScaleArray = ['POINTS', 'Normals']
plane1Display.ScaleTransferFunction = 'PiecewiseFunction'
plane1Display.OpacityArray = ['POINTS', 'Normals']
plane1Display.OpacityTransferFunction = 'PiecewiseFunction'
plane1Display.DataAxesGrid = 'GridAxesRepresentation'
plane1Display.SelectionCellLabelFontFile = ''
plane1Display.SelectionPointLabelFontFile = ''
plane1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
plane1Display.DataAxesGrid.XTitleFontFile = ''
plane1Display.DataAxesGrid.YTitleFontFile = ''
plane1Display.DataAxesGrid.ZTitleFontFile = ''
plane1Display.DataAxesGrid.XLabelFontFile = ''
plane1Display.DataAxesGrid.YLabelFontFile = ''
plane1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
plane1Display.PolarAxes.PolarAxisTitleFontFile = ''
plane1Display.PolarAxes.PolarAxisLabelFontFile = ''
plane1Display.PolarAxes.LastRadialAxisTextFontFile = ''
plane1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from pythonCalculator1
pythonCalculator1Display = Show(pythonCalculator1, renderView1)

# trace defaults for the display properties.
pythonCalculator1Display.Representation = 'Surface'
pythonCalculator1Display.ColorArrayName = [None, '']
pythonCalculator1Display.OSPRayScaleArray = 'Normals'
pythonCalculator1Display.OSPRayScaleFunction = 'PiecewiseFunction'
pythonCalculator1Display.SelectOrientationVectors = 'None'
pythonCalculator1Display.ScaleFactor = 0.4
pythonCalculator1Display.SelectScaleArray = 'None'
pythonCalculator1Display.GlyphType = 'Arrow'
pythonCalculator1Display.GlyphTableIndexArray = 'None'
pythonCalculator1Display.GaussianRadius = 0.02
pythonCalculator1Display.SetScaleArray = ['POINTS', 'Normals']
pythonCalculator1Display.ScaleTransferFunction = 'PiecewiseFunction'
pythonCalculator1Display.OpacityArray = ['POINTS', 'Normals']
pythonCalculator1Display.OpacityTransferFunction = 'PiecewiseFunction'
pythonCalculator1Display.DataAxesGrid = 'GridAxesRepresentation'
pythonCalculator1Display.SelectionCellLabelFontFile = ''
pythonCalculator1Display.SelectionPointLabelFontFile = ''
pythonCalculator1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
pythonCalculator1Display.DataAxesGrid.XTitleFontFile = ''
pythonCalculator1Display.DataAxesGrid.YTitleFontFile = ''
pythonCalculator1Display.DataAxesGrid.ZTitleFontFile = ''
pythonCalculator1Display.DataAxesGrid.XLabelFontFile = ''
pythonCalculator1Display.DataAxesGrid.YLabelFontFile = ''
pythonCalculator1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
pythonCalculator1Display.PolarAxes.PolarAxisTitleFontFile = ''
pythonCalculator1Display.PolarAxes.PolarAxisLabelFontFile = ''
pythonCalculator1Display.PolarAxes.LastRadialAxisTextFontFile = ''
pythonCalculator1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from pythonCalculator2
pythonCalculator2Display = Show(pythonCalculator2, renderView1)

# trace defaults for the display properties.
pythonCalculator2Display.Representation = 'Surface'
pythonCalculator2Display.ColorArrayName = [None, '']
pythonCalculator2Display.OSPRayScaleArray = 'Normals'
pythonCalculator2Display.OSPRayScaleFunction = 'PiecewiseFunction'
pythonCalculator2Display.SelectOrientationVectors = 'None'
pythonCalculator2Display.ScaleFactor = 0.4
pythonCalculator2Display.SelectScaleArray = 'None'
pythonCalculator2Display.GlyphType = 'Arrow'
pythonCalculator2Display.GlyphTableIndexArray = 'None'
pythonCalculator2Display.GaussianRadius = 0.02
pythonCalculator2Display.SetScaleArray = ['POINTS', 'Normals']
pythonCalculator2Display.ScaleTransferFunction = 'PiecewiseFunction'
pythonCalculator2Display.OpacityArray = ['POINTS', 'Normals']
pythonCalculator2Display.OpacityTransferFunction = 'PiecewiseFunction'
pythonCalculator2Display.DataAxesGrid = 'GridAxesRepresentation'
pythonCalculator2Display.SelectionCellLabelFontFile = ''
pythonCalculator2Display.SelectionPointLabelFontFile = ''
pythonCalculator2Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
pythonCalculator2Display.DataAxesGrid.XTitleFontFile = ''
pythonCalculator2Display.DataAxesGrid.YTitleFontFile = ''
pythonCalculator2Display.DataAxesGrid.ZTitleFontFile = ''
pythonCalculator2Display.DataAxesGrid.XLabelFontFile = ''
pythonCalculator2Display.DataAxesGrid.YLabelFontFile = ''
pythonCalculator2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
pythonCalculator2Display.PolarAxes.PolarAxisTitleFontFile = ''
pythonCalculator2Display.PolarAxes.PolarAxisLabelFontFile = ''
pythonCalculator2Display.PolarAxes.LastRadialAxisTextFontFile = ''
pythonCalculator2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from pythonCalculator3
pythonCalculator3Display = Show(pythonCalculator3, renderView1)

# trace defaults for the display properties.
pythonCalculator3Display.Representation = 'Surface'
pythonCalculator3Display.ColorArrayName = [None, '']
pythonCalculator3Display.OSPRayScaleArray = 'Normals'
pythonCalculator3Display.OSPRayScaleFunction = 'PiecewiseFunction'
pythonCalculator3Display.SelectOrientationVectors = 'None'
pythonCalculator3Display.ScaleFactor = 0.4
pythonCalculator3Display.SelectScaleArray = 'None'
pythonCalculator3Display.GlyphType = 'Arrow'
pythonCalculator3Display.GlyphTableIndexArray = 'None'
pythonCalculator3Display.GaussianRadius = 0.02
pythonCalculator3Display.SetScaleArray = ['POINTS', 'Normals']
pythonCalculator3Display.ScaleTransferFunction = 'PiecewiseFunction'
pythonCalculator3Display.OpacityArray = ['POINTS', 'Normals']
pythonCalculator3Display.OpacityTransferFunction = 'PiecewiseFunction'
pythonCalculator3Display.DataAxesGrid = 'GridAxesRepresentation'
pythonCalculator3Display.SelectionCellLabelFontFile = ''
pythonCalculator3Display.SelectionPointLabelFontFile = ''
pythonCalculator3Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
pythonCalculator3Display.DataAxesGrid.XTitleFontFile = ''
pythonCalculator3Display.DataAxesGrid.YTitleFontFile = ''
pythonCalculator3Display.DataAxesGrid.ZTitleFontFile = ''
pythonCalculator3Display.DataAxesGrid.XLabelFontFile = ''
pythonCalculator3Display.DataAxesGrid.YLabelFontFile = ''
pythonCalculator3Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
pythonCalculator3Display.PolarAxes.PolarAxisTitleFontFile = ''
pythonCalculator3Display.PolarAxes.PolarAxisLabelFontFile = ''
pythonCalculator3Display.PolarAxes.LastRadialAxisTextFontFile = ''
pythonCalculator3Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from pythonCalculator4
pythonCalculator4Display = Show(pythonCalculator4, renderView1)

# trace defaults for the display properties.
pythonCalculator4Display.Representation = 'Surface'
pythonCalculator4Display.ColorArrayName = [None, '']
pythonCalculator4Display.OSPRayScaleArray = 'Normals'
pythonCalculator4Display.OSPRayScaleFunction = 'PiecewiseFunction'
pythonCalculator4Display.SelectOrientationVectors = 'None'
pythonCalculator4Display.ScaleFactor = 0.4
pythonCalculator4Display.SelectScaleArray = 'None'
pythonCalculator4Display.GlyphType = 'Arrow'
pythonCalculator4Display.GlyphTableIndexArray = 'None'
pythonCalculator4Display.GaussianRadius = 0.02
pythonCalculator4Display.SetScaleArray = ['POINTS', 'Normals']
pythonCalculator4Display.ScaleTransferFunction = 'PiecewiseFunction'
pythonCalculator4Display.OpacityArray = ['POINTS', 'Normals']
pythonCalculator4Display.OpacityTransferFunction = 'PiecewiseFunction'
pythonCalculator4Display.DataAxesGrid = 'GridAxesRepresentation'
pythonCalculator4Display.SelectionCellLabelFontFile = ''
pythonCalculator4Display.SelectionPointLabelFontFile = ''
pythonCalculator4Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
pythonCalculator4Display.DataAxesGrid.XTitleFontFile = ''
pythonCalculator4Display.DataAxesGrid.YTitleFontFile = ''
pythonCalculator4Display.DataAxesGrid.ZTitleFontFile = ''
pythonCalculator4Display.DataAxesGrid.XLabelFontFile = ''
pythonCalculator4Display.DataAxesGrid.YLabelFontFile = ''
pythonCalculator4Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
pythonCalculator4Display.PolarAxes.PolarAxisTitleFontFile = ''
pythonCalculator4Display.PolarAxes.PolarAxisLabelFontFile = ''
pythonCalculator4Display.PolarAxes.LastRadialAxisTextFontFile = ''
pythonCalculator4Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tetrahedralize1
tetrahedralize1Display = Show(tetrahedralize1, renderView1)

# get color transfer function/color map for 'multiGauss'
multiGaussLUT = GetColorTransferFunction('multiGauss')
multiGaussLUT.RGBPoints = [2.756072525755826e-08, 0.231373, 0.298039, 0.752941, 1.2521087069032264, 0.865003, 0.865003, 0.865003, 2.5042173862457275, 0.705882, 0.0156863, 0.14902]
multiGaussLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'multiGauss'
multiGaussPWF = GetOpacityTransferFunction('multiGauss')
multiGaussPWF.Points = [2.756072525755826e-08, 0.0, 0.5, 0.0, 2.5042173862457275, 1.0, 0.5, 0.0]
multiGaussPWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
tetrahedralize1Display.Representation = 'Surface'
tetrahedralize1Display.ColorArrayName = ['POINTS', 'multiGauss']
tetrahedralize1Display.LookupTable = multiGaussLUT
tetrahedralize1Display.OSPRayScaleArray = 'Normals'
tetrahedralize1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tetrahedralize1Display.SelectOrientationVectors = 'None'
tetrahedralize1Display.ScaleFactor = 0.4
tetrahedralize1Display.SelectScaleArray = 'None'
tetrahedralize1Display.GlyphType = 'Arrow'
tetrahedralize1Display.GlyphTableIndexArray = 'None'
tetrahedralize1Display.GaussianRadius = 0.02
tetrahedralize1Display.SetScaleArray = ['POINTS', 'Normals']
tetrahedralize1Display.ScaleTransferFunction = 'PiecewiseFunction'
tetrahedralize1Display.OpacityArray = ['POINTS', 'Normals']
tetrahedralize1Display.OpacityTransferFunction = 'PiecewiseFunction'
tetrahedralize1Display.DataAxesGrid = 'GridAxesRepresentation'
tetrahedralize1Display.SelectionCellLabelFontFile = ''
tetrahedralize1Display.SelectionPointLabelFontFile = ''
tetrahedralize1Display.PolarAxes = 'PolarAxesRepresentation'
tetrahedralize1Display.ScalarOpacityFunction = multiGaussPWF
tetrahedralize1Display.ScalarOpacityUnitDistance = 0.20840029238347657

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tetrahedralize1Display.DataAxesGrid.XTitleFontFile = ''
tetrahedralize1Display.DataAxesGrid.YTitleFontFile = ''
tetrahedralize1Display.DataAxesGrid.ZTitleFontFile = ''
tetrahedralize1Display.DataAxesGrid.XLabelFontFile = ''
tetrahedralize1Display.DataAxesGrid.YLabelFontFile = ''
tetrahedralize1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tetrahedralize1Display.PolarAxes.PolarAxisTitleFontFile = ''
tetrahedralize1Display.PolarAxes.PolarAxisLabelFontFile = ''
tetrahedralize1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tetrahedralize1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from programmableFilter1
programmableFilter1Display = Show(programmableFilter1, renderView1)

# trace defaults for the display properties.
programmableFilter1Display.Representation = 'Surface'
programmableFilter1Display.ColorArrayName = ['POINTS', 'multiGauss']
programmableFilter1Display.LookupTable = multiGaussLUT
programmableFilter1Display.OSPRayScaleArray = 'multiGauss'
programmableFilter1Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter1Display.SelectOrientationVectors = 'None'
programmableFilter1Display.ScaleFactor = 0.4
programmableFilter1Display.SelectScaleArray = 'None'
programmableFilter1Display.GlyphType = 'Arrow'
programmableFilter1Display.GlyphTableIndexArray = 'None'
programmableFilter1Display.GaussianRadius = 0.02
programmableFilter1Display.SetScaleArray = [None, 'multiGauss']
programmableFilter1Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.OpacityArray = [None, 'multiGauss']
programmableFilter1Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter1Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter1Display.SelectionCellLabelFontFile = ''
programmableFilter1Display.SelectionPointLabelFontFile = ''
programmableFilter1Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter1Display.ScalarOpacityFunction = multiGaussPWF
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
threshold1Display.ColorArrayName = ['POINTS', 'multiGauss']
threshold1Display.LookupTable = multiGaussLUT
threshold1Display.OSPRayScaleArray = 'multiGauss'
threshold1Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold1Display.SelectOrientationVectors = 'None'
threshold1Display.ScaleFactor = 0.4
threshold1Display.SelectScaleArray = 'None'
threshold1Display.GlyphType = 'Arrow'
threshold1Display.GlyphTableIndexArray = 'None'
threshold1Display.GaussianRadius = 0.02
threshold1Display.SetScaleArray = ['POINTS', 'multiGauss']
threshold1Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display.OpacityArray = ['POINTS', 'multiGauss']
threshold1Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display.SelectionCellLabelFontFile = ''
threshold1Display.SelectionPointLabelFontFile = ''
threshold1Display.PolarAxes = 'PolarAxesRepresentation'
threshold1Display.ScalarOpacityFunction = multiGaussPWF
threshold1Display.ScalarOpacityUnitDistance = 0.25456947011897335

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

# show data from cleantoGrid1
cleantoGrid1Display = Show(cleantoGrid1, renderView1)

# trace defaults for the display properties.
cleantoGrid1Display.Representation = 'Surface'
cleantoGrid1Display.ColorArrayName = ['POINTS', 'multiGauss']
cleantoGrid1Display.LookupTable = multiGaussLUT
cleantoGrid1Display.OSPRayScaleArray = 'multiGauss'
cleantoGrid1Display.OSPRayScaleFunction = 'PiecewiseFunction'
cleantoGrid1Display.SelectOrientationVectors = 'None'
cleantoGrid1Display.ScaleFactor = 0.4
cleantoGrid1Display.SelectScaleArray = 'None'
cleantoGrid1Display.GlyphType = 'Arrow'
cleantoGrid1Display.GlyphTableIndexArray = 'None'
cleantoGrid1Display.GaussianRadius = 0.02
cleantoGrid1Display.SetScaleArray = ['POINTS', 'multiGauss']
cleantoGrid1Display.ScaleTransferFunction = 'PiecewiseFunction'
cleantoGrid1Display.OpacityArray = ['POINTS', 'multiGauss']
cleantoGrid1Display.OpacityTransferFunction = 'PiecewiseFunction'
cleantoGrid1Display.DataAxesGrid = 'GridAxesRepresentation'
cleantoGrid1Display.SelectionCellLabelFontFile = ''
cleantoGrid1Display.SelectionPointLabelFontFile = ''
cleantoGrid1Display.PolarAxes = 'PolarAxesRepresentation'
cleantoGrid1Display.ScalarOpacityFunction = multiGaussPWF
cleantoGrid1Display.ScalarOpacityUnitDistance = 0.22636028133679023

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
cleantoGrid1Display.DataAxesGrid.XTitleFontFile = ''
cleantoGrid1Display.DataAxesGrid.YTitleFontFile = ''
cleantoGrid1Display.DataAxesGrid.ZTitleFontFile = ''
cleantoGrid1Display.DataAxesGrid.XLabelFontFile = ''
cleantoGrid1Display.DataAxesGrid.YLabelFontFile = ''
cleantoGrid1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
cleantoGrid1Display.PolarAxes.PolarAxisTitleFontFile = ''
cleantoGrid1Display.PolarAxes.PolarAxisLabelFontFile = ''
cleantoGrid1Display.PolarAxes.LastRadialAxisTextFontFile = ''
cleantoGrid1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color transfer function/color map for 'gaussian0'
gaussian0LUT = GetColorTransferFunction('gaussian0')
gaussian0LUT.RGBPoints = [0.006329715251922607, 0.231373, 0.298039, 0.752941, 0.5031148493289948, 0.865003, 0.865003, 0.865003, 0.9998999834060669, 0.705882, 0.0156863, 0.14902]
gaussian0LUT.ScalarRangeInitialized = 1.0

# get color legend/bar for gaussian0LUT in view renderView1
gaussian0LUTColorBar = GetScalarBar(gaussian0LUT, renderView1)
gaussian0LUTColorBar.Title = 'gaussian0'
gaussian0LUTColorBar.ComponentTitle = ''
gaussian0LUTColorBar.TitleFontFile = ''
gaussian0LUTColorBar.LabelFontFile = ''

# set color bar visibility
gaussian0LUTColorBar.Visibility = 0

# get color legend/bar for multiGaussLUT in view renderView1
multiGaussLUTColorBar = GetScalarBar(multiGaussLUT, renderView1)
multiGaussLUTColorBar.Title = 'multiGauss'
multiGaussLUTColorBar.ComponentTitle = ''
multiGaussLUTColorBar.TitleFontFile = ''
multiGaussLUTColorBar.LabelFontFile = ''

# set color bar visibility
multiGaussLUTColorBar.Visibility = 1

# hide data in view
Hide(plane1, renderView1)

# hide data in view
Hide(pythonCalculator1, renderView1)

# hide data in view
Hide(pythonCalculator2, renderView1)

# hide data in view
Hide(pythonCalculator3, renderView1)

# hide data in view
Hide(pythonCalculator4, renderView1)

# show color legend
tetrahedralize1Display.SetScalarBarVisibility(renderView1, True)

# show color legend
programmableFilter1Display.SetScalarBarVisibility(renderView1, True)

# hide data in view
Hide(programmableFilter1, renderView1)

# show color legend
threshold1Display.SetScalarBarVisibility(renderView1, True)

# hide data in view
Hide(threshold1, renderView1)

# show color legend
cleantoGrid1Display.SetScalarBarVisibility(renderView1, True)

# hide data in view
Hide(cleantoGrid1, renderView1)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView2'
# ----------------------------------------------------------------

# show data from programmableFilter1
programmableFilter1Display_1 = Show(programmableFilter1, renderView2)

# trace defaults for the display properties.
programmableFilter1Display_1.Representation = 'Surface'
programmableFilter1Display_1.ColorArrayName = ['POINTS', 'multiGauss']
programmableFilter1Display_1.LookupTable = multiGaussLUT
programmableFilter1Display_1.OSPRayScaleArray = 'multiGauss'
programmableFilter1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter1Display_1.SelectOrientationVectors = 'None'
programmableFilter1Display_1.ScaleFactor = 0.4
programmableFilter1Display_1.SelectScaleArray = 'None'
programmableFilter1Display_1.GlyphType = 'Arrow'
programmableFilter1Display_1.GlyphTableIndexArray = 'None'
programmableFilter1Display_1.GaussianRadius = 0.02
programmableFilter1Display_1.SetScaleArray = [None, 'multiGauss']
programmableFilter1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter1Display_1.OpacityArray = [None, 'multiGauss']
programmableFilter1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter1Display_1.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter1Display_1.SelectionCellLabelFontFile = ''
programmableFilter1Display_1.SelectionPointLabelFontFile = ''
programmableFilter1Display_1.PolarAxes = 'PolarAxesRepresentation'
programmableFilter1Display_1.ScalarOpacityFunction = multiGaussPWF
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
threshold1Display_1.ColorArrayName = ['POINTS', 'multiGauss']
threshold1Display_1.LookupTable = multiGaussLUT
threshold1Display_1.OSPRayScaleArray = 'multiGauss'
threshold1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
threshold1Display_1.SelectOrientationVectors = 'None'
threshold1Display_1.ScaleFactor = 0.4
threshold1Display_1.SelectScaleArray = 'None'
threshold1Display_1.GlyphType = 'Arrow'
threshold1Display_1.GlyphTableIndexArray = 'None'
threshold1Display_1.GaussianRadius = 0.02
threshold1Display_1.SetScaleArray = ['POINTS', 'multiGauss']
threshold1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
threshold1Display_1.OpacityArray = ['POINTS', 'multiGauss']
threshold1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
threshold1Display_1.DataAxesGrid = 'GridAxesRepresentation'
threshold1Display_1.SelectionCellLabelFontFile = ''
threshold1Display_1.SelectionPointLabelFontFile = ''
threshold1Display_1.PolarAxes = 'PolarAxesRepresentation'
threshold1Display_1.ScalarOpacityFunction = multiGaussPWF
threshold1Display_1.ScalarOpacityUnitDistance = 0.25456947011897335

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
contour1Display = Show(contour1, renderView2)

# trace defaults for the display properties.
contour1Display.Representation = 'Surface'
contour1Display.ColorArrayName = [None, '']
contour1Display.OSPRayScaleFunction = 'PiecewiseFunction'
contour1Display.SelectOrientationVectors = 'None'
contour1Display.ScaleFactor = 0.4
contour1Display.SelectScaleArray = 'None'
contour1Display.GlyphType = 'Arrow'
contour1Display.GlyphTableIndexArray = 'None'
contour1Display.GaussianRadius = 0.02
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
tube1Display = Show(tube1, renderView2)

# trace defaults for the display properties.
tube1Display.Representation = 'Surface'
tube1Display.ColorArrayName = [None, '']
tube1Display.OSPRayScaleArray = 'TubeNormals'
tube1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube1Display.SelectOrientationVectors = 'None'
tube1Display.ScaleFactor = 0.40540986061096196
tube1Display.SelectScaleArray = 'None'
tube1Display.GlyphType = 'Arrow'
tube1Display.GlyphTableIndexArray = 'None'
tube1Display.GaussianRadius = 0.020270493030548096
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

# show data from tTKScalarFieldCriticalPoints1
tTKScalarFieldCriticalPoints1Display = Show(tTKScalarFieldCriticalPoints1, renderView2)

# trace defaults for the display properties.
tTKScalarFieldCriticalPoints1Display.Representation = 'Surface'
tTKScalarFieldCriticalPoints1Display.ColorArrayName = ['POINTS', 'multiGauss']
tTKScalarFieldCriticalPoints1Display.LookupTable = multiGaussLUT
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
tTKScalarFieldCriticalPoints1Display.ScalarOpacityFunction = multiGaussPWF
tTKScalarFieldCriticalPoints1Display.ScalarOpacityUnitDistance = 6.144363353579625

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

# get color transfer function/color map for 'CriticalType'
criticalTypeLUT = GetColorTransferFunction('CriticalType')
criticalTypeLUT.RGBPoints = [0.0, 0.231373, 0.298039, 0.752941, 1.5, 0.865003, 0.865003, 0.865003, 3.0, 0.705882, 0.0156863, 0.14902]
criticalTypeLUT.ScalarRangeInitialized = 1.0

# trace defaults for the display properties.
tTKSphereFromPoint1Display.Representation = 'Surface'
tTKSphereFromPoint1Display.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint1Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint1Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint1Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint1Display.ScaleFactor = 0.41993169784545903
tTKSphereFromPoint1Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint1Display.GlyphType = 'Arrow'
tTKSphereFromPoint1Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint1Display.GaussianRadius = 0.02099658489227295
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

# get color legend/bar for multiGaussLUT in view renderView2
multiGaussLUTColorBar_1 = GetScalarBar(multiGaussLUT, renderView2)
multiGaussLUTColorBar_1.Title = 'multiGauss'
multiGaussLUTColorBar_1.ComponentTitle = ''
multiGaussLUTColorBar_1.TitleFontFile = ''
multiGaussLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
multiGaussLUTColorBar_1.Visibility = 1

# get color legend/bar for criticalTypeLUT in view renderView2
criticalTypeLUTColorBar = GetScalarBar(criticalTypeLUT, renderView2)
criticalTypeLUTColorBar.WindowLocation = 'UpperRightCorner'
criticalTypeLUTColorBar.Title = 'CriticalType'
criticalTypeLUTColorBar.ComponentTitle = ''
criticalTypeLUTColorBar.TitleFontFile = ''
criticalTypeLUTColorBar.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar.Visibility = 1

# show color legend
programmableFilter1Display_1.SetScalarBarVisibility(renderView2, True)

# hide data in view
Hide(programmableFilter1, renderView2)

# show color legend
threshold1Display_1.SetScalarBarVisibility(renderView2, True)

# hide data in view
Hide(contour1, renderView2)

# show color legend
tTKScalarFieldCriticalPoints1Display.SetScalarBarVisibility(renderView2, True)

# hide data in view
Hide(tTKScalarFieldCriticalPoints1, renderView2)

# show color legend
tTKSphereFromPoint1Display.SetScalarBarVisibility(renderView2, True)

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
tTKPersistenceDiagram1Display.ScaleFactor = 0.2398583127767779
tTKPersistenceDiagram1Display.SelectScaleArray = 'Coordinates'
tTKPersistenceDiagram1Display.GlyphType = 'Arrow'
tTKPersistenceDiagram1Display.GlyphTableIndexArray = 'Coordinates'
tTKPersistenceDiagram1Display.GaussianRadius = 0.011992915638838895
tTKPersistenceDiagram1Display.SetScaleArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.OpacityArray = ['POINTS', 'Coordinates']
tTKPersistenceDiagram1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKPersistenceDiagram1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKPersistenceDiagram1Display.SelectionCellLabelFontFile = ''
tTKPersistenceDiagram1Display.SelectionPointLabelFontFile = ''
tTKPersistenceDiagram1Display.PolarAxes = 'PolarAxesRepresentation'
tTKPersistenceDiagram1Display.ScalarOpacityUnitDistance = 1.4896656352830324

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

# show data from threshold2
threshold2Display = Show(threshold2, renderView3)

# trace defaults for the display properties.
threshold2Display.Representation = 'Surface'
threshold2Display.ColorArrayName = [None, '']
threshold2Display.OSPRayScaleArray = 'Coordinates'
threshold2Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold2Display.SelectOrientationVectors = 'Coordinates'
threshold2Display.ScaleFactor = 0.2398583127767779
threshold2Display.SelectScaleArray = 'Coordinates'
threshold2Display.GlyphType = 'Arrow'
threshold2Display.GlyphTableIndexArray = 'Coordinates'
threshold2Display.GaussianRadius = 0.011992915638838895
threshold2Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold2Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold2Display.OpacityArray = ['POINTS', 'Coordinates']
threshold2Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold2Display.DataAxesGrid = 'GridAxesRepresentation'
threshold2Display.SelectionCellLabelFontFile = ''
threshold2Display.SelectionPointLabelFontFile = ''
threshold2Display.PolarAxes = 'PolarAxesRepresentation'
threshold2Display.ScalarOpacityUnitDistance = 2.2617511199413043

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
threshold2Display.DataAxesGrid.XTitleFontFile = ''
threshold2Display.DataAxesGrid.YTitleFontFile = ''
threshold2Display.DataAxesGrid.ZTitleFontFile = ''
threshold2Display.DataAxesGrid.XLabelFontFile = ''
threshold2Display.DataAxesGrid.YLabelFontFile = ''
threshold2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
threshold2Display.PolarAxes.PolarAxisTitleFontFile = ''
threshold2Display.PolarAxes.PolarAxisLabelFontFile = ''
threshold2Display.PolarAxes.LastRadialAxisTextFontFile = ''
threshold2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from extractSurface1
extractSurface1Display = Show(extractSurface1, renderView3)

# trace defaults for the display properties.
extractSurface1Display.Representation = 'Surface'
extractSurface1Display.ColorArrayName = [None, '']
extractSurface1Display.OSPRayScaleArray = 'Coordinates'
extractSurface1Display.OSPRayScaleFunction = 'PiecewiseFunction'
extractSurface1Display.SelectOrientationVectors = 'Coordinates'
extractSurface1Display.ScaleFactor = 0.1538563563139178
extractSurface1Display.SelectScaleArray = 'Coordinates'
extractSurface1Display.GlyphType = 'Arrow'
extractSurface1Display.GlyphTableIndexArray = 'Coordinates'
extractSurface1Display.GaussianRadius = 0.0076928178156958895
extractSurface1Display.SetScaleArray = ['POINTS', 'Coordinates']
extractSurface1Display.ScaleTransferFunction = 'PiecewiseFunction'
extractSurface1Display.OpacityArray = ['POINTS', 'Coordinates']
extractSurface1Display.OpacityTransferFunction = 'PiecewiseFunction'
extractSurface1Display.DataAxesGrid = 'GridAxesRepresentation'
extractSurface1Display.SelectionCellLabelFontFile = ''
extractSurface1Display.SelectionPointLabelFontFile = ''
extractSurface1Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
extractSurface1Display.DataAxesGrid.XTitleFontFile = ''
extractSurface1Display.DataAxesGrid.YTitleFontFile = ''
extractSurface1Display.DataAxesGrid.ZTitleFontFile = ''
extractSurface1Display.DataAxesGrid.XLabelFontFile = ''
extractSurface1Display.DataAxesGrid.YLabelFontFile = ''
extractSurface1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
extractSurface1Display.PolarAxes.PolarAxisTitleFontFile = ''
extractSurface1Display.PolarAxes.PolarAxisLabelFontFile = ''
extractSurface1Display.PolarAxes.LastRadialAxisTextFontFile = ''
extractSurface1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube2
tube2Display = Show(tube2, renderView3)

# trace defaults for the display properties.
tube2Display.Representation = 'Surface'
tube2Display.ColorArrayName = [None, '']
tube2Display.DiffuseColor = [0.0784313725490196, 0.0784313725490196, 0.0784313725490196]
tube2Display.OSPRayScaleArray = 'Coordinates'
tube2Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube2Display.SelectOrientationVectors = 'Coordinates'
tube2Display.ScaleFactor = 0.1557407008484006
tube2Display.SelectScaleArray = 'Coordinates'
tube2Display.GlyphType = 'Arrow'
tube2Display.GlyphTableIndexArray = 'Coordinates'
tube2Display.GaussianRadius = 0.00778703504242003
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

# show data from threshold3
threshold3Display = Show(threshold3, renderView3)

# trace defaults for the display properties.
threshold3Display.Representation = 'Surface'
threshold3Display.ColorArrayName = [None, '']
threshold3Display.OSPRayScaleArray = 'Coordinates'
threshold3Display.OSPRayScaleFunction = 'PiecewiseFunction'
threshold3Display.SelectOrientationVectors = 'Coordinates'
threshold3Display.ScaleFactor = 0.2398583127767779
threshold3Display.SelectScaleArray = 'Coordinates'
threshold3Display.GlyphType = 'Arrow'
threshold3Display.GlyphTableIndexArray = 'Coordinates'
threshold3Display.GaussianRadius = 0.011992915638838895
threshold3Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold3Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold3Display.OpacityArray = ['POINTS', 'Coordinates']
threshold3Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold3Display.DataAxesGrid = 'GridAxesRepresentation'
threshold3Display.SelectionCellLabelFontFile = ''
threshold3Display.SelectionPointLabelFontFile = ''
threshold3Display.PolarAxes = 'PolarAxesRepresentation'
threshold3Display.ScalarOpacityUnitDistance = 1.4896656352830324

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
threshold3Display.DataAxesGrid.XTitleFontFile = ''
threshold3Display.DataAxesGrid.YTitleFontFile = ''
threshold3Display.DataAxesGrid.ZTitleFontFile = ''
threshold3Display.DataAxesGrid.XLabelFontFile = ''
threshold3Display.DataAxesGrid.YLabelFontFile = ''
threshold3Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
threshold3Display.PolarAxes.PolarAxisTitleFontFile = ''
threshold3Display.PolarAxes.PolarAxisLabelFontFile = ''
threshold3Display.PolarAxes.LastRadialAxisTextFontFile = ''
threshold3Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from extractSurface2
extractSurface2Display = Show(extractSurface2, renderView3)

# trace defaults for the display properties.
extractSurface2Display.Representation = 'Surface'
extractSurface2Display.ColorArrayName = [None, '']
extractSurface2Display.OSPRayScaleArray = 'Coordinates'
extractSurface2Display.OSPRayScaleFunction = 'PiecewiseFunction'
extractSurface2Display.SelectOrientationVectors = 'Coordinates'
extractSurface2Display.ScaleFactor = 0.2398583127767779
extractSurface2Display.SelectScaleArray = 'Coordinates'
extractSurface2Display.GlyphType = 'Arrow'
extractSurface2Display.GlyphTableIndexArray = 'Coordinates'
extractSurface2Display.GaussianRadius = 0.011992915638838895
extractSurface2Display.SetScaleArray = ['POINTS', 'Coordinates']
extractSurface2Display.ScaleTransferFunction = 'PiecewiseFunction'
extractSurface2Display.OpacityArray = ['POINTS', 'Coordinates']
extractSurface2Display.OpacityTransferFunction = 'PiecewiseFunction'
extractSurface2Display.DataAxesGrid = 'GridAxesRepresentation'
extractSurface2Display.SelectionCellLabelFontFile = ''
extractSurface2Display.SelectionPointLabelFontFile = ''
extractSurface2Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
extractSurface2Display.DataAxesGrid.XTitleFontFile = ''
extractSurface2Display.DataAxesGrid.YTitleFontFile = ''
extractSurface2Display.DataAxesGrid.ZTitleFontFile = ''
extractSurface2Display.DataAxesGrid.XLabelFontFile = ''
extractSurface2Display.DataAxesGrid.YLabelFontFile = ''
extractSurface2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
extractSurface2Display.PolarAxes.PolarAxisTitleFontFile = ''
extractSurface2Display.PolarAxes.PolarAxisLabelFontFile = ''
extractSurface2Display.PolarAxes.LastRadialAxisTextFontFile = ''
extractSurface2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube3
tube3Display = Show(tube3, renderView3)

# trace defaults for the display properties.
tube3Display.Representation = 'Surface'
tube3Display.ColorArrayName = [None, '']
tube3Display.DiffuseColor = [0.9411764705882353, 0.9411764705882353, 0.9411764705882353]
tube3Display.OSPRayScaleArray = 'Coordinates'
tube3Display.OSPRayScaleFunction = 'PiecewiseFunction'
tube3Display.SelectOrientationVectors = 'Coordinates'
tube3Display.ScaleFactor = 0.2413271389901638
tube3Display.SelectScaleArray = 'Coordinates'
tube3Display.GlyphType = 'Arrow'
tube3Display.GlyphTableIndexArray = 'Coordinates'
tube3Display.GaussianRadius = 0.012066356949508191
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
tTKSphereFromPoint2Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint2Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint2Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint2Display.ScaleFactor = 0.3395167589187622
tTKSphereFromPoint2Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint2Display.GlyphType = 'Arrow'
tTKSphereFromPoint2Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint2Display.GaussianRadius = 0.01697583794593811
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
criticalTypeLUTColorBar_1 = GetScalarBar(criticalTypeLUT, renderView3)
criticalTypeLUTColorBar_1.Title = 'CriticalType'
criticalTypeLUTColorBar_1.ComponentTitle = ''
criticalTypeLUTColorBar_1.TitleFontFile = ''
criticalTypeLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar_1.Visibility = 1

# hide data in view
Hide(tTKPersistenceDiagram1, renderView3)

# hide data in view
Hide(threshold2, renderView3)

# hide data in view
Hide(extractSurface1, renderView3)

# hide data in view
Hide(threshold3, renderView3)

# hide data in view
Hide(extractSurface2, renderView3)

# show color legend
tTKSphereFromPoint2Display.SetScalarBarVisibility(renderView3, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView4'
# ----------------------------------------------------------------

# show data from tTKSphereFromPoint2
tTKSphereFromPoint2Display_1 = Show(tTKSphereFromPoint2, renderView4)

# trace defaults for the display properties.
tTKSphereFromPoint2Display_1.Representation = 'Surface'
tTKSphereFromPoint2Display_1.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display_1.LookupTable = criticalTypeLUT
tTKSphereFromPoint2Display_1.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint2Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display_1.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint2Display_1.ScaleFactor = 0.24583781138062477
tTKSphereFromPoint2Display_1.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint2Display_1.GlyphType = 'Arrow'
tTKSphereFromPoint2Display_1.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint2Display_1.GaussianRadius = 0.012291890569031239
tTKSphereFromPoint2Display_1.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display_1.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint2Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint2Display_1.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint2Display_1.SelectionCellLabelFontFile = ''
tTKSphereFromPoint2Display_1.SelectionPointLabelFontFile = ''
tTKSphereFromPoint2Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint2Display_1.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint2Display_1.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint2Display_1.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint2Display_1.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint2Display_1.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint2Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint2Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint2Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint2Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint2Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube3
tube3Display_1 = Show(tube3, renderView4)

# trace defaults for the display properties.
tube3Display_1.Representation = 'Surface'
tube3Display_1.ColorArrayName = [None, '']
tube3Display_1.OSPRayScaleArray = 'Coordinates'
tube3Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tube3Display_1.SelectOrientationVectors = 'Coordinates'
tube3Display_1.ScaleFactor = 0.24069554368034007
tube3Display_1.SelectScaleArray = 'Coordinates'
tube3Display_1.GlyphType = 'Arrow'
tube3Display_1.GlyphTableIndexArray = 'Coordinates'
tube3Display_1.GaussianRadius = 0.012034777184017003
tube3Display_1.SetScaleArray = ['POINTS', 'Coordinates']
tube3Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tube3Display_1.OpacityArray = ['POINTS', 'Coordinates']
tube3Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tube3Display_1.DataAxesGrid = 'GridAxesRepresentation'
tube3Display_1.SelectionCellLabelFontFile = ''
tube3Display_1.SelectionPointLabelFontFile = ''
tube3Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tube3Display_1.DataAxesGrid.XTitleFontFile = ''
tube3Display_1.DataAxesGrid.YTitleFontFile = ''
tube3Display_1.DataAxesGrid.ZTitleFontFile = ''
tube3Display_1.DataAxesGrid.XLabelFontFile = ''
tube3Display_1.DataAxesGrid.YLabelFontFile = ''
tube3Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tube3Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tube3Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tube3Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tube3Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tube2
tube2Display_1 = Show(tube2, renderView4)

# trace defaults for the display properties.
tube2Display_1.Representation = 'Surface'
tube2Display_1.ColorArrayName = [None, '']
tube2Display_1.DiffuseColor = [0.050980392156862744, 0.050980392156862744, 0.050980392156862744]
tube2Display_1.OSPRayScaleArray = 'Coordinates'
tube2Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tube2Display_1.SelectOrientationVectors = 'Coordinates'
tube2Display_1.ScaleFactor = 0.1557407008484006
tube2Display_1.SelectScaleArray = 'Coordinates'
tube2Display_1.GlyphType = 'Arrow'
tube2Display_1.GlyphTableIndexArray = 'Coordinates'
tube2Display_1.GaussianRadius = 0.00778703504242003
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
threshold4Display.ScaleFactor = 0.2398583127767779
threshold4Display.SelectScaleArray = 'Coordinates'
threshold4Display.GlyphType = 'Arrow'
threshold4Display.GlyphTableIndexArray = 'Coordinates'
threshold4Display.GaussianRadius = 0.011992915638838895
threshold4Display.SetScaleArray = ['POINTS', 'Coordinates']
threshold4Display.ScaleTransferFunction = 'PiecewiseFunction'
threshold4Display.OpacityArray = ['POINTS', 'Coordinates']
threshold4Display.OpacityTransferFunction = 'PiecewiseFunction'
threshold4Display.DataAxesGrid = 'GridAxesRepresentation'
threshold4Display.SelectionCellLabelFontFile = ''
threshold4Display.SelectionPointLabelFontFile = ''
threshold4Display.PolarAxes = 'PolarAxesRepresentation'
threshold4Display.ScalarOpacityUnitDistance = 2.0634856665122494

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

# show data from tTKSphereFromPoint3
tTKSphereFromPoint3Display = Show(tTKSphereFromPoint3, renderView4)

# trace defaults for the display properties.
tTKSphereFromPoint3Display.Representation = 'Surface'
tTKSphereFromPoint3Display.ColorArrayName = ['POINTS', 'CriticalType']
tTKSphereFromPoint3Display.LookupTable = criticalTypeLUT
tTKSphereFromPoint3Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint3Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint3Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint3Display.ScaleFactor = 0.24982415959239007
tTKSphereFromPoint3Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint3Display.GlyphType = 'Arrow'
tTKSphereFromPoint3Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint3Display.GaussianRadius = 0.012491207979619503
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

# get color legend/bar for criticalTypeLUT in view renderView4
criticalTypeLUTColorBar_2 = GetScalarBar(criticalTypeLUT, renderView4)
criticalTypeLUTColorBar_2.Title = 'CriticalType'
criticalTypeLUTColorBar_2.ComponentTitle = ''
criticalTypeLUTColorBar_2.TitleFontFile = ''
criticalTypeLUTColorBar_2.LabelFontFile = ''

# set color bar visibility
criticalTypeLUTColorBar_2.Visibility = 1

# show color legend
tTKSphereFromPoint2Display_1.SetScalarBarVisibility(renderView4, True)

# hide data in view
Hide(tTKSphereFromPoint2, renderView4)

# hide data in view
Hide(tube3, renderView4)

# show color legend
tTKSphereFromPoint3Display.SetScalarBarVisibility(renderView4, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView5'
# ----------------------------------------------------------------

# show data from cleantoGrid1
cleantoGrid1Display_1 = Show(cleantoGrid1, renderView5)

# trace defaults for the display properties.
cleantoGrid1Display_1.Representation = 'Surface'
cleantoGrid1Display_1.ColorArrayName = [None, '']
cleantoGrid1Display_1.OSPRayScaleArray = 'multiGauss'
cleantoGrid1Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
cleantoGrid1Display_1.SelectOrientationVectors = 'None'
cleantoGrid1Display_1.ScaleFactor = 0.4
cleantoGrid1Display_1.SelectScaleArray = 'None'
cleantoGrid1Display_1.GlyphType = 'Arrow'
cleantoGrid1Display_1.GlyphTableIndexArray = 'None'
cleantoGrid1Display_1.GaussianRadius = 0.02
cleantoGrid1Display_1.SetScaleArray = ['POINTS', 'multiGauss']
cleantoGrid1Display_1.ScaleTransferFunction = 'PiecewiseFunction'
cleantoGrid1Display_1.OpacityArray = ['POINTS', 'multiGauss']
cleantoGrid1Display_1.OpacityTransferFunction = 'PiecewiseFunction'
cleantoGrid1Display_1.DataAxesGrid = 'GridAxesRepresentation'
cleantoGrid1Display_1.SelectionCellLabelFontFile = ''
cleantoGrid1Display_1.SelectionPointLabelFontFile = ''
cleantoGrid1Display_1.PolarAxes = 'PolarAxesRepresentation'
cleantoGrid1Display_1.ScalarOpacityUnitDistance = 0.22636028133679023

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
cleantoGrid1Display_1.DataAxesGrid.XTitleFontFile = ''
cleantoGrid1Display_1.DataAxesGrid.YTitleFontFile = ''
cleantoGrid1Display_1.DataAxesGrid.ZTitleFontFile = ''
cleantoGrid1Display_1.DataAxesGrid.XLabelFontFile = ''
cleantoGrid1Display_1.DataAxesGrid.YLabelFontFile = ''
cleantoGrid1Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
cleantoGrid1Display_1.PolarAxes.PolarAxisTitleFontFile = ''
cleantoGrid1Display_1.PolarAxes.PolarAxisLabelFontFile = ''
cleantoGrid1Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
cleantoGrid1Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKTopologicalSimplification1
tTKTopologicalSimplification1Display = Show(tTKTopologicalSimplification1, renderView5)

# get color transfer function/color map for 'simplifiedGauss'
simplifiedGaussLUT = GetColorTransferFunction('simplifiedGauss')
simplifiedGaussLUT.RGBPoints = [0.0002706510713323951, 0.231373, 0.298039, 0.752941, 1.1995622149552219, 0.865003, 0.865003, 0.865003, 2.3988537788391113, 0.705882, 0.0156863, 0.14902]
simplifiedGaussLUT.ScalarRangeInitialized = 1.0

# get opacity transfer function/opacity map for 'simplifiedGauss'
simplifiedGaussPWF = GetOpacityTransferFunction('simplifiedGauss')
simplifiedGaussPWF.Points = [0.0002706510713323951, 0.0, 0.5, 0.0, 2.3988537788391113, 1.0, 0.5, 0.0]
simplifiedGaussPWF.ScalarRangeInitialized = 1

# trace defaults for the display properties.
tTKTopologicalSimplification1Display.Representation = 'Surface'
tTKTopologicalSimplification1Display.ColorArrayName = ['POINTS', 'simplifiedGauss']
tTKTopologicalSimplification1Display.LookupTable = simplifiedGaussLUT
tTKTopologicalSimplification1Display.OSPRayScaleArray = 'multiGauss'
tTKTopologicalSimplification1Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKTopologicalSimplification1Display.SelectOrientationVectors = 'None'
tTKTopologicalSimplification1Display.ScaleFactor = 0.4
tTKTopologicalSimplification1Display.SelectScaleArray = 'None'
tTKTopologicalSimplification1Display.GlyphType = 'Arrow'
tTKTopologicalSimplification1Display.GlyphTableIndexArray = 'None'
tTKTopologicalSimplification1Display.GaussianRadius = 0.02
tTKTopologicalSimplification1Display.SetScaleArray = ['POINTS', 'multiGauss']
tTKTopologicalSimplification1Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKTopologicalSimplification1Display.OpacityArray = ['POINTS', 'multiGauss']
tTKTopologicalSimplification1Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKTopologicalSimplification1Display.DataAxesGrid = 'GridAxesRepresentation'
tTKTopologicalSimplification1Display.SelectionCellLabelFontFile = ''
tTKTopologicalSimplification1Display.SelectionPointLabelFontFile = ''
tTKTopologicalSimplification1Display.PolarAxes = 'PolarAxesRepresentation'
tTKTopologicalSimplification1Display.ScalarOpacityFunction = simplifiedGaussPWF
tTKTopologicalSimplification1Display.ScalarOpacityUnitDistance = 0.22636028133679023

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKTopologicalSimplification1Display.DataAxesGrid.XTitleFontFile = ''
tTKTopologicalSimplification1Display.DataAxesGrid.YTitleFontFile = ''
tTKTopologicalSimplification1Display.DataAxesGrid.ZTitleFontFile = ''
tTKTopologicalSimplification1Display.DataAxesGrid.XLabelFontFile = ''
tTKTopologicalSimplification1Display.DataAxesGrid.YLabelFontFile = ''
tTKTopologicalSimplification1Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKTopologicalSimplification1Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKTopologicalSimplification1Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKTopologicalSimplification1Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKTopologicalSimplification1Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from programmableFilter2
programmableFilter2Display = Show(programmableFilter2, renderView5)

# trace defaults for the display properties.
programmableFilter2Display.Representation = 'Surface'
programmableFilter2Display.ColorArrayName = ['POINTS', 'simplifiedGauss']
programmableFilter2Display.LookupTable = simplifiedGaussLUT
programmableFilter2Display.OSPRayScaleArray = 'simplifiedGauss'
programmableFilter2Display.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter2Display.SelectOrientationVectors = 'None'
programmableFilter2Display.ScaleFactor = 0.4
programmableFilter2Display.SelectScaleArray = 'None'
programmableFilter2Display.GlyphType = 'Arrow'
programmableFilter2Display.GlyphTableIndexArray = 'None'
programmableFilter2Display.GaussianRadius = 0.02
programmableFilter2Display.SetScaleArray = ['POINTS', 'simplifiedGauss']
programmableFilter2Display.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.OpacityArray = ['POINTS', 'simplifiedGauss']
programmableFilter2Display.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter2Display.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter2Display.SelectionCellLabelFontFile = ''
programmableFilter2Display.SelectionPointLabelFontFile = ''
programmableFilter2Display.PolarAxes = 'PolarAxesRepresentation'
programmableFilter2Display.ScalarOpacityFunction = simplifiedGaussPWF
programmableFilter2Display.ScalarOpacityUnitDistance = 0.22636028133679023

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

# show data from tTKSphereFromPoint4
tTKSphereFromPoint4Display = Show(tTKSphereFromPoint4, renderView5)

# trace defaults for the display properties.
tTKSphereFromPoint4Display.Representation = 'Surface'
tTKSphereFromPoint4Display.ColorArrayName = ['POINTS', 'simplifiedGauss']
tTKSphereFromPoint4Display.LookupTable = simplifiedGaussLUT
tTKSphereFromPoint4Display.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint4Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint4Display.ScaleFactor = 0.41993169784545903
tTKSphereFromPoint4Display.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint4Display.GlyphType = 'Arrow'
tTKSphereFromPoint4Display.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint4Display.GaussianRadius = 0.02099658489227295
tTKSphereFromPoint4Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint4Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint4Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint4Display.SelectionCellLabelFontFile = ''
tTKSphereFromPoint4Display.SelectionPointLabelFontFile = ''
tTKSphereFromPoint4Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint4Display.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint4Display.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint4Display.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint4Display.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint4Display.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint4Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint4Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint4Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint4Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint4Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for simplifiedGaussLUT in view renderView5
simplifiedGaussLUTColorBar = GetScalarBar(simplifiedGaussLUT, renderView5)
simplifiedGaussLUTColorBar.Title = 'simplifiedGauss'
simplifiedGaussLUTColorBar.ComponentTitle = ''
simplifiedGaussLUTColorBar.TitleFontFile = ''
simplifiedGaussLUTColorBar.LabelFontFile = ''

# set color bar visibility
simplifiedGaussLUTColorBar.Visibility = 1

# hide data in view
Hide(cleantoGrid1, renderView5)

# show color legend
tTKTopologicalSimplification1Display.SetScalarBarVisibility(renderView5, True)

# hide data in view
Hide(tTKTopologicalSimplification1, renderView5)

# show color legend
programmableFilter2Display.SetScalarBarVisibility(renderView5, True)

# show color legend
tTKSphereFromPoint4Display.SetScalarBarVisibility(renderView5, True)

# ----------------------------------------------------------------
# setup the visualization in view 'renderView6'
# ----------------------------------------------------------------

# show data from programmableFilter2
programmableFilter2Display_1 = Show(programmableFilter2, renderView6)

# trace defaults for the display properties.
programmableFilter2Display_1.Representation = 'Surface'
programmableFilter2Display_1.ColorArrayName = ['POINTS', 'simplifiedGauss']
programmableFilter2Display_1.LookupTable = simplifiedGaussLUT
programmableFilter2Display_1.OSPRayScaleArray = 'simplifiedGauss'
programmableFilter2Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
programmableFilter2Display_1.SelectOrientationVectors = 'None'
programmableFilter2Display_1.ScaleFactor = 0.4
programmableFilter2Display_1.SelectScaleArray = 'None'
programmableFilter2Display_1.GlyphType = 'Arrow'
programmableFilter2Display_1.GlyphTableIndexArray = 'None'
programmableFilter2Display_1.GaussianRadius = 0.02
programmableFilter2Display_1.SetScaleArray = ['POINTS', 'simplifiedGauss']
programmableFilter2Display_1.ScaleTransferFunction = 'PiecewiseFunction'
programmableFilter2Display_1.OpacityArray = ['POINTS', 'simplifiedGauss']
programmableFilter2Display_1.OpacityTransferFunction = 'PiecewiseFunction'
programmableFilter2Display_1.DataAxesGrid = 'GridAxesRepresentation'
programmableFilter2Display_1.SelectionCellLabelFontFile = ''
programmableFilter2Display_1.SelectionPointLabelFontFile = ''
programmableFilter2Display_1.PolarAxes = 'PolarAxesRepresentation'
programmableFilter2Display_1.ScalarOpacityFunction = simplifiedGaussPWF
programmableFilter2Display_1.ScalarOpacityUnitDistance = 0.22636028133679023

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

# show data from tTKScalarFieldCriticalPoints2
tTKScalarFieldCriticalPoints2Display = Show(tTKScalarFieldCriticalPoints2, renderView6)

# trace defaults for the display properties.
tTKScalarFieldCriticalPoints2Display.Representation = 'Surface'
tTKScalarFieldCriticalPoints2Display.ColorArrayName = ['POINTS', 'simplifiedGauss']
tTKScalarFieldCriticalPoints2Display.LookupTable = simplifiedGaussLUT
tTKScalarFieldCriticalPoints2Display.OSPRayScaleArray = 'CriticalType'
tTKScalarFieldCriticalPoints2Display.OSPRayScaleFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints2Display.SelectOrientationVectors = 'CriticalType'
tTKScalarFieldCriticalPoints2Display.ScaleFactor = 0.4
tTKScalarFieldCriticalPoints2Display.SelectScaleArray = 'CriticalType'
tTKScalarFieldCriticalPoints2Display.GlyphType = 'Arrow'
tTKScalarFieldCriticalPoints2Display.GlyphTableIndexArray = 'CriticalType'
tTKScalarFieldCriticalPoints2Display.GaussianRadius = 0.02
tTKScalarFieldCriticalPoints2Display.SetScaleArray = ['POINTS', 'CriticalType']
tTKScalarFieldCriticalPoints2Display.ScaleTransferFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints2Display.OpacityArray = ['POINTS', 'CriticalType']
tTKScalarFieldCriticalPoints2Display.OpacityTransferFunction = 'PiecewiseFunction'
tTKScalarFieldCriticalPoints2Display.DataAxesGrid = 'GridAxesRepresentation'
tTKScalarFieldCriticalPoints2Display.SelectionCellLabelFontFile = ''
tTKScalarFieldCriticalPoints2Display.SelectionPointLabelFontFile = ''
tTKScalarFieldCriticalPoints2Display.PolarAxes = 'PolarAxesRepresentation'
tTKScalarFieldCriticalPoints2Display.ScalarOpacityFunction = simplifiedGaussPWF
tTKScalarFieldCriticalPoints2Display.ScalarOpacityUnitDistance = 5.4399633351309875

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.XTitleFontFile = ''
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.YTitleFontFile = ''
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.ZTitleFontFile = ''
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.XLabelFontFile = ''
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.YLabelFontFile = ''
tTKScalarFieldCriticalPoints2Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKScalarFieldCriticalPoints2Display.PolarAxes.PolarAxisTitleFontFile = ''
tTKScalarFieldCriticalPoints2Display.PolarAxes.PolarAxisLabelFontFile = ''
tTKScalarFieldCriticalPoints2Display.PolarAxes.LastRadialAxisTextFontFile = ''
tTKScalarFieldCriticalPoints2Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from tTKSphereFromPoint4
tTKSphereFromPoint4Display_1 = Show(tTKSphereFromPoint4, renderView6)

# trace defaults for the display properties.
tTKSphereFromPoint4Display_1.Representation = 'Surface'
tTKSphereFromPoint4Display_1.ColorArrayName = ['POINTS', 'simplifiedGauss']
tTKSphereFromPoint4Display_1.LookupTable = simplifiedGaussLUT
tTKSphereFromPoint4Display_1.OSPRayScaleArray = 'CriticalType'
tTKSphereFromPoint4Display_1.OSPRayScaleFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display_1.SelectOrientationVectors = 'CriticalType'
tTKSphereFromPoint4Display_1.ScaleFactor = 0.41993169784545903
tTKSphereFromPoint4Display_1.SelectScaleArray = 'CriticalType'
tTKSphereFromPoint4Display_1.GlyphType = 'Arrow'
tTKSphereFromPoint4Display_1.GlyphTableIndexArray = 'CriticalType'
tTKSphereFromPoint4Display_1.GaussianRadius = 0.02099658489227295
tTKSphereFromPoint4Display_1.SetScaleArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint4Display_1.ScaleTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display_1.OpacityArray = ['POINTS', 'CriticalType']
tTKSphereFromPoint4Display_1.OpacityTransferFunction = 'PiecewiseFunction'
tTKSphereFromPoint4Display_1.DataAxesGrid = 'GridAxesRepresentation'
tTKSphereFromPoint4Display_1.SelectionCellLabelFontFile = ''
tTKSphereFromPoint4Display_1.SelectionPointLabelFontFile = ''
tTKSphereFromPoint4Display_1.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
tTKSphereFromPoint4Display_1.DataAxesGrid.XTitleFontFile = ''
tTKSphereFromPoint4Display_1.DataAxesGrid.YTitleFontFile = ''
tTKSphereFromPoint4Display_1.DataAxesGrid.ZTitleFontFile = ''
tTKSphereFromPoint4Display_1.DataAxesGrid.XLabelFontFile = ''
tTKSphereFromPoint4Display_1.DataAxesGrid.YLabelFontFile = ''
tTKSphereFromPoint4Display_1.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
tTKSphereFromPoint4Display_1.PolarAxes.PolarAxisTitleFontFile = ''
tTKSphereFromPoint4Display_1.PolarAxes.PolarAxisLabelFontFile = ''
tTKSphereFromPoint4Display_1.PolarAxes.LastRadialAxisTextFontFile = ''
tTKSphereFromPoint4Display_1.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# show data from pythonCalculator5
pythonCalculator5Display = Show(pythonCalculator5, renderView6)

# trace defaults for the display properties.
pythonCalculator5Display.Representation = 'Surface'
pythonCalculator5Display.ColorArrayName = ['POINTS', 'simplifiedGauss']
pythonCalculator5Display.LookupTable = simplifiedGaussLUT
pythonCalculator5Display.OSPRayScaleArray = 'CriticalType'
pythonCalculator5Display.OSPRayScaleFunction = 'PiecewiseFunction'
pythonCalculator5Display.SelectOrientationVectors = 'CriticalType'
pythonCalculator5Display.ScaleFactor = 0.41993169784545903
pythonCalculator5Display.SelectScaleArray = 'CriticalType'
pythonCalculator5Display.GlyphType = 'Arrow'
pythonCalculator5Display.GlyphTableIndexArray = 'CriticalType'
pythonCalculator5Display.GaussianRadius = 0.02099658489227295
pythonCalculator5Display.SetScaleArray = ['POINTS', 'CriticalType']
pythonCalculator5Display.ScaleTransferFunction = 'PiecewiseFunction'
pythonCalculator5Display.OpacityArray = ['POINTS', 'CriticalType']
pythonCalculator5Display.OpacityTransferFunction = 'PiecewiseFunction'
pythonCalculator5Display.DataAxesGrid = 'GridAxesRepresentation'
pythonCalculator5Display.SelectionCellLabelFontFile = ''
pythonCalculator5Display.SelectionPointLabelFontFile = ''
pythonCalculator5Display.PolarAxes = 'PolarAxesRepresentation'

# init the 'GridAxesRepresentation' selected for 'DataAxesGrid'
pythonCalculator5Display.DataAxesGrid.XTitleFontFile = ''
pythonCalculator5Display.DataAxesGrid.YTitleFontFile = ''
pythonCalculator5Display.DataAxesGrid.ZTitleFontFile = ''
pythonCalculator5Display.DataAxesGrid.XLabelFontFile = ''
pythonCalculator5Display.DataAxesGrid.YLabelFontFile = ''
pythonCalculator5Display.DataAxesGrid.ZLabelFontFile = ''

# init the 'PolarAxesRepresentation' selected for 'PolarAxes'
pythonCalculator5Display.PolarAxes.PolarAxisTitleFontFile = ''
pythonCalculator5Display.PolarAxes.PolarAxisLabelFontFile = ''
pythonCalculator5Display.PolarAxes.LastRadialAxisTextFontFile = ''
pythonCalculator5Display.PolarAxes.SecondaryRadialAxesTextFontFile = ''

# setup the color legend parameters for each legend in this view

# get color legend/bar for simplifiedGaussLUT in view renderView6
simplifiedGaussLUTColorBar_1 = GetScalarBar(simplifiedGaussLUT, renderView6)
simplifiedGaussLUTColorBar_1.Title = 'simplifiedGauss'
simplifiedGaussLUTColorBar_1.ComponentTitle = ''
simplifiedGaussLUTColorBar_1.TitleFontFile = ''
simplifiedGaussLUTColorBar_1.LabelFontFile = ''

# set color bar visibility
simplifiedGaussLUTColorBar_1.Visibility = 1

# show color legend
programmableFilter2Display_1.SetScalarBarVisibility(renderView6, True)

# show color legend
tTKScalarFieldCriticalPoints2Display.SetScalarBarVisibility(renderView6, True)

# hide data in view
Hide(tTKScalarFieldCriticalPoints2, renderView6)

# show color legend
tTKSphereFromPoint4Display_1.SetScalarBarVisibility(renderView6, True)

# hide data in view
Hide(tTKSphereFromPoint4, renderView6)

# show color legend
pythonCalculator5Display.SetScalarBarVisibility(renderView6, True)

# ----------------------------------------------------------------
# setup color maps and opacity mapes used in the visualization
# note: the Get..() functions create a new object, if needed
# ----------------------------------------------------------------

# get opacity transfer function/opacity map for 'gaussian0'
gaussian0PWF = GetOpacityTransferFunction('gaussian0')
gaussian0PWF.Points = [0.006329715251922607, 0.0, 0.5, 0.0, 0.9998999834060669, 1.0, 0.5, 0.0]
gaussian0PWF.ScalarRangeInitialized = 1

# get opacity transfer function/opacity map for 'CriticalType'
criticalTypePWF = GetOpacityTransferFunction('CriticalType')
criticalTypePWF.Points = [0.0, 0.0, 0.5, 0.0, 3.0, 1.0, 0.5, 0.0]
criticalTypePWF.ScalarRangeInitialized = 1

# ----------------------------------------------------------------
# finally, restore active source
SetActiveSource(contour1)
# ----------------------------------------------------------------