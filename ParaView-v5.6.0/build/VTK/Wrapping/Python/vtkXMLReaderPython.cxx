// python wrapper for vtkXMLReader
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
#include "vtkInformationVector.h"
#include "vtkXMLReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLReader_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkXMLReader_Doc =
  "vtkXMLReader - Superclass for VTK's XML format readers.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkXMLReader uses vtkXMLDataParser to parse a <a\n"
  "href=\"http://www.vtk.org/Wiki/VTK_XML_Formats\">VTK XMLinput file.\n"
  "Concrete subclasses then traverse the parsed file structure and\n"
  "extract data.\n\n";

static PyTypeObject PyvtkXMLReader_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLReader.FieldType", // tp_name
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

PyObject *PyvtkXMLReader_FieldType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkXMLReader_FieldType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkXMLReader_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkXMLReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLReader *tempr = vtkXMLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLReader::NewInstance());

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
PyvtkXMLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkXMLReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkXMLReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkXMLReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  std::string temp0;
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
      op->vtkXMLReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkXMLReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetOutputAsDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutputAsDataSet() :
      op->vtkXMLReader::GetOutputAsDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLReader_GetOutputAsDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutputAsDataSet(temp0) :
      op->vtkXMLReader::GetOutputAsDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLReader_GetOutputAsDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLReader_GetOutputAsDataSet_s1(self, args);
    case 1:
      return PyvtkXMLReader_GetOutputAsDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputAsDataSet");
  return nullptr;
}



static PyObject *
PyvtkXMLReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkXMLReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkXMLReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetColumnArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetColumnArraySelection() :
      op->vtkXMLReader::GetColumnArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkXMLReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkXMLReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfColumnArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnArrays() :
      op->vtkXMLReader::GetNumberOfColumnArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkXMLReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkXMLReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetColumnArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnArrayName(temp0) :
      op->vtkXMLReader::GetColumnArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkXMLReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkXMLReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXMLReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXMLReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetColumnArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnArrayStatus(temp0) :
      op->vtkXMLReader::GetColumnArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetColumnArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXMLReader::SetColumnArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyOutputInformation(temp0, temp1);
    }
    else
    {
      op->vtkXMLReader::CopyOutputInformation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkXMLReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkXMLReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkXMLReader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkXMLReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0, temp1);
    }
    else
    {
      op->vtkXMLReader::SetTimeStepRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0);
    }
    else
    {
      op->vtkXMLReader::SetTimeStepRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXMLReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkXMLReader_SetTimeStepRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return nullptr;
}



