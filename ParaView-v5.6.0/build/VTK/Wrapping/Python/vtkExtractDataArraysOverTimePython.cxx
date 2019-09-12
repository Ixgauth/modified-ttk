// python wrapper for vtkExtractDataArraysOverTime
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
#include "vtkExtractDataArraysOverTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractDataArraysOverTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractDataArraysOverTime_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractDataArraysOverTime_Doc =
  "vtkExtractDataArraysOverTime - extracts array from input dataset over\ntime.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractDataArraysOverTime extracts array from input dataset over\n"
  "time. The filter extracts attribute arrays, based on the chosen field\n"
  "association (vtkExtractDataArraysOverTime::SetFieldAssociation).\n\n"
  "vtkExtractDataArraysOverTime::ReportStatisticsOnly determines if each\n"
  "element is individually tracked or only summary statistics for each\n"
  "timestep are tracked.\n\n"
  "If ReportStatisticsOnly is off, the filter tracks each element in the\n"
  "input over time. It requires that it can identify matching elements\n"
  "from one timestep to another. There are several ways of doing that.\n\n"
  "\\li if vtkExtractDataArraysOverTime::UseGlobalIDs is true, then the\n"
  "    filter\n"
  "    will look for array marked as vtkDataSetAttributes::GLOBALIDS in\n"
  "the\n"
  "    input and use that to track the element.\n"
  "\\li if vtkExtractDataArraysOverTime::UseGlobalIDs is false or there\n"
  "    are no\n"
  "    element ids present, then the filter will look for the array\n"
  "chosen for\n"
  "    processing using `vtkAlgorithm::SetInputArrayToProcess` at index\n"
  "0.\n"
  "\\li if earlier attempts fail, then simply the element id (i.e. index)\n"
  "is used.\n\n"
  "The output is a vtkMultiBlockDataSet with single level, where leaf\n"
  "nodes can are vtkTable instances.\n\n"
  "The output is structured as follows:\n\n"
  "\\li if vtkExtractDataArraysOverTime::ReportStatisticsOnly is true,\n"
  "    then the\n"
  "    stats are computed per input block (if input is a composite\n"
  "dataset) or on the whole\n"
  "    input dataset and placed as blocks named as **stats block=<block\n"
  "id>**.\n"
  "    For non-composite input, the single leaf block is output is named\n"
  "as\n"
  "**stats**.\n\n"
  "\\li if vtkExtractDataArraysOverTime::ReportStatisticsOnly if off,\n"
  "    then each\n"
  "   tracked element is placed in a separate output block. The block\n"
  "name is of\n"
  "   the form **id=block=<block id>** where the **block=** suffix is\n"
  "   dropped for non-composite input datasets. If global ids are being\n"
  "used for\n"
  "   tracking then the name is simply **gid=<global id>**.\n\n"
  "@sa vtkPExtractDataArraysOverTime\n\n";


