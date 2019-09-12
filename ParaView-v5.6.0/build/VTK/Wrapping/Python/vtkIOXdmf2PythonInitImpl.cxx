// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSILBuilder(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXdmfDataArray(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXdmfHeavyData(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXdmfReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXdmfReaderInternal(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXdmfWriter(PyObject *); }

static PyMethodDef PyvtkIOXdmf2Python_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkIOXdmf2Python_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOXdmf2Python", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOXdmf2Python_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOXdmf2Python(const char *); }

PyObject *real_initvtkIOXdmf2Python(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkIOXdmf2Python_Module);
#else

  PyObject *m = Py_InitModule("vtkIOXdmf2Python",
                              PyvtkIOXdmf2Python_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOXdmf2Python");
  }
  PyVTKAddFile_vtkSILBuilder(d);
  PyVTKAddFile_vtkXdmfDataArray(d);
  PyVTKAddFile_vtkXdmfHeavyData(d);
  PyVTKAddFile_vtkXdmfReader(d);
  PyVTKAddFile_vtkXdmfReaderInternal(d);
  PyVTKAddFile_vtkXdmfWriter(d);

  return m;
}
