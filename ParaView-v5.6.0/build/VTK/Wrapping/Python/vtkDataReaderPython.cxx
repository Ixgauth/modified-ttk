// python wrapper for vtkDataReader
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
#include "vtkStdString.h"
#include "vtkDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkDataReader_Doc =
  "vtkDataReader - helper superclass for objects that read vtk data files\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkDataReader is a helper superclass that reads the vtk data file\n"
  "header, dataset type, and attribute data (point and cell attributes\n"
  "such as scalars, vectors, normals, etc.) from a vtk data file.  See\n"
  "text for the format of the various vtk file types.\n\n"
  "@sa\n"
  "vtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\n"
  "vtkUnstructuredGridReader vtkRectilinearGridReader\n\n";

static PyTypeObject PyvtkDataReader_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkDataReader.FieldType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkDataReader_FieldType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataReader_FieldType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataReader_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataReader *tempr = vtkDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataReader::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkDataReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileValid(temp0) :
      op->vtkDataReader::IsFileValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredPoints() :
      op->vtkDataReader::IsFileStructuredPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFilePolyData() :
      op->vtkDataReader::IsFilePolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredGrid() :
      op->vtkDataReader::IsFileStructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileUnstructuredGrid() :
      op->vtkDataReader::IsFileUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileRectilinearGrid() :
      op->vtkDataReader::IsFileRectilinearGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDataReader::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0, temp1);
    }
    else
    {
      op->vtkDataReader::SetInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkDataReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDataReader_SetInputString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return nullptr;
}



