// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleDrawPolygon(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleFlight(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleImage(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleJoystickActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleJoystickCamera(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleRubberBand2D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleRubberBand3D(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleRubberBandZoom(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleTerrain(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleTrackballActor(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleTrackballCamera(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleTrackball(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleUnicam(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleUser(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractorStyleSwitch(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkInteractionStyleObjectFactory(PyObject *); }

static PyMethodDef PyvtkInteractionStylePython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkInteractionStylePython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkInteractionStylePython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkInteractionStylePython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkInteractionStylePython(const char *); }

PyObject *real_initvtkInteractionStylePython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkInteractionStylePython_Module);
#else

  PyObject *m = Py_InitModule("vtkInteractionStylePython",
                              PyvtkInteractionStylePython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkInteractionStylePython");
  }
  PyVTKAddFile_vtkInteractorStyleDrawPolygon(d);
  PyVTKAddFile_vtkInteractorStyleFlight(d);
  PyVTKAddFile_vtkInteractorStyleImage(d);
  PyVTKAddFile_vtkInteractorStyleJoystickActor(d);
  PyVTKAddFile_vtkInteractorStyleJoystickCamera(d);
  PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(d);
  PyVTKAddFile_vtkInteractorStyleRubberBand2D(d);
  PyVTKAddFile_vtkInteractorStyleRubberBand3D(d);
  PyVTKAddFile_vtkInteractorStyleRubberBandPick(d);
  PyVTKAddFile_vtkInteractorStyleRubberBandZoom(d);
  PyVTKAddFile_vtkInteractorStyleTerrain(d);
  PyVTKAddFile_vtkInteractorStyleTrackballActor(d);
  PyVTKAddFile_vtkInteractorStyleTrackballCamera(d);
  PyVTKAddFile_vtkInteractorStyleTrackball(d);
  PyVTKAddFile_vtkInteractorStyleUnicam(d);
  PyVTKAddFile_vtkInteractorStyleUser(d);
  PyVTKAddFile_vtkInteractorStyleSwitch(d);
  PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(d);
  PyVTKAddFile_vtkInteractionStyleObjectFactory(d);

  return m;
}

