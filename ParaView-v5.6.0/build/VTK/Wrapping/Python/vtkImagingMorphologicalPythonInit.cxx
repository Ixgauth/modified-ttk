// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkImagingMorphologicalPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkImagingMorphologicalPython(); }

PyObject *PyInit_vtkImagingMorphologicalPython()
{
  return real_initvtkImagingMorphologicalPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkImagingMorphologicalPython(); }

void initvtkImagingMorphologicalPython()
{
  real_initvtkImagingMorphologicalPython(nullptr);
}
#endif
