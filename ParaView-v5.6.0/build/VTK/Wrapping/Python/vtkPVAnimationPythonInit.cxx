// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkPVAnimationPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkPVAnimationPython(); }

PyObject *PyInit_vtkPVAnimationPython()
{
  return real_initvtkPVAnimationPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkPVAnimationPython(); }

void initvtkPVAnimationPython()
{
  real_initvtkPVAnimationPython(nullptr);
}
#endif