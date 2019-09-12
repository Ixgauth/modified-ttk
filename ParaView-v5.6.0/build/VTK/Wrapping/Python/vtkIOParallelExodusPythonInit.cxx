// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkIOParallelExodusPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkIOParallelExodusPython(); }

PyObject *PyInit_vtkIOParallelExodusPython()
{
  return real_initvtkIOParallelExodusPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkIOParallelExodusPython(); }

void initvtkIOParallelExodusPython()
{
  real_initvtkIOParallelExodusPython(nullptr);
}
#endif