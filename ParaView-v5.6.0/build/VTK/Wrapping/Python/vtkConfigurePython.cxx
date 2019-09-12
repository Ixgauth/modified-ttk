// python wrapper for vtkConfigure
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkConfigure.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConfigure(PyObject *); }
void PyVTKAddFile_vtkConfigure(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_COMPILER_GCC_VERSION", (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + \
                                  __GNUC_PATCHLEVEL__) },
        { "VTK_MAX_THREADS", 64 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyString_FromString("Sequential");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SMP_BACKEND", o);
    Py_DECREF(o);
  }
  o = PyString_FromString("/usr/bin/c++");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_CXX_COMPILER", o);
    Py_DECREF(o);
  }
  o = PyInt_FromLong(32767);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAXPATH", o);
    Py_DECREF(o);
  }
}

