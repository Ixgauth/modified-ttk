// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageHSIToRGB(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageHSVToRGB(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageYIQToRGB(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageLuminance(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMapToRGBA(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageQuantizeRGBToIndex(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRGBToHSI(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRGBToHSV(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRGBToYIQ(PyObject *); }

static PyMethodDef PyvtkImagingColorPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkImagingColorPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingColorPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingColorPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingColorPython(const char *); }

PyObject *real_initvtkImagingColorPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkImagingColorPython_Module);
#else

  PyObject *m = Py_InitModule("vtkImagingColorPython",
                              PyvtkImagingColorPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingColorPython");
  }
  PyVTKAddFile_vtkImageHSIToRGB(d);
  PyVTKAddFile_vtkImageHSVToRGB(d);
  PyVTKAddFile_vtkImageYIQToRGB(d);
  PyVTKAddFile_vtkImageLuminance(d);
  PyVTKAddFile_vtkImageMapToRGBA(d);
  PyVTKAddFile_vtkImageMapToWindowLevelColors(d);
  PyVTKAddFile_vtkImageQuantizeRGBToIndex(d);
  PyVTKAddFile_vtkImageRGBToHSI(d);
  PyVTKAddFile_vtkImageRGBToHSV(d);
  PyVTKAddFile_vtkImageRGBToYIQ(d);

  return m;
}

