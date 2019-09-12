// python wrapper for vtkExodusIIReader
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
#include "vtkExodusIIReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExodusIIReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExodusIIReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExodusIIReader_Doc =
  "vtkExodusIIReader - Read exodus 2 files .ex2\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExodusIIReader is a unstructured grid source object that reads\n"
  "ExodusII files.  Most of the meta data associated with the file is\n"
  "loaded when UpdateInformation is called.  This includes information\n"
  "like Title, number of blocks, number and names of arrays. This data\n"
  "can be retrieved from methods in this reader. Separate arrays that\n"
  "are meant to be a single vector, are combined internally for\n"
  "convenience.  To be combined, the array names have to be identical\n"
  "except for a trailing X,Y and Z (or x,y,z).  By default cell and\n"
  "point arrays are not loaded.  However, the user can flag arrays to\n"
  "load with the methods \"SetPointResultArrayStatus\" and\n"
  "\"SetElementResultArrayStatus\".  The reader DOES NOT respond to piece\n"
  "requests\n\n";

static PyTypeObject PyvtkExodusIIReader_ObjectType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIIReader.ObjectType", // tp_name
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

PyObject *PyvtkExodusIIReader_ObjectType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkExodusIIReader_ObjectType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkExodusIIReader_ObjectType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkExodusIIReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExodusIIReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIIReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExodusIIReader *tempr = vtkExodusIIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExodusIIReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIIReader::NewInstance());

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
PyvtkExodusIIReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkExodusIIReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExodusIIReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMetadataMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetadataMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMetadataMTime() :
      op->vtkExodusIIReader::GetMetadataMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      op->vtkExodusIIReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkExodusIIReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMLFileName(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetXMLFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLFileName() :
      op->vtkExodusIIReader::GetXMLFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      op->vtkExodusIIReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkExodusIIReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetModeShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModeShape(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetModeShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetModeShapesRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapesRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetModeShapesRange() :
      op->vtkExodusIIReader::GetModeShapesRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkExodusIIReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateObjectIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateObjectIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateObjectIdCellArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateObjectIdCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateObjectIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateObjectIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateObjectIdCellArray() :
      op->vtkExodusIIReader::GetGenerateObjectIdCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateObjectIdCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateObjectIdCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateObjectIdCellArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateObjectIdCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateObjectIdCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateObjectIdCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateObjectIdCellArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateObjectIdCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetObjectIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetObjectIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGlobalElementIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateGlobalElementIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateGlobalElementIdArray() :
      op->vtkExodusIIReader::GetGenerateGlobalElementIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalElementIdArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateGlobalElementIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalElementIdArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateGlobalElementIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGlobalNodeIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateGlobalNodeIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateGlobalNodeIdArray() :
      op->vtkExodusIIReader::GetGenerateGlobalNodeIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalNodeIdArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateGlobalNodeIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGlobalNodeIdArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateGlobalNodeIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateImplicitElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateImplicitElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateImplicitElementIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateImplicitElementIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateImplicitElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateImplicitElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateImplicitElementIdArray() :
      op->vtkExodusIIReader::GetGenerateImplicitElementIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateImplicitElementIdArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateImplicitElementIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateImplicitElementIdArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateImplicitElementIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateImplicitNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateImplicitNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateImplicitNodeIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateImplicitNodeIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateImplicitNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateImplicitNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateImplicitNodeIdArray() :
      op->vtkExodusIIReader::GetGenerateImplicitNodeIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateImplicitNodeIdArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateImplicitNodeIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateImplicitNodeIdArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateImplicitNodeIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFileIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetGenerateFileIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFileIdArray() :
      op->vtkExodusIIReader::GetGenerateFileIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateFileIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFileIdArrayOn();
    }
    else
    {
      op->vtkExodusIIReader::GenerateFileIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateFileIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFileIdArrayOff();
    }
    else
    {
      op->vtkExodusIIReader::GenerateFileIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileId(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetFileId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileId() :
      op->vtkExodusIIReader::GetFileId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetGlobalElementIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeElementIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetPedigreeElementIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalElementID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkExodusIIReader::GetGlobalElementID(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalElementID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkExodusIIReader::GetGlobalElementID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalElementID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkExodusIIReader_GetGlobalElementID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalElementID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalElementID");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitElementIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetImplicitElementIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetGlobalFaceIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeFaceIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetPedigreeFaceIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkExodusIIReader::GetGlobalFaceID(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkExodusIIReader::GetGlobalFaceID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkExodusIIReader_GetGlobalFaceID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalFaceID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalFaceID");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitFaceIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetImplicitFaceIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetGlobalEdgeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeEdgeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetPedigreeEdgeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkExodusIIReader::GetGlobalEdgeID(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkExodusIIReader::GetGlobalEdgeID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkExodusIIReader_GetGlobalEdgeID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalEdgeID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalEdgeID");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitEdgeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetImplicitEdgeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetGlobalNodeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeNodeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetPedigreeNodeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkExodusIIReader::GetGlobalNodeID(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeID");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkExodusIIReader::GetGlobalNodeID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkExodusIIReader_GetGlobalNodeID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalNodeID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalNodeID");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitNodeIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetImplicitNodeIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetSourceElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSideSetSourceElementIdArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetSideSetSourceElementIdArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetSourceElementSideArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSideSetSourceElementSideArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkExodusIIReader::GetSideSetSourceElementSideArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyDisplacements(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetApplyDisplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetApplyDisplacements() :
      op->vtkExodusIIReader::GetApplyDisplacements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ApplyDisplacementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDisplacementsOn();
    }
    else
    {
      op->vtkExodusIIReader::ApplyDisplacementsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ApplyDisplacementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDisplacementsOff();
    }
    else
    {
      op->vtkExodusIIReader::ApplyDisplacementsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementMagnitude(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetDisplacementMagnitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitude() :
      op->vtkExodusIIReader::GetDisplacementMagnitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasModeShapes(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetHasModeShapes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasModeShapes() :
      op->vtkExodusIIReader::GetHasModeShapes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_HasModeShapesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasModeShapesOn();
    }
    else
    {
      op->vtkExodusIIReader::HasModeShapesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_HasModeShapesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasModeShapesOff();
    }
    else
    {
      op->vtkExodusIIReader::HasModeShapesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetModeShapeTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeShapeTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModeShapeTime(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetModeShapeTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetModeShapeTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapeTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetModeShapeTime() :
      op->vtkExodusIIReader::GetModeShapeTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAnimateModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimateModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimateModeShapes(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetAnimateModeShapes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAnimateModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimateModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimateModeShapes() :
      op->vtkExodusIIReader::GetAnimateModeShapes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_AnimateModeShapesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateModeShapesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateModeShapesOn();
    }
    else
    {
      op->vtkExodusIIReader::AnimateModeShapesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_AnimateModeShapesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateModeShapesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateModeShapesOff();
    }
    else
    {
      op->vtkExodusIIReader::AnimateModeShapesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetIgnoreFileTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreFileTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreFileTime(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetIgnoreFileTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetIgnoreFileTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreFileTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreFileTime() :
      op->vtkExodusIIReader::GetIgnoreFileTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IgnoreFileTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFileTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFileTimeOn();
    }
    else
    {
      op->vtkExodusIIReader::IgnoreFileTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IgnoreFileTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFileTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFileTimeOff();
    }
    else
    {
      op->vtkExodusIIReader::IgnoreFileTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkExodusIIReader::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkExodusIIReader::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExodusIIReader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodesInFile() :
      op->vtkExodusIIReader::GetNumberOfNodesInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesInFile() :
      op->vtkExodusIIReader::GetNumberOfEdgesInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFacesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFacesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFacesInFile() :
      op->vtkExodusIIReader::GetNumberOfFacesInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementsInFile() :
      op->vtkExodusIIReader::GetNumberOfElementsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectTypeFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectTypeFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectTypeFromName(temp0) :
      op->vtkExodusIIReader::GetObjectTypeFromName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectTypeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectTypeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetObjectTypeName(temp0) :
      op->vtkExodusIIReader::GetObjectTypeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkExodusIIReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjects(temp0) :
      op->vtkExodusIIReader::GetNumberOfObjects(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEntriesInObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntriesInObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEntriesInObject(temp0, temp1) :
      op->vtkExodusIIReader::GetNumberOfEntriesInObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectId(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetObjectName(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectIndex(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectIndex(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectIndex_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetObjectIndex_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkExodusIIReader_GetObjectIndex_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetObjectIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectIndex");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetObjectStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectStatus(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectStatus(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetObjectStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_GetObjectStatus_s2, METH_VARARGS,
   "@iz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetObjectStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_SetObjectStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetObjectStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetObjectStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetObjectStatus_s1, METH_VARARGS,
   "@iii"},
  {nullptr, PyvtkExodusIIReader_SetObjectStatus_s2, METH_VARARGS,
   "@izi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetObjectStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjectArrays(temp0) :
      op->vtkExodusIIReader::GetNumberOfObjectArrays(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetObjectArrayName(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectArrayName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectArrayIndex(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectArrayIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectArrayComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectArrayComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjectArrayComponents(temp0, temp1) :
      op->vtkExodusIIReader::GetNumberOfObjectArrayComponents(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectArrayStatus(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectArrayStatus(temp0, temp1) :
      op->vtkExodusIIReader::GetObjectArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetObjectArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_GetObjectArrayStatus_s2, METH_VARARGS,
   "@iz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetObjectArrayStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectArrayStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetObjectArrayStatus(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectArrayStatus(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetObjectArrayStatus_s1, METH_VARARGS,
   "@iii"},
  {nullptr, PyvtkExodusIIReader_SetObjectArrayStatus_s2, METH_VARARGS,
   "@izi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjectAttributes(temp0, temp1) :
      op->vtkExodusIIReader::GetNumberOfObjectAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetObjectAttributeName(temp0, temp1, temp2) :
      op->vtkExodusIIReader::GetObjectAttributeName(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectAttributeIndex(temp0, temp1, temp2) :
      op->vtkExodusIIReader::GetObjectAttributeIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectAttributeStatus(temp0, temp1, temp2) :
      op->vtkExodusIIReader::GetObjectAttributeStatus(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectAttributeStatus(temp0, temp1, temp2) :
      op->vtkExodusIIReader::GetObjectAttributeStatus(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectAttributeStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetObjectAttributeStatus_s1, METH_VARARGS,
   "@iii"},
  {nullptr, PyvtkExodusIIReader_GetObjectAttributeStatus_s2, METH_VARARGS,
   "@iiz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectAttributeStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectAttributeStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExodusIIReader::SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectAttributeStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetObjectAttributeStatus_s1, METH_VARARGS,
   "@iiii"},
  {nullptr, PyvtkExodusIIReader_SetObjectAttributeStatus_s2, METH_VARARGS,
   "@iizi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectAttributeStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectAttributeStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfNodes() :
      op->vtkExodusIIReader::GetTotalNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfEdges() :
      op->vtkExodusIIReader::GetTotalNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfFaces() :
      op->vtkExodusIIReader::GetTotalNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfElements() :
      op->vtkExodusIIReader::GetTotalNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfPartArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartArrays() :
      op->vtkExodusIIReader::GetNumberOfPartArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPartArrayName(temp0) :
      op->vtkExodusIIReader::GetPartArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartArrayID(temp0) :
      op->vtkExodusIIReader::GetPartArrayID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartBlockInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartBlockInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPartBlockInfo(temp0) :
      op->vtkExodusIIReader::GetPartBlockInfo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPartArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetPartArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPartArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetPartArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetPartArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetPartArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_SetPartArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPartArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartArrayStatus(temp0) :
      op->vtkExodusIIReader::GetPartArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartArrayStatus(temp0) :
      op->vtkExodusIIReader::GetPartArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetPartArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetPartArrayStatus_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkExodusIIReader_GetPartArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPartArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterialArrays() :
      op->vtkExodusIIReader::GetNumberOfMaterialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName(temp0) :
      op->vtkExodusIIReader::GetMaterialArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMaterialArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayID(temp0) :
      op->vtkExodusIIReader::GetMaterialArrayID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetMaterialArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetMaterialArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetMaterialArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetMaterialArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_SetMaterialArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkExodusIIReader::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkExodusIIReader::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetMaterialArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetMaterialArrayStatus_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkExodusIIReader_GetMaterialArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaterialArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfAssemblyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAssemblyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAssemblyArrays() :
      op->vtkExodusIIReader::GetNumberOfAssemblyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAssemblyArrayName(temp0) :
      op->vtkExodusIIReader::GetAssemblyArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAssemblyArrayID(temp0) :
      op->vtkExodusIIReader::GetAssemblyArrayID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetAssemblyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetAssemblyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetAssemblyArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetAssemblyArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_SetAssemblyArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetAssemblyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAssemblyArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAssemblyArrayStatus(temp0) :
      op->vtkExodusIIReader::GetAssemblyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAssemblyArrayStatus(temp0) :
      op->vtkExodusIIReader::GetAssemblyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetAssemblyArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetAssemblyArrayStatus_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkExodusIIReader_GetAssemblyArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetAssemblyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAssemblyArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfHierarchyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHierarchyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHierarchyArrays() :
      op->vtkExodusIIReader::GetNumberOfHierarchyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHierarchyArrayName(temp0) :
      op->vtkExodusIIReader::GetHierarchyArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHierarchyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetHierarchyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHierarchyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetHierarchyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetHierarchyArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_SetHierarchyArrayStatus_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkExodusIIReader_SetHierarchyArrayStatus_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetHierarchyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHierarchyArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchyArrayStatus(temp0) :
      op->vtkExodusIIReader::GetHierarchyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchyArrayStatus(temp0) :
      op->vtkExodusIIReader::GetHierarchyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetHierarchyArrayStatus_Methods[] = {
  {nullptr, PyvtkExodusIIReader_GetHierarchyArrayStatus_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkExodusIIReader_GetHierarchyArrayStatus_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetHierarchyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHierarchyArrayStatus");
  return nullptr;
}



static PyObject *
PyvtkExodusIIReader_GetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayType() :
      op->vtkExodusIIReader::GetDisplayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayType(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetDisplayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IsValidVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsValidVariable(temp0, temp1) :
      op->vtkExodusIIReader::IsValidVariable(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetVariableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableID(temp0, temp1) :
      op->vtkExodusIIReader::GetVariableID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAllArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetAllArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeSeriesData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSeriesData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeSeriesData(temp0, temp1, temp2, temp3) :
      op->vtkExodusIIReader::GetTimeSeriesData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeBlockArrays() :
      op->vtkExodusIIReader::GetNumberOfEdgeBlockArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeBlockArrayName(temp0) :
      op->vtkExodusIIReader::GetEdgeBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeBlockArrayStatus(temp0) :
      op->vtkExodusIIReader::GetEdgeBlockArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeBlockArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetEdgeBlockArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceBlockArrays() :
      op->vtkExodusIIReader::GetNumberOfFaceBlockArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceBlockArrayName(temp0) :
      op->vtkExodusIIReader::GetFaceBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceBlockArrayStatus(temp0) :
      op->vtkExodusIIReader::GetFaceBlockArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceBlockArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetFaceBlockArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementBlockArrays() :
      op->vtkExodusIIReader::GetNumberOfElementBlockArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementBlockArrayName(temp0) :
      op->vtkExodusIIReader::GetElementBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementBlockArrayStatus(temp0) :
      op->vtkExodusIIReader::GetElementBlockArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementBlockArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetElementBlockArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfGlobalResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGlobalResultArrays() :
      op->vtkExodusIIReader::GetNumberOfGlobalResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlobalResultArrayName(temp0) :
      op->vtkExodusIIReader::GetGlobalResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlobalResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetGlobalResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGlobalResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGlobalResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetGlobalResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfPointResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointResultArrays() :
      op->vtkExodusIIReader::GetNumberOfPointResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPointResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointResultArrayName(temp0) :
      op->vtkExodusIIReader::GetPointResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPointResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetPointResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetPointResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetPointResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeResultArrays() :
      op->vtkExodusIIReader::GetNumberOfEdgeResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeResultArrayName(temp0) :
      op->vtkExodusIIReader::GetEdgeResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetEdgeResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetEdgeResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceResultArrays() :
      op->vtkExodusIIReader::GetNumberOfFaceResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceResultArrayName(temp0) :
      op->vtkExodusIIReader::GetFaceResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetFaceResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetFaceResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementResultArrays() :
      op->vtkExodusIIReader::GetNumberOfElementResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementResultArrayName(temp0) :
      op->vtkExodusIIReader::GetElementResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetElementResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetElementResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeMapArrays() :
      op->vtkExodusIIReader::GetNumberOfNodeMapArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeMapArrayName(temp0) :
      op->vtkExodusIIReader::GetNodeMapArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNodeMapArrayStatus(temp0) :
      op->vtkExodusIIReader::GetNodeMapArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNodeMapArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetNodeMapArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeMapArrays() :
      op->vtkExodusIIReader::GetNumberOfEdgeMapArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeMapArrayName(temp0) :
      op->vtkExodusIIReader::GetEdgeMapArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeMapArrayStatus(temp0) :
      op->vtkExodusIIReader::GetEdgeMapArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeMapArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetEdgeMapArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceMapArrays() :
      op->vtkExodusIIReader::GetNumberOfFaceMapArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceMapArrayName(temp0) :
      op->vtkExodusIIReader::GetFaceMapArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMapArrayStatus(temp0) :
      op->vtkExodusIIReader::GetFaceMapArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceMapArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetFaceMapArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementMapArrays() :
      op->vtkExodusIIReader::GetNumberOfElementMapArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementMapArrayName(temp0) :
      op->vtkExodusIIReader::GetElementMapArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementMapArrayStatus(temp0) :
      op->vtkExodusIIReader::GetElementMapArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementMapArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetElementMapArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSetArrays() :
      op->vtkExodusIIReader::GetNumberOfNodeSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeSetArrayName(temp0) :
      op->vtkExodusIIReader::GetNodeSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNodeSetArrayStatus(temp0) :
      op->vtkExodusIIReader::GetNodeSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNodeSetArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetNodeSetArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfSideSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSetArrays() :
      op->vtkExodusIIReader::GetNumberOfSideSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSideSetArrayName(temp0) :
      op->vtkExodusIIReader::GetSideSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSideSetArrayStatus(temp0) :
      op->vtkExodusIIReader::GetSideSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSideSetArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetSideSetArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeSetArrays() :
      op->vtkExodusIIReader::GetNumberOfEdgeSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeSetArrayName(temp0) :
      op->vtkExodusIIReader::GetEdgeSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeSetArrayStatus(temp0) :
      op->vtkExodusIIReader::GetEdgeSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSetArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetEdgeSetArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceSetArrays() :
      op->vtkExodusIIReader::GetNumberOfFaceSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceSetArrayName(temp0) :
      op->vtkExodusIIReader::GetFaceSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceSetArrayStatus(temp0) :
      op->vtkExodusIIReader::GetFaceSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceSetArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetFaceSetArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementSetArrays() :
      op->vtkExodusIIReader::GetNumberOfElementSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementSetArrayName(temp0) :
      op->vtkExodusIIReader::GetElementSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementSetArrayStatus(temp0) :
      op->vtkExodusIIReader::GetElementSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementSetArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetElementSetArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSetResultArrays() :
      op->vtkExodusIIReader::GetNumberOfNodeSetResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeSetResultArrayName(temp0) :
      op->vtkExodusIIReader::GetNodeSetResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNodeSetResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetNodeSetResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNodeSetResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetNodeSetResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfSideSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSetResultArrays() :
      op->vtkExodusIIReader::GetNumberOfSideSetResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSideSetResultArrayName(temp0) :
      op->vtkExodusIIReader::GetSideSetResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSideSetResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetSideSetResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetSideSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSideSetResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetSideSetResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeSetResultArrays() :
      op->vtkExodusIIReader::GetNumberOfEdgeSetResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeSetResultArrayName(temp0) :
      op->vtkExodusIIReader::GetEdgeSetResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeSetResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetEdgeSetResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSetResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetEdgeSetResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceSetResultArrays() :
      op->vtkExodusIIReader::GetNumberOfFaceSetResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceSetResultArrayName(temp0) :
      op->vtkExodusIIReader::GetFaceSetResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceSetResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetFaceSetResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceSetResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetFaceSetResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementSetResultArrays() :
      op->vtkExodusIIReader::GetNumberOfElementSetResultArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementSetResultArrayName(temp0) :
      op->vtkExodusIIReader::GetElementSetResultArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementSetResultArrayStatus(temp0) :
      op->vtkExodusIIReader::GetElementSetResultArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementSetResultArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkExodusIIReader::SetElementSetResultArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkExodusIIReader::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ResetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetSettings();
    }
    else
    {
      op->vtkExodusIIReader::ResetSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCache();
    }
    else
    {
      op->vtkExodusIIReader::ResetCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheSize(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkExodusIIReader::GetCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetSqueezePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSqueezePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSqueezePoints(temp0);
    }
    else
    {
      op->vtkExodusIIReader::SetSqueezePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSqueezePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSqueezePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSqueezePoints() :
      op->vtkExodusIIReader::GetSqueezePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dump();
    }
    else
    {
      op->vtkExodusIIReader::Dump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkExodusIIReader::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSILUpdateStamp() :
      op->vtkExodusIIReader::GetSILUpdateStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMaxNameLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNameLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNameLength() :
      op->vtkExodusIIReader::GetMaxNameLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_Methods[] = {
  {"IsTypeOf", PyvtkExodusIIReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExodusIIReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExodusIIReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExodusIIReader\nC++: static vtkExodusIIReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExodusIIReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExodusIIReader\nC++: vtkExodusIIReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkExodusIIReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nDetermine if the file can be read with this reader.\n"},
  {"GetMTime", PyvtkExodusIIReader_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the object's MTime. This is overridden to include the\ntimestamp of its internal class.\n"},
  {"GetMetadataMTime", PyvtkExodusIIReader_GetMetadataMTime, METH_VARARGS,
   "V.GetMetadataMTime() -> int\nC++: virtual vtkMTimeType GetMetadataMTime()\n\nReturn the MTime of the internal data structure. This is really\nonly intended for use by vtkPExodusIIReader in order to determine\nif the filename is newer than the metadata.\n"},
  {"SetFileName", PyvtkExodusIIReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *fname)\n\nSpecify file name of the Exodus file.\n"},
  {"GetFileName", PyvtkExodusIIReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of the Exodus file.\n"},
  {"SetXMLFileName", PyvtkExodusIIReader_SetXMLFileName, METH_VARARGS,
   "V.SetXMLFileName(string)\nC++: virtual void SetXMLFileName(const char *fname)\n\nSpecify file name of the xml file.\n"},
  {"GetXMLFileName", PyvtkExodusIIReader_GetXMLFileName, METH_VARARGS,
   "V.GetXMLFileName() -> string\nC++: virtual char *GetXMLFileName()\n\nSpecify file name of the xml file.\n"},
  {"SetTimeStep", PyvtkExodusIIReader_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nWhich TimeStep to read.\n"},
  {"GetTimeStep", PyvtkExodusIIReader_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {"SetModeShape", PyvtkExodusIIReader_SetModeShape, METH_VARARGS,
   "V.SetModeShape(int)\nC++: void SetModeShape(int val)\n\nConvenience method to set the mode-shape which is same as\nthis->SetTimeStep(val-1);\n"},
  {"GetModeShapesRange", PyvtkExodusIIReader_GetModeShapesRange, METH_VARARGS,
   "V.GetModeShapesRange() -> (int, int)\nC++: int *GetModeShapesRange()\n\n"},
  {"GetTimeStepRange", PyvtkExodusIIReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"SetGenerateObjectIdCellArray", PyvtkExodusIIReader_SetGenerateObjectIdCellArray, METH_VARARGS,
   "V.SetGenerateObjectIdCellArray(int)\nC++: virtual void SetGenerateObjectIdCellArray(vtkTypeBool g)\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, this is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {"GetGenerateObjectIdCellArray", PyvtkExodusIIReader_GetGenerateObjectIdCellArray, METH_VARARGS,
   "V.GetGenerateObjectIdCellArray() -> int\nC++: vtkTypeBool GetGenerateObjectIdCellArray()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, this is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {"GenerateObjectIdCellArrayOn", PyvtkExodusIIReader_GenerateObjectIdCellArrayOn, METH_VARARGS,
   "V.GenerateObjectIdCellArrayOn()\nC++: virtual void GenerateObjectIdCellArrayOn()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, this is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {"GenerateObjectIdCellArrayOff", PyvtkExodusIIReader_GenerateObjectIdCellArrayOff, METH_VARARGS,
   "V.GenerateObjectIdCellArrayOff()\nC++: virtual void GenerateObjectIdCellArrayOff()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, this is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {"GetObjectIdArrayName", PyvtkExodusIIReader_GetObjectIdArrayName, METH_VARARGS,
   "V.GetObjectIdArrayName() -> string\nC++: static const char *GetObjectIdArrayName()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, this is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {"SetGenerateGlobalElementIdArray", PyvtkExodusIIReader_SetGenerateGlobalElementIdArray, METH_VARARGS,
   "V.SetGenerateGlobalElementIdArray(int)\nC++: virtual void SetGenerateGlobalElementIdArray(vtkTypeBool g)\n\n"},
  {"GetGenerateGlobalElementIdArray", PyvtkExodusIIReader_GetGenerateGlobalElementIdArray, METH_VARARGS,
   "V.GetGenerateGlobalElementIdArray() -> int\nC++: vtkTypeBool GetGenerateGlobalElementIdArray()\n\n"},
  {"GenerateGlobalElementIdArrayOn", PyvtkExodusIIReader_GenerateGlobalElementIdArrayOn, METH_VARARGS,
   "V.GenerateGlobalElementIdArrayOn()\nC++: virtual void GenerateGlobalElementIdArrayOn()\n\n"},
  {"GenerateGlobalElementIdArrayOff", PyvtkExodusIIReader_GenerateGlobalElementIdArrayOff, METH_VARARGS,
   "V.GenerateGlobalElementIdArrayOff()\nC++: virtual void GenerateGlobalElementIdArrayOff()\n\n"},
  {"SetGenerateGlobalNodeIdArray", PyvtkExodusIIReader_SetGenerateGlobalNodeIdArray, METH_VARARGS,
   "V.SetGenerateGlobalNodeIdArray(int)\nC++: virtual void SetGenerateGlobalNodeIdArray(vtkTypeBool g)\n\n"},
  {"GetGenerateGlobalNodeIdArray", PyvtkExodusIIReader_GetGenerateGlobalNodeIdArray, METH_VARARGS,
   "V.GetGenerateGlobalNodeIdArray() -> int\nC++: vtkTypeBool GetGenerateGlobalNodeIdArray()\n\n"},
  {"GenerateGlobalNodeIdArrayOn", PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOn, METH_VARARGS,
   "V.GenerateGlobalNodeIdArrayOn()\nC++: virtual void GenerateGlobalNodeIdArrayOn()\n\n"},
  {"GenerateGlobalNodeIdArrayOff", PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOff, METH_VARARGS,
   "V.GenerateGlobalNodeIdArrayOff()\nC++: virtual void GenerateGlobalNodeIdArrayOff()\n\n"},
  {"SetGenerateImplicitElementIdArray", PyvtkExodusIIReader_SetGenerateImplicitElementIdArray, METH_VARARGS,
   "V.SetGenerateImplicitElementIdArray(int)\nC++: virtual void SetGenerateImplicitElementIdArray(vtkTypeBool g)\n\n"},
  {"GetGenerateImplicitElementIdArray", PyvtkExodusIIReader_GetGenerateImplicitElementIdArray, METH_VARARGS,
   "V.GetGenerateImplicitElementIdArray() -> int\nC++: vtkTypeBool GetGenerateImplicitElementIdArray()\n\n"},
  {"GenerateImplicitElementIdArrayOn", PyvtkExodusIIReader_GenerateImplicitElementIdArrayOn, METH_VARARGS,
   "V.GenerateImplicitElementIdArrayOn()\nC++: virtual void GenerateImplicitElementIdArrayOn()\n\n"},
  {"GenerateImplicitElementIdArrayOff", PyvtkExodusIIReader_GenerateImplicitElementIdArrayOff, METH_VARARGS,
   "V.GenerateImplicitElementIdArrayOff()\nC++: virtual void GenerateImplicitElementIdArrayOff()\n\n"},
  {"SetGenerateImplicitNodeIdArray", PyvtkExodusIIReader_SetGenerateImplicitNodeIdArray, METH_VARARGS,
   "V.SetGenerateImplicitNodeIdArray(int)\nC++: virtual void SetGenerateImplicitNodeIdArray(vtkTypeBool g)\n\n"},
  {"GetGenerateImplicitNodeIdArray", PyvtkExodusIIReader_GetGenerateImplicitNodeIdArray, METH_VARARGS,
   "V.GetGenerateImplicitNodeIdArray() -> int\nC++: vtkTypeBool GetGenerateImplicitNodeIdArray()\n\n"},
  {"GenerateImplicitNodeIdArrayOn", PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOn, METH_VARARGS,
   "V.GenerateImplicitNodeIdArrayOn()\nC++: virtual void GenerateImplicitNodeIdArrayOn()\n\n"},
  {"GenerateImplicitNodeIdArrayOff", PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOff, METH_VARARGS,
   "V.GenerateImplicitNodeIdArrayOff()\nC++: virtual void GenerateImplicitNodeIdArrayOff()\n\n"},
  {"SetGenerateFileIdArray", PyvtkExodusIIReader_SetGenerateFileIdArray, METH_VARARGS,
   "V.SetGenerateFileIdArray(int)\nC++: virtual void SetGenerateFileIdArray(vtkTypeBool f)\n\n"},
  {"GetGenerateFileIdArray", PyvtkExodusIIReader_GetGenerateFileIdArray, METH_VARARGS,
   "V.GetGenerateFileIdArray() -> int\nC++: vtkTypeBool GetGenerateFileIdArray()\n\n"},
  {"GenerateFileIdArrayOn", PyvtkExodusIIReader_GenerateFileIdArrayOn, METH_VARARGS,
   "V.GenerateFileIdArrayOn()\nC++: virtual void GenerateFileIdArrayOn()\n\n"},
  {"GenerateFileIdArrayOff", PyvtkExodusIIReader_GenerateFileIdArrayOff, METH_VARARGS,
   "V.GenerateFileIdArrayOff()\nC++: virtual void GenerateFileIdArrayOff()\n\n"},
  {"SetFileId", PyvtkExodusIIReader_SetFileId, METH_VARARGS,
   "V.SetFileId(int)\nC++: virtual void SetFileId(int f)\n\n"},
  {"GetFileId", PyvtkExodusIIReader_GetFileId, METH_VARARGS,
   "V.GetFileId() -> int\nC++: int GetFileId()\n\n"},
  {"GetGlobalElementIdArrayName", PyvtkExodusIIReader_GetGlobalElementIdArrayName, METH_VARARGS,
   "V.GetGlobalElementIdArrayName() -> string\nC++: static const char *GetGlobalElementIdArrayName()\n\n"},
  {"GetPedigreeElementIdArrayName", PyvtkExodusIIReader_GetPedigreeElementIdArrayName, METH_VARARGS,
   "V.GetPedigreeElementIdArrayName() -> string\nC++: static const char *GetPedigreeElementIdArrayName()\n\n"},
  {"GetGlobalElementID", PyvtkExodusIIReader_GetGlobalElementID, METH_VARARGS,
   "V.GetGlobalElementID(vtkDataSet, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID)\nV.GetGlobalElementID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {"GetImplicitElementIdArrayName", PyvtkExodusIIReader_GetImplicitElementIdArrayName, METH_VARARGS,
   "V.GetImplicitElementIdArrayName() -> string\nC++: static const char *GetImplicitElementIdArrayName()\n\n"},
  {"GetGlobalFaceIdArrayName", PyvtkExodusIIReader_GetGlobalFaceIdArrayName, METH_VARARGS,
   "V.GetGlobalFaceIdArrayName() -> string\nC++: static const char *GetGlobalFaceIdArrayName()\n\n"},
  {"GetPedigreeFaceIdArrayName", PyvtkExodusIIReader_GetPedigreeFaceIdArrayName, METH_VARARGS,
   "V.GetPedigreeFaceIdArrayName() -> string\nC++: static const char *GetPedigreeFaceIdArrayName()\n\n"},
  {"GetGlobalFaceID", PyvtkExodusIIReader_GetGlobalFaceID, METH_VARARGS,
   "V.GetGlobalFaceID(vtkDataSet, int) -> int\nC++: static int GetGlobalFaceID(vtkDataSet *data, int localID)\nV.GetGlobalFaceID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalFaceID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {"GetImplicitFaceIdArrayName", PyvtkExodusIIReader_GetImplicitFaceIdArrayName, METH_VARARGS,
   "V.GetImplicitFaceIdArrayName() -> string\nC++: static const char *GetImplicitFaceIdArrayName()\n\n"},
  {"GetGlobalEdgeIdArrayName", PyvtkExodusIIReader_GetGlobalEdgeIdArrayName, METH_VARARGS,
   "V.GetGlobalEdgeIdArrayName() -> string\nC++: static const char *GetGlobalEdgeIdArrayName()\n\n"},
  {"GetPedigreeEdgeIdArrayName", PyvtkExodusIIReader_GetPedigreeEdgeIdArrayName, METH_VARARGS,
   "V.GetPedigreeEdgeIdArrayName() -> string\nC++: static const char *GetPedigreeEdgeIdArrayName()\n\n"},
  {"GetGlobalEdgeID", PyvtkExodusIIReader_GetGlobalEdgeID, METH_VARARGS,
   "V.GetGlobalEdgeID(vtkDataSet, int) -> int\nC++: static int GetGlobalEdgeID(vtkDataSet *data, int localID)\nV.GetGlobalEdgeID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalEdgeID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {"GetImplicitEdgeIdArrayName", PyvtkExodusIIReader_GetImplicitEdgeIdArrayName, METH_VARARGS,
   "V.GetImplicitEdgeIdArrayName() -> string\nC++: static const char *GetImplicitEdgeIdArrayName()\n\n"},
  {"GetGlobalNodeIdArrayName", PyvtkExodusIIReader_GetGlobalNodeIdArrayName, METH_VARARGS,
   "V.GetGlobalNodeIdArrayName() -> string\nC++: static const char *GetGlobalNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {"GetPedigreeNodeIdArrayName", PyvtkExodusIIReader_GetPedigreeNodeIdArrayName, METH_VARARGS,
   "V.GetPedigreeNodeIdArrayName() -> string\nC++: static const char *GetPedigreeNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {"GetGlobalNodeID", PyvtkExodusIIReader_GetGlobalNodeID, METH_VARARGS,
   "V.GetGlobalNodeID(vtkDataSet, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID)\nV.GetGlobalNodeID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID,\n    int searchType)\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {"GetImplicitNodeIdArrayName", PyvtkExodusIIReader_GetImplicitNodeIdArrayName, METH_VARARGS,
   "V.GetImplicitNodeIdArrayName() -> string\nC++: static const char *GetImplicitNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {"GetSideSetSourceElementIdArrayName", PyvtkExodusIIReader_GetSideSetSourceElementIdArrayName, METH_VARARGS,
   "V.GetSideSetSourceElementIdArrayName() -> string\nC++: static const char *GetSideSetSourceElementIdArrayName()\n\nGet the name of the array that stores the mapping from side set\ncells back to the global id of the elements they bound.\n"},
  {"GetSideSetSourceElementSideArrayName", PyvtkExodusIIReader_GetSideSetSourceElementSideArrayName, METH_VARARGS,
   "V.GetSideSetSourceElementSideArrayName() -> string\nC++: static const char *GetSideSetSourceElementSideArrayName()\n\nGet the name of the array that stores the mapping from side set\ncells back to the canonical side of the elements they bound.\n"},
  {"SetApplyDisplacements", PyvtkExodusIIReader_SetApplyDisplacements, METH_VARARGS,
   "V.SetApplyDisplacements(int)\nC++: virtual void SetApplyDisplacements(vtkTypeBool d)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"GetApplyDisplacements", PyvtkExodusIIReader_GetApplyDisplacements, METH_VARARGS,
   "V.GetApplyDisplacements() -> int\nC++: vtkTypeBool GetApplyDisplacements()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"ApplyDisplacementsOn", PyvtkExodusIIReader_ApplyDisplacementsOn, METH_VARARGS,
   "V.ApplyDisplacementsOn()\nC++: virtual void ApplyDisplacementsOn()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"ApplyDisplacementsOff", PyvtkExodusIIReader_ApplyDisplacementsOff, METH_VARARGS,
   "V.ApplyDisplacementsOff()\nC++: virtual void ApplyDisplacementsOff()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"SetDisplacementMagnitude", PyvtkExodusIIReader_SetDisplacementMagnitude, METH_VARARGS,
   "V.SetDisplacementMagnitude(float)\nC++: virtual void SetDisplacementMagnitude(float s)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"GetDisplacementMagnitude", PyvtkExodusIIReader_GetDisplacementMagnitude, METH_VARARGS,
   "V.GetDisplacementMagnitude() -> float\nC++: float GetDisplacementMagnitude()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacement vector. If displacements are turned 'off',\nthe user can explicitly add them by applying a warp filter.\n"},
  {"SetHasModeShapes", PyvtkExodusIIReader_SetHasModeShapes, METH_VARARGS,
   "V.SetHasModeShapes(int)\nC++: virtual void SetHasModeShapes(vtkTypeBool ms)\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {"GetHasModeShapes", PyvtkExodusIIReader_GetHasModeShapes, METH_VARARGS,
   "V.GetHasModeShapes() -> int\nC++: vtkTypeBool GetHasModeShapes()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {"HasModeShapesOn", PyvtkExodusIIReader_HasModeShapesOn, METH_VARARGS,
   "V.HasModeShapesOn()\nC++: virtual void HasModeShapesOn()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {"HasModeShapesOff", PyvtkExodusIIReader_HasModeShapesOff, METH_VARARGS,
   "V.HasModeShapesOff()\nC++: virtual void HasModeShapesOff()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {"SetModeShapeTime", PyvtkExodusIIReader_SetModeShapeTime, METH_VARARGS,
   "V.SetModeShapeTime(float)\nC++: virtual void SetModeShapeTime(double phase)\n\nSet/Get the time used to animate mode shapes. This is a number\nbetween 0 and 1 that is used to scale the DisplacementMagnitude\nin a sinusoidal pattern. Specifically, the displacement vector\nfor each vertex is scaled by$ \\mathrm{DisplacementMagnitude} cos(\n2\\pi \\mathrm{ModeShapeTime} ) $ before it is added to the vertex\ncoordinates.\n"},
  {"GetModeShapeTime", PyvtkExodusIIReader_GetModeShapeTime, METH_VARARGS,
   "V.GetModeShapeTime() -> float\nC++: double GetModeShapeTime()\n\nSet/Get the time used to animate mode shapes. This is a number\nbetween 0 and 1 that is used to scale the DisplacementMagnitude\nin a sinusoidal pattern. Specifically, the displacement vector\nfor each vertex is scaled by$ \\mathrm{DisplacementMagnitude} cos(\n2\\pi \\mathrm{ModeShapeTime} ) $ before it is added to the vertex\ncoordinates.\n"},
  {"SetAnimateModeShapes", PyvtkExodusIIReader_SetAnimateModeShapes, METH_VARARGS,
   "V.SetAnimateModeShapes(int)\nC++: virtual void SetAnimateModeShapes(vtkTypeBool flag)\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {"GetAnimateModeShapes", PyvtkExodusIIReader_GetAnimateModeShapes, METH_VARARGS,
   "V.GetAnimateModeShapes() -> int\nC++: vtkTypeBool GetAnimateModeShapes()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {"AnimateModeShapesOn", PyvtkExodusIIReader_AnimateModeShapesOn, METH_VARARGS,
   "V.AnimateModeShapesOn()\nC++: virtual void AnimateModeShapesOn()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {"AnimateModeShapesOff", PyvtkExodusIIReader_AnimateModeShapesOff, METH_VARARGS,
   "V.AnimateModeShapesOff()\nC++: virtual void AnimateModeShapesOff()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {"SetIgnoreFileTime", PyvtkExodusIIReader_SetIgnoreFileTime, METH_VARARGS,
   "V.SetIgnoreFileTime(bool)\nC++: virtual void SetIgnoreFileTime(bool flag)\n\nWhen on, this option ignores the time values assigned to each\ntime step in the file. This can be useful for Exodus files where\ndifferent time steps are overloaded to represent different\naspects of a data set rather than the data set at different time\nvalues.\n"},
  {"GetIgnoreFileTime", PyvtkExodusIIReader_GetIgnoreFileTime, METH_VARARGS,
   "V.GetIgnoreFileTime() -> bool\nC++: bool GetIgnoreFileTime()\n\nWhen on, this option ignores the time values assigned to each\ntime step in the file. This can be useful for Exodus files where\ndifferent time steps are overloaded to represent different\naspects of a data set rather than the data set at different time\nvalues.\n"},
  {"IgnoreFileTimeOn", PyvtkExodusIIReader_IgnoreFileTimeOn, METH_VARARGS,
   "V.IgnoreFileTimeOn()\nC++: virtual void IgnoreFileTimeOn()\n\nWhen on, this option ignores the time values assigned to each\ntime step in the file. This can be useful for Exodus files where\ndifferent time steps are overloaded to represent different\naspects of a data set rather than the data set at different time\nvalues.\n"},
  {"IgnoreFileTimeOff", PyvtkExodusIIReader_IgnoreFileTimeOff, METH_VARARGS,
   "V.IgnoreFileTimeOff()\nC++: virtual void IgnoreFileTimeOff()\n\nWhen on, this option ignores the time values assigned to each\ntime step in the file. This can be useful for Exodus files where\ndifferent time steps are overloaded to represent different\naspects of a data set rather than the data set at different time\nvalues.\n"},
  {"GetTitle", PyvtkExodusIIReader_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: const char *GetTitle()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {"GetDimensionality", PyvtkExodusIIReader_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {"GetNumberOfTimeSteps", PyvtkExodusIIReader_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {"GetNumberOfNodesInFile", PyvtkExodusIIReader_GetNumberOfNodesInFile, METH_VARARGS,
   "V.GetNumberOfNodesInFile() -> int\nC++: int GetNumberOfNodesInFile()\n\n"},
  {"GetNumberOfEdgesInFile", PyvtkExodusIIReader_GetNumberOfEdgesInFile, METH_VARARGS,
   "V.GetNumberOfEdgesInFile() -> int\nC++: int GetNumberOfEdgesInFile()\n\n"},
  {"GetNumberOfFacesInFile", PyvtkExodusIIReader_GetNumberOfFacesInFile, METH_VARARGS,
   "V.GetNumberOfFacesInFile() -> int\nC++: int GetNumberOfFacesInFile()\n\n"},
  {"GetNumberOfElementsInFile", PyvtkExodusIIReader_GetNumberOfElementsInFile, METH_VARARGS,
   "V.GetNumberOfElementsInFile() -> int\nC++: int GetNumberOfElementsInFile()\n\n"},
  {"GetObjectTypeFromName", PyvtkExodusIIReader_GetObjectTypeFromName, METH_VARARGS,
   "V.GetObjectTypeFromName(string) -> int\nC++: int GetObjectTypeFromName(const char *name)\n\n"},
  {"GetObjectTypeName", PyvtkExodusIIReader_GetObjectTypeName, METH_VARARGS,
   "V.GetObjectTypeName(int) -> string\nC++: const char *GetObjectTypeName(int)\n\n"},
  {"GetNumberOfNodes", PyvtkExodusIIReader_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\n"},
  {"GetNumberOfObjects", PyvtkExodusIIReader_GetNumberOfObjects, METH_VARARGS,
   "V.GetNumberOfObjects(int) -> int\nC++: int GetNumberOfObjects(int objectType)\n\n"},
  {"GetNumberOfEntriesInObject", PyvtkExodusIIReader_GetNumberOfEntriesInObject, METH_VARARGS,
   "V.GetNumberOfEntriesInObject(int, int) -> int\nC++: int GetNumberOfEntriesInObject(int objectType,\n    int objectIndex)\n\n"},
  {"GetObjectId", PyvtkExodusIIReader_GetObjectId, METH_VARARGS,
   "V.GetObjectId(int, int) -> int\nC++: int GetObjectId(int objectType, int objectIndex)\n\n"},
  {"GetObjectName", PyvtkExodusIIReader_GetObjectName, METH_VARARGS,
   "V.GetObjectName(int, int) -> string\nC++: const char *GetObjectName(int objectType, int objectIndex)\n\n"},
  {"GetObjectIndex", PyvtkExodusIIReader_GetObjectIndex, METH_VARARGS,
   "V.GetObjectIndex(int, string) -> int\nC++: int GetObjectIndex(int objectType, const char *objectName)\nV.GetObjectIndex(int, int) -> int\nC++: int GetObjectIndex(int objectType, int id)\n\n"},
  {"GetObjectStatus", PyvtkExodusIIReader_GetObjectStatus, METH_VARARGS,
   "V.GetObjectStatus(int, int) -> int\nC++: int GetObjectStatus(int objectType, int objectIndex)\nV.GetObjectStatus(int, string) -> int\nC++: int GetObjectStatus(int objectType, const char *objectName)\n\n"},
  {"SetObjectStatus", PyvtkExodusIIReader_SetObjectStatus, METH_VARARGS,
   "V.SetObjectStatus(int, int, int)\nC++: void SetObjectStatus(int objectType, int objectIndex,\n    int status)\nV.SetObjectStatus(int, string, int)\nC++: void SetObjectStatus(int objectType, const char *objectName,\n    int status)\n\n"},
  {"GetNumberOfObjectArrays", PyvtkExodusIIReader_GetNumberOfObjectArrays, METH_VARARGS,
   "V.GetNumberOfObjectArrays(int) -> int\nC++: int GetNumberOfObjectArrays(int objectType)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"GetObjectArrayName", PyvtkExodusIIReader_GetObjectArrayName, METH_VARARGS,
   "V.GetObjectArrayName(int, int) -> string\nC++: const char *GetObjectArrayName(int objectType,\n    int arrayIndex)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"GetObjectArrayIndex", PyvtkExodusIIReader_GetObjectArrayIndex, METH_VARARGS,
   "V.GetObjectArrayIndex(int, string) -> int\nC++: int GetObjectArrayIndex(int objectType,\n    const char *arrayName)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"GetNumberOfObjectArrayComponents", PyvtkExodusIIReader_GetNumberOfObjectArrayComponents, METH_VARARGS,
   "V.GetNumberOfObjectArrayComponents(int, int) -> int\nC++: int GetNumberOfObjectArrayComponents(int objectType,\n    int arrayIndex)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"GetObjectArrayStatus", PyvtkExodusIIReader_GetObjectArrayStatus, METH_VARARGS,
   "V.GetObjectArrayStatus(int, int) -> int\nC++: int GetObjectArrayStatus(int objectType, int arrayIndex)\nV.GetObjectArrayStatus(int, string) -> int\nC++: int GetObjectArrayStatus(int objectType,\n    const char *arrayName)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"SetObjectArrayStatus", PyvtkExodusIIReader_SetObjectArrayStatus, METH_VARARGS,
   "V.SetObjectArrayStatus(int, int, int)\nC++: void SetObjectArrayStatus(int objectType, int arrayIndex,\n    int status)\nV.SetObjectArrayStatus(int, string, int)\nC++: void SetObjectArrayStatus(int objectType,\n    const char *arrayName, int status)\n\nBy default arrays are not loaded.  These methods allow the user\nto select which arrays they want to load.  You can get\ninformation about the arrays by first caling UpdateInformation,\nand using GetPointArrayName ... (Developer Note) This meta data\nis all accessed through vtkExodusMetadata\n"},
  {"GetNumberOfObjectAttributes", PyvtkExodusIIReader_GetNumberOfObjectAttributes, METH_VARARGS,
   "V.GetNumberOfObjectAttributes(int, int) -> int\nC++: int GetNumberOfObjectAttributes(int objectType,\n    int objectIndex)\n\nBy default attributes are not loaded.  These methods allow the\nuser to select which attributes they want to load.  You can get\ninformation about the attributes by first caling\nUpdateInformation, and using GetObjectAttributeName ...\n(Developer Note) This meta data is all accessed through\nvtkExodusMetadata\n"},
  {"GetObjectAttributeName", PyvtkExodusIIReader_GetObjectAttributeName, METH_VARARGS,
   "V.GetObjectAttributeName(int, int, int) -> string\nC++: const char *GetObjectAttributeName(int objectType,\n    int objectIndex, int attribIndex)\n\nBy default attributes are not loaded.  These methods allow the\nuser to select which attributes they want to load.  You can get\ninformation about the attributes by first caling\nUpdateInformation, and using GetObjectAttributeName ...\n(Developer Note) This meta data is all accessed through\nvtkExodusMetadata\n"},
  {"GetObjectAttributeIndex", PyvtkExodusIIReader_GetObjectAttributeIndex, METH_VARARGS,
   "V.GetObjectAttributeIndex(int, int, string) -> int\nC++: int GetObjectAttributeIndex(int objectType, int objectIndex,\n    const char *attribName)\n\nBy default attributes are not loaded.  These methods allow the\nuser to select which attributes they want to load.  You can get\ninformation about the attributes by first caling\nUpdateInformation, and using GetObjectAttributeName ...\n(Developer Note) This meta data is all accessed through\nvtkExodusMetadata\n"},
  {"GetObjectAttributeStatus", PyvtkExodusIIReader_GetObjectAttributeStatus, METH_VARARGS,
   "V.GetObjectAttributeStatus(int, int, int) -> int\nC++: int GetObjectAttributeStatus(int objectType, int objectIndex,\n     int attribIndex)\nV.GetObjectAttributeStatus(int, int, string) -> int\nC++: int GetObjectAttributeStatus(int objectType, int objectIndex,\n     const char *attribName)\n\nBy default attributes are not loaded.  These methods allow the\nuser to select which attributes they want to load.  You can get\ninformation about the attributes by first caling\nUpdateInformation, and using GetObjectAttributeName ...\n(Developer Note) This meta data is all accessed through\nvtkExodusMetadata\n"},
  {"SetObjectAttributeStatus", PyvtkExodusIIReader_SetObjectAttributeStatus, METH_VARARGS,
   "V.SetObjectAttributeStatus(int, int, int, int)\nC++: void SetObjectAttributeStatus(int objectType,\n    int objectIndex, int attribIndex, int status)\nV.SetObjectAttributeStatus(int, int, string, int)\nC++: void SetObjectAttributeStatus(int objectType,\n    int objectIndex, const char *attribName, int status)\n\nBy default attributes are not loaded.  These methods allow the\nuser to select which attributes they want to load.  You can get\ninformation about the attributes by first caling\nUpdateInformation, and using GetObjectAttributeName ...\n(Developer Note) This meta data is all accessed through\nvtkExodusMetadata\n"},
  {"GetTotalNumberOfNodes", PyvtkExodusIIReader_GetTotalNumberOfNodes, METH_VARARGS,
   "V.GetTotalNumberOfNodes() -> int\nC++: virtual vtkIdType GetTotalNumberOfNodes()\n\n"},
  {"GetTotalNumberOfEdges", PyvtkExodusIIReader_GetTotalNumberOfEdges, METH_VARARGS,
   "V.GetTotalNumberOfEdges() -> int\nC++: virtual vtkIdType GetTotalNumberOfEdges()\n\n"},
  {"GetTotalNumberOfFaces", PyvtkExodusIIReader_GetTotalNumberOfFaces, METH_VARARGS,
   "V.GetTotalNumberOfFaces() -> int\nC++: virtual vtkIdType GetTotalNumberOfFaces()\n\n"},
  {"GetTotalNumberOfElements", PyvtkExodusIIReader_GetTotalNumberOfElements, METH_VARARGS,
   "V.GetTotalNumberOfElements() -> int\nC++: virtual vtkIdType GetTotalNumberOfElements()\n\n"},
  {"GetNumberOfPartArrays", PyvtkExodusIIReader_GetNumberOfPartArrays, METH_VARARGS,
   "V.GetNumberOfPartArrays() -> int\nC++: int GetNumberOfPartArrays()\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"GetPartArrayName", PyvtkExodusIIReader_GetPartArrayName, METH_VARARGS,
   "V.GetPartArrayName(int) -> string\nC++: const char *GetPartArrayName(int arrayIdx)\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"GetPartArrayID", PyvtkExodusIIReader_GetPartArrayID, METH_VARARGS,
   "V.GetPartArrayID(string) -> int\nC++: int GetPartArrayID(const char *name)\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"GetPartBlockInfo", PyvtkExodusIIReader_GetPartBlockInfo, METH_VARARGS,
   "V.GetPartBlockInfo(int) -> string\nC++: const char *GetPartBlockInfo(int arrayIdx)\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"SetPartArrayStatus", PyvtkExodusIIReader_SetPartArrayStatus, METH_VARARGS,
   "V.SetPartArrayStatus(int, int)\nC++: void SetPartArrayStatus(int index, int flag)\nV.SetPartArrayStatus(string, int)\nC++: void SetPartArrayStatus(const char *, int flag)\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"GetPartArrayStatus", PyvtkExodusIIReader_GetPartArrayStatus, METH_VARARGS,
   "V.GetPartArrayStatus(int) -> int\nC++: int GetPartArrayStatus(int index)\nV.GetPartArrayStatus(string) -> int\nC++: int GetPartArrayStatus(const char *)\n\nBy default all parts are loaded. These methods allow the user to\nselect which parts they want to load.  You can get information\nabout the parts by first caling UpdateInformation, and using\nGetPartArrayName ...\n"},
  {"GetNumberOfMaterialArrays", PyvtkExodusIIReader_GetNumberOfMaterialArrays, METH_VARARGS,
   "V.GetNumberOfMaterialArrays() -> int\nC++: int GetNumberOfMaterialArrays()\n\nBy default all materials are loaded. These methods allow the user\nto select which materials they want to load.  You can get\ninformation about the materials by first caling\nUpdateInformation, and using GetMaterialArrayName ...\n"},
  {"GetMaterialArrayName", PyvtkExodusIIReader_GetMaterialArrayName, METH_VARARGS,
   "V.GetMaterialArrayName(int) -> string\nC++: const char *GetMaterialArrayName(int arrayIdx)\n\nBy default all materials are loaded. These methods allow the user\nto select which materials they want to load.  You can get\ninformation about the materials by first caling\nUpdateInformation, and using GetMaterialArrayName ...\n"},
  {"GetMaterialArrayID", PyvtkExodusIIReader_GetMaterialArrayID, METH_VARARGS,
   "V.GetMaterialArrayID(string) -> int\nC++: int GetMaterialArrayID(const char *name)\n\nBy default all materials are loaded. These methods allow the user\nto select which materials they want to load.  You can get\ninformation about the materials by first caling\nUpdateInformation, and using GetMaterialArrayName ...\n"},
  {"SetMaterialArrayStatus", PyvtkExodusIIReader_SetMaterialArrayStatus, METH_VARARGS,
   "V.SetMaterialArrayStatus(int, int)\nC++: void SetMaterialArrayStatus(int index, int flag)\nV.SetMaterialArrayStatus(string, int)\nC++: void SetMaterialArrayStatus(const char *, int flag)\n\nBy default all materials are loaded. These methods allow the user\nto select which materials they want to load.  You can get\ninformation about the materials by first caling\nUpdateInformation, and using GetMaterialArrayName ...\n"},
  {"GetMaterialArrayStatus", PyvtkExodusIIReader_GetMaterialArrayStatus, METH_VARARGS,
   "V.GetMaterialArrayStatus(int) -> int\nC++: int GetMaterialArrayStatus(int index)\nV.GetMaterialArrayStatus(string) -> int\nC++: int GetMaterialArrayStatus(const char *)\n\nBy default all materials are loaded. These methods allow the user\nto select which materials they want to load.  You can get\ninformation about the materials by first caling\nUpdateInformation, and using GetMaterialArrayName ...\n"},
  {"GetNumberOfAssemblyArrays", PyvtkExodusIIReader_GetNumberOfAssemblyArrays, METH_VARARGS,
   "V.GetNumberOfAssemblyArrays() -> int\nC++: int GetNumberOfAssemblyArrays()\n\nBy default all assemblies are loaded. These methods allow the\nuser to select which assemblies they want to load.  You can get\ninformation about the assemblies by first caling\nUpdateInformation, and using GetAssemblyArrayName ...\n"},
  {"GetAssemblyArrayName", PyvtkExodusIIReader_GetAssemblyArrayName, METH_VARARGS,
   "V.GetAssemblyArrayName(int) -> string\nC++: const char *GetAssemblyArrayName(int arrayIdx)\n\nBy default all assemblies are loaded. These methods allow the\nuser to select which assemblies they want to load.  You can get\ninformation about the assemblies by first caling\nUpdateInformation, and using GetAssemblyArrayName ...\n"},
  {"GetAssemblyArrayID", PyvtkExodusIIReader_GetAssemblyArrayID, METH_VARARGS,
   "V.GetAssemblyArrayID(string) -> int\nC++: int GetAssemblyArrayID(const char *name)\n\nBy default all assemblies are loaded. These methods allow the\nuser to select which assemblies they want to load.  You can get\ninformation about the assemblies by first caling\nUpdateInformation, and using GetAssemblyArrayName ...\n"},
  {"SetAssemblyArrayStatus", PyvtkExodusIIReader_SetAssemblyArrayStatus, METH_VARARGS,
   "V.SetAssemblyArrayStatus(int, int)\nC++: void SetAssemblyArrayStatus(int index, int flag)\nV.SetAssemblyArrayStatus(string, int)\nC++: void SetAssemblyArrayStatus(const char *, int flag)\n\nBy default all assemblies are loaded. These methods allow the\nuser to select which assemblies they want to load.  You can get\ninformation about the assemblies by first caling\nUpdateInformation, and using GetAssemblyArrayName ...\n"},
  {"GetAssemblyArrayStatus", PyvtkExodusIIReader_GetAssemblyArrayStatus, METH_VARARGS,
   "V.GetAssemblyArrayStatus(int) -> int\nC++: int GetAssemblyArrayStatus(int index)\nV.GetAssemblyArrayStatus(string) -> int\nC++: int GetAssemblyArrayStatus(const char *)\n\nBy default all assemblies are loaded. These methods allow the\nuser to select which assemblies they want to load.  You can get\ninformation about the assemblies by first caling\nUpdateInformation, and using GetAssemblyArrayName ...\n"},
  {"GetNumberOfHierarchyArrays", PyvtkExodusIIReader_GetNumberOfHierarchyArrays, METH_VARARGS,
   "V.GetNumberOfHierarchyArrays() -> int\nC++: int GetNumberOfHierarchyArrays()\n\nBy default all hierarchy entries are loaded. These methods allow\nthe user to select which hierarchy entries they want to load. \nYou can get information about the hierarchy entries by first\ncaling UpdateInformation, and using GetHierarchyArrayName ...\nthese methods do not call functions in metaData. They call\nfunctions on the ExodusXMLParser since it seemed silly to\nduplicate all the information\n"},
  {"GetHierarchyArrayName", PyvtkExodusIIReader_GetHierarchyArrayName, METH_VARARGS,
   "V.GetHierarchyArrayName(int) -> string\nC++: const char *GetHierarchyArrayName(int arrayIdx)\n\nBy default all hierarchy entries are loaded. These methods allow\nthe user to select which hierarchy entries they want to load. \nYou can get information about the hierarchy entries by first\ncaling UpdateInformation, and using GetHierarchyArrayName ...\nthese methods do not call functions in metaData. They call\nfunctions on the ExodusXMLParser since it seemed silly to\nduplicate all the information\n"},
  {"SetHierarchyArrayStatus", PyvtkExodusIIReader_SetHierarchyArrayStatus, METH_VARARGS,
   "V.SetHierarchyArrayStatus(int, int)\nC++: void SetHierarchyArrayStatus(int index, int flag)\nV.SetHierarchyArrayStatus(string, int)\nC++: void SetHierarchyArrayStatus(const char *, int flag)\n\nBy default all hierarchy entries are loaded. These methods allow\nthe user to select which hierarchy entries they want to load. \nYou can get information about the hierarchy entries by first\ncaling UpdateInformation, and using GetHierarchyArrayName ...\nthese methods do not call functions in metaData. They call\nfunctions on the ExodusXMLParser since it seemed silly to\nduplicate all the information\n"},
  {"GetHierarchyArrayStatus", PyvtkExodusIIReader_GetHierarchyArrayStatus, METH_VARARGS,
   "V.GetHierarchyArrayStatus(int) -> int\nC++: int GetHierarchyArrayStatus(int index)\nV.GetHierarchyArrayStatus(string) -> int\nC++: int GetHierarchyArrayStatus(const char *)\n\nBy default all hierarchy entries are loaded. These methods allow\nthe user to select which hierarchy entries they want to load. \nYou can get information about the hierarchy entries by first\ncaling UpdateInformation, and using GetHierarchyArrayName ...\nthese methods do not call functions in metaData. They call\nfunctions on the ExodusXMLParser since it seemed silly to\nduplicate all the information\n"},
  {"GetDisplayType", PyvtkExodusIIReader_GetDisplayType, METH_VARARGS,
   "V.GetDisplayType() -> int\nC++: virtual int GetDisplayType()\n\n"},
  {"SetDisplayType", PyvtkExodusIIReader_SetDisplayType, METH_VARARGS,
   "V.SetDisplayType(int)\nC++: virtual void SetDisplayType(int type)\n\n"},
  {"IsValidVariable", PyvtkExodusIIReader_IsValidVariable, METH_VARARGS,
   "V.IsValidVariable(string, string) -> int\nC++: int IsValidVariable(const char *type, const char *name)\n\nreturn boolean indicating whether the type,name is a valid\nvariable\n"},
  {"GetVariableID", PyvtkExodusIIReader_GetVariableID, METH_VARARGS,
   "V.GetVariableID(string, string) -> int\nC++: int GetVariableID(const char *type, const char *name)\n\nReturn the id of the type,name variable\n"},
  {"SetAllArrayStatus", PyvtkExodusIIReader_SetAllArrayStatus, METH_VARARGS,
   "V.SetAllArrayStatus(int, int)\nC++: void SetAllArrayStatus(int otype, int status)\n\n"},
  {"GetTimeSeriesData", PyvtkExodusIIReader_GetTimeSeriesData, METH_VARARGS,
   "V.GetTimeSeriesData(int, string, string, vtkFloatArray) -> int\nC++: int GetTimeSeriesData(int ID, const char *vName,\n    const char *vType, vtkFloatArray *result)\n\n"},
  {"GetNumberOfEdgeBlockArrays", PyvtkExodusIIReader_GetNumberOfEdgeBlockArrays, METH_VARARGS,
   "V.GetNumberOfEdgeBlockArrays() -> int\nC++: int GetNumberOfEdgeBlockArrays()\n\n"},
  {"GetEdgeBlockArrayName", PyvtkExodusIIReader_GetEdgeBlockArrayName, METH_VARARGS,
   "V.GetEdgeBlockArrayName(int) -> string\nC++: const char *GetEdgeBlockArrayName(int index)\n\n"},
  {"GetEdgeBlockArrayStatus", PyvtkExodusIIReader_GetEdgeBlockArrayStatus, METH_VARARGS,
   "V.GetEdgeBlockArrayStatus(string) -> int\nC++: int GetEdgeBlockArrayStatus(const char *name)\n\n"},
  {"SetEdgeBlockArrayStatus", PyvtkExodusIIReader_SetEdgeBlockArrayStatus, METH_VARARGS,
   "V.SetEdgeBlockArrayStatus(string, int)\nC++: void SetEdgeBlockArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfFaceBlockArrays", PyvtkExodusIIReader_GetNumberOfFaceBlockArrays, METH_VARARGS,
   "V.GetNumberOfFaceBlockArrays() -> int\nC++: int GetNumberOfFaceBlockArrays()\n\n"},
  {"GetFaceBlockArrayName", PyvtkExodusIIReader_GetFaceBlockArrayName, METH_VARARGS,
   "V.GetFaceBlockArrayName(int) -> string\nC++: const char *GetFaceBlockArrayName(int index)\n\n"},
  {"GetFaceBlockArrayStatus", PyvtkExodusIIReader_GetFaceBlockArrayStatus, METH_VARARGS,
   "V.GetFaceBlockArrayStatus(string) -> int\nC++: int GetFaceBlockArrayStatus(const char *name)\n\n"},
  {"SetFaceBlockArrayStatus", PyvtkExodusIIReader_SetFaceBlockArrayStatus, METH_VARARGS,
   "V.SetFaceBlockArrayStatus(string, int)\nC++: void SetFaceBlockArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfElementBlockArrays", PyvtkExodusIIReader_GetNumberOfElementBlockArrays, METH_VARARGS,
   "V.GetNumberOfElementBlockArrays() -> int\nC++: int GetNumberOfElementBlockArrays()\n\n"},
  {"GetElementBlockArrayName", PyvtkExodusIIReader_GetElementBlockArrayName, METH_VARARGS,
   "V.GetElementBlockArrayName(int) -> string\nC++: const char *GetElementBlockArrayName(int index)\n\n"},
  {"GetElementBlockArrayStatus", PyvtkExodusIIReader_GetElementBlockArrayStatus, METH_VARARGS,
   "V.GetElementBlockArrayStatus(string) -> int\nC++: int GetElementBlockArrayStatus(const char *name)\n\n"},
  {"SetElementBlockArrayStatus", PyvtkExodusIIReader_SetElementBlockArrayStatus, METH_VARARGS,
   "V.SetElementBlockArrayStatus(string, int)\nC++: void SetElementBlockArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfGlobalResultArrays", PyvtkExodusIIReader_GetNumberOfGlobalResultArrays, METH_VARARGS,
   "V.GetNumberOfGlobalResultArrays() -> int\nC++: int GetNumberOfGlobalResultArrays()\n\n"},
  {"GetGlobalResultArrayName", PyvtkExodusIIReader_GetGlobalResultArrayName, METH_VARARGS,
   "V.GetGlobalResultArrayName(int) -> string\nC++: const char *GetGlobalResultArrayName(int index)\n\n"},
  {"GetGlobalResultArrayStatus", PyvtkExodusIIReader_GetGlobalResultArrayStatus, METH_VARARGS,
   "V.GetGlobalResultArrayStatus(string) -> int\nC++: int GetGlobalResultArrayStatus(const char *name)\n\n"},
  {"SetGlobalResultArrayStatus", PyvtkExodusIIReader_SetGlobalResultArrayStatus, METH_VARARGS,
   "V.SetGlobalResultArrayStatus(string, int)\nC++: void SetGlobalResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfPointResultArrays", PyvtkExodusIIReader_GetNumberOfPointResultArrays, METH_VARARGS,
   "V.GetNumberOfPointResultArrays() -> int\nC++: int GetNumberOfPointResultArrays()\n\n"},
  {"GetPointResultArrayName", PyvtkExodusIIReader_GetPointResultArrayName, METH_VARARGS,
   "V.GetPointResultArrayName(int) -> string\nC++: const char *GetPointResultArrayName(int index)\n\n"},
  {"GetPointResultArrayStatus", PyvtkExodusIIReader_GetPointResultArrayStatus, METH_VARARGS,
   "V.GetPointResultArrayStatus(string) -> int\nC++: int GetPointResultArrayStatus(const char *name)\n\n"},
  {"SetPointResultArrayStatus", PyvtkExodusIIReader_SetPointResultArrayStatus, METH_VARARGS,
   "V.SetPointResultArrayStatus(string, int)\nC++: void SetPointResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfEdgeResultArrays", PyvtkExodusIIReader_GetNumberOfEdgeResultArrays, METH_VARARGS,
   "V.GetNumberOfEdgeResultArrays() -> int\nC++: int GetNumberOfEdgeResultArrays()\n\n"},
  {"GetEdgeResultArrayName", PyvtkExodusIIReader_GetEdgeResultArrayName, METH_VARARGS,
   "V.GetEdgeResultArrayName(int) -> string\nC++: const char *GetEdgeResultArrayName(int index)\n\n"},
  {"GetEdgeResultArrayStatus", PyvtkExodusIIReader_GetEdgeResultArrayStatus, METH_VARARGS,
   "V.GetEdgeResultArrayStatus(string) -> int\nC++: int GetEdgeResultArrayStatus(const char *name)\n\n"},
  {"SetEdgeResultArrayStatus", PyvtkExodusIIReader_SetEdgeResultArrayStatus, METH_VARARGS,
   "V.SetEdgeResultArrayStatus(string, int)\nC++: void SetEdgeResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfFaceResultArrays", PyvtkExodusIIReader_GetNumberOfFaceResultArrays, METH_VARARGS,
   "V.GetNumberOfFaceResultArrays() -> int\nC++: int GetNumberOfFaceResultArrays()\n\n"},
  {"GetFaceResultArrayName", PyvtkExodusIIReader_GetFaceResultArrayName, METH_VARARGS,
   "V.GetFaceResultArrayName(int) -> string\nC++: const char *GetFaceResultArrayName(int index)\n\n"},
  {"GetFaceResultArrayStatus", PyvtkExodusIIReader_GetFaceResultArrayStatus, METH_VARARGS,
   "V.GetFaceResultArrayStatus(string) -> int\nC++: int GetFaceResultArrayStatus(const char *name)\n\n"},
  {"SetFaceResultArrayStatus", PyvtkExodusIIReader_SetFaceResultArrayStatus, METH_VARARGS,
   "V.SetFaceResultArrayStatus(string, int)\nC++: void SetFaceResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfElementResultArrays", PyvtkExodusIIReader_GetNumberOfElementResultArrays, METH_VARARGS,
   "V.GetNumberOfElementResultArrays() -> int\nC++: int GetNumberOfElementResultArrays()\n\n"},
  {"GetElementResultArrayName", PyvtkExodusIIReader_GetElementResultArrayName, METH_VARARGS,
   "V.GetElementResultArrayName(int) -> string\nC++: const char *GetElementResultArrayName(int index)\n\n"},
  {"GetElementResultArrayStatus", PyvtkExodusIIReader_GetElementResultArrayStatus, METH_VARARGS,
   "V.GetElementResultArrayStatus(string) -> int\nC++: int GetElementResultArrayStatus(const char *name)\n\n"},
  {"SetElementResultArrayStatus", PyvtkExodusIIReader_SetElementResultArrayStatus, METH_VARARGS,
   "V.SetElementResultArrayStatus(string, int)\nC++: void SetElementResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfNodeMapArrays", PyvtkExodusIIReader_GetNumberOfNodeMapArrays, METH_VARARGS,
   "V.GetNumberOfNodeMapArrays() -> int\nC++: int GetNumberOfNodeMapArrays()\n\n"},
  {"GetNodeMapArrayName", PyvtkExodusIIReader_GetNodeMapArrayName, METH_VARARGS,
   "V.GetNodeMapArrayName(int) -> string\nC++: const char *GetNodeMapArrayName(int index)\n\n"},
  {"GetNodeMapArrayStatus", PyvtkExodusIIReader_GetNodeMapArrayStatus, METH_VARARGS,
   "V.GetNodeMapArrayStatus(string) -> int\nC++: int GetNodeMapArrayStatus(const char *name)\n\n"},
  {"SetNodeMapArrayStatus", PyvtkExodusIIReader_SetNodeMapArrayStatus, METH_VARARGS,
   "V.SetNodeMapArrayStatus(string, int)\nC++: void SetNodeMapArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfEdgeMapArrays", PyvtkExodusIIReader_GetNumberOfEdgeMapArrays, METH_VARARGS,
   "V.GetNumberOfEdgeMapArrays() -> int\nC++: int GetNumberOfEdgeMapArrays()\n\n"},
  {"GetEdgeMapArrayName", PyvtkExodusIIReader_GetEdgeMapArrayName, METH_VARARGS,
   "V.GetEdgeMapArrayName(int) -> string\nC++: const char *GetEdgeMapArrayName(int index)\n\n"},
  {"GetEdgeMapArrayStatus", PyvtkExodusIIReader_GetEdgeMapArrayStatus, METH_VARARGS,
   "V.GetEdgeMapArrayStatus(string) -> int\nC++: int GetEdgeMapArrayStatus(const char *name)\n\n"},
  {"SetEdgeMapArrayStatus", PyvtkExodusIIReader_SetEdgeMapArrayStatus, METH_VARARGS,
   "V.SetEdgeMapArrayStatus(string, int)\nC++: void SetEdgeMapArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfFaceMapArrays", PyvtkExodusIIReader_GetNumberOfFaceMapArrays, METH_VARARGS,
   "V.GetNumberOfFaceMapArrays() -> int\nC++: int GetNumberOfFaceMapArrays()\n\n"},
  {"GetFaceMapArrayName", PyvtkExodusIIReader_GetFaceMapArrayName, METH_VARARGS,
   "V.GetFaceMapArrayName(int) -> string\nC++: const char *GetFaceMapArrayName(int index)\n\n"},
  {"GetFaceMapArrayStatus", PyvtkExodusIIReader_GetFaceMapArrayStatus, METH_VARARGS,
   "V.GetFaceMapArrayStatus(string) -> int\nC++: int GetFaceMapArrayStatus(const char *name)\n\n"},
  {"SetFaceMapArrayStatus", PyvtkExodusIIReader_SetFaceMapArrayStatus, METH_VARARGS,
   "V.SetFaceMapArrayStatus(string, int)\nC++: void SetFaceMapArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfElementMapArrays", PyvtkExodusIIReader_GetNumberOfElementMapArrays, METH_VARARGS,
   "V.GetNumberOfElementMapArrays() -> int\nC++: int GetNumberOfElementMapArrays()\n\n"},
  {"GetElementMapArrayName", PyvtkExodusIIReader_GetElementMapArrayName, METH_VARARGS,
   "V.GetElementMapArrayName(int) -> string\nC++: const char *GetElementMapArrayName(int index)\n\n"},
  {"GetElementMapArrayStatus", PyvtkExodusIIReader_GetElementMapArrayStatus, METH_VARARGS,
   "V.GetElementMapArrayStatus(string) -> int\nC++: int GetElementMapArrayStatus(const char *name)\n\n"},
  {"SetElementMapArrayStatus", PyvtkExodusIIReader_SetElementMapArrayStatus, METH_VARARGS,
   "V.SetElementMapArrayStatus(string, int)\nC++: void SetElementMapArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfNodeSetArrays", PyvtkExodusIIReader_GetNumberOfNodeSetArrays, METH_VARARGS,
   "V.GetNumberOfNodeSetArrays() -> int\nC++: int GetNumberOfNodeSetArrays()\n\n"},
  {"GetNodeSetArrayName", PyvtkExodusIIReader_GetNodeSetArrayName, METH_VARARGS,
   "V.GetNodeSetArrayName(int) -> string\nC++: const char *GetNodeSetArrayName(int index)\n\n"},
  {"GetNodeSetArrayStatus", PyvtkExodusIIReader_GetNodeSetArrayStatus, METH_VARARGS,
   "V.GetNodeSetArrayStatus(string) -> int\nC++: int GetNodeSetArrayStatus(const char *name)\n\n"},
  {"SetNodeSetArrayStatus", PyvtkExodusIIReader_SetNodeSetArrayStatus, METH_VARARGS,
   "V.SetNodeSetArrayStatus(string, int)\nC++: void SetNodeSetArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfSideSetArrays", PyvtkExodusIIReader_GetNumberOfSideSetArrays, METH_VARARGS,
   "V.GetNumberOfSideSetArrays() -> int\nC++: int GetNumberOfSideSetArrays()\n\n"},
  {"GetSideSetArrayName", PyvtkExodusIIReader_GetSideSetArrayName, METH_VARARGS,
   "V.GetSideSetArrayName(int) -> string\nC++: const char *GetSideSetArrayName(int index)\n\n"},
  {"GetSideSetArrayStatus", PyvtkExodusIIReader_GetSideSetArrayStatus, METH_VARARGS,
   "V.GetSideSetArrayStatus(string) -> int\nC++: int GetSideSetArrayStatus(const char *name)\n\n"},
  {"SetSideSetArrayStatus", PyvtkExodusIIReader_SetSideSetArrayStatus, METH_VARARGS,
   "V.SetSideSetArrayStatus(string, int)\nC++: void SetSideSetArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfEdgeSetArrays", PyvtkExodusIIReader_GetNumberOfEdgeSetArrays, METH_VARARGS,
   "V.GetNumberOfEdgeSetArrays() -> int\nC++: int GetNumberOfEdgeSetArrays()\n\n"},
  {"GetEdgeSetArrayName", PyvtkExodusIIReader_GetEdgeSetArrayName, METH_VARARGS,
   "V.GetEdgeSetArrayName(int) -> string\nC++: const char *GetEdgeSetArrayName(int index)\n\n"},
  {"GetEdgeSetArrayStatus", PyvtkExodusIIReader_GetEdgeSetArrayStatus, METH_VARARGS,
   "V.GetEdgeSetArrayStatus(string) -> int\nC++: int GetEdgeSetArrayStatus(const char *name)\n\n"},
  {"SetEdgeSetArrayStatus", PyvtkExodusIIReader_SetEdgeSetArrayStatus, METH_VARARGS,
   "V.SetEdgeSetArrayStatus(string, int)\nC++: void SetEdgeSetArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfFaceSetArrays", PyvtkExodusIIReader_GetNumberOfFaceSetArrays, METH_VARARGS,
   "V.GetNumberOfFaceSetArrays() -> int\nC++: int GetNumberOfFaceSetArrays()\n\n"},
  {"GetFaceSetArrayName", PyvtkExodusIIReader_GetFaceSetArrayName, METH_VARARGS,
   "V.GetFaceSetArrayName(int) -> string\nC++: const char *GetFaceSetArrayName(int index)\n\n"},
  {"GetFaceSetArrayStatus", PyvtkExodusIIReader_GetFaceSetArrayStatus, METH_VARARGS,
   "V.GetFaceSetArrayStatus(string) -> int\nC++: int GetFaceSetArrayStatus(const char *name)\n\n"},
  {"SetFaceSetArrayStatus", PyvtkExodusIIReader_SetFaceSetArrayStatus, METH_VARARGS,
   "V.SetFaceSetArrayStatus(string, int)\nC++: void SetFaceSetArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfElementSetArrays", PyvtkExodusIIReader_GetNumberOfElementSetArrays, METH_VARARGS,
   "V.GetNumberOfElementSetArrays() -> int\nC++: int GetNumberOfElementSetArrays()\n\n"},
  {"GetElementSetArrayName", PyvtkExodusIIReader_GetElementSetArrayName, METH_VARARGS,
   "V.GetElementSetArrayName(int) -> string\nC++: const char *GetElementSetArrayName(int index)\n\n"},
  {"GetElementSetArrayStatus", PyvtkExodusIIReader_GetElementSetArrayStatus, METH_VARARGS,
   "V.GetElementSetArrayStatus(string) -> int\nC++: int GetElementSetArrayStatus(const char *name)\n\n"},
  {"SetElementSetArrayStatus", PyvtkExodusIIReader_SetElementSetArrayStatus, METH_VARARGS,
   "V.SetElementSetArrayStatus(string, int)\nC++: void SetElementSetArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfNodeSetResultArrays", PyvtkExodusIIReader_GetNumberOfNodeSetResultArrays, METH_VARARGS,
   "V.GetNumberOfNodeSetResultArrays() -> int\nC++: int GetNumberOfNodeSetResultArrays()\n\n"},
  {"GetNodeSetResultArrayName", PyvtkExodusIIReader_GetNodeSetResultArrayName, METH_VARARGS,
   "V.GetNodeSetResultArrayName(int) -> string\nC++: const char *GetNodeSetResultArrayName(int index)\n\n"},
  {"GetNodeSetResultArrayStatus", PyvtkExodusIIReader_GetNodeSetResultArrayStatus, METH_VARARGS,
   "V.GetNodeSetResultArrayStatus(string) -> int\nC++: int GetNodeSetResultArrayStatus(const char *name)\n\n"},
  {"SetNodeSetResultArrayStatus", PyvtkExodusIIReader_SetNodeSetResultArrayStatus, METH_VARARGS,
   "V.SetNodeSetResultArrayStatus(string, int)\nC++: void SetNodeSetResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfSideSetResultArrays", PyvtkExodusIIReader_GetNumberOfSideSetResultArrays, METH_VARARGS,
   "V.GetNumberOfSideSetResultArrays() -> int\nC++: int GetNumberOfSideSetResultArrays()\n\n"},
  {"GetSideSetResultArrayName", PyvtkExodusIIReader_GetSideSetResultArrayName, METH_VARARGS,
   "V.GetSideSetResultArrayName(int) -> string\nC++: const char *GetSideSetResultArrayName(int index)\n\n"},
  {"GetSideSetResultArrayStatus", PyvtkExodusIIReader_GetSideSetResultArrayStatus, METH_VARARGS,
   "V.GetSideSetResultArrayStatus(string) -> int\nC++: int GetSideSetResultArrayStatus(const char *name)\n\n"},
  {"SetSideSetResultArrayStatus", PyvtkExodusIIReader_SetSideSetResultArrayStatus, METH_VARARGS,
   "V.SetSideSetResultArrayStatus(string, int)\nC++: void SetSideSetResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfEdgeSetResultArrays", PyvtkExodusIIReader_GetNumberOfEdgeSetResultArrays, METH_VARARGS,
   "V.GetNumberOfEdgeSetResultArrays() -> int\nC++: int GetNumberOfEdgeSetResultArrays()\n\n"},
  {"GetEdgeSetResultArrayName", PyvtkExodusIIReader_GetEdgeSetResultArrayName, METH_VARARGS,
   "V.GetEdgeSetResultArrayName(int) -> string\nC++: const char *GetEdgeSetResultArrayName(int index)\n\n"},
  {"GetEdgeSetResultArrayStatus", PyvtkExodusIIReader_GetEdgeSetResultArrayStatus, METH_VARARGS,
   "V.GetEdgeSetResultArrayStatus(string) -> int\nC++: int GetEdgeSetResultArrayStatus(const char *name)\n\n"},
  {"SetEdgeSetResultArrayStatus", PyvtkExodusIIReader_SetEdgeSetResultArrayStatus, METH_VARARGS,
   "V.SetEdgeSetResultArrayStatus(string, int)\nC++: void SetEdgeSetResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfFaceSetResultArrays", PyvtkExodusIIReader_GetNumberOfFaceSetResultArrays, METH_VARARGS,
   "V.GetNumberOfFaceSetResultArrays() -> int\nC++: int GetNumberOfFaceSetResultArrays()\n\n"},
  {"GetFaceSetResultArrayName", PyvtkExodusIIReader_GetFaceSetResultArrayName, METH_VARARGS,
   "V.GetFaceSetResultArrayName(int) -> string\nC++: const char *GetFaceSetResultArrayName(int index)\n\n"},
  {"GetFaceSetResultArrayStatus", PyvtkExodusIIReader_GetFaceSetResultArrayStatus, METH_VARARGS,
   "V.GetFaceSetResultArrayStatus(string) -> int\nC++: int GetFaceSetResultArrayStatus(const char *name)\n\n"},
  {"SetFaceSetResultArrayStatus", PyvtkExodusIIReader_SetFaceSetResultArrayStatus, METH_VARARGS,
   "V.SetFaceSetResultArrayStatus(string, int)\nC++: void SetFaceSetResultArrayStatus(const char *name, int flag)\n\n"},
  {"GetNumberOfElementSetResultArrays", PyvtkExodusIIReader_GetNumberOfElementSetResultArrays, METH_VARARGS,
   "V.GetNumberOfElementSetResultArrays() -> int\nC++: int GetNumberOfElementSetResultArrays()\n\n"},
  {"GetElementSetResultArrayName", PyvtkExodusIIReader_GetElementSetResultArrayName, METH_VARARGS,
   "V.GetElementSetResultArrayName(int) -> string\nC++: const char *GetElementSetResultArrayName(int index)\n\n"},
  {"GetElementSetResultArrayStatus", PyvtkExodusIIReader_GetElementSetResultArrayStatus, METH_VARARGS,
   "V.GetElementSetResultArrayStatus(string) -> int\nC++: int GetElementSetResultArrayStatus(const char *name)\n\n"},
  {"SetElementSetResultArrayStatus", PyvtkExodusIIReader_SetElementSetResultArrayStatus, METH_VARARGS,
   "V.SetElementSetResultArrayStatus(string, int)\nC++: void SetElementSetResultArrayStatus(const char *name,\n    int flag)\n\n"},
  {"Reset", PyvtkExodusIIReader_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the user-specified parameters and flush internal arrays so\nthat the reader state is just as it was after the reader was\ninstantiated.\n\n* It doesn't make sense to let users reset only the internal\n  state;\n* both the settings and the state are changed by this call.\n"},
  {"ResetSettings", PyvtkExodusIIReader_ResetSettings, METH_VARARGS,
   "V.ResetSettings()\nC++: void ResetSettings()\n\nReset the user-specified parameters to their default values. The\nonly settings not affected are the filename and/or pattern\nbecause these have no default.\n\n* Resetting the settings but not the state allows users to\n* keep the active cache but return to initial array selections,\n  etc.\n"},
  {"ResetCache", PyvtkExodusIIReader_ResetCache, METH_VARARGS,
   "V.ResetCache()\nC++: void ResetCache()\n\nClears out the cache entries.\n"},
  {"SetCacheSize", PyvtkExodusIIReader_SetCacheSize, METH_VARARGS,
   "V.SetCacheSize(float)\nC++: void SetCacheSize(double CacheSize)\n\nSet the size of the cache in MiB.\n"},
  {"GetCacheSize", PyvtkExodusIIReader_GetCacheSize, METH_VARARGS,
   "V.GetCacheSize() -> float\nC++: double GetCacheSize()\n\nGet the size of the cache in MiB.\n"},
  {"SetSqueezePoints", PyvtkExodusIIReader_SetSqueezePoints, METH_VARARGS,
   "V.SetSqueezePoints(bool)\nC++: void SetSqueezePoints(bool sp)\n\nShould the reader output only points used by elements in the\noutput mesh, or all the points. Outputting all the points is much\nfaster since the point array can be read straight from disk and\nthe mesh connectivity need not be altered. Squeezing the points\ndown to the minimum set needed to produce the output mesh is\nuseful for glyphing and other point-based operations. On large\nparallel datasets, loading all the points implies loading all the\npoints on all processes and performing subsequent filtering on a\nmuch larger set.\n\n* By default, SqueezePoints is true for backwards compatibility.\n"},
  {"GetSqueezePoints", PyvtkExodusIIReader_GetSqueezePoints, METH_VARARGS,
   "V.GetSqueezePoints() -> bool\nC++: bool GetSqueezePoints()\n\nShould the reader output only points used by elements in the\noutput mesh, or all the points. Outputting all the points is much\nfaster since the point array can be read straight from disk and\nthe mesh connectivity need not be altered. Squeezing the points\ndown to the minimum set needed to produce the output mesh is\nuseful for glyphing and other point-based operations. On large\nparallel datasets, loading all the points implies loading all the\npoints on all processes and performing subsequent filtering on a\nmuch larger set.\n\n* By default, SqueezePoints is true for backwards compatibility.\n"},
  {"Dump", PyvtkExodusIIReader_Dump, METH_VARARGS,
   "V.Dump()\nC++: virtual void Dump()\n\n"},
  {"GetSIL", PyvtkExodusIIReader_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkGraph\nC++: vtkGraph *GetSIL()\n\nSIL describes organization of/relationships between\nclassifications eg. blocks/materials/hierarchies.\n"},
  {"GetSILUpdateStamp", PyvtkExodusIIReader_GetSILUpdateStamp, METH_VARARGS,
   "V.GetSILUpdateStamp() -> int\nC++: virtual int GetSILUpdateStamp()\n\nEvery time the SIL is updated a this will return a different\nvalue.\n"},
  {"GetMaxNameLength", PyvtkExodusIIReader_GetMaxNameLength, METH_VARARGS,
   "V.GetMaxNameLength() -> int\nC++: int GetMaxNameLength()\n\nGet the max_name_length in the file. This is the amount of space\nallocated int the file for storing names of arrays, blocks, etc.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExodusIIReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIIReader", // tp_name
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
  PyvtkExodusIIReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExodusIIReader_StaticNew()
{
  return vtkExodusIIReader::New();
}

PyObject *PyvtkExodusIIReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExodusIIReader_Type, PyvtkExodusIIReader_Methods,
    "vtkExodusIIReader",
 &PyvtkExodusIIReader_StaticNew);

  PyTypeObject *pytype = &PyvtkExodusIIReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkExodusIIReader_ObjectType_Type);
  PyvtkExodusIIReader_ObjectType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkExodusIIReader_ObjectType_Type);

  o = (PyObject *)&PyvtkExodusIIReader_ObjectType_Type;
  if (PyDict_SetItemString(d, "ObjectType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "SEARCH_TYPE_ELEMENT", vtkExodusIIReader::SEARCH_TYPE_ELEMENT },
        { "SEARCH_TYPE_NODE", vtkExodusIIReader::SEARCH_TYPE_NODE },
        { "SEARCH_TYPE_ELEMENT_THEN_NODE", vtkExodusIIReader::SEARCH_TYPE_ELEMENT_THEN_NODE },
        { "SEARCH_TYPE_NODE_THEN_ELEMENT", vtkExodusIIReader::SEARCH_TYPE_NODE_THEN_ELEMENT },
        { "ID_NOT_FOUND", vtkExodusIIReader::ID_NOT_FOUND },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 49; c++)
  {
    typedef vtkExodusIIReader::ObjectType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[49] = {
        { "EDGE_BLOCK", vtkExodusIIReader::EDGE_BLOCK },
        { "FACE_BLOCK", vtkExodusIIReader::FACE_BLOCK },
        { "ELEM_BLOCK", vtkExodusIIReader::ELEM_BLOCK },
        { "NODE_SET", vtkExodusIIReader::NODE_SET },
        { "EDGE_SET", vtkExodusIIReader::EDGE_SET },
        { "FACE_SET", vtkExodusIIReader::FACE_SET },
        { "SIDE_SET", vtkExodusIIReader::SIDE_SET },
        { "ELEM_SET", vtkExodusIIReader::ELEM_SET },
        { "NODE_MAP", vtkExodusIIReader::NODE_MAP },
        { "EDGE_MAP", vtkExodusIIReader::EDGE_MAP },
        { "FACE_MAP", vtkExodusIIReader::FACE_MAP },
        { "ELEM_MAP", vtkExodusIIReader::ELEM_MAP },
        { "GLOBAL", vtkExodusIIReader::GLOBAL },
        { "NODAL", vtkExodusIIReader::NODAL },
        { "ASSEMBLY", vtkExodusIIReader::ASSEMBLY },
        { "PART", vtkExodusIIReader::PART },
        { "MATERIAL", vtkExodusIIReader::MATERIAL },
        { "HIERARCHY", vtkExodusIIReader::HIERARCHY },
        { "QA_RECORDS", vtkExodusIIReader::QA_RECORDS },
        { "INFO_RECORDS", vtkExodusIIReader::INFO_RECORDS },
        { "GLOBAL_TEMPORAL", vtkExodusIIReader::GLOBAL_TEMPORAL },
        { "NODAL_TEMPORAL", vtkExodusIIReader::NODAL_TEMPORAL },
        { "ELEM_BLOCK_TEMPORAL", vtkExodusIIReader::ELEM_BLOCK_TEMPORAL },
        { "GLOBAL_CONN", vtkExodusIIReader::GLOBAL_CONN },
        { "ELEM_BLOCK_ELEM_CONN", vtkExodusIIReader::ELEM_BLOCK_ELEM_CONN },
        { "ELEM_BLOCK_FACE_CONN", vtkExodusIIReader::ELEM_BLOCK_FACE_CONN },
        { "ELEM_BLOCK_EDGE_CONN", vtkExodusIIReader::ELEM_BLOCK_EDGE_CONN },
        { "FACE_BLOCK_CONN", vtkExodusIIReader::FACE_BLOCK_CONN },
        { "EDGE_BLOCK_CONN", vtkExodusIIReader::EDGE_BLOCK_CONN },
        { "ELEM_SET_CONN", vtkExodusIIReader::ELEM_SET_CONN },
        { "SIDE_SET_CONN", vtkExodusIIReader::SIDE_SET_CONN },
        { "FACE_SET_CONN", vtkExodusIIReader::FACE_SET_CONN },
        { "EDGE_SET_CONN", vtkExodusIIReader::EDGE_SET_CONN },
        { "NODE_SET_CONN", vtkExodusIIReader::NODE_SET_CONN },
        { "NODAL_COORDS", vtkExodusIIReader::NODAL_COORDS },
        { "OBJECT_ID", vtkExodusIIReader::OBJECT_ID },
        { "IMPLICIT_ELEMENT_ID", vtkExodusIIReader::IMPLICIT_ELEMENT_ID },
        { "IMPLICIT_NODE_ID", vtkExodusIIReader::IMPLICIT_NODE_ID },
        { "GLOBAL_ELEMENT_ID", vtkExodusIIReader::GLOBAL_ELEMENT_ID },
        { "GLOBAL_NODE_ID", vtkExodusIIReader::GLOBAL_NODE_ID },
        { "ELEMENT_ID", vtkExodusIIReader::ELEMENT_ID },
        { "NODE_ID", vtkExodusIIReader::NODE_ID },
        { "NODAL_SQUEEZEMAP", vtkExodusIIReader::NODAL_SQUEEZEMAP },
        { "ELEM_BLOCK_ATTRIB", vtkExodusIIReader::ELEM_BLOCK_ATTRIB },
        { "FACE_BLOCK_ATTRIB", vtkExodusIIReader::FACE_BLOCK_ATTRIB },
        { "EDGE_BLOCK_ATTRIB", vtkExodusIIReader::EDGE_BLOCK_ATTRIB },
        { "FACE_ID", vtkExodusIIReader::FACE_ID },
        { "EDGE_ID", vtkExodusIIReader::EDGE_ID },
        { "ENTITY_COUNTS", vtkExodusIIReader::ENTITY_COUNTS },
      };

    o = PyvtkExodusIIReader_ObjectType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExodusIIReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExodusIIReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIIReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

