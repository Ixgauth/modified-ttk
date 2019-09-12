// python wrapper for vtkImageIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageIterator(PyObject *); }
void PyVTKAddFile_vtkImageIterator(
  PyObject *)
{
}
