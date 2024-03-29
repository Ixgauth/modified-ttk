// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMultiBaselineRegressionTest(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRegressionTestImage(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTesting(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTestingInteractor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTestingObjectFactory(PyObject *); }

static PyMethodDef PyvtkTestingRenderingPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkTestingRenderingPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkTestingRenderingPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkTestingRenderingPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkTestingRenderingPython(const char *); }

PyObject *real_initvtkTestingRenderingPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkTestingRenderingPython_Module);
#else

  PyObject *m = Py_InitModule("vtkTestingRenderingPython",
                              PyvtkTestingRenderingPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkTestingRenderingPython");
  }
  PyVTKAddFile_vtkMultiBaselineRegressionTest(d);
  PyVTKAddFile_vtkRegressionTestImage(d);
  PyVTKAddFile_vtkTesting(d);
  PyVTKAddFile_vtkTestingInteractor(d);
  PyVTKAddFile_vtkTestingObjectFactory(d);

  return m;
}

