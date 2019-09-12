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
extern "C" void real_initDigitalRockPhysicsPython(const char *modulename);

void initDigitalRockPhysicsPython()
{
  static const char modulename[] = "DigitalRockPhysicsPython";
  real_initDigitalRockPhysicsPython(modulename);
}
#endif

extern void vtkPMaterialClusterAnalysisFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPMaterialClusterExplodeFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT DigitalRockPhysics_Initialize(
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
    PyImport_AppendInittab("DigitalRockPhysicsPython", initDigitalRockPhysicsPython);
    }

  csi->Load("DigitalRockPhysics");
#endif

  vtkPMaterialClusterAnalysisFilter_Init(csi);
  vtkPMaterialClusterExplodeFilter_Init(csi);

}
