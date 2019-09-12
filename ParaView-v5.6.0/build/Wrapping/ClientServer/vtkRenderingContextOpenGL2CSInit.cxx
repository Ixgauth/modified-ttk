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
extern "C" void real_initvtkRenderingContextOpenGL2Python(const char *modulename);

void initvtkRenderingContextOpenGL2Python()
{
  static const char modulename[] = "vtkRenderingContextOpenGL2Python";
  real_initvtkRenderingContextOpenGL2Python(modulename);
}
#endif

extern void vtkOpenGLContextActor_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLContextBufferId_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLContextDevice2D_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLContextDevice3D_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLPropItem_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderingContextOpenGL2ObjectFactory_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingContextOpenGL2CS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingContextOpenGL2Python", initvtkRenderingContextOpenGL2Python);
    }

  csi->Load("vtkRenderingContextOpenGL2");
#endif

  vtkOpenGLContextActor_Init(csi);
  vtkOpenGLContextBufferId_Init(csi);
  vtkOpenGLContextDevice2D_Init(csi);
  vtkOpenGLContextDevice3D_Init(csi);
  vtkOpenGLPropItem_Init(csi);
  vtkRenderingContextOpenGL2ObjectFactory_Init(csi);

}
