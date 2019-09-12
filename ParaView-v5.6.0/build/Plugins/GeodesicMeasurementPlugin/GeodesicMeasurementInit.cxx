/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
#define NO_PYTHON_BINDINGS_AVAILABLE
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
extern "C" void real_initGeodesicMeasurementPython(const char *modulename);

void initGeodesicMeasurementPython()
{
  static const char modulename[] = "GeodesicMeasurementPython";
  real_initGeodesicMeasurementPython(modulename);
}
#endif

extern void vtkPolyDataGeodesicDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkFastMarchingGeodesicDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkFastMarchingGeodesicPath_Init(vtkClientServerInterpreter* csi);
extern void vtkGeodesicsBetweenPoints_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT GeodesicMeasurement_Initialize(
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
    PyImport_AppendInittab("GeodesicMeasurementPython", initGeodesicMeasurementPython);
    }

  csi->Load("GeodesicMeasurement");
#endif

  vtkPolyDataGeodesicDistance_Init(csi);
  vtkFastMarchingGeodesicDistance_Init(csi);
  vtkFastMarchingGeodesicPath_Init(csi);
  vtkGeodesicsBetweenPoints_Init(csi);

}
