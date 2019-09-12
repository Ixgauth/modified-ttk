// python wrapper for vtkQuartileChartRepresentation
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
#include "vtkQuartileChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuartileChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuartileChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkXYChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkXYChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkXYChartRepresentation_ClassNew
#endif

static const char *PyvtkQuartileChartRepresentation_Doc =
  "vtkQuartileChartRepresentation - vtkQuartileChartRepresentation\nextends to vtkXYChartRepresentation to add support for combining\nquartile plots.\n\n"
  "Superclass: vtkXYChartRepresentation\n\n"
  "A quartile plot is created by treating multiple input arrays are\n"
  "ranges for area plots. All properties, like color, label etc. are\n"
  "specified collectively.\n\n";


static PyObject *
PyvtkQuartileChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuartileChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuartileChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuartileChartRepresentation *tempr = vtkQuartileChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuartileChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuartileChartRepresentation::NewInstance());

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
PyvtkQuartileChartRepresentation_GetDefaultSeriesLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSeriesLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetDefaultSeriesLabel(temp0, temp1) :
      op->vtkQuartileChartRepresentation::GetDefaultSeriesLabel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetQuartileVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuartileVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuartileVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetQuartileVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetQuartileVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuartileVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetQuartileVisibility() :
      op->vtkQuartileChartRepresentation::GetQuartileVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetRangeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetRangeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetRangeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRangeVisibility() :
      op->vtkQuartileChartRepresentation::GetRangeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetAverageVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAverageVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAverageVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetAverageVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetAverageVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAverageVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAverageVisibility() :
      op->vtkQuartileChartRepresentation::GetAverageVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetMedianVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMedianVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMedianVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetMedianVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetMedianVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedianVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMedianVisibility() :
      op->vtkQuartileChartRepresentation::GetMedianVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetMinVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetMinVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetMinVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMinVisibility() :
      op->vtkQuartileChartRepresentation::GetMinVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_SetMaxVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxVisibility(temp0);
    }
    else
    {
      op->vtkQuartileChartRepresentation::SetMaxVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuartileChartRepresentation_GetMaxVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuartileChartRepresentation *op = static_cast<vtkQuartileChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMaxVisibility() :
      op->vtkQuartileChartRepresentation::GetMaxVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuartileChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkQuartileChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuartileChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuartileChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuartileChartRepresentation\nC++: static vtkQuartileChartRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuartileChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuartileChartRepresentation\nC++: vtkQuartileChartRepresentation *NewInstance()\n\n"},
  {"GetDefaultSeriesLabel", PyvtkQuartileChartRepresentation_GetDefaultSeriesLabel, METH_VARARGS,
   "V.GetDefaultSeriesLabel(string, string) -> string\nC++: vtkStdString GetDefaultSeriesLabel(\n    const vtkStdString &tableName, const vtkStdString &columnName)\n     override;\n\nOverridden to format the series name to remove the operation\napplied e.g. a columnName of \"min(EQPS)\" and \"max(EQPS)\" both\nwill return \"EQPS\".\n"},
  {"SetQuartileVisibility", PyvtkQuartileChartRepresentation_SetQuartileVisibility, METH_VARARGS,
   "V.SetQuartileVisibility(bool)\nC++: virtual void SetQuartileVisibility(bool _arg)\n\nWhen set to true, q1/q3 region is rendered.\n"},
  {"GetQuartileVisibility", PyvtkQuartileChartRepresentation_GetQuartileVisibility, METH_VARARGS,
   "V.GetQuartileVisibility() -> bool\nC++: virtual bool GetQuartileVisibility()\n\nWhen set to true, q1/q3 region is rendered.\n"},
  {"SetRangeVisibility", PyvtkQuartileChartRepresentation_SetRangeVisibility, METH_VARARGS,
   "V.SetRangeVisibility(bool)\nC++: virtual void SetRangeVisibility(bool _arg)\n\nWhen set to true, min/max region is rendered.\n"},
  {"GetRangeVisibility", PyvtkQuartileChartRepresentation_GetRangeVisibility, METH_VARARGS,
   "V.GetRangeVisibility() -> bool\nC++: virtual bool GetRangeVisibility()\n\nWhen set to true, min/max region is rendered.\n"},
  {"SetAverageVisibility", PyvtkQuartileChartRepresentation_SetAverageVisibility, METH_VARARGS,
   "V.SetAverageVisibility(bool)\nC++: virtual void SetAverageVisibility(bool _arg)\n\nWhen set to true, the avg curve is rendered.\n"},
  {"GetAverageVisibility", PyvtkQuartileChartRepresentation_GetAverageVisibility, METH_VARARGS,
   "V.GetAverageVisibility() -> bool\nC++: virtual bool GetAverageVisibility()\n\nWhen set to true, the avg curve is rendered.\n"},
  {"SetMedianVisibility", PyvtkQuartileChartRepresentation_SetMedianVisibility, METH_VARARGS,
   "V.SetMedianVisibility(bool)\nC++: virtual void SetMedianVisibility(bool _arg)\n\nWhen set to true, the med curve is rendered.\n"},
  {"GetMedianVisibility", PyvtkQuartileChartRepresentation_GetMedianVisibility, METH_VARARGS,
   "V.GetMedianVisibility() -> bool\nC++: virtual bool GetMedianVisibility()\n\nWhen set to true, the med curve is rendered.\n"},
  {"SetMinVisibility", PyvtkQuartileChartRepresentation_SetMinVisibility, METH_VARARGS,
   "V.SetMinVisibility(bool)\nC++: virtual void SetMinVisibility(bool _arg)\n\nWhen set to true, the min curve is rendered.\n"},
  {"GetMinVisibility", PyvtkQuartileChartRepresentation_GetMinVisibility, METH_VARARGS,
   "V.GetMinVisibility() -> bool\nC++: virtual bool GetMinVisibility()\n\nWhen set to true, the min curve is rendered.\n"},
  {"SetMaxVisibility", PyvtkQuartileChartRepresentation_SetMaxVisibility, METH_VARARGS,
   "V.SetMaxVisibility(bool)\nC++: virtual void SetMaxVisibility(bool _arg)\n\nWhen set to true, the max curve is rendered.\n"},
  {"GetMaxVisibility", PyvtkQuartileChartRepresentation_GetMaxVisibility, METH_VARARGS,
   "V.GetMaxVisibility() -> bool\nC++: virtual bool GetMaxVisibility()\n\nWhen set to true, the max curve is rendered.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuartileChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkQuartileChartRepresentation", // tp_name
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
  PyvtkQuartileChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuartileChartRepresentation_StaticNew()
{
  return vtkQuartileChartRepresentation::New();
}

PyObject *PyvtkQuartileChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuartileChartRepresentation_Type, PyvtkQuartileChartRepresentation_Methods,
    "vtkQuartileChartRepresentation",
 &PyvtkQuartileChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkQuartileChartRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXYChartRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuartileChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuartileChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuartileChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