static PyObject *
PyvtkExtractDataArraysOverTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractDataArraysOverTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractDataArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractDataArraysOverTime *tempr = vtkExtractDataArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractDataArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractDataArraysOverTime::NewInstance());

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
PyvtkExtractDataArraysOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractDataArraysOverTime::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkExtractDataArraysOverTime::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_GetFieldAssociationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociationMinValue() :
      op->vtkExtractDataArraysOverTime::GetFieldAssociationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_GetFieldAssociationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociationMaxValue() :
      op->vtkExtractDataArraysOverTime::GetFieldAssociationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkExtractDataArraysOverTime::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_SetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportStatisticsOnly(temp0);
    }
    else
    {
      op->vtkExtractDataArraysOverTime::SetReportStatisticsOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_GetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReportStatisticsOnly() :
      op->vtkExtractDataArraysOverTime::GetReportStatisticsOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_ReportStatisticsOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportStatisticsOnlyOn();
    }
    else
    {
      op->vtkExtractDataArraysOverTime::ReportStatisticsOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_ReportStatisticsOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportStatisticsOnlyOff();
    }
    else
    {
      op->vtkExtractDataArraysOverTime::ReportStatisticsOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_SetUseGlobalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalIDs(temp0);
    }
    else
    {
      op->vtkExtractDataArraysOverTime::SetUseGlobalIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataArraysOverTime_GetUseGlobalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataArraysOverTime *op = static_cast<vtkExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseGlobalIDs() :
      op->vtkExtractDataArraysOverTime::GetUseGlobalIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractDataArraysOverTime_Methods[] = {
  {"IsTypeOf", PyvtkExtractDataArraysOverTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractDataArraysOverTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractDataArraysOverTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractDataArraysOverTime\nC++: static vtkExtractDataArraysOverTime *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractDataArraysOverTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractDataArraysOverTime\nC++: vtkExtractDataArraysOverTime *NewInstance()\n\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractDataArraysOverTime_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {"SetFieldAssociation", PyvtkExtractDataArraysOverTime_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: virtual void SetFieldAssociation(int _arg)\n\nFieldAssociation indicates which attributes to extract over time.\nThis filter can extract only one type of attribute arrays.\nCurrently, vtkDataObject::FIELD and\nvtkDataObject::POINT_THEN_CELL are not supported.\n"},
  {"GetFieldAssociationMinValue", PyvtkExtractDataArraysOverTime_GetFieldAssociationMinValue, METH_VARARGS,
   "V.GetFieldAssociationMinValue() -> int\nC++: virtual int GetFieldAssociationMinValue()\n\nFieldAssociation indicates which attributes to extract over time.\nThis filter can extract only one type of attribute arrays.\nCurrently, vtkDataObject::FIELD and\nvtkDataObject::POINT_THEN_CELL are not supported.\n"},
  {"GetFieldAssociationMaxValue", PyvtkExtractDataArraysOverTime_GetFieldAssociationMaxValue, METH_VARARGS,
   "V.GetFieldAssociationMaxValue() -> int\nC++: virtual int GetFieldAssociationMaxValue()\n\nFieldAssociation indicates which attributes to extract over time.\nThis filter can extract only one type of attribute arrays.\nCurrently, vtkDataObject::FIELD and\nvtkDataObject::POINT_THEN_CELL are not supported.\n"},
  {"GetFieldAssociation", PyvtkExtractDataArraysOverTime_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nFieldAssociation indicates which attributes to extract over time.\nThis filter can extract only one type of attribute arrays.\nCurrently, vtkDataObject::FIELD and\nvtkDataObject::POINT_THEN_CELL are not supported.\n"},
  {"SetReportStatisticsOnly", PyvtkExtractDataArraysOverTime_SetReportStatisticsOnly, METH_VARARGS,
   "V.SetReportStatisticsOnly(bool)\nC++: virtual void SetReportStatisticsOnly(bool _arg)\n\nInstead of breaking a data into a separate time-history table for\neach (block,ID)-tuple, you may call ReportStatisticsOnlyOn().\nThen a single table per block of the input dataset will report\nthe minimum, maximum, quartiles, and (for numerical arrays) the\naverage and standard deviation of the data over time.\n\n* The default is off to preserve backwards-compatibility.\n"},
  {"GetReportStatisticsOnly", PyvtkExtractDataArraysOverTime_GetReportStatisticsOnly, METH_VARARGS,
   "V.GetReportStatisticsOnly() -> bool\nC++: virtual bool GetReportStatisticsOnly()\n\nInstead of breaking a data into a separate time-history table for\neach (block,ID)-tuple, you may call ReportStatisticsOnlyOn().\nThen a single table per block of the input dataset will report\nthe minimum, maximum, quartiles, and (for numerical arrays) the\naverage and standard deviation of the data over time.\n\n* The default is off to preserve backwards-compatibility.\n"},
  {"ReportStatisticsOnlyOn", PyvtkExtractDataArraysOverTime_ReportStatisticsOnlyOn, METH_VARARGS,
   "V.ReportStatisticsOnlyOn()\nC++: virtual void ReportStatisticsOnlyOn()\n\nInstead of breaking a data into a separate time-history table for\neach (block,ID)-tuple, you may call ReportStatisticsOnlyOn().\nThen a single table per block of the input dataset will report\nthe minimum, maximum, quartiles, and (for numerical arrays) the\naverage and standard deviation of the data over time.\n\n* The default is off to preserve backwards-compatibility.\n"},
  {"ReportStatisticsOnlyOff", PyvtkExtractDataArraysOverTime_ReportStatisticsOnlyOff, METH_VARARGS,
   "V.ReportStatisticsOnlyOff()\nC++: virtual void ReportStatisticsOnlyOff()\n\nInstead of breaking a data into a separate time-history table for\neach (block,ID)-tuple, you may call ReportStatisticsOnlyOn().\nThen a single table per block of the input dataset will report\nthe minimum, maximum, quartiles, and (for numerical arrays) the\naverage and standard deviation of the data over time.\n\n* The default is off to preserve backwards-compatibility.\n"},
  {"SetUseGlobalIDs", PyvtkExtractDataArraysOverTime_SetUseGlobalIDs, METH_VARARGS,
   "V.SetUseGlobalIDs(bool)\nC++: virtual void SetUseGlobalIDs(bool _arg)\n\nWhen ReportStatisticsOnly is false, if UseGlobalIDs is true, then\nthe filter will track elements using their global ids, if\npresent. Default is true.\n"},
  {"GetUseGlobalIDs", PyvtkExtractDataArraysOverTime_GetUseGlobalIDs, METH_VARARGS,
   "V.GetUseGlobalIDs() -> bool\nC++: virtual bool GetUseGlobalIDs()\n\nWhen ReportStatisticsOnly is false, if UseGlobalIDs is true, then\nthe filter will track elements using their global ids, if\npresent. Default is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractDataArraysOverTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractDataArraysOverTime", // tp_name
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
  PyvtkExtractDataArraysOverTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractDataArraysOverTime_StaticNew()
{
  return vtkExtractDataArraysOverTime::New();
}

PyObject *PyvtkExtractDataArraysOverTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractDataArraysOverTime_Type, PyvtkExtractDataArraysOverTime_Methods,
    "vtkExtractDataArraysOverTime",
 &PyvtkExtractDataArraysOverTime_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractDataArraysOverTime_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractDataArraysOverTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractDataArraysOverTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractDataArraysOverTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

