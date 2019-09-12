// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractVOI(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageAppendComponents(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageBlend(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageCacheFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageCast(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageChangeInformation(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageClip(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageConstantPad(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDataStreamer(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDecomposeFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDifference(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageExtractComponents(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageFlip(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageIterateFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMagnify(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMapToColors(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMask(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageMirrorPad(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImagePadFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImagePermute(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImagePointDataIterator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImagePointIterator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageResample(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageReslice(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageResliceToColors(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageShiftScale(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageShrink3D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageStencilIterator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageThreshold(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageTranslateExtent(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageWrapPad(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRTAnalyticSource(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageResize(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageBSplineCoefficients(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageStencilData(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageStencilAlgorithm(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAbstractImageInterpolator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageBSplineInternals(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageBSplineInterpolator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageSincInterpolator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageInterpolator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageStencilSource(PyObject *); }

static PyMethodDef PyvtkImagingCorePython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkImagingCorePython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingCorePython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingCorePython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingCorePython(const char *); }

PyObject *real_initvtkImagingCorePython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkImagingCorePython_Module);
#else

  PyObject *m = Py_InitModule("vtkImagingCorePython",
                              PyvtkImagingCorePython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingCorePython");
  }
  PyVTKAddFile_vtkExtractVOI(d);
  PyVTKAddFile_vtkImageAppendComponents(d);
  PyVTKAddFile_vtkImageBlend(d);
  PyVTKAddFile_vtkImageCacheFilter(d);
  PyVTKAddFile_vtkImageCast(d);
  PyVTKAddFile_vtkImageChangeInformation(d);
  PyVTKAddFile_vtkImageClip(d);
  PyVTKAddFile_vtkImageConstantPad(d);
  PyVTKAddFile_vtkImageDataStreamer(d);
  PyVTKAddFile_vtkImageDecomposeFilter(d);
  PyVTKAddFile_vtkImageDifference(d);
  PyVTKAddFile_vtkImageExtractComponents(d);
  PyVTKAddFile_vtkImageFlip(d);
  PyVTKAddFile_vtkImageIterateFilter(d);
  PyVTKAddFile_vtkImageMagnify(d);
  PyVTKAddFile_vtkImageMapToColors(d);
  PyVTKAddFile_vtkImageMask(d);
  PyVTKAddFile_vtkImageMirrorPad(d);
  PyVTKAddFile_vtkImagePadFilter(d);
  PyVTKAddFile_vtkImagePermute(d);
  PyVTKAddFile_vtkImagePointDataIterator(d);
  PyVTKAddFile_vtkImagePointIterator(d);
  PyVTKAddFile_vtkImageResample(d);
  PyVTKAddFile_vtkImageReslice(d);
  PyVTKAddFile_vtkImageResliceToColors(d);
  PyVTKAddFile_vtkImageShiftScale(d);
  PyVTKAddFile_vtkImageShrink3D(d);
  PyVTKAddFile_vtkImageStencilIterator(d);
  PyVTKAddFile_vtkImageThreshold(d);
  PyVTKAddFile_vtkImageTranslateExtent(d);
  PyVTKAddFile_vtkImageWrapPad(d);
  PyVTKAddFile_vtkRTAnalyticSource(d);
  PyVTKAddFile_vtkImageResize(d);
  PyVTKAddFile_vtkImageBSplineCoefficients(d);
  PyVTKAddFile_vtkImageStencilData(d);
  PyVTKAddFile_vtkImageStencilAlgorithm(d);
  PyVTKAddFile_vtkAbstractImageInterpolator(d);
  PyVTKAddFile_vtkImageBSplineInternals(d);
  PyVTKAddFile_vtkImageBSplineInterpolator(d);
  PyVTKAddFile_vtkImageSincInterpolator(d);
  PyVTKAddFile_vtkImageInterpolator(d);
  PyVTKAddFile_vtkImageStencilSource(d);

  return m;
}

