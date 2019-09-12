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
extern "C" void real_initAnalyzeNIfTIIOPython(const char *modulename);

void initAnalyzeNIfTIIOPython()
{
  static const char modulename[] = "AnalyzeNIfTIIOPython";
  real_initAnalyzeNIfTIIOPython(modulename);
}
#endif

extern void vtkAnalyzeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAnalyzeWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkNIfTIReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNIfTIWriter_Init(vtkClientServerInterpreter* csi);
extern void vtknifti1_io_Init(vtkClientServerInterpreter* csi);
extern void vtkznzlib_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT AnalyzeNIfTIIO_Initialize(
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
    PyImport_AppendInittab("AnalyzeNIfTIIOPython", initAnalyzeNIfTIIOPython);
    }

  csi->Load("AnalyzeNIfTIIO");
#endif

  vtkAnalyzeReader_Init(csi);
  vtkAnalyzeWriter_Init(csi);
  vtkNIfTIReader_Init(csi);
  vtkNIfTIWriter_Init(csi);
  vtknifti1_io_Init(csi);
  vtkznzlib_Init(csi);

}
