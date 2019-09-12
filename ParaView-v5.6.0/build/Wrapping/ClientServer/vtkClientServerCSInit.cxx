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
extern "C" void real_initvtkClientServerPython(const char *modulename);

void initvtkClientServerPython()
{
  static const char modulename[] = "vtkClientServerPython";
  real_initvtkClientServerPython(modulename);
}
#endif

extern void vtkClientServerID_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerID_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerInterpreter_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerInterpreter_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerStream_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerStream_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkClientServerCS_Initialize(
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
    PyImport_AppendInittab("vtkClientServerPython", initvtkClientServerPython);
    }

  csi->Load("vtkClientServer");
#endif

  vtkClientServerID_Init(csi);
  vtkClientServerID_Init(csi);
  vtkClientServerInterpreter_Init(csi);
  vtkClientServerInterpreter_Init(csi);
  vtkClientServerStream_Init(csi);
  vtkClientServerStream_Init(csi);

}
