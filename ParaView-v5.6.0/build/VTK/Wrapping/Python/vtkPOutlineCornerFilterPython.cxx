// python wrapper for vtkPOutlineCornerFilter
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
#include "vtkPOutlineCornerFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPOutlineCornerFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPOutlineCornerFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPOutlineCornerFilter_Doc =
  "vtkPOutlineCornerFilter - create wireframe outline corners for\narbitrary data set\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPOutlineCornerFilter works like vtkOutlineCornerFilter, but it\n"
  "looks for data partitions in other processes.  It assumes the filter\n"
  "is operated in a data parallel pipeline.\n\n";


static PyObject *
PyvtkPOutlineCornerFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPOutlineCornerFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPOutlineCornerFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPOutlineCornerFilter *tempr = vtkPOutlineCornerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPOutlineCornerFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPOutlineCornerFilter::NewInstance());

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
PyvtkPOutlineCornerFilter_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerFactor(temp0);
    }
    else
    {
      op->vtkPOutlineCornerFilter::SetCornerFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMinValue() :
      op->vtkPOutlineCornerFilter::GetCornerFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMaxValue() :
      op->vtkPOutlineCornerFilter::GetCornerFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactor() :
      op->vtkPOutlineCornerFilter::GetCornerFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPOutlineCornerFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPOutlineCornerFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPOutlineCornerFilter_Methods[] = {
  {"IsTypeOf", PyvtkPOutlineCornerFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPOutlineCornerFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPOutlineCornerFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPOutlineCornerFilter\nC++: static vtkPOutlineCornerFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPOutlineCornerFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPOutlineCornerFilter\nC++: vtkPOutlineCornerFilter *NewInstance()\n\n"},
  {"SetCornerFactor", PyvtkPOutlineCornerFilter_SetCornerFactor, METH_VARARGS,
   "V.SetCornerFactor(float)\nC++: virtual void SetCornerFactor(double cornerFactor)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds Typically\nvtkSetClampMacro(CornerFactor, double, 0.001, 0.5) would used but\nsince we are chaining this to an internal method we rewrite the\ncode in the macro\n"},
  {"GetCornerFactorMinValue", PyvtkPOutlineCornerFilter_GetCornerFactorMinValue, METH_VARARGS,
   "V.GetCornerFactorMinValue() -> float\nC++: virtual double GetCornerFactorMinValue()\n\n"},
  {"GetCornerFactorMaxValue", PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue, METH_VARARGS,
   "V.GetCornerFactorMaxValue() -> float\nC++: virtual double GetCornerFactorMaxValue()\n\n"},
  {"GetCornerFactor", PyvtkPOutlineCornerFilter_GetCornerFactor, METH_VARARGS,
   "V.GetCornerFactor() -> float\nC++: virtual double GetCornerFactor()\n\n"},
  {"SetController", PyvtkPOutlineCornerFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPOutlineCornerFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPOutlineCornerFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPOutlineCornerFilter", // tp_name
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
  PyvtkPOutlineCornerFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPOutlineCornerFilter_StaticNew()
{
  return vtkPOutlineCornerFilter::New();
}

PyObject *PyvtkPOutlineCornerFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPOutlineCornerFilter_Type, PyvtkPOutlineCornerFilter_Methods,
    "vtkPOutlineCornerFilter",
 &PyvtkPOutlineCornerFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPOutlineCornerFilter_Type;

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

void PyVTKAddFile_vtkPOutlineCornerFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPOutlineCornerFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPOutlineCornerFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

