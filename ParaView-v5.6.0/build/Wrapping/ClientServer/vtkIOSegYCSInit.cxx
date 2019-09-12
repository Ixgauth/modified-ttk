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
extern "C" void real_initvtkIOSegYPython(const char *modulename);

void initvtkIOSegYPython()
{
  static const char modulename[] = "vtkIOSegYPython";
  real_initvtkIOSegYPython(modulename);
}
#endif

extern void vtkSegYReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSegYIOUtils_Init(vtkClientServerInterpreter* csi);
extern void vtkSegYReaderInternal_Init(vtkClientServerInterpreter* csi);
extern void vtkSegYTraceReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOSegYCS_Initialize(
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
    PyImport_AppendInittab("vtkIOSegYPython", initvtkIOSegYPython);
    }

  csi->Load("vtkIOSegY");
#endif

  vtkSegYReader_Init(csi);
  vtkSegYIOUtils_Init(csi);
  vtkSegYReaderInternal_Init(csi);
  vtkSegYTraceReader_Init(csi);

}
