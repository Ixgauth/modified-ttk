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
extern "C" void real_initvtkPVCinemaReaderPython(const char *modulename);

void initvtkPVCinemaReaderPython()
{
  static const char modulename[] = "vtkPVCinemaReaderPython";
  real_initvtkPVCinemaReaderPython(modulename);
}
#endif

extern void vtkSMCinemaDatabaseImporter_Init(vtkClientServerInterpreter* csi);
extern void vtkCinemaDatabase_Init(vtkClientServerInterpreter* csi);
extern void vtkCinemaDatabaseReader_Init(vtkClientServerInterpreter* csi);
extern void vtkCinemaLayerMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkCinemaLayerRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCinemaDatabaseInformation_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVCinemaReaderCS_Initialize(
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
    PyImport_AppendInittab("vtkPVCinemaReaderPython", initvtkPVCinemaReaderPython);
    }

  csi->Load("vtkPVCinemaReader");
#endif

  vtkSMCinemaDatabaseImporter_Init(csi);
  vtkCinemaDatabase_Init(csi);
  vtkCinemaDatabaseReader_Init(csi);
  vtkCinemaLayerMapper_Init(csi);
  vtkCinemaLayerRepresentation_Init(csi);
  vtkPVCinemaDatabaseInformation_Init(csi);

}
