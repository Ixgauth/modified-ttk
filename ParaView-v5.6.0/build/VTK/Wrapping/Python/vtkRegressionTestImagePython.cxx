// python wrapper for vtkRegressionTestImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkRegressionTestImage.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRegressionTestImage(PyObject *); }
void PyVTKAddFile_vtkRegressionTestImage(
  PyObject *)
{
}

