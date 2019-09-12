/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkFiltersModelingPython(const char *modulename);

void initvtkFiltersModelingPython()
{
  static const char modulename[] = "vtkFiltersModelingPython";
  real_initvtkFiltersModelingPython(modulename);
}
#endif

extern void vtkAdaptiveSubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkBandedPolyDataContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkButterflySubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkContourLoopExtraction_Init(vtkClientServerInterpreter* csi);
extern void vtkCookieCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkDijkstraGraphGeodesicPath_Init(vtkClientServerInterpreter* csi);
extern void vtkDijkstraImageGeodesicPath_Init(vtkClientServerInterpreter* csi);
extern void vtkFitToHeightMapFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkFillHolesFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGeodesicPath_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphGeodesicPath_Init(vtkClientServerInterpreter* csi);
extern void vtkLinearExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkLinearSubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkLoopSubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkOutlineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataPointSampler_Init(vtkClientServerInterpreter* csi);
extern void vtkProjectedTexture_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadRotationalExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRibbonFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRotationalExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRuledSurfaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSectorSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectEnclosedPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkSpherePuzzleArrows_Init(vtkClientServerInterpreter* csi);
extern void vtkSpherePuzzle_Init(vtkClientServerInterpreter* csi);
extern void vtkSubdivideTetra_Init(vtkClientServerInterpreter* csi);
extern void vtkTrimmedExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeOfRevolutionFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersModelingCS_Initialize(
  vtkClientServerInterpreter *csi)
{
  // silence unreferenced var warning.
  (void) csi;

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkFiltersModelingPython", initvtkFiltersModelingPython);
    }

  csi->Load("vtkFiltersModeling");
#endif

  vtkAdaptiveSubdivisionFilter_Init(csi);
  vtkBandedPolyDataContourFilter_Init(csi);
  vtkButterflySubdivisionFilter_Init(csi);
  vtkContourLoopExtraction_Init(csi);
  vtkCookieCutter_Init(csi);
  vtkDijkstraGraphGeodesicPath_Init(csi);
  vtkDijkstraImageGeodesicPath_Init(csi);
  vtkFitToHeightMapFilter_Init(csi);
  vtkFillHolesFilter_Init(csi);
  vtkGeodesicPath_Init(csi);
  vtkGraphGeodesicPath_Init(csi);
  vtkLinearExtrusionFilter_Init(csi);
  vtkLinearSubdivisionFilter_Init(csi);
  vtkLoopSubdivisionFilter_Init(csi);
  vtkOutlineFilter_Init(csi);
  vtkPolyDataPointSampler_Init(csi);
  vtkProjectedTexture_Init(csi);
  vtkQuadRotationalExtrusionFilter_Init(csi);
  vtkRibbonFilter_Init(csi);
  vtkRotationalExtrusionFilter_Init(csi);
  vtkRuledSurfaceFilter_Init(csi);
  vtkSectorSource_Init(csi);
  vtkSelectEnclosedPoints_Init(csi);
  vtkSelectPolyData_Init(csi);
  vtkSpherePuzzleArrows_Init(csi);
  vtkSpherePuzzle_Init(csi);
  vtkSubdivideTetra_Init(csi);
  vtkTrimmedExtrusionFilter_Init(csi);
  vtkVolumeOfRevolutionFilter_Init(csi);

}