static PyObject *
PyvtkXMLReader_GetXMLParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataParser *tempr = (ap.IsBound() ?
      op->GetXMLParser() :
      op->vtkXMLReader::GetXMLParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetReaderErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReaderErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->SetReaderErrorObserver(temp0);
    }
    else
    {
      op->vtkXMLReader::SetReaderErrorObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetReaderErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetReaderErrorObserver() :
      op->vtkXMLReader::GetReaderErrorObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_SetParserErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParserErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->SetParserErrorObserver(temp0);
    }
    else
    {
      op->vtkXMLReader::SetParserErrorObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLReader_GetParserErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParserErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetParserErrorObserver() :
      op->vtkXMLReader::GetParserErrorObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLReader\nC++: static vtkXMLReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLReader\nC++: vtkXMLReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkXMLReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the input file.\n"},
  {"GetFileName", PyvtkXMLReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the input file.\n"},
  {"SetReadFromInputString", PyvtkXMLReader_SetReadFromInputString, METH_VARARGS,
   "V.SetReadFromInputString(int)\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString instead of the default, a\nfile.\n"},
  {"GetReadFromInputString", PyvtkXMLReader_GetReadFromInputString, METH_VARARGS,
   "V.GetReadFromInputString() -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\nEnable reading from an InputString instead of the default, a\nfile.\n"},
  {"ReadFromInputStringOn", PyvtkXMLReader_ReadFromInputStringOn, METH_VARARGS,
   "V.ReadFromInputStringOn()\nC++: virtual void ReadFromInputStringOn()\n\nEnable reading from an InputString instead of the default, a\nfile.\n"},
  {"ReadFromInputStringOff", PyvtkXMLReader_ReadFromInputStringOff, METH_VARARGS,
   "V.ReadFromInputStringOff()\nC++: virtual void ReadFromInputStringOff()\n\nEnable reading from an InputString instead of the default, a\nfile.\n"},
  {"SetInputString", PyvtkXMLReader_SetInputString, METH_VARARGS,
   "V.SetInputString(string)\nC++: void SetInputString(const std::string &s)\n\nEnable reading from an InputString instead of the default, a\nfile.\n"},
  {"CanReadFile", PyvtkXMLReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file (type) with the given name can be read by\nthis reader. If the file has a newer version than the reader, we\nstill say we can read the file type and we fail later, when we\ntry to read the file. This enables clients (ParaView) to\ndistinguish between failures when we need to look for another\nreader and failures when we don't.\n"},
  {"GetOutputAsDataSet", PyvtkXMLReader_GetOutputAsDataSet, METH_VARARGS,
   "V.GetOutputAsDataSet() -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet()\nV.GetOutputAsDataSet(int) -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet(int index)\n\nGet the output as a vtkDataSet pointer.\n"},
  {"GetPointDataArraySelection", PyvtkXMLReader_GetPointDataArraySelection, METH_VARARGS,
   "V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetCellDataArraySelection", PyvtkXMLReader_GetCellDataArraySelection, METH_VARARGS,
   "V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetColumnArraySelection", PyvtkXMLReader_GetColumnArraySelection, METH_VARARGS,
   "V.GetColumnArraySelection() -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetColumnArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetNumberOfPointArrays", PyvtkXMLReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point, cell or column arrays available in the\ninput.\n"},
  {"GetNumberOfCellArrays", PyvtkXMLReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point, cell or column arrays available in the\ninput.\n"},
  {"GetNumberOfColumnArrays", PyvtkXMLReader_GetNumberOfColumnArrays, METH_VARARGS,
   "V.GetNumberOfColumnArrays() -> int\nC++: int GetNumberOfColumnArrays()\n\nGet the number of point, cell or column arrays available in the\ninput.\n"},
  {"GetPointArrayName", PyvtkXMLReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point, cell or column array with the given\nindex in the input.\n"},
  {"GetCellArrayName", PyvtkXMLReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point, cell or column array with the given\nindex in the input.\n"},
  {"GetColumnArrayName", PyvtkXMLReader_GetColumnArrayName, METH_VARARGS,
   "V.GetColumnArrayName(int) -> string\nC++: const char *GetColumnArrayName(int index)\n\nGet the name of the point, cell or column array with the given\nindex in the input.\n"},
  {"GetPointArrayStatus", PyvtkXMLReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"GetCellArrayStatus", PyvtkXMLReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"SetPointArrayStatus", PyvtkXMLReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"SetCellArrayStatus", PyvtkXMLReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"GetColumnArrayStatus", PyvtkXMLReader_GetColumnArrayStatus, METH_VARARGS,
   "V.GetColumnArrayStatus(string) -> int\nC++: int GetColumnArrayStatus(const char *name)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"SetColumnArrayStatus", PyvtkXMLReader_SetColumnArrayStatus, METH_VARARGS,
   "V.SetColumnArrayStatus(string, int)\nC++: void SetColumnArrayStatus(const char *name, int status)\n\nGet/Set whether the point, cell or column array with the given\nname is to be read.\n"},
  {"CopyOutputInformation", PyvtkXMLReader_CopyOutputInformation, METH_VARARGS,
   "V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {"SetTimeStep", PyvtkXMLReader_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nWhich TimeStep to read.\n"},
  {"GetTimeStep", PyvtkXMLReader_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {"GetNumberOfTimeSteps", PyvtkXMLReader_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\n"},
  {"GetTimeStepRange", PyvtkXMLReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"SetTimeStepRange", PyvtkXMLReader_SetTimeStepRange, METH_VARARGS,
   "V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {"GetXMLParser", PyvtkXMLReader_GetXMLParser, METH_VARARGS,
   "V.GetXMLParser() -> vtkXMLDataParser\nC++: vtkXMLDataParser *GetXMLParser()\n\nReturns the internal XML parser. This can be used to access the\nXML DOM after RequestInformation() was called.\n"},
  {"SetReaderErrorObserver", PyvtkXMLReader_SetReaderErrorObserver, METH_VARARGS,
   "V.SetReaderErrorObserver(vtkCommand)\nC++: void SetReaderErrorObserver(vtkCommand *)\n\nSet/get the ErrorObserver for the internal reader This is useful\nfor applications that want to catch error messages.\n"},
  {"GetReaderErrorObserver", PyvtkXMLReader_GetReaderErrorObserver, METH_VARARGS,
   "V.GetReaderErrorObserver() -> vtkCommand\nC++: virtual vtkCommand *GetReaderErrorObserver()\n\nSet/get the ErrorObserver for the internal reader This is useful\nfor applications that want to catch error messages.\n"},
  {"SetParserErrorObserver", PyvtkXMLReader_SetParserErrorObserver, METH_VARARGS,
   "V.SetParserErrorObserver(vtkCommand)\nC++: void SetParserErrorObserver(vtkCommand *)\n\nSet/get the ErrorObserver for the internal xml parser This is\nuseful for applications that want to catch error messages.\n"},
  {"GetParserErrorObserver", PyvtkXMLReader_GetParserErrorObserver, METH_VARARGS,
   "V.GetParserErrorObserver() -> vtkCommand\nC++: virtual vtkCommand *GetParserErrorObserver()\n\nSet/get the ErrorObserver for the internal xml parser This is\nuseful for applications that want to catch error messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLReader", // tp_name
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
  PyvtkXMLReader_Doc, // tp_doc
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

PyObject *PyvtkXMLReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLReader_Type, PyvtkXMLReader_Methods,
    "vtkXMLReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkXMLReader_Type;

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

  PyType_Ready(&PyvtkXMLReader_FieldType_Type);
  PyvtkXMLReader_FieldType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkXMLReader_FieldType_Type);

  o = (PyObject *)&PyvtkXMLReader_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkXMLReader::FieldType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "POINT_DATA", vtkXMLReader::POINT_DATA },
        { "CELL_DATA", vtkXMLReader::CELL_DATA },
        { "OTHER", vtkXMLReader::OTHER },
      };

    o = PyvtkXMLReader_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

