// python wrapper for vtkAngularPeriodicDataArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAngularPeriodicDataArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngularPeriodicDataArray(PyObject *); }
void PyVTKAddFile_vtkAngularPeriodicDataArray(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_PERIODIC_ARRAY_AXIS_X", 0 },
        { "VTK_PERIODIC_ARRAY_AXIS_Y", 1 },
        { "VTK_PERIODIC_ARRAY_AXIS_Z", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

