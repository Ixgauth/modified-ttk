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
extern "C" void real_initvtkFiltersHyperTreePython(const char *modulename);

void initvtkFiltersHyperTreePython()
{
  static const char modulename[] = "vtkFiltersHyperTreePython";
  real_initvtkFiltersHyperTreePython(modulename);
}
#endif

extern void vtkHyperTreeGridAxisClip_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridAxisCut_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridAxisReflection_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridCellCenters_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridContour_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridDepthLimiter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridPlaneCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridToUnstructuredGrid_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersHyperTreeCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersHyperTreePython", initvtkFiltersHyperTreePython);
    }

  csi->Load("vtkFiltersHyperTree");
#endif

  vtkHyperTreeGridAxisClip_Init(csi);
  vtkHyperTreeGridAxisCut_Init(csi);
  vtkHyperTreeGridAxisReflection_Init(csi);
  vtkHyperTreeGridCellCenters_Init(csi);
  vtkHyperTreeGridContour_Init(csi);
  vtkHyperTreeGridDepthLimiter_Init(csi);
  vtkHyperTreeGridGeometry_Init(csi);
  vtkHyperTreeGridPlaneCutter_Init(csi);
  vtkHyperTreeGridThreshold_Init(csi);
  vtkHyperTreeGridToUnstructuredGrid_Init(csi);

}
