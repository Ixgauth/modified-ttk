// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkFiltersGeneralPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkFiltersGeneralPython(); }

PyObject *PyInit_vtkFiltersGeneralPython()
{
  return real_initvtkFiltersGeneralPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkFiltersGeneralPython(); }

void initvtkFiltersGeneralPython()
{
  real_initvtkFiltersGeneralPython(nullptr);
}
#endif
