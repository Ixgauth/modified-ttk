// python wrapper for vtkXdmfReaderInternal
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkXdmfReaderInternal.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXdmfReaderInternal(PyObject *); }
void PyVTKAddFile_vtkXdmfReaderInternal(
  PyObject *)
{
}

