// python wrapper for vtkDataObject
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
#include "vtkDataObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataObject_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDataObject_Doc =
  "vtkDataObject - general representation of visualization data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataObject is an general representation of visualization data. It\n"
  "serves to encapsulate instance variables and methods for\n"
  "visualization network execution, as well as representing data\n"
  "consisting of a field (i.e., just an unstructured pile of data). This\n"
  "is to be compared with a vtkDataSet, which is data with geometric\n"
  "and/or topological structure.\n\n"
  "vtkDataObjects are used to represent arbitrary repositories of data\n"
  "via the vtkFieldData instance variable. These data must be eventually\n"
  "mapped into a concrete subclass of vtkDataSet before they can\n"
  "actually be displayed.\n\n"
  "@sa\n"
  "vtkDataSet vtkFieldData vtkDataObjectToDataSetFilter\n"
  "vtkFieldDataToAttributeDataFilter\n\n";

static PyTypeObject PyvtkDataObject_FieldAssociations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataObject.FieldAssociations", // tp_name
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

PyObject *PyvtkDataObject_FieldAssociations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataObject_FieldAssociations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_FieldAssociations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataObject_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataObject.AttributeTypes", // tp_name
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

PyObject *PyvtkDataObject_AttributeTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataObject_AttributeTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkDataObject_FieldOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataObject.FieldOperations", // tp_name
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

