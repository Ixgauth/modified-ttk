// python wrapper for vtkHyperTreeGridThreshold
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
#include "vtkHyperTreeGridThreshold.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridThreshold(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridThreshold_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridThreshold_Doc =
  "vtkHyperTreeGridThreshold - Extract cells from a hyper tree grid\nwhere selected scalar value is within given range.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This filter extracts cells from a hyper tree grid that satisfy the\n"
  "following threshold: a cell is considered to be within range if its\n"
  "value for the active scalar is within a specified range (inclusive).\n"
  "The output remains a hyper tree grid.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkThreshold\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien 2014 This class was revised by Philippe Pebay,\n"
  "2016 This work was supported by Commissariat a l'Energie Atomique\n"
  "(CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridThreshold_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridThreshold *tempr = vtkHyperTreeGridThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridThreshold::NewInstance());

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
PyvtkHyperTreeGridThreshold_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerThreshold(temp0);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::SetLowerThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkHyperTreeGridThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperThreshold(temp0);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::SetUpperThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkHyperTreeGridThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridThreshold_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridThreshold_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridThreshold_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridThreshold_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridThreshold\nC++: static vtkHyperTreeGridThreshold *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridThreshold_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridThreshold\nC++: vtkHyperTreeGridThreshold *NewInstance()\n\n"},
  {"SetLowerThreshold", PyvtkHyperTreeGridThreshold_SetLowerThreshold, METH_VARARGS,
   "V.SetLowerThreshold(float)\nC++: virtual void SetLowerThreshold(double _arg)\n\nSet/Get minimum scalar value of threshold\n"},
  {"GetLowerThreshold", PyvtkHyperTreeGridThreshold_GetLowerThreshold, METH_VARARGS,
   "V.GetLowerThreshold() -> float\nC++: virtual double GetLowerThreshold()\n\nSet/Get minimum scalar value of threshold\n"},
  {"SetUpperThreshold", PyvtkHyperTreeGridThreshold_SetUpperThreshold, METH_VARARGS,
   "V.SetUpperThreshold(float)\nC++: virtual void SetUpperThreshold(double _arg)\n\nSet/Get maximum scalar value of threshold\n"},
  {"GetUpperThreshold", PyvtkHyperTreeGridThreshold_GetUpperThreshold, METH_VARARGS,
   "V.GetUpperThreshold() -> float\nC++: virtual double GetUpperThreshold()\n\nSet/Get maximum scalar value of threshold\n"},
  {"ThresholdBetween", PyvtkHyperTreeGridThreshold_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double, double)\n\nConvenience method to set both threshold values at once\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridThreshold", // tp_name
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
  PyvtkHyperTreeGridThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridThreshold_StaticNew()
{
  return vtkHyperTreeGridThreshold::New();
}

PyObject *PyvtkHyperTreeGridThreshold_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridThreshold_Type, PyvtkHyperTreeGridThreshold_Methods,
    "vtkHyperTreeGridThreshold",
 &PyvtkHyperTreeGridThreshold_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridThreshold_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

}

