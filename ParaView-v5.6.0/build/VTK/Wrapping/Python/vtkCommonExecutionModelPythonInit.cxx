// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkCommonExecutionModelPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkCommonExecutionModelPython(); }

PyObject *PyInit_vtkCommonExecutionModelPython()
{
  return real_initvtkCommonExecutionModelPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkCommonExecutionModelPython(); }

void initvtkCommonExecutionModelPython()
{
  real_initvtkCommonExecutionModelPython(nullptr);
}
#endif
