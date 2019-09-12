// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCPPythonScriptPipeline(PyObject *); }

static PyMethodDef PyvtkPVPythonCatalystPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkPVPythonCatalystPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkPVPythonCatalystPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkPVPythonCatalystPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkPVPythonCatalystPython(const char *); }

PyObject *real_initvtkPVPythonCatalystPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkPVPythonCatalystPython_Module);
#else

  PyObject *m = Py_InitModule("vtkPVPythonCatalystPython",
                              PyvtkPVPythonCatalystPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkPVPythonCatalystPython");
  }
  PyVTKAddFile_vtkCPPythonScriptPipeline(d);

  return m;
}
