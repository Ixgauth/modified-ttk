// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRCutPlane(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRGaussianPulseSource(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRResampleFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRSliceFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAMRToMultiBlockFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageToAMR(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParallelAMRUtilities(PyObject *); }

static PyMethodDef PyvtkFiltersAMRPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkFiltersAMRPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersAMRPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersAMRPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersAMRPython(const char *); }

PyObject *real_initvtkFiltersAMRPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkFiltersAMRPython_Module);
#else

  PyObject *m = Py_InitModule("vtkFiltersAMRPython",
                              PyvtkFiltersAMRPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersAMRPython");
  }
  PyVTKAddFile_vtkAMRCutPlane(d);
  PyVTKAddFile_vtkAMRGaussianPulseSource(d);
  PyVTKAddFile_vtkAMRResampleFilter(d);
  PyVTKAddFile_vtkAMRSliceFilter(d);
  PyVTKAddFile_vtkAMRToMultiBlockFilter(d);
  PyVTKAddFile_vtkImageToAMR(d);
  PyVTKAddFile_vtkParallelAMRUtilities(d);

  return m;
}
