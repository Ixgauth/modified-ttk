// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkDomainsChemistryOpenGL2Python(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkDomainsChemistryOpenGL2Python(); }

PyObject *PyInit_vtkDomainsChemistryOpenGL2Python()
{
  return real_initvtkDomainsChemistryOpenGL2Python(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkDomainsChemistryOpenGL2Python(); }

void initvtkDomainsChemistryOpenGL2Python()
{
  real_initvtkDomainsChemistryOpenGL2Python(nullptr);
}
#endif