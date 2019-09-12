// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBSplineTransform(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDepthSortPolyData(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDSPFilterDefinition(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDSPFilterGroup(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkEarthSource(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFacetReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkForceTime(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGreedyTerrainDecimation(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGridTransform(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageToPolyDataFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImplicitModeller(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPCAAnalysisFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataSilhouette(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProcrustesAlignmentFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProjectedTerrainPath(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRenderLargeImage(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalArrayOperatorFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalDataSetCache(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalFractal(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalInterpolator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalShiftScale(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransformToGrid(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkWeightedTransformFilter(PyObject *); }

static PyMethodDef PyvtkFiltersHybridPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkFiltersHybridPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersHybridPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersHybridPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersHybridPython(const char *); }

PyObject *real_initvtkFiltersHybridPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkFiltersHybridPython_Module);
#else

  PyObject *m = Py_InitModule("vtkFiltersHybridPython",
                              PyvtkFiltersHybridPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersHybridPython");
  }
  PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(d);
  PyVTKAddFile_vtkBSplineTransform(d);
  PyVTKAddFile_vtkDepthSortPolyData(d);
  PyVTKAddFile_vtkDSPFilterDefinition(d);
  PyVTKAddFile_vtkDSPFilterGroup(d);
  PyVTKAddFile_vtkEarthSource(d);
  PyVTKAddFile_vtkFacetReader(d);
  PyVTKAddFile_vtkForceTime(d);
  PyVTKAddFile_vtkGreedyTerrainDecimation(d);
  PyVTKAddFile_vtkGridTransform(d);
  PyVTKAddFile_vtkImageToPolyDataFilter(d);
  PyVTKAddFile_vtkImplicitModeller(d);
  PyVTKAddFile_vtkPCAAnalysisFilter(d);
  PyVTKAddFile_vtkPolyDataSilhouette(d);
  PyVTKAddFile_vtkProcrustesAlignmentFilter(d);
  PyVTKAddFile_vtkProjectedTerrainPath(d);
  PyVTKAddFile_vtkRenderLargeImage(d);
  PyVTKAddFile_vtkTemporalArrayOperatorFilter(d);
  PyVTKAddFile_vtkTemporalDataSetCache(d);
  PyVTKAddFile_vtkTemporalFractal(d);
  PyVTKAddFile_vtkTemporalInterpolator(d);
  PyVTKAddFile_vtkTemporalShiftScale(d);
  PyVTKAddFile_vtkTemporalSnapToTimeStep(d);
  PyVTKAddFile_vtkTransformToGrid(d);
  PyVTKAddFile_vtkWeightedTransformFilter(d);

  return m;
}

