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
extern "C" void real_initvtkRenderingGL2PSOpenGL2Python(const char *modulename);

void initvtkRenderingGL2PSOpenGL2Python()
{
  static const char modulename[] = "vtkRenderingGL2PSOpenGL2Python";
  real_initvtkRenderingGL2PSOpenGL2Python(modulename);
}
#endif

extern void vtkOpenGLGL2PSHelperImpl_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderingGL2PSOpenGL2ObjectFactory_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingGL2PSOpenGL2CS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingGL2PSOpenGL2Python", initvtkRenderingGL2PSOpenGL2Python);
    }

  csi->Load("vtkRenderingGL2PSOpenGL2");
#endif

  vtkOpenGLGL2PSHelperImpl_Init(csi);
  vtkRenderingGL2PSOpenGL2ObjectFactory_Init(csi);

}
