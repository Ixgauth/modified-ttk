// python wrapper for vtkExtractTemporalFieldData
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
#include "vtkExtractTemporalFieldData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractTemporalFieldData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractTemporalFieldData_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkExtractTemporalFieldData_Doc =
  "vtkExtractTemporalFieldData - Extract temporal arrays from input\nfield data\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkExtractTemporalFieldData extracts arrays from the input\n"
  "vtkFieldData. These arrays are assumed to contain temporal data,\n"
  "where the nth tuple contains the value for the nth timestep.\n\n"
  "For composite datasets, the filter has two modes, it can treat each\n"
  "block in the dataset individually (default) or just look at the first\n"
  "non-empty field data (common for readers vtkExodusIIReader). For\n"
  "latter, set HandleCompositeDataBlocksIndividually to false.\n\n"
  "The output is a vtkTable (or a multiblock of vtkTables) based of\n"
  "whether HandleCompositeDataBlocksIndividually is true and input is a\n"
  "composite dataset.\n\n"
  "This algorithm does not produce a TIME_STEPS or TIME_RANGE\n"
  "information because it works across time.\n\n"
  "@par Caveat: This algorithm works only with source that produce\n"
  "TIME_STEPS(). Continuous time range is not yet supported.\n\n";


static PyObject *
PyvtkExtractTemporalFieldData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractTemporalFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractTemporalFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractTemporalFieldData *tempr = vtkExtractTemporalFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractTemporalFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractTemporalFieldData::NewInstance());

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
PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractTemporalFieldData::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_SetHandleCompositeDataBlocksIndividually(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleCompositeDataBlocksIndividually");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleCompositeDataBlocksIndividually(temp0);
    }
    else
    {
      op->vtkExtractTemporalFieldData::SetHandleCompositeDataBlocksIndividually(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_GetHandleCompositeDataBlocksIndividually(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleCompositeDataBlocksIndividually");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHandleCompositeDataBlocksIndividually() :
      op->vtkExtractTemporalFieldData::GetHandleCompositeDataBlocksIndividually());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_HandleCompositeDataBlocksIndividuallyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleCompositeDataBlocksIndividuallyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleCompositeDataBlocksIndividuallyOn();
    }
    else
    {
      op->vtkExtractTemporalFieldData::HandleCompositeDataBlocksIndividuallyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_HandleCompositeDataBlocksIndividuallyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleCompositeDataBlocksIndividuallyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleCompositeDataBlocksIndividuallyOff();
    }
    else
    {
      op->vtkExtractTemporalFieldData::HandleCompositeDataBlocksIndividuallyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractTemporalFieldData_Methods[] = {
  {"IsTypeOf", PyvtkExtractTemporalFieldData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractTemporalFieldData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractTemporalFieldData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractTemporalFieldData\nC++: static vtkExtractTemporalFieldData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractTemporalFieldData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractTemporalFieldData\nC++: vtkExtractTemporalFieldData *NewInstance()\n\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {"SetHandleCompositeDataBlocksIndividually", PyvtkExtractTemporalFieldData_SetHandleCompositeDataBlocksIndividually, METH_VARARGS,
   "V.SetHandleCompositeDataBlocksIndividually(bool)\nC++: virtual void SetHandleCompositeDataBlocksIndividually(\n    bool _arg)\n\nWhen set to true (default), if the input is a\nvtkCompositeDataSet, then each block in the input dataset in\nprocessed separately. If false, then the first non-empty\nFieldData is considered.\n"},
  {"GetHandleCompositeDataBlocksIndividually", PyvtkExtractTemporalFieldData_GetHandleCompositeDataBlocksIndividually, METH_VARARGS,
   "V.GetHandleCompositeDataBlocksIndividually() -> bool\nC++: virtual bool GetHandleCompositeDataBlocksIndividually()\n\nWhen set to true (default), if the input is a\nvtkCompositeDataSet, then each block in the input dataset in\nprocessed separately. If false, then the first non-empty\nFieldData is considered.\n"},
  {"HandleCompositeDataBlocksIndividuallyOn", PyvtkExtractTemporalFieldData_HandleCompositeDataBlocksIndividuallyOn, METH_VARARGS,
   "V.HandleCompositeDataBlocksIndividuallyOn()\nC++: virtual void HandleCompositeDataBlocksIndividuallyOn()\n\nWhen set to true (default), if the input is a\nvtkCompositeDataSet, then each block in the input dataset in\nprocessed separately. If false, then the first non-empty\nFieldData is considered.\n"},
  {"HandleCompositeDataBlocksIndividuallyOff", PyvtkExtractTemporalFieldData_HandleCompositeDataBlocksIndividuallyOff, METH_VARARGS,
   "V.HandleCompositeDataBlocksIndividuallyOff()\nC++: virtual void HandleCompositeDataBlocksIndividuallyOff()\n\nWhen set to true (default), if the input is a\nvtkCompositeDataSet, then each block in the input dataset in\nprocessed separately. If false, then the first non-empty\nFieldData is considered.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractTemporalFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractTemporalFieldData", // tp_name
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
  PyvtkExtractTemporalFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractTemporalFieldData_StaticNew()
{
  return vtkExtractTemporalFieldData::New();
}

PyObject *PyvtkExtractTemporalFieldData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractTemporalFieldData_Type, PyvtkExtractTemporalFieldData_Methods,
    "vtkExtractTemporalFieldData",
 &PyvtkExtractTemporalFieldData_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractTemporalFieldData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractTemporalFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractTemporalFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractTemporalFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

