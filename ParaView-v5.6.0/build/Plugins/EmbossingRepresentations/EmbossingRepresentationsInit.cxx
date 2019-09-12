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
extern "C" void real_initEmbossingRepresentationsPython(const char *modulename);

void initEmbossingRepresentationsPython()
{
  static const char modulename[] = "EmbossingRepresentationsPython";
  real_initEmbossingRepresentationsPython(modulename);
}
#endif

extern void vtkBumpMapRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkExtrusionRepresentation_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT EmbossingRepresentations_Initialize(
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
    PyImport_AppendInittab("EmbossingRepresentationsPython", initEmbossingRepresentationsPython);
    }

  csi->Load("EmbossingRepresentations");
#endif

  vtkBumpMapRepresentation_Init(csi);
  vtkExtrusionRepresentation_Init(csi);

}
