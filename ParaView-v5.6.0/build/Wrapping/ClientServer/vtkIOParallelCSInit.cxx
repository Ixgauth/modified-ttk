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
extern "C" void real_initvtkIOParallelPython(const char *modulename);

void initvtkIOParallelPython()
{
  static const char modulename[] = "vtkIOParallelPython";
  real_initvtkIOParallelPython(modulename);
}
#endif

extern void vtkEnSightWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockPLOT3DReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockPLOT3DReaderInternals_Init(vtkClientServerInterpreter* csi);
extern void vtkPlot3DMetaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPChacoReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPDataSetReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPDataSetWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPOpenFOAMReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPSLACReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOParallelCS_Initialize(
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
    PyImport_AppendInittab("vtkIOParallelPython", initvtkIOParallelPython);
    }

  csi->Load("vtkIOParallel");
#endif

  vtkEnSightWriter_Init(csi);
  vtkMultiBlockPLOT3DReader_Init(csi);
  vtkMultiBlockPLOT3DReaderInternals_Init(csi);
  vtkPlot3DMetaReader_Init(csi);
  vtkPChacoReader_Init(csi);
  vtkPDataSetReader_Init(csi);
  vtkPDataSetWriter_Init(csi);
  vtkPImageWriter_Init(csi);
  vtkPOpenFOAMReader_Init(csi);
  vtkPSLACReader_Init(csi);

}
