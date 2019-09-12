// python wrapper for vtkVersionMacros
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVersionMacros.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVersionMacros(PyObject *); }
void PyVTKAddFile_vtkVersionMacros(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_MAJOR_VERSION", 8 },
        { "VTK_MINOR_VERSION", 2 },
        { "VTK_BUILD_VERSION", 0 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyString_FromString("8.2.0");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_VERSION", o);
    Py_DECREF(o);
  }
}