static PyObject *
PyvtkDataReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDataReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetBinaryInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBinaryInputString(temp0, temp1);
    }
    else
    {
      op->vtkDataReader::SetBinaryInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetInputArray(temp0);
    }
    else
    {
      op->vtkDataReader::SetInputArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCharArray *tempr = (ap.IsBound() ?
      op->GetInputArray() :
      op->vtkDataReader::GetInputArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataReader::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDataReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkDataReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkDataReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataReader::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfScalarsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsInFile() :
      op->vtkDataReader::GetNumberOfScalarsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfVectorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsInFile() :
      op->vtkDataReader::GetNumberOfVectorsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTensorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsInFile() :
      op->vtkDataReader::GetNumberOfTensorsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfNormalsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNormalsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNormalsInFile() :
      op->vtkDataReader::GetNumberOfNormalsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTCoordsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoordsInFile() :
      op->vtkDataReader::GetNumberOfTCoordsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfFieldDataInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFieldDataInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFieldDataInFile() :
      op->vtkDataReader::GetNumberOfFieldDataInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarsNameInFile(temp0) :
      op->vtkDataReader::GetScalarsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorsNameInFile(temp0) :
      op->vtkDataReader::GetVectorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorsNameInFile(temp0) :
      op->vtkDataReader::GetTensorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalsNameInFile(temp0) :
      op->vtkDataReader::GetNormalsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordsNameInFile(temp0) :
      op->vtkDataReader::GetTCoordsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldDataNameInFile(temp0) :
      op->vtkDataReader::GetFieldDataNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsName(temp0);
    }
    else
    {
      op->vtkDataReader::SetScalarsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataReader::GetScalarsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsName(temp0);
    }
    else
    {
      op->vtkDataReader::SetVectorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataReader::GetVectorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsName(temp0);
    }
    else
    {
      op->vtkDataReader::SetTensorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataReader::GetTensorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsName(temp0);
    }
    else
    {
      op->vtkDataReader::SetNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataReader::GetNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsName(temp0);
    }
    else
    {
      op->vtkDataReader::SetTCoordsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataReader::GetTCoordsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLookupTableName(temp0);
    }
    else
    {
      op->vtkDataReader::SetLookupTableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataReader::GetLookupTableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkDataReader::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataReader::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllScalars(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllScalars() :
      op->vtkDataReader::GetReadAllScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllScalarsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllScalarsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllVectors(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllVectors() :
      op->vtkDataReader::GetReadAllVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVectorsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVectorsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllNormals(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllNormals() :
      op->vtkDataReader::GetReadAllNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllNormalsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllNormalsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllTensors(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllTensors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTensors() :
      op->vtkDataReader::GetReadAllTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTensorsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTensorsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllColorScalars(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllColorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllColorScalars() :
      op->vtkDataReader::GetReadAllColorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllColorScalarsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllColorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllColorScalarsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllColorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllTCoords(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTCoords() :
      op->vtkDataReader::GetReadAllTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTCoordsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTCoordsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllFields(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllFields() :
      op->vtkDataReader::GetReadAllFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFieldsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFieldsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_OpenVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->OpenVTKFile() :
      op->vtkDataReader::OpenVTKFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadHeader() :
      op->vtkDataReader::ReadHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadCellData(temp0, temp1) :
      op->vtkDataReader::ReadCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPointData(temp0, temp1) :
      op->vtkDataReader::ReadPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkPointSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1) :
      op->vtkDataReader::ReadPoints(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_ReadPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1) :
      op->vtkDataReader::ReadPoints(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_ReadPoints_Methods[] = {
  {nullptr, PyvtkDataReader_ReadPoints_s1, METH_VARARGS,
   "@Vk *vtkPointSet"},
  {nullptr, PyvtkDataReader_ReadPoints_s2, METH_VARARGS,
   "@Vk *vtkGraph"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataReader_ReadPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_ReadPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadPoints");
  return nullptr;
}



static PyObject *
PyvtkDataReader_ReadVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadVertexData(temp0, temp1) :
      op->vtkDataReader::ReadVertexData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadEdgeData(temp0, temp1) :
      op->vtkDataReader::ReadEdgeData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkTable *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadRowData(temp0, temp1) :
      op->vtkDataReader::ReadRowData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCells(temp0, temp1) :
      op->vtkDataReader::ReadCells(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_ReadCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCells(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataReader::ReadCells(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_ReadCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataReader_ReadCells_s1(self, args);
    case 5:
      return PyvtkDataReader_ReadCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadCells");
  return nullptr;
}



static PyObject *
PyvtkDataReader_ReadCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkRectilinearGrid *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->ReadCoordinates(temp0, temp1, temp2) :
      op->vtkDataReader::ReadCoordinates(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->ReadArray(temp0, temp1, temp2) :
      op->vtkDataReader::ReadArray(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  typedef vtkDataReader::FieldType temp0_type;
  temp0_type temp0 = vtkDataReader::FIELD_DATA;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp0, "vtkDataReader.FieldType")))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->ReadFieldData(temp0) :
      op->vtkDataReader::ReadFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileMajorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMajorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMajorVersion() :
      op->vtkDataReader::GetFileMajorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileMinorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMinorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMinorVersion() :
      op->vtkDataReader::GetFileMinorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_Read_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_Read_Methods[] = {
  {nullptr, PyvtkDataReader_Read_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkDataReader_Read_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, PyvtkDataReader_Read_s3, METH_VARARGS,
   "@P *l"},
  {nullptr, PyvtkDataReader_Read_s4, METH_VARARGS,
   "@P *k"},
  {nullptr, PyvtkDataReader_Read_s5, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataReader_Read(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_Read_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Read");
  return nullptr;
}



static PyObject *
PyvtkDataReader_Peek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    size_t tempr = (ap.IsBound() ?
      op->Peek(temp0, temp1) :
      op->vtkDataReader::Peek(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_CloseVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseVTKFile();
    }
    else
    {
      op->vtkDataReader::CloseVTKFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const size_t size0 = 256;
  char *temp0 = nullptr;
  char *save0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ReadLine(temp0) :
      op->vtkDataReader::ReadLine(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const size_t size0 = 256;
  char *temp0 = nullptr;
  char *save0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ReadString(temp0) :
      op->vtkDataReader::ReadString(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_LowerCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1 = 256;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    char *tempr = (ap.IsBound() ?
      op->LowerCase(temp0, temp1) :
      op->vtkDataReader::LowerCase(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkDataReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_Methods[] = {
  {"IsTypeOf", PyvtkDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataReader\nC++: static vtkDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataReader\nC++: vtkDataReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkDataReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk data file to read.\n"},
  {"GetFileName", PyvtkDataReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of vtk data file to read.\n"},
  {"IsFileValid", PyvtkDataReader_IsFileValid, METH_VARARGS,
   "V.IsFileValid(string) -> int\nC++: int IsFileValid(const char *dstype)\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFileStructuredPoints", PyvtkDataReader_IsFileStructuredPoints, METH_VARARGS,
   "V.IsFileStructuredPoints() -> int\nC++: int IsFileStructuredPoints()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFilePolyData", PyvtkDataReader_IsFilePolyData, METH_VARARGS,
   "V.IsFilePolyData() -> int\nC++: int IsFilePolyData()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFileStructuredGrid", PyvtkDataReader_IsFileStructuredGrid, METH_VARARGS,
   "V.IsFileStructuredGrid() -> int\nC++: int IsFileStructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFileUnstructuredGrid", PyvtkDataReader_IsFileUnstructuredGrid, METH_VARARGS,
   "V.IsFileUnstructuredGrid() -> int\nC++: int IsFileUnstructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFileRectilinearGrid", PyvtkDataReader_IsFileRectilinearGrid, METH_VARARGS,
   "V.IsFileRectilinearGrid() -> int\nC++: int IsFileRectilinearGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"GetInputString", PyvtkDataReader_GetInputString, METH_VARARGS,
   "V.GetInputString() -> string\nC++: virtual char *GetInputString()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"SetInputString", PyvtkDataReader_SetInputString, METH_VARARGS,
   "V.SetInputString(string, int)\nC++: void SetInputString(const char *in, int len)\nV.SetInputString(string)\nC++: void SetInputString(const vtkStdString &input)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"GetInputStringLength", PyvtkDataReader_GetInputStringLength, METH_VARARGS,
   "V.GetInputStringLength() -> int\nC++: virtual int GetInputStringLength()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"SetBinaryInputString", PyvtkDataReader_SetBinaryInputString, METH_VARARGS,
   "V.SetBinaryInputString(string, int)\nC++: void SetBinaryInputString(const char *, int len)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"SetInputArray", PyvtkDataReader_SetInputArray, METH_VARARGS,
   "V.SetInputArray(vtkCharArray)\nC++: virtual void SetInputArray(vtkCharArray *)\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {"GetInputArray", PyvtkDataReader_GetInputArray, METH_VARARGS,
   "V.GetInputArray() -> vtkCharArray\nC++: virtual vtkCharArray *GetInputArray()\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {"GetHeader", PyvtkDataReader_GetHeader, METH_VARARGS,
   "V.GetHeader() -> string\nC++: virtual char *GetHeader()\n\nGet the header from the vtk data file.\n"},
  {"SetReadFromInputString", PyvtkDataReader_SetReadFromInputString, METH_VARARGS,
   "V.SetReadFromInputString(int)\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetReadFromInputString", PyvtkDataReader_GetReadFromInputString, METH_VARARGS,
   "V.GetReadFromInputString() -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"ReadFromInputStringOn", PyvtkDataReader_ReadFromInputStringOn, METH_VARARGS,
   "V.ReadFromInputStringOn()\nC++: virtual void ReadFromInputStringOn()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"ReadFromInputStringOff", PyvtkDataReader_ReadFromInputStringOff, METH_VARARGS,
   "V.ReadFromInputStringOff()\nC++: virtual void ReadFromInputStringOff()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetFileType", PyvtkDataReader_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: virtual int GetFileType()\n\nGet the type of file (ASCII or BINARY). Returned value only valid\nafter file has been read.\n"},
  {"GetNumberOfScalarsInFile", PyvtkDataReader_GetNumberOfScalarsInFile, METH_VARARGS,
   "V.GetNumberOfScalarsInFile() -> int\nC++: int GetNumberOfScalarsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {"GetNumberOfVectorsInFile", PyvtkDataReader_GetNumberOfVectorsInFile, METH_VARARGS,
   "V.GetNumberOfVectorsInFile() -> int\nC++: int GetNumberOfVectorsInFile()\n\n"},
  {"GetNumberOfTensorsInFile", PyvtkDataReader_GetNumberOfTensorsInFile, METH_VARARGS,
   "V.GetNumberOfTensorsInFile() -> int\nC++: int GetNumberOfTensorsInFile()\n\n"},
  {"GetNumberOfNormalsInFile", PyvtkDataReader_GetNumberOfNormalsInFile, METH_VARARGS,
   "V.GetNumberOfNormalsInFile() -> int\nC++: int GetNumberOfNormalsInFile()\n\n"},
  {"GetNumberOfTCoordsInFile", PyvtkDataReader_GetNumberOfTCoordsInFile, METH_VARARGS,
   "V.GetNumberOfTCoordsInFile() -> int\nC++: int GetNumberOfTCoordsInFile()\n\n"},
  {"GetNumberOfFieldDataInFile", PyvtkDataReader_GetNumberOfFieldDataInFile, METH_VARARGS,
   "V.GetNumberOfFieldDataInFile() -> int\nC++: int GetNumberOfFieldDataInFile()\n\n"},
  {"GetScalarsNameInFile", PyvtkDataReader_GetScalarsNameInFile, METH_VARARGS,
   "V.GetScalarsNameInFile(int) -> string\nC++: const char *GetScalarsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetVectorsNameInFile", PyvtkDataReader_GetVectorsNameInFile, METH_VARARGS,
   "V.GetVectorsNameInFile(int) -> string\nC++: const char *GetVectorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetTensorsNameInFile", PyvtkDataReader_GetTensorsNameInFile, METH_VARARGS,
   "V.GetTensorsNameInFile(int) -> string\nC++: const char *GetTensorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetNormalsNameInFile", PyvtkDataReader_GetNormalsNameInFile, METH_VARARGS,
   "V.GetNormalsNameInFile(int) -> string\nC++: const char *GetNormalsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetTCoordsNameInFile", PyvtkDataReader_GetTCoordsNameInFile, METH_VARARGS,
   "V.GetTCoordsNameInFile(int) -> string\nC++: const char *GetTCoordsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetFieldDataNameInFile", PyvtkDataReader_GetFieldDataNameInFile, METH_VARARGS,
   "V.GetFieldDataNameInFile(int) -> string\nC++: const char *GetFieldDataNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"SetScalarsName", PyvtkDataReader_SetScalarsName, METH_VARARGS,
   "V.SetScalarsName(string)\nC++: virtual void SetScalarsName(const char *_arg)\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {"GetScalarsName", PyvtkDataReader_GetScalarsName, METH_VARARGS,
   "V.GetScalarsName() -> string\nC++: virtual char *GetScalarsName()\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {"SetVectorsName", PyvtkDataReader_SetVectorsName, METH_VARARGS,
   "V.SetVectorsName(string)\nC++: virtual void SetVectorsName(const char *_arg)\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {"GetVectorsName", PyvtkDataReader_GetVectorsName, METH_VARARGS,
   "V.GetVectorsName() -> string\nC++: virtual char *GetVectorsName()\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {"SetTensorsName", PyvtkDataReader_SetTensorsName, METH_VARARGS,
   "V.SetTensorsName(string)\nC++: virtual void SetTensorsName(const char *_arg)\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {"GetTensorsName", PyvtkDataReader_GetTensorsName, METH_VARARGS,
   "V.GetTensorsName() -> string\nC++: virtual char *GetTensorsName()\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {"SetNormalsName", PyvtkDataReader_SetNormalsName, METH_VARARGS,
   "V.SetNormalsName(string)\nC++: virtual void SetNormalsName(const char *_arg)\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {"GetNormalsName", PyvtkDataReader_GetNormalsName, METH_VARARGS,
   "V.GetNormalsName() -> string\nC++: virtual char *GetNormalsName()\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {"SetTCoordsName", PyvtkDataReader_SetTCoordsName, METH_VARARGS,
   "V.SetTCoordsName(string)\nC++: virtual void SetTCoordsName(const char *_arg)\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {"GetTCoordsName", PyvtkDataReader_GetTCoordsName, METH_VARARGS,
   "V.GetTCoordsName() -> string\nC++: virtual char *GetTCoordsName()\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {"SetLookupTableName", PyvtkDataReader_SetLookupTableName, METH_VARARGS,
   "V.SetLookupTableName(string)\nC++: virtual void SetLookupTableName(const char *_arg)\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {"GetLookupTableName", PyvtkDataReader_GetLookupTableName, METH_VARARGS,
   "V.GetLookupTableName() -> string\nC++: virtual char *GetLookupTableName()\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {"SetFieldDataName", PyvtkDataReader_SetFieldDataName, METH_VARARGS,
   "V.SetFieldDataName(string)\nC++: virtual void SetFieldDataName(const char *_arg)\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {"GetFieldDataName", PyvtkDataReader_GetFieldDataName, METH_VARARGS,
   "V.GetFieldDataName() -> string\nC++: virtual char *GetFieldDataName()\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {"SetReadAllScalars", PyvtkDataReader_SetReadAllScalars, METH_VARARGS,
   "V.SetReadAllScalars(int)\nC++: virtual void SetReadAllScalars(vtkTypeBool _arg)\n\nEnable reading all scalars.\n"},
  {"GetReadAllScalars", PyvtkDataReader_GetReadAllScalars, METH_VARARGS,
   "V.GetReadAllScalars() -> int\nC++: virtual vtkTypeBool GetReadAllScalars()\n\nEnable reading all scalars.\n"},
  {"ReadAllScalarsOn", PyvtkDataReader_ReadAllScalarsOn, METH_VARARGS,
   "V.ReadAllScalarsOn()\nC++: virtual void ReadAllScalarsOn()\n\nEnable reading all scalars.\n"},
  {"ReadAllScalarsOff", PyvtkDataReader_ReadAllScalarsOff, METH_VARARGS,
   "V.ReadAllScalarsOff()\nC++: virtual void ReadAllScalarsOff()\n\nEnable reading all scalars.\n"},
  {"SetReadAllVectors", PyvtkDataReader_SetReadAllVectors, METH_VARARGS,
   "V.SetReadAllVectors(int)\nC++: virtual void SetReadAllVectors(vtkTypeBool _arg)\n\nEnable reading all vectors.\n"},
  {"GetReadAllVectors", PyvtkDataReader_GetReadAllVectors, METH_VARARGS,
   "V.GetReadAllVectors() -> int\nC++: virtual vtkTypeBool GetReadAllVectors()\n\nEnable reading all vectors.\n"},
  {"ReadAllVectorsOn", PyvtkDataReader_ReadAllVectorsOn, METH_VARARGS,
   "V.ReadAllVectorsOn()\nC++: virtual void ReadAllVectorsOn()\n\nEnable reading all vectors.\n"},
  {"ReadAllVectorsOff", PyvtkDataReader_ReadAllVectorsOff, METH_VARARGS,
   "V.ReadAllVectorsOff()\nC++: virtual void ReadAllVectorsOff()\n\nEnable reading all vectors.\n"},
  {"SetReadAllNormals", PyvtkDataReader_SetReadAllNormals, METH_VARARGS,
   "V.SetReadAllNormals(int)\nC++: virtual void SetReadAllNormals(vtkTypeBool _arg)\n\nEnable reading all normals.\n"},
  {"GetReadAllNormals", PyvtkDataReader_GetReadAllNormals, METH_VARARGS,
   "V.GetReadAllNormals() -> int\nC++: virtual vtkTypeBool GetReadAllNormals()\n\nEnable reading all normals.\n"},
  {"ReadAllNormalsOn", PyvtkDataReader_ReadAllNormalsOn, METH_VARARGS,
   "V.ReadAllNormalsOn()\nC++: virtual void ReadAllNormalsOn()\n\nEnable reading all normals.\n"},
  {"ReadAllNormalsOff", PyvtkDataReader_ReadAllNormalsOff, METH_VARARGS,
   "V.ReadAllNormalsOff()\nC++: virtual void ReadAllNormalsOff()\n\nEnable reading all normals.\n"},
  {"SetReadAllTensors", PyvtkDataReader_SetReadAllTensors, METH_VARARGS,
   "V.SetReadAllTensors(int)\nC++: virtual void SetReadAllTensors(vtkTypeBool _arg)\n\nEnable reading all tensors.\n"},
  {"GetReadAllTensors", PyvtkDataReader_GetReadAllTensors, METH_VARARGS,
   "V.GetReadAllTensors() -> int\nC++: virtual vtkTypeBool GetReadAllTensors()\n\nEnable reading all tensors.\n"},
  {"ReadAllTensorsOn", PyvtkDataReader_ReadAllTensorsOn, METH_VARARGS,
   "V.ReadAllTensorsOn()\nC++: virtual void ReadAllTensorsOn()\n\nEnable reading all tensors.\n"},
  {"ReadAllTensorsOff", PyvtkDataReader_ReadAllTensorsOff, METH_VARARGS,
   "V.ReadAllTensorsOff()\nC++: virtual void ReadAllTensorsOff()\n\nEnable reading all tensors.\n"},
  {"SetReadAllColorScalars", PyvtkDataReader_SetReadAllColorScalars, METH_VARARGS,
   "V.SetReadAllColorScalars(int)\nC++: virtual void SetReadAllColorScalars(vtkTypeBool _arg)\n\nEnable reading all color scalars.\n"},
  {"GetReadAllColorScalars", PyvtkDataReader_GetReadAllColorScalars, METH_VARARGS,
   "V.GetReadAllColorScalars() -> int\nC++: virtual vtkTypeBool GetReadAllColorScalars()\n\nEnable reading all color scalars.\n"},
  {"ReadAllColorScalarsOn", PyvtkDataReader_ReadAllColorScalarsOn, METH_VARARGS,
   "V.ReadAllColorScalarsOn()\nC++: virtual void ReadAllColorScalarsOn()\n\nEnable reading all color scalars.\n"},
  {"ReadAllColorScalarsOff", PyvtkDataReader_ReadAllColorScalarsOff, METH_VARARGS,
   "V.ReadAllColorScalarsOff()\nC++: virtual void ReadAllColorScalarsOff()\n\nEnable reading all color scalars.\n"},
  {"SetReadAllTCoords", PyvtkDataReader_SetReadAllTCoords, METH_VARARGS,
   "V.SetReadAllTCoords(int)\nC++: virtual void SetReadAllTCoords(vtkTypeBool _arg)\n\nEnable reading all tcoords.\n"},
  {"GetReadAllTCoords", PyvtkDataReader_GetReadAllTCoords, METH_VARARGS,
   "V.GetReadAllTCoords() -> int\nC++: virtual vtkTypeBool GetReadAllTCoords()\n\nEnable reading all tcoords.\n"},
  {"ReadAllTCoordsOn", PyvtkDataReader_ReadAllTCoordsOn, METH_VARARGS,
   "V.ReadAllTCoordsOn()\nC++: virtual void ReadAllTCoordsOn()\n\nEnable reading all tcoords.\n"},
  {"ReadAllTCoordsOff", PyvtkDataReader_ReadAllTCoordsOff, METH_VARARGS,
   "V.ReadAllTCoordsOff()\nC++: virtual void ReadAllTCoordsOff()\n\nEnable reading all tcoords.\n"},
  {"SetReadAllFields", PyvtkDataReader_SetReadAllFields, METH_VARARGS,
   "V.SetReadAllFields(int)\nC++: virtual void SetReadAllFields(vtkTypeBool _arg)\n\nEnable reading all fields.\n"},
  {"GetReadAllFields", PyvtkDataReader_GetReadAllFields, METH_VARARGS,
   "V.GetReadAllFields() -> int\nC++: virtual vtkTypeBool GetReadAllFields()\n\nEnable reading all fields.\n"},
  {"ReadAllFieldsOn", PyvtkDataReader_ReadAllFieldsOn, METH_VARARGS,
   "V.ReadAllFieldsOn()\nC++: virtual void ReadAllFieldsOn()\n\nEnable reading all fields.\n"},
  {"ReadAllFieldsOff", PyvtkDataReader_ReadAllFieldsOff, METH_VARARGS,
   "V.ReadAllFieldsOff()\nC++: virtual void ReadAllFieldsOff()\n\nEnable reading all fields.\n"},
  {"OpenVTKFile", PyvtkDataReader_OpenVTKFile, METH_VARARGS,
   "V.OpenVTKFile() -> int\nC++: int OpenVTKFile()\n\nOpen a vtk data file. Returns zero if error.\n"},
  {"ReadHeader", PyvtkDataReader_ReadHeader, METH_VARARGS,
   "V.ReadHeader() -> int\nC++: int ReadHeader()\n\nRead the header of a vtk data file. Returns 0 if error.\n"},
  {"ReadCellData", PyvtkDataReader_ReadCellData, METH_VARARGS,
   "V.ReadCellData(vtkDataSet, int) -> int\nC++: int ReadCellData(vtkDataSet *ds, vtkIdType numCells)\n\nRead the cell data of a vtk data file. The number of cells (from\nthe dataset) must match the number of cells defined in cell\nattributes (unless no geometry was defined).\n"},
  {"ReadPointData", PyvtkDataReader_ReadPointData, METH_VARARGS,
   "V.ReadPointData(vtkDataSet, int) -> int\nC++: int ReadPointData(vtkDataSet *ds, vtkIdType numPts)\n\nRead the point data of a vtk data file. The number of points\n(from the dataset) must match the number of points defined in\npoint attributes (unless no geometry was defined).\n"},
  {"ReadPoints", PyvtkDataReader_ReadPoints, METH_VARARGS,
   "V.ReadPoints(vtkPointSet, int) -> int\nC++: int ReadPoints(vtkPointSet *ps, vtkIdType numPts)\nV.ReadPoints(vtkGraph, int) -> int\nC++: int ReadPoints(vtkGraph *g, vtkIdType numPts)\n\nRead point coordinates. Return 0 if error.\n"},
  {"ReadVertexData", PyvtkDataReader_ReadVertexData, METH_VARARGS,
   "V.ReadVertexData(vtkGraph, int) -> int\nC++: int ReadVertexData(vtkGraph *g, vtkIdType numVertices)\n\nRead the vertex data of a vtk data file. The number of vertices\n(from the graph) must match the number of vertices defined in\nvertex attributes (unless no geometry was defined).\n"},
  {"ReadEdgeData", PyvtkDataReader_ReadEdgeData, METH_VARARGS,
   "V.ReadEdgeData(vtkGraph, int) -> int\nC++: int ReadEdgeData(vtkGraph *g, vtkIdType numEdges)\n\nRead the edge data of a vtk data file. The number of edges (from\nthe graph) must match the number of edges defined in edge\nattributes (unless no geometry was defined).\n"},
  {"ReadRowData", PyvtkDataReader_ReadRowData, METH_VARARGS,
   "V.ReadRowData(vtkTable, int) -> int\nC++: int ReadRowData(vtkTable *t, vtkIdType numEdges)\n\nRead the row data of a vtk data file.\n"},
  {"ReadCells", PyvtkDataReader_ReadCells, METH_VARARGS,
   "V.ReadCells(int, [int, ...]) -> int\nC++: int ReadCells(vtkIdType size, int *data)\nV.ReadCells(int, [int, ...], int, int, int) -> int\nC++: int ReadCells(vtkIdType size, int *data, int skip1,\n    int read2, int skip3)\n\nRead a bunch of \"cells\". Return 0 if error.\n"},
  {"ReadCoordinates", PyvtkDataReader_ReadCoordinates, METH_VARARGS,
   "V.ReadCoordinates(vtkRectilinearGrid, int, int) -> int\nC++: int ReadCoordinates(vtkRectilinearGrid *rg, int axes,\n    int numCoords)\n\nRead the coordinates for a rectilinear grid. The axes parameter\nspecifies which coordinate axes (0,1,2) is being read.\n"},
  {"ReadArray", PyvtkDataReader_ReadArray, METH_VARARGS,
   "V.ReadArray(string, int, int) -> vtkAbstractArray\nC++: vtkAbstractArray *ReadArray(const char *dataType,\n    vtkIdType numTuples, vtkIdType numComp)\n\nHelper functions for reading data.\n"},
  {"ReadFieldData", PyvtkDataReader_ReadFieldData, METH_VARARGS,
   "V.ReadFieldData(FieldType) -> vtkFieldData\nC++: vtkFieldData *ReadFieldData(\n    FieldType fieldType=vtkDataReader::FIELD_DATA)\n\nHelper functions for reading data.\n"},
  {"GetFileMajorVersion", PyvtkDataReader_GetFileMajorVersion, METH_VARARGS,
   "V.GetFileMajorVersion() -> int\nC++: virtual int GetFileMajorVersion()\n\nReturn major and minor version of the file. Returns version 3.0\nif the version cannot be read from file.\n"},
  {"GetFileMinorVersion", PyvtkDataReader_GetFileMinorVersion, METH_VARARGS,
   "V.GetFileMinorVersion() -> int\nC++: virtual int GetFileMinorVersion()\n\nReturn major and minor version of the file. Returns version 3.0\nif the version cannot be read from file.\n"},
  {"Read", PyvtkDataReader_Read, METH_VARARGS,
   "V.Read(string) -> int\nC++: int Read(char *)\nV.Read([int, ...]) -> int\nC++: int Read(int *)\nV.Read([int, ...]) -> int\nC++: int Read(long *)\nV.Read([int, ...]) -> int\nC++: int Read(long long *result)\nV.Read([float, ...]) -> int\nC++: int Read(double *)\n\nInternal function to read in a value.  Returns zero if there was\nan error.\n"},
  {"Peek", PyvtkDataReader_Peek, METH_VARARGS,
   "V.Peek(string, int) -> int\nC++: size_t Peek(char *str, size_t n)\n\nRead n character from the stream into str, then reset the stream\nposition. Returns the number of characters actually read.\n"},
  {"CloseVTKFile", PyvtkDataReader_CloseVTKFile, METH_VARARGS,
   "V.CloseVTKFile()\nC++: void CloseVTKFile()\n\nClose the vtk file.\n"},
  {"ReadLine", PyvtkDataReader_ReadLine, METH_VARARGS,
   "V.ReadLine([char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char]) -> int\nC++: int ReadLine(char result[256])\n\nInternal function to read in a line up to 256 characters. Returns\nzero if there was an error.\n"},
  {"ReadString", PyvtkDataReader_ReadString, METH_VARARGS,
   "V.ReadString([char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char]) -> int\nC++: int ReadString(char result[256])\n\nInternal function to read in a string up to 256 characters.\nReturns zero if there was an error.\n"},
  {"LowerCase", PyvtkDataReader_LowerCase, METH_VARARGS,
   "V.LowerCase(string, int) -> string\nC++: char *LowerCase(char *str, const size_t len=256)\n\nHelper method for reading in data.\n"},
  {"ReadMetaData", PyvtkDataReader_ReadMetaData, METH_VARARGS,
   "V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkDataReader", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkDataReader_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkDataReader_StaticNew()
{
  return vtkDataReader::New();
}

PyObject *PyvtkDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataReader_Type, PyvtkDataReader_Methods,
    "vtkDataReader",
 &PyvtkDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataReader_FieldType_Type);
  PyvtkDataReader_FieldType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataReader_FieldType_Type);

  o = (PyObject *)&PyvtkDataReader_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDataReader::FieldType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "POINT_DATA", vtkDataReader::POINT_DATA },
        { "CELL_DATA", vtkDataReader::CELL_DATA },
        { "FIELD_DATA", vtkDataReader::FIELD_DATA },
      };

    o = PyvtkDataReader_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ASCII", 1 },
        { "VTK_BINARY", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

