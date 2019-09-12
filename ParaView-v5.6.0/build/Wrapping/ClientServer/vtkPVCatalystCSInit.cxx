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
extern "C" void real_initvtkPVCatalystPython(const char *modulename);

void initvtkPVCatalystPython()
{
  static const char modulename[] = "vtkPVCatalystPython";
  real_initvtkPVCatalystPython(modulename);
}
#endif

extern void CAdaptorAPI_Init(vtkClientServerInterpreter* csi);
extern void vtkCPAdaptorAPI_Init(vtkClientServerInterpreter* csi);
extern void vtkCPCxxHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkCPDataDescription_Init(vtkClientServerInterpreter* csi);
extern void vtkCPInputDataDescription_Init(vtkClientServerInterpreter* csi);
extern void vtkCPPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkCPProcessor_Init(vtkClientServerInterpreter* csi);
extern void vtkCPXMLPWriterPipeline_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVCatalystCS_Initialize(
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
    PyImport_AppendInittab("vtkPVCatalystPython", initvtkPVCatalystPython);
    }

  csi->Load("vtkPVCatalyst");
#endif

  CAdaptorAPI_Init(csi);
  vtkCPAdaptorAPI_Init(csi);
  vtkCPCxxHelper_Init(csi);
  vtkCPDataDescription_Init(csi);
  vtkCPInputDataDescription_Init(csi);
  vtkCPPipeline_Init(csi);
  vtkCPProcessor_Init(csi);
  vtkCPXMLPWriterPipeline_Init(csi);

}
