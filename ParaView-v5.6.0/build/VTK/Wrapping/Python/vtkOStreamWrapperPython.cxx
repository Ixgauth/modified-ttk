// python wrapper for vtkOStreamWrapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOStreamWrapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOStreamWrapper(PyObject *); }
void PyVTKAddFile_vtkOStreamWrapper(
  PyObject *)
{
}

