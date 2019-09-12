// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeDataGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDataGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageDataToUniformGrid(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLinearToQuadraticCellsFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProjectSphereFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearGridGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredPointsGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkUnstructuredGridGeometryFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetRegionSurfaceFilter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkAbstractGridConnectivity(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetGhostGenerator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearGridPartitioner(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredAMRNeighbor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredAMRGridConnectivity(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridConnectivity(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridGhostDataGenerator(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridPartitioner(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredNeighbor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkUniformGridGhostDataGenerator(PyObject *); }

static PyMethodDef PyvtkFiltersGeometryPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkFiltersGeometryPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersGeometryPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersGeometryPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersGeometryPython(const char *); }

PyObject *real_initvtkFiltersGeometryPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkFiltersGeometryPython_Module);
#else

  PyObject *m = Py_InitModule("vtkFiltersGeometryPython",
                              PyvtkFiltersGeometryPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersGeometryPython");
  }
  PyVTKAddFile_vtkCompositeDataGeometryFilter(d);
  PyVTKAddFile_vtkGeometryFilter(d);
  PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(d);
  PyVTKAddFile_vtkImageDataGeometryFilter(d);
  PyVTKAddFile_vtkImageDataToUniformGrid(d);
  PyVTKAddFile_vtkLinearToQuadraticCellsFilter(d);
  PyVTKAddFile_vtkProjectSphereFilter(d);
  PyVTKAddFile_vtkRectilinearGridGeometryFilter(d);
  PyVTKAddFile_vtkStructuredGridGeometryFilter(d);
  PyVTKAddFile_vtkStructuredPointsGeometryFilter(d);
  PyVTKAddFile_vtkUnstructuredGridGeometryFilter(d);
  PyVTKAddFile_vtkDataSetSurfaceFilter(d);
  PyVTKAddFile_vtkDataSetRegionSurfaceFilter(d);
  PyVTKAddFile_vtkAbstractGridConnectivity(d);
  PyVTKAddFile_vtkDataSetGhostGenerator(d);
  PyVTKAddFile_vtkRectilinearGridPartitioner(d);
  PyVTKAddFile_vtkStructuredAMRNeighbor(d);
  PyVTKAddFile_vtkStructuredAMRGridConnectivity(d);
  PyVTKAddFile_vtkStructuredGridConnectivity(d);
  PyVTKAddFile_vtkStructuredGridGhostDataGenerator(d);
  PyVTKAddFile_vtkStructuredGridPartitioner(d);
  PyVTKAddFile_vtkStructuredNeighbor(d);
  PyVTKAddFile_vtkUniformGridGhostDataGenerator(d);

  return m;
}
