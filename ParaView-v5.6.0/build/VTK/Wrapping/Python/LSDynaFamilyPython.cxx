// python wrapper for LSDynaFamily
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "LSDynaFamily.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_LSDynaFamily(PyObject *); }
void PyVTKAddFile_LSDynaFamily(
  PyObject *dict)
{
  PyObject *o;
  o = PyInt_FromLong(-1);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_LSDYNA_BADFILE", o);
    Py_DECREF(o);
  }
}

