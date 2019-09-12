// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerID(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerID(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerInterpreter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerInterpreter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerStream(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkClientServerStream(PyObject *); }

static PyMethodDef PyvtkClientServerPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkClientServerPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkClientServerPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkClientServerPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkClientServerPython(const char *); }

PyObject *real_initvtkClientServerPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkClientServerPython_Module);
#else

  PyObject *m = Py_InitModule("vtkClientServerPython",
                              PyvtkClientServerPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkClientServerPython");
  }
  PyVTKAddFile_vtkClientServerID(d);
  PyVTKAddFile_vtkClientServerID(d);
  PyVTKAddFile_vtkClientServerInterpreter(d);
  PyVTKAddFile_vtkClientServerInterpreter(d);
  PyVTKAddFile_vtkClientServerStream(d);
  PyVTKAddFile_vtkClientServerStream(d);

  return m;
}
