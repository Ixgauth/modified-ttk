// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkIOAMRPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkIOAMRPython(); }

PyObject *PyInit_vtkIOAMRPython()
{
  return real_initvtkIOAMRPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkIOAMRPython(); }

void initvtkIOAMRPython()
{
  real_initvtkIOAMRPython(nullptr);
}
#endif
