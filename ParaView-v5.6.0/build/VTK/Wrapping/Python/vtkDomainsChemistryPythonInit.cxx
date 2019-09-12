// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkDomainsChemistryPython(const char *); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkDomainsChemistryPython(); }

PyObject *PyInit_vtkDomainsChemistryPython()
{
  return real_initvtkDomainsChemistryPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkDomainsChemistryPython(); }

void initvtkDomainsChemistryPython()
{
  real_initvtkDomainsChemistryPython(nullptr);
}
#endif
