// python wrapper for vtkOutlineCornerFilter
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
#include "vtkOutlineCornerFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutlineCornerFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutlineCornerFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkOutlineCornerFilter_Doc =
  "vtkOutlineCornerFilter - create wireframe outline corners for\narbitrary data set\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkOutlineCornerFilter is a filter that generates wireframe outline\n"
  "corners of any data set. The outline consists of the eight corners of\n"
  "the dataset bounding box.\n\n";


static PyObject *
PyvtkOutlineCornerFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutlineCornerFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineCornerFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutlineCornerFilter *tempr = vtkOutlineCornerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutlineCornerFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineCornerFilter::NewInstance());

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
PyvtkOutlineCornerFilter_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

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
      op->vtkOutlineCornerFilter::SetCornerFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMinValue() :
      op->vtkOutlineCornerFilter::GetCornerFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMaxValue() :
      op->vtkOutlineCornerFilter::GetCornerFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactor() :
      op->vtkOutlineCornerFilter::GetCornerFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOutlineCornerFilter_Methods[] = {
  {"IsTypeOf", PyvtkOutlineCornerFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutlineCornerFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutlineCornerFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOutlineCornerFilter\nC++: static vtkOutlineCornerFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutlineCornerFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOutlineCornerFilter\nC++: vtkOutlineCornerFilter *NewInstance()\n\n"},
  {"SetCornerFactor", PyvtkOutlineCornerFilter_SetCornerFactor, METH_VARARGS,
   "V.SetCornerFactor(float)\nC++: virtual void SetCornerFactor(double _arg)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactorMinValue", PyvtkOutlineCornerFilter_GetCornerFactorMinValue, METH_VARARGS,
   "V.GetCornerFactorMinValue() -> float\nC++: virtual double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactorMaxValue", PyvtkOutlineCornerFilter_GetCornerFactorMaxValue, METH_VARARGS,
   "V.GetCornerFactorMaxValue() -> float\nC++: virtual double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactor", PyvtkOutlineCornerFilter_GetCornerFactor, METH_VARARGS,
   "V.GetCornerFactor() -> float\nC++: virtual double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOutlineCornerFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkOutlineCornerFilter", // tp_name
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
  PyvtkOutlineCornerFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutlineCornerFilter_StaticNew()
{
  return vtkOutlineCornerFilter::New();
}

PyObject *PyvtkOutlineCornerFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOutlineCornerFilter_Type, PyvtkOutlineCornerFilter_Methods,
    "vtkOutlineCornerFilter",
 &PyvtkOutlineCornerFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkOutlineCornerFilter_Type;

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

void PyVTKAddFile_vtkOutlineCornerFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutlineCornerFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutlineCornerFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

