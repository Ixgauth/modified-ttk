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
extern "C" void real_initvtkIOExportOpenGL2Python(const char *modulename);

void initvtkIOExportOpenGL2Python()
{
  static const char modulename[] = "vtkIOExportOpenGL2Python";
  real_initvtkIOExportOpenGL2Python(modulename);
}
#endif

extern void vtkOpenGLGL2PSExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkIOExportOpenGL2ObjectFactory_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOExportOpenGL2CS_Initialize(
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
    PyImport_AppendInittab("vtkIOExportOpenGL2Python", initvtkIOExportOpenGL2Python);
    }

  csi->Load("vtkIOExportOpenGL2");
#endif

  vtkOpenGLGL2PSExporter_Init(csi);
  vtkIOExportOpenGL2ObjectFactory_Init(csi);

}
