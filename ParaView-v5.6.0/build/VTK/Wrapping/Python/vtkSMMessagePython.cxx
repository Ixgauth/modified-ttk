// python wrapper for vtkSMMessage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMMessage.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMMessage(PyObject *); }
void PyVTKAddFile_vtkSMMessage(
  PyObject *)
{
}

