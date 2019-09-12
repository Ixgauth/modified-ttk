// python wrapper for vtkExtractScatterPlot
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
#include "vtkExtractScatterPlot.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractScatterPlot(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractScatterPlot_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkExtractScatterPlot_Doc =
  "vtkExtractScatterPlot - Extract a scatter plot (two-dimensional\nhistogram) from any dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkExtractScatterPlot accepts any vtkDataSet as input and produces a\n"
  "vtkPolyData containing two-dimensional histogram data as output.  The\n"
  "output vtkPolyData will contain two vtkDoubleArray instances named\n"
  "\"x_bin_extents\" and \"y_bin_extents\", which contain the boundaries\n"
  "between bins along each dimension.  It will also contain a\n"
  "vtkUnsignedLongArray named \"bin_values\" which contains the value for\n"
  "each bin.\n\n";


static PyObject *
PyvtkExtractScatterPlot_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractScatterPlot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractScatterPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractScatterPlot *tempr = vtkExtractScatterPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractScatterPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractScatterPlot::NewInstance());

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
PyvtkExtractScatterPlot_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXComponent(temp0);
    }
    else
    {
      op->vtkExtractScatterPlot::SetXComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkExtractScatterPlot::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkExtractScatterPlot::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkExtractScatterPlot::GetXComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYComponent(temp0);
    }
    else
    {
      op->vtkExtractScatterPlot::SetYComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkExtractScatterPlot::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkExtractScatterPlot::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkExtractScatterPlot::GetYComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetXBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXBinCount(temp0);
    }
    else
    {
      op->vtkExtractScatterPlot::SetXBinCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXBinCountMinValue() :
      op->vtkExtractScatterPlot::GetXBinCountMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXBinCountMaxValue() :
      op->vtkExtractScatterPlot::GetXBinCountMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXBinCount() :
      op->vtkExtractScatterPlot::GetXBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetYBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYBinCount(temp0);
    }
    else
    {
      op->vtkExtractScatterPlot::SetYBinCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYBinCountMinValue() :
      op->vtkExtractScatterPlot::GetYBinCountMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYBinCountMaxValue() :
      op->vtkExtractScatterPlot::GetYBinCountMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYBinCount() :
      op->vtkExtractScatterPlot::GetYBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractScatterPlot_Methods[] = {
  {"IsTypeOf", PyvtkExtractScatterPlot_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractScatterPlot_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractScatterPlot_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractScatterPlot\nC++: static vtkExtractScatterPlot *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractScatterPlot_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractScatterPlot\nC++: vtkExtractScatterPlot *NewInstance()\n\n"},
  {"SetXComponent", PyvtkExtractScatterPlot_SetXComponent, METH_VARARGS,
   "V.SetXComponent(int)\nC++: virtual void SetXComponent(int _arg)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetXComponentMinValue", PyvtkExtractScatterPlot_GetXComponentMinValue, METH_VARARGS,
   "V.GetXComponentMinValue() -> int\nC++: virtual int GetXComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetXComponentMaxValue", PyvtkExtractScatterPlot_GetXComponentMaxValue, METH_VARARGS,
   "V.GetXComponentMaxValue() -> int\nC++: virtual int GetXComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetXComponent", PyvtkExtractScatterPlot_GetXComponent, METH_VARARGS,
   "V.GetXComponent() -> int\nC++: virtual int GetXComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"SetYComponent", PyvtkExtractScatterPlot_SetYComponent, METH_VARARGS,
   "V.SetYComponent(int)\nC++: virtual void SetYComponent(int _arg)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetYComponentMinValue", PyvtkExtractScatterPlot_GetYComponentMinValue, METH_VARARGS,
   "V.GetYComponentMinValue() -> int\nC++: virtual int GetYComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetYComponentMaxValue", PyvtkExtractScatterPlot_GetYComponentMaxValue, METH_VARARGS,
   "V.GetYComponentMaxValue() -> int\nC++: virtual int GetYComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetYComponent", PyvtkExtractScatterPlot_GetYComponent, METH_VARARGS,
   "V.GetYComponent() -> int\nC++: virtual int GetYComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"SetXBinCount", PyvtkExtractScatterPlot_SetXBinCount, METH_VARARGS,
   "V.SetXBinCount(int)\nC++: virtual void SetXBinCount(int _arg)\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {"GetXBinCountMinValue", PyvtkExtractScatterPlot_GetXBinCountMinValue, METH_VARARGS,
   "V.GetXBinCountMinValue() -> int\nC++: virtual int GetXBinCountMinValue()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {"GetXBinCountMaxValue", PyvtkExtractScatterPlot_GetXBinCountMaxValue, METH_VARARGS,
   "V.GetXBinCountMaxValue() -> int\nC++: virtual int GetXBinCountMaxValue()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {"GetXBinCount", PyvtkExtractScatterPlot_GetXBinCount, METH_VARARGS,
   "V.GetXBinCount() -> int\nC++: virtual int GetXBinCount()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {"SetYBinCount", PyvtkExtractScatterPlot_SetYBinCount, METH_VARARGS,
   "V.SetYBinCount(int)\nC++: virtual void SetYBinCount(int _arg)\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {"GetYBinCountMinValue", PyvtkExtractScatterPlot_GetYBinCountMinValue, METH_VARARGS,
   "V.GetYBinCountMinValue() -> int\nC++: virtual int GetYBinCountMinValue()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {"GetYBinCountMaxValue", PyvtkExtractScatterPlot_GetYBinCountMaxValue, METH_VARARGS,
   "V.GetYBinCountMaxValue() -> int\nC++: virtual int GetYBinCountMaxValue()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {"GetYBinCount", PyvtkExtractScatterPlot_GetYBinCount, METH_VARARGS,
   "V.GetYBinCount() -> int\nC++: virtual int GetYBinCount()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractScatterPlot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkExtractScatterPlot", // tp_name
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
  PyvtkExtractScatterPlot_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractScatterPlot_StaticNew()
{
  return vtkExtractScatterPlot::New();
}

PyObject *PyvtkExtractScatterPlot_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractScatterPlot_Type, PyvtkExtractScatterPlot_Methods,
    "vtkExtractScatterPlot",
 &PyvtkExtractScatterPlot_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractScatterPlot_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractScatterPlot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractScatterPlot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractScatterPlot", o) != 0)
  {
    Py_DECREF(o);
  }

}

