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
extern "C" void real_initvtkAcceleratorsVTKmPython(const char *modulename);

void initvtkAcceleratorsVTKmPython()
{
  static const char modulename[] = "vtkAcceleratorsVTKmPython";
  real_initvtkAcceleratorsVTKmPython(modulename);
}
#endif

extern void vtkmAverageToCells_Init(vtkClientServerInterpreter* csi);
extern void vtkmAverageToPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkmCleanGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkmClip_Init(vtkClientServerInterpreter* csi);
extern void vtkmContour_Init(vtkClientServerInterpreter* csi);
extern void vtkmExternalFaces_Init(vtkClientServerInterpreter* csi);
extern void vtkmExtractVOI_Init(vtkClientServerInterpreter* csi);
extern void vtkmGradient_Init(vtkClientServerInterpreter* csi);
extern void vtkmHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkmLevelOfDetail_Init(vtkClientServerInterpreter* csi);
extern void vtkmNDHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkmPointElevation_Init(vtkClientServerInterpreter* csi);
extern void vtkmPolyDataNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkmProbe_Init(vtkClientServerInterpreter* csi);
extern void vtkmThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkmTriangleMeshPointNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkmWarpScalar_Init(vtkClientServerInterpreter* csi);
extern void vtkmWarpVector_Init(vtkClientServerInterpreter* csi);
extern void vtkmAverageToCells_Init(vtkClientServerInterpreter* csi);
extern void vtkmAverageToPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkmCellSetExplicit_Init(vtkClientServerInterpreter* csi);
extern void vtkmCellSetSingleType_Init(vtkClientServerInterpreter* csi);
extern void vtkmCleanGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkmClip_Init(vtkClientServerInterpreter* csi);
extern void vtkmConnectivityExec_Init(vtkClientServerInterpreter* csi);
extern void vtkmContour_Init(vtkClientServerInterpreter* csi);
extern void vtkmExternalFaces_Init(vtkClientServerInterpreter* csi);
extern void vtkmExtractVOI_Init(vtkClientServerInterpreter* csi);
extern void vtkmGradient_Init(vtkClientServerInterpreter* csi);
extern void vtkmHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkmLevelOfDetail_Init(vtkClientServerInterpreter* csi);
extern void vtkmNDHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkmPointElevation_Init(vtkClientServerInterpreter* csi);
extern void vtkmPolyDataNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkmProbe_Init(vtkClientServerInterpreter* csi);
extern void vtkmThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkmTriangleMeshPointNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkmWarpScalar_Init(vtkClientServerInterpreter* csi);
extern void vtkmWarpVector_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkAcceleratorsVTKmCS_Initialize(
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
    PyImport_AppendInittab("vtkAcceleratorsVTKmPython", initvtkAcceleratorsVTKmPython);
    }

  csi->Load("vtkAcceleratorsVTKm");
#endif

  vtkmAverageToCells_Init(csi);
  vtkmAverageToPoints_Init(csi);
  vtkmCleanGrid_Init(csi);
  vtkmClip_Init(csi);
  vtkmContour_Init(csi);
  vtkmExternalFaces_Init(csi);
  vtkmExtractVOI_Init(csi);
  vtkmGradient_Init(csi);
  vtkmHistogram_Init(csi);
  vtkmLevelOfDetail_Init(csi);
  vtkmNDHistogram_Init(csi);
  vtkmPointElevation_Init(csi);
  vtkmPolyDataNormals_Init(csi);
  vtkmProbe_Init(csi);
  vtkmThreshold_Init(csi);
  vtkmTriangleMeshPointNormals_Init(csi);
  vtkmWarpScalar_Init(csi);
  vtkmWarpVector_Init(csi);
  vtkmAverageToCells_Init(csi);
  vtkmAverageToPoints_Init(csi);
  vtkmCellSetExplicit_Init(csi);
  vtkmCellSetSingleType_Init(csi);
  vtkmCleanGrid_Init(csi);
  vtkmClip_Init(csi);
  vtkmConnectivityExec_Init(csi);
  vtkmContour_Init(csi);
  vtkmExternalFaces_Init(csi);
  vtkmExtractVOI_Init(csi);
  vtkmGradient_Init(csi);
  vtkmHistogram_Init(csi);
  vtkmLevelOfDetail_Init(csi);
  vtkmNDHistogram_Init(csi);
  vtkmPointElevation_Init(csi);
  vtkmPolyDataNormals_Init(csi);
  vtkmProbe_Init(csi);
  vtkmThreshold_Init(csi);
  vtkmTriangleMeshPointNormals_Init(csi);
  vtkmWarpScalar_Init(csi);
  vtkmWarpVector_Init(csi);

}
