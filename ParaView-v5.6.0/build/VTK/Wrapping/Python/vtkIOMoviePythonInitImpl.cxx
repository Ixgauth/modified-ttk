// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGenericMovieWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkOggTheoraWriter(PyObject *); }

static PyMethodDef PyvtkIOMoviePython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkIOMoviePython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOMoviePython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOMoviePython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOMoviePython(const char *); }

PyObject *real_initvtkIOMoviePython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkIOMoviePython_Module);
#else

  PyObject *m = Py_InitModule("vtkIOMoviePython",
                              PyvtkIOMoviePython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOMoviePython");
  }
  PyVTKAddFile_vtkGenericMovieWriter(d);
  PyVTKAddFile_vtkOggTheoraWriter(d);

  return m;
}
