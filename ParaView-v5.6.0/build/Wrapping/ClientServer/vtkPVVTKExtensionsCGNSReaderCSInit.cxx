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
extern "C" void real_initvtkPVVTKExtensionsCGNSReaderPython(const char *modulename);

void initvtkPVVTKExtensionsCGNSReaderPython()
{
  static const char modulename[] = "vtkPVVTKExtensionsCGNSReaderPython";
  real_initvtkPVVTKExtensionsCGNSReaderPython(modulename);
}
#endif

extern void vtkCGNSFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkCGNSReader_Init(vtkClientServerInterpreter* csi);
extern void vtkCGNSSubsetInclusionLattice_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVVTKExtensionsCGNSReaderCS_Initialize(
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
    PyImport_AppendInittab("vtkPVVTKExtensionsCGNSReaderPython", initvtkPVVTKExtensionsCGNSReaderPython);
    }

  csi->Load("vtkPVVTKExtensionsCGNSReader");
#endif

  vtkCGNSFileSeriesReader_Init(csi);
  vtkCGNSReader_Init(csi);
  vtkCGNSSubsetInclusionLattice_Init(csi);

}
