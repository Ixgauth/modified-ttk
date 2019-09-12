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
extern "C" void real_initvtkImagingMathPython(const char *modulename);

void initvtkImagingMathPython()
{
  static const char modulename[] = "vtkImagingMathPython";
  real_initvtkImagingMathPython(modulename);
}
#endif

extern void vtkImageDivergence_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDotProduct_Init(vtkClientServerInterpreter* csi);
extern void vtkImageLogarithmicScale_Init(vtkClientServerInterpreter* csi);
extern void vtkImageLogic_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMagnitude_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMaskBits_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMathematics_Init(vtkClientServerInterpreter* csi);
extern void vtkImageWeightedSum_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingMathCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingMathPython", initvtkImagingMathPython);
    }

  csi->Load("vtkImagingMath");
#endif

  vtkImageDivergence_Init(csi);
  vtkImageDotProduct_Init(csi);
  vtkImageLogarithmicScale_Init(csi);
  vtkImageLogic_Init(csi);
  vtkImageMagnitude_Init(csi);
  vtkImageMaskBits_Init(csi);
  vtkImageMathematics_Init(csi);
  vtkImageWeightedSum_Init(csi);

}
