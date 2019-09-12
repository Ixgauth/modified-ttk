// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAnnotatedCubeActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkArcPlotter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAxesActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAxisActor2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAxisActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAxisFollower(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBarChartActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCaptionActor2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkConvexHull2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCornerAnnotation(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCubeAxesActor2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCubeAxesActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGraphAnnotationLayersFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLeaderActor2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLegendBoxActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLegendScaleActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParallelCoordinatesActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPieChartActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolarAxesActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProp3DAxisFollower(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkScalarBarActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSpiderPlotActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkXYPlotActor(PyObject *); }

static PyMethodDef PyvtkRenderingAnnotationPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkRenderingAnnotationPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkRenderingAnnotationPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkRenderingAnnotationPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkRenderingAnnotationPython(const char *); }

PyObject *real_initvtkRenderingAnnotationPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkRenderingAnnotationPython_Module);
#else

  PyObject *m = Py_InitModule("vtkRenderingAnnotationPython",
                              PyvtkRenderingAnnotationPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkRenderingAnnotationPython");
  }
  PyVTKAddFile_vtkAnnotatedCubeActor(d);
  PyVTKAddFile_vtkArcPlotter(d);
  PyVTKAddFile_vtkAxesActor(d);
  PyVTKAddFile_vtkAxisActor2D(d);
  PyVTKAddFile_vtkAxisActor(d);
  PyVTKAddFile_vtkAxisFollower(d);
  PyVTKAddFile_vtkBarChartActor(d);
  PyVTKAddFile_vtkCaptionActor2D(d);
  PyVTKAddFile_vtkConvexHull2D(d);
  PyVTKAddFile_vtkCornerAnnotation(d);
  PyVTKAddFile_vtkCubeAxesActor2D(d);
  PyVTKAddFile_vtkCubeAxesActor(d);
  PyVTKAddFile_vtkGraphAnnotationLayersFilter(d);
  PyVTKAddFile_vtkLeaderActor2D(d);
  PyVTKAddFile_vtkLegendBoxActor(d);
  PyVTKAddFile_vtkLegendScaleActor(d);
  PyVTKAddFile_vtkParallelCoordinatesActor(d);
  PyVTKAddFile_vtkPieChartActor(d);
  PyVTKAddFile_vtkPolarAxesActor(d);
  PyVTKAddFile_vtkProp3DAxisFollower(d);
  PyVTKAddFile_vtkScalarBarActor(d);
  PyVTKAddFile_vtkSpiderPlotActor(d);
  PyVTKAddFile_vtkXYPlotActor(d);

  return m;
}

