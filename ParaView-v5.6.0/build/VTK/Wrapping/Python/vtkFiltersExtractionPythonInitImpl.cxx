// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBlockSelector(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkConvertSelection(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractBlock(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractCells(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractDataArraysOverTime(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractDataOverTime(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractDataSets(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractEdges(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractGeometry(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractGrid(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractLevel(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractPolyDataGeometry(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractRectilinearGrid(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedArraysOverTime(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedBlock(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedIds(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedLocations(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedPolyDataIds(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedRows(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelection(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractTemporalFieldData(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractTensorComponents(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractTimeSteps(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractUnstructuredGrid(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractVectorComponents(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkFrustumSelector(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkHierarchicalDataExtractDataSets(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkHierarchicalDataExtractLevel(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLocationSelector(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProbeSelectedLocations(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSelector(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkValueSelector(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractArraysOverTime(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractSelectionLegacy(PyObject *); }

static PyMethodDef PyvtkFiltersExtractionPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkFiltersExtractionPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersExtractionPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersExtractionPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersExtractionPython(const char *); }

PyObject *real_initvtkFiltersExtractionPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkFiltersExtractionPython_Module);
#else

  PyObject *m = Py_InitModule("vtkFiltersExtractionPython",
                              PyvtkFiltersExtractionPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersExtractionPython");
  }
  PyVTKAddFile_vtkBlockSelector(d);
  PyVTKAddFile_vtkConvertSelection(d);
  PyVTKAddFile_vtkExtractBlock(d);
  PyVTKAddFile_vtkExtractCells(d);
  PyVTKAddFile_vtkExtractDataArraysOverTime(d);
  PyVTKAddFile_vtkExtractDataOverTime(d);
  PyVTKAddFile_vtkExtractDataSets(d);
  PyVTKAddFile_vtkExtractEdges(d);
  PyVTKAddFile_vtkExtractGeometry(d);
  PyVTKAddFile_vtkExtractGrid(d);
  PyVTKAddFile_vtkExtractLevel(d);
  PyVTKAddFile_vtkExtractPolyDataGeometry(d);
  PyVTKAddFile_vtkExtractRectilinearGrid(d);
  PyVTKAddFile_vtkExtractSelectedArraysOverTime(d);
  PyVTKAddFile_vtkExtractSelectedBlock(d);
  PyVTKAddFile_vtkExtractSelectedIds(d);
  PyVTKAddFile_vtkExtractSelectedLocations(d);
  PyVTKAddFile_vtkExtractSelectedPolyDataIds(d);
  PyVTKAddFile_vtkExtractSelectedRows(d);
  PyVTKAddFile_vtkExtractSelectedThresholds(d);
  PyVTKAddFile_vtkExtractSelection(d);
  PyVTKAddFile_vtkExtractTemporalFieldData(d);
  PyVTKAddFile_vtkExtractTensorComponents(d);
  PyVTKAddFile_vtkExtractTimeSteps(d);
  PyVTKAddFile_vtkExtractUnstructuredGrid(d);
  PyVTKAddFile_vtkExtractVectorComponents(d);
  PyVTKAddFile_vtkFrustumSelector(d);
  PyVTKAddFile_vtkHierarchicalDataExtractDataSets(d);
  PyVTKAddFile_vtkHierarchicalDataExtractLevel(d);
  PyVTKAddFile_vtkLocationSelector(d);
  PyVTKAddFile_vtkProbeSelectedLocations(d);
  PyVTKAddFile_vtkSelector(d);
  PyVTKAddFile_vtkValueSelector(d);
  PyVTKAddFile_vtkExtractArraysOverTime(d);
  PyVTKAddFile_vtkExtractSelectionLegacy(d);

  return m;
}