PyObject *PyvtkDataObject_FieldOperations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkDataObject_FieldOperations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_FieldOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkDataObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObject *tempr = vtkDataObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObject::NewInstance());

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
PyvtkDataObject_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkDataObject::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkDataObject::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDataObject::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataObject::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseData();
    }
    else
    {
      op->vtkDataObject::ReleaseData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataReleased() :
      op->vtkDataObject::GetDataReleased());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalReleaseDataFlag");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject::SetGlobalReleaseDataFlag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlobalReleaseDataFlagOn();
    }
    else
    {
      op->vtkDataObject::GlobalReleaseDataFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlobalReleaseDataFlagOff();
    }
    else
    {
      op->vtkDataObject::GlobalReleaseDataFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalReleaseDataFlag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDataObject::GetGlobalReleaseDataFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkDataObject::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDataObject::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDataObject::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUpdateTime() :
      op->vtkDataObject::GetUpdateTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataObject::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkDataObject::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkDataObject::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetActiveFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkInformation *tempr = vtkDataObject::GetActiveFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNamedFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkInformation *tempr = vtkDataObject::GetNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_RemoveNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveNamedFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataObject::RemoveNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttribute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttribute");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkInformation *tempr = vtkDataObject::SetActiveAttribute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttributeInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttributeInfo");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkDataObject::SetActiveAttributeInfo(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetPointDataActiveScalarInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPointDataActiveScalarInfo");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataObject::SetPointDataActiveScalarInfo(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DataHasBeenGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataHasBeenGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataHasBeenGenerated();
    }
    else
    {
      op->vtkDataObject::DataHasBeenGenerated();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForNewData();
    }
    else
    {
      op->vtkDataObject::PrepareForNewData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataObject::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataObject::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkDataObject::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Crop(temp0);
    }
    else
    {
      op->vtkDataObject::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkDataObject::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkDataObject::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeTypeForArray(temp0) :
      op->vtkDataObject::GetAttributeTypeForArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkDataObject::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataObject::GetAssociationTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObject::GetAssociationTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TYPE_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TYPE_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkDataObject::DATA_TYPE_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_OBJECT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_OBJECT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectKey *tempr = vtkDataObject::DATA_OBJECT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_EXTENT_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerPointerKey *tempr = vtkDataObject::DATA_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ALL_PIECES_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALL_PIECES_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::ALL_PIECES_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_PIECE_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_PIECE_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_PIECES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_GHOST_LEVELS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TIME_STEP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TIME_STEP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkDataObject::DATA_TIME_STEP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_POINT_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::POINT_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CELL_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CELL_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::CELL_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_VERTEX_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTEX_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::VERTEX_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_EDGE_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EDGE_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::EDGE_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ARRAY_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ARRAY_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ARRAY_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ASSOCIATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ASSOCIATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ASSOCIATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ATTRIBUTE_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ATTRIBUTE_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ATTRIBUTE_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ACTIVE_ATTRIBUTE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ACTIVE_ATTRIBUTE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_COMPONENTS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_COMPONENTS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_TUPLES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_TUPLES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_TUPLES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_OPERATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_OPERATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_OPERATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::FIELD_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_PIECE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::PIECE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkDataObject::FIELD_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ORIGIN(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGIN");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::ORIGIN();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SPACING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SPACING");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::SPACING();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_BOUNDING_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDING_BOX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::BOUNDING_BOX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SIL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectKey *tempr = vtkDataObject::SIL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObject_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObject_GetData_Methods[] = {
  {nullptr, PyvtkDataObject_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkDataObject_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObject_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObject_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataObject_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkDataObject_Methods[] = {
  {"IsTypeOf", PyvtkDataObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataObject\nC++: static vtkDataObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataObject\nC++: vtkDataObject *NewInstance()\n\n"},
  {"GetInformation", PyvtkDataObject_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with this data object.\n"},
  {"SetInformation", PyvtkDataObject_SetInformation, METH_VARARGS,
   "V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this data object.\n"},
  {"GetMTime", PyvtkDataObject_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nData objects are composite objects and need to check each part\nfor MTime. The information object also needs to be considered.\n"},
  {"Initialize", PyvtkDataObject_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {"ReleaseData", PyvtkDataObject_ReleaseData, METH_VARARGS,
   "V.ReleaseData()\nC++: void ReleaseData()\n\nRelease data back to system to conserve memory resource. Used\nduring visualization network execution.  Releasing this data does\nnot make down-stream data invalid.\n"},
  {"GetDataReleased", PyvtkDataObject_GetDataReleased, METH_VARARGS,
   "V.GetDataReleased() -> int\nC++: virtual int GetDataReleased()\n\nGet the flag indicating the data has been released.\n"},
  {"SetGlobalReleaseDataFlag", PyvtkDataObject_SetGlobalReleaseDataFlag, METH_VARARGS,
   "V.SetGlobalReleaseDataFlag(int)\nC++: static void SetGlobalReleaseDataFlag(int val)\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {"GlobalReleaseDataFlagOn", PyvtkDataObject_GlobalReleaseDataFlagOn, METH_VARARGS,
   "V.GlobalReleaseDataFlagOn()\nC++: void GlobalReleaseDataFlagOn()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {"GlobalReleaseDataFlagOff", PyvtkDataObject_GlobalReleaseDataFlagOff, METH_VARARGS,
   "V.GlobalReleaseDataFlagOff()\nC++: void GlobalReleaseDataFlagOff()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {"GetGlobalReleaseDataFlag", PyvtkDataObject_GetGlobalReleaseDataFlag, METH_VARARGS,
   "V.GetGlobalReleaseDataFlag() -> int\nC++: static int GetGlobalReleaseDataFlag()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {"SetFieldData", PyvtkDataObject_SetFieldData, METH_VARARGS,
   "V.SetFieldData(vtkFieldData)\nC++: virtual void SetFieldData(vtkFieldData *)\n\nAssign or retrieve a general field data to this data object.\n"},
  {"GetFieldData", PyvtkDataObject_GetFieldData, METH_VARARGS,
   "V.GetFieldData() -> vtkFieldData\nC++: virtual vtkFieldData *GetFieldData()\n\nAssign or retrieve a general field data to this data object.\n"},
  {"GetDataObjectType", PyvtkDataObject_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {"GetUpdateTime", PyvtkDataObject_GetUpdateTime, METH_VARARGS,
   "V.GetUpdateTime() -> int\nC++: vtkMTimeType GetUpdateTime()\n\nUsed by Threaded ports to determine if they should initiate an\nasynchronous update (still in development).\n"},
  {"GetActualMemorySize", PyvtkDataObject_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value).\n"},
  {"CopyInformationFromPipeline", PyvtkDataObject_CopyInformationFromPipeline, METH_VARARGS,
   "V.CopyInformationFromPipeline(vtkInformation)\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *info)\n\nCopy from the pipeline information to the data object's own\ninformation. Called right before the main execution pass.\n"},
  {"CopyInformationToPipeline", PyvtkDataObject_CopyInformationToPipeline, METH_VARARGS,
   "V.CopyInformationToPipeline(vtkInformation)\nC++: virtual void CopyInformationToPipeline(vtkInformation *info)\n\nCopy information from this data object to the pipeline\ninformation. This is used by the vtkTrivialProducer that is\ncreated when someone calls SetInputData() to connect a data\nobject to a pipeline.\n"},
  {"GetActiveFieldInformation", PyvtkDataObject_GetActiveFieldInformation, METH_VARARGS,
   "V.GetActiveFieldInformation(vtkInformation, int, int)\n    -> vtkInformation\nC++: static vtkInformation *GetActiveFieldInformation(\n    vtkInformation *info, int fieldAssociation, int attributeType)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and\nattribute (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS)\n"},
  {"GetNamedFieldInformation", PyvtkDataObject_GetNamedFieldInformation, METH_VARARGS,
   "V.GetNamedFieldInformation(vtkInformation, int, string)\n    -> vtkInformation\nC++: static vtkInformation *GetNamedFieldInformation(\n    vtkInformation *info, int fieldAssociation, const char *name)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and name.\n"},
  {"RemoveNamedFieldInformation", PyvtkDataObject_RemoveNamedFieldInformation, METH_VARARGS,
   "V.RemoveNamedFieldInformation(vtkInformation, int, string)\nC++: static void RemoveNamedFieldInformation(vtkInformation *info,\n     int fieldAssociation, const char *name)\n\nRemove the info associated with an array\n"},
  {"SetActiveAttribute", PyvtkDataObject_SetActiveAttribute, METH_VARARGS,
   "V.SetActiveAttribute(vtkInformation, int, string, int)\n    -> vtkInformation\nC++: static vtkInformation *SetActiveAttribute(\n    vtkInformation *info, int fieldAssociation,\n    const char *attributeName, int attributeType)\n\nSet the named array to be the active field for the specified type\n(SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS) and association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  Returns\nthe active field information object and creates on entry if one\nnot found.\n"},
  {"SetActiveAttributeInfo", PyvtkDataObject_SetActiveAttributeInfo, METH_VARARGS,
   "V.SetActiveAttributeInfo(vtkInformation, int, int, string, int,\n    int, int)\nC++: static void SetActiveAttributeInfo(vtkInformation *info,\n    int fieldAssociation, int attributeType, const char *name,\n    int arrayType, int numComponents, int numTuples)\n\nSet the name, array type, number of components, and number of\ntuples within the passed information object for the active\nattribute of type attributeType (in specified association,\nFIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  If there\nis not an active attribute of the specified type, an entry in the\ninformation object is created.  If arrayType, numComponents, or\nnumTuples equal to -1, or name=nullptr the value is not changed.\n"},
  {"SetPointDataActiveScalarInfo", PyvtkDataObject_SetPointDataActiveScalarInfo, METH_VARARGS,
   "V.SetPointDataActiveScalarInfo(vtkInformation, int, int)\nC++: static void SetPointDataActiveScalarInfo(\n    vtkInformation *info, int arrayType, int numComponents)\n\nConvenience version of previous method for use (primarily) by the\nImaging filters. If arrayType or numComponents == -1, the value\nis not changed.\n"},
  {"DataHasBeenGenerated", PyvtkDataObject_DataHasBeenGenerated, METH_VARARGS,
   "V.DataHasBeenGenerated()\nC++: void DataHasBeenGenerated()\n\nThis method is called by the source when it executes to generate\ndata. It is sort of the opposite of ReleaseData. It sets the\nDataReleased flag to 0, and sets a new UpdateTime.\n"},
  {"PrepareForNewData", PyvtkDataObject_PrepareForNewData, METH_VARARGS,
   "V.PrepareForNewData()\nC++: virtual void PrepareForNewData()\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for vtkImageData we leave\nthe old data in case the memory can be reused.\n"},
  {"ShallowCopy", PyvtkDataObject_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {"DeepCopy", PyvtkDataObject_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {"GetExtentType", PyvtkDataObject_GetExtentType, METH_VARARGS,
   "V.GetExtentType() -> int\nC++: virtual int GetExtentType()\n\nThe ExtentType will be left as VTK_PIECES_EXTENT for data objects\nsuch as vtkPolyData and vtkUnstructuredGrid. The ExtentType will\nbe changed to VTK_3D_EXTENT for data objects with 3D structure\nsuch as vtkImageData (and its subclass vtkStructuredPoints),\nvtkRectilinearGrid, and vtkStructuredGrid. The default is the\nhave an extent in pieces, with only one piece (no streaming\npossible).\n"},
  {"Crop", PyvtkDataObject_Crop, METH_VARARGS,
   "V.Crop((int, ...))\nC++: virtual void Crop(const int *updateExtent)\n\nThis method crops the data object (if necessary) so that the\nextent matches the update extent.\n"},
  {"GetAttributes", PyvtkDataObject_GetAttributes, METH_VARARGS,
   "V.GetAttributes(int) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetAttributes(int type)\n\nReturns the attributes of the data object of the specified\nattribute type. The type may be:  POINT  - Defined in vtkDataSet\nsubclasses. CELL   - Defined in vtkDataSet subclasses. VERTEX -\nDefined in vtkGraph subclasses. EDGE   - Defined in vtkGraph\nsubclasses. ROW    - Defined in vtkTable.  The other attribute\ntype, FIELD, will return nullptr since field data is stored as a\nvtkFieldData instance, not a vtkDataSetAttributes instance. To\nretrieve field data, use GetAttributesAsFieldData.\n"},
  {"GetAttributesAsFieldData", PyvtkDataObject_GetAttributesAsFieldData, METH_VARARGS,
   "V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {"GetAttributeTypeForArray", PyvtkDataObject_GetAttributeTypeForArray, METH_VARARGS,
   "V.GetAttributeTypeForArray(vtkAbstractArray) -> int\nC++: virtual int GetAttributeTypeForArray(vtkAbstractArray *arr)\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {"GetNumberOfElements", PyvtkDataObject_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetAssociationTypeAsString", PyvtkDataObject_GetAssociationTypeAsString, METH_VARARGS,
   "V.GetAssociationTypeAsString(int) -> string\nC++: static const char *GetAssociationTypeAsString(\n    int associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Points\").\n"},
  {"GetAssociationTypeFromString", PyvtkDataObject_GetAssociationTypeFromString, METH_VARARGS,
   "V.GetAssociationTypeFromString(string) -> int\nC++: static int GetAssociationTypeFromString(\n    const char *associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Points\").\n"},
  {"DATA_TYPE_NAME", PyvtkDataObject_DATA_TYPE_NAME, METH_VARARGS,
   "V.DATA_TYPE_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *DATA_TYPE_NAME()\n\n"},
  {"DATA_OBJECT", PyvtkDataObject_DATA_OBJECT, METH_VARARGS,
   "V.DATA_OBJECT() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA_OBJECT()\n\n"},
  {"DATA_EXTENT_TYPE", PyvtkDataObject_DATA_EXTENT_TYPE, METH_VARARGS,
   "V.DATA_EXTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_EXTENT_TYPE()\n\n"},
  {"DATA_EXTENT", PyvtkDataObject_DATA_EXTENT, METH_VARARGS,
   "V.DATA_EXTENT() -> vtkInformationIntegerPointerKey\nC++: static vtkInformationIntegerPointerKey *DATA_EXTENT()\n\n"},
  {"ALL_PIECES_EXTENT", PyvtkDataObject_ALL_PIECES_EXTENT, METH_VARARGS,
   "V.ALL_PIECES_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *ALL_PIECES_EXTENT()\n\n"},
  {"DATA_PIECE_NUMBER", PyvtkDataObject_DATA_PIECE_NUMBER, METH_VARARGS,
   "V.DATA_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_PIECE_NUMBER()\n\n"},
  {"DATA_NUMBER_OF_PIECES", PyvtkDataObject_DATA_NUMBER_OF_PIECES, METH_VARARGS,
   "V.DATA_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_PIECES()\n\n"},
  {"DATA_NUMBER_OF_GHOST_LEVELS", PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS, METH_VARARGS,
   "V.DATA_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_GHOST_LEVELS(\n    )\n\n"},
  {"DATA_TIME_STEP", PyvtkDataObject_DATA_TIME_STEP, METH_VARARGS,
   "V.DATA_TIME_STEP() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *DATA_TIME_STEP()\n\n"},
  {"POINT_DATA_VECTOR", PyvtkDataObject_POINT_DATA_VECTOR, METH_VARARGS,
   "V.POINT_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POINT_DATA_VECTOR(\n    )\n\n"},
  {"CELL_DATA_VECTOR", PyvtkDataObject_CELL_DATA_VECTOR, METH_VARARGS,
   "V.CELL_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *CELL_DATA_VECTOR()\n\n"},
  {"VERTEX_DATA_VECTOR", PyvtkDataObject_VERTEX_DATA_VECTOR, METH_VARARGS,
   "V.VERTEX_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *VERTEX_DATA_VECTOR(\n    )\n\n"},
  {"EDGE_DATA_VECTOR", PyvtkDataObject_EDGE_DATA_VECTOR, METH_VARARGS,
   "V.EDGE_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *EDGE_DATA_VECTOR()\n\n"},
  {"FIELD_ARRAY_TYPE", PyvtkDataObject_FIELD_ARRAY_TYPE, METH_VARARGS,
   "V.FIELD_ARRAY_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ARRAY_TYPE()\n\n"},
  {"FIELD_ASSOCIATION", PyvtkDataObject_FIELD_ASSOCIATION, METH_VARARGS,
   "V.FIELD_ASSOCIATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ASSOCIATION()\n\n"},
  {"FIELD_ATTRIBUTE_TYPE", PyvtkDataObject_FIELD_ATTRIBUTE_TYPE, METH_VARARGS,
   "V.FIELD_ATTRIBUTE_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ATTRIBUTE_TYPE()\n\n"},
  {"FIELD_ACTIVE_ATTRIBUTE", PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE, METH_VARARGS,
   "V.FIELD_ACTIVE_ATTRIBUTE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ACTIVE_ATTRIBUTE()\n\n"},
  {"FIELD_NUMBER_OF_COMPONENTS", PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS, METH_VARARGS,
   "V.FIELD_NUMBER_OF_COMPONENTS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_COMPONENTS()\n\n"},
  {"FIELD_NUMBER_OF_TUPLES", PyvtkDataObject_FIELD_NUMBER_OF_TUPLES, METH_VARARGS,
   "V.FIELD_NUMBER_OF_TUPLES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_TUPLES()\n\n"},
  {"FIELD_OPERATION", PyvtkDataObject_FIELD_OPERATION, METH_VARARGS,
   "V.FIELD_OPERATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_OPERATION()\n\n"},
  {"FIELD_RANGE", PyvtkDataObject_FIELD_RANGE, METH_VARARGS,
   "V.FIELD_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *FIELD_RANGE()\n\n"},
  {"PIECE_EXTENT", PyvtkDataObject_PIECE_EXTENT, METH_VARARGS,
   "V.PIECE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *PIECE_EXTENT()\n\n"},
  {"FIELD_NAME", PyvtkDataObject_FIELD_NAME, METH_VARARGS,
   "V.FIELD_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FIELD_NAME()\n\n"},
  {"ORIGIN", PyvtkDataObject_ORIGIN, METH_VARARGS,
   "V.ORIGIN() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *ORIGIN()\n\n"},
  {"SPACING", PyvtkDataObject_SPACING, METH_VARARGS,
   "V.SPACING() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SPACING()\n\n"},
  {"BOUNDING_BOX", PyvtkDataObject_BOUNDING_BOX, METH_VARARGS,
   "V.BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDING_BOX()\n\n"},
  {"SIL", PyvtkDataObject_SIL, METH_VARARGS,
   "V.SIL() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *SIL()\n\n"},
  {"GetData", PyvtkDataObject_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataObject", // tp_name
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
  PyvtkDataObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObject_StaticNew()
{
  return vtkDataObject::New();
}

PyObject *PyvtkDataObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataObject_Type, PyvtkDataObject_Methods,
    "vtkDataObject",
 &PyvtkDataObject_StaticNew);

  PyTypeObject *pytype = &PyvtkDataObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataObject_FieldAssociations_Type);
  PyvtkDataObject_FieldAssociations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataObject_FieldAssociations_Type);

  o = (PyObject *)&PyvtkDataObject_FieldAssociations_Type;
  if (PyDict_SetItemString(d, "FieldAssociations", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataObject_AttributeTypes_Type);
  PyvtkDataObject_AttributeTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataObject_AttributeTypes_Type);

  o = (PyObject *)&PyvtkDataObject_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataObject_FieldOperations_Type);
  PyvtkDataObject_FieldOperations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkDataObject_FieldOperations_Type);

  o = (PyObject *)&PyvtkDataObject_FieldOperations_Type;
  if (PyDict_SetItemString(d, "FieldOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDataObject::FieldAssociations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "FIELD_ASSOCIATION_POINTS", vtkDataObject::FIELD_ASSOCIATION_POINTS },
        { "FIELD_ASSOCIATION_CELLS", vtkDataObject::FIELD_ASSOCIATION_CELLS },
        { "FIELD_ASSOCIATION_NONE", vtkDataObject::FIELD_ASSOCIATION_NONE },
        { "FIELD_ASSOCIATION_POINTS_THEN_CELLS", vtkDataObject::FIELD_ASSOCIATION_POINTS_THEN_CELLS },
        { "FIELD_ASSOCIATION_VERTICES", vtkDataObject::FIELD_ASSOCIATION_VERTICES },
        { "FIELD_ASSOCIATION_EDGES", vtkDataObject::FIELD_ASSOCIATION_EDGES },
        { "FIELD_ASSOCIATION_ROWS", vtkDataObject::FIELD_ASSOCIATION_ROWS },
        { "NUMBER_OF_ASSOCIATIONS", vtkDataObject::NUMBER_OF_ASSOCIATIONS },
      };

    o = PyvtkDataObject_FieldAssociations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDataObject::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "POINT", vtkDataObject::POINT },
        { "CELL", vtkDataObject::CELL },
        { "FIELD", vtkDataObject::FIELD },
        { "POINT_THEN_CELL", vtkDataObject::POINT_THEN_CELL },
        { "VERTEX", vtkDataObject::VERTEX },
        { "EDGE", vtkDataObject::EDGE },
        { "ROW", vtkDataObject::ROW },
        { "NUMBER_OF_ATTRIBUTE_TYPES", vtkDataObject::NUMBER_OF_ATTRIBUTE_TYPES },
      };

    o = PyvtkDataObject_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkDataObject::FieldOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FIELD_OPERATION_PRESERVED", vtkDataObject::FIELD_OPERATION_PRESERVED },
        { "FIELD_OPERATION_REINTERPOLATED", vtkDataObject::FIELD_OPERATION_REINTERPOLATED },
        { "FIELD_OPERATION_MODIFIED", vtkDataObject::FIELD_OPERATION_MODIFIED },
        { "FIELD_OPERATION_REMOVED", vtkDataObject::FIELD_OPERATION_REMOVED },
      };

    o = PyvtkDataObject_FieldOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObject", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_PIECES_EXTENT", 0 },
        { "VTK_3D_EXTENT", 1 },
        { "VTK_TIME_EXTENT", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

