// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkRenderingContext2DPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkRenderingContext2DPython(); }

PyObject *PyInit_vtkRenderingContext2DPython()
{
  return real_initvtkRenderingContext2DPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkRenderingContext2DPython(); }

void initvtkRenderingContext2DPython()
{
  real_initvtkRenderingContext2DPython(nullptr);
}
#endif