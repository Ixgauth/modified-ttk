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
extern "C" void real_initvtkIOLSDynaPython(const char *modulename);

void initvtkIOLSDynaPython()
{
  static const char modulename[] = "vtkIOLSDynaPython";
  real_initvtkIOLSDynaPython(modulename);
}
#endif

extern void vtkLSDynaPart_Init(vtkClientServerInterpreter* csi);
extern void vtkLSDynaPartCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkLSDynaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkLSDynaSummaryParser_Init(vtkClientServerInterpreter* csi);
extern void LSDynaMetaData_Init(vtkClientServerInterpreter* csi);
extern void LSDynaFamily_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOLSDynaCS_Initialize(
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
    PyImport_AppendInittab("vtkIOLSDynaPython", initvtkIOLSDynaPython);
    }

  csi->Load("vtkIOLSDyna");
#endif

  vtkLSDynaPart_Init(csi);
  vtkLSDynaPartCollection_Init(csi);
  vtkLSDynaReader_Init(csi);
  vtkLSDynaSummaryParser_Init(csi);
  LSDynaMetaData_Init(csi);
  LSDynaFamily_Init(csi);

}
