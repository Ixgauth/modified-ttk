// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBooleanTexture(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCheckerboardSplatter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFastSplatter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGaussianSplatter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageCursor3D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageRectilinearWipe(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageToPoints(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPointLoad(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSampleFunction(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkShepardMethod(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSliceCubes(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSurfaceReconstructionFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTriangularTexture(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVoxelModeller(PyObject *); }

static PyMethodDef PyvtkImagingHybridPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkImagingHybridPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingHybridPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingHybridPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingHybridPython(const char *); }

PyObject *real_initvtkImagingHybridPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkImagingHybridPython_Module);
#else

  PyObject *m = Py_InitModule("vtkImagingHybridPython",
                              PyvtkImagingHybridPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingHybridPython");
  }
  PyVTKAddFile_vtkBooleanTexture(d);
  PyVTKAddFile_vtkCheckerboardSplatter(d);
  PyVTKAddFile_vtkFastSplatter(d);
  PyVTKAddFile_vtkGaussianSplatter(d);
  PyVTKAddFile_vtkImageCursor3D(d);
  PyVTKAddFile_vtkImageRectilinearWipe(d);
  PyVTKAddFile_vtkImageToPoints(d);
  PyVTKAddFile_vtkPointLoad(d);
  PyVTKAddFile_vtkSampleFunction(d);
  PyVTKAddFile_vtkShepardMethod(d);
  PyVTKAddFile_vtkSliceCubes(d);
  PyVTKAddFile_vtkSurfaceReconstructionFilter(d);
  PyVTKAddFile_vtkTriangularTexture(d);
  PyVTKAddFile_vtkVoxelModeller(d);

  return m;
}

