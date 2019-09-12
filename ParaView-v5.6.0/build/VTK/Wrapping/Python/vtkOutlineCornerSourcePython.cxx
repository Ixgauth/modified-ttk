// python wrapper for vtkOutlineCornerSource
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
#include "vtkOutlineCornerSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutlineCornerSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutlineCornerSource_ClassNew(); }

#ifndef DECLARED_PyvtkOutlineSource_ClassNew
extern "C" { PyObject *PyvtkOutlineSource_ClassNew(); }
#define DECLARED_PyvtkOutlineSource_ClassNew
#endif

static const char *PyvtkOutlineCornerSource_Doc =
  "vtkOutlineCornerSource - create wireframe outline corners around\nbounding box\n\n"
  "Superclass: vtkOutlineSource\n\n"
  "vtkOutlineCornerSource creates wireframe outline corners around a\n"
  "user-specified bounding box.\n\n";


static PyObject *
PyvtkOutlineCornerSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutlineCornerSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineCornerSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutlineCornerSource *tempr = vtkOutlineCornerSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutlineCornerSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineCornerSource::NewInstance());

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
PyvtkOutlineCornerSource_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

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
      op->vtkOutlineCornerSource::SetCornerFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMinValue() :
      op->vtkOutlineCornerSource::GetCornerFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMaxValue() :
      op->vtkOutlineCornerSource::GetCornerFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactor() :
      op->vtkOutlineCornerSource::GetCornerFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOutlineCornerSource_Methods[] = {
  {"IsTypeOf", PyvtkOutlineCornerSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutlineCornerSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutlineCornerSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOutlineCornerSource\nC++: static vtkOutlineCornerSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutlineCornerSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOutlineCornerSource\nC++: vtkOutlineCornerSource *NewInstance()\n\n"},
  {"SetCornerFactor", PyvtkOutlineCornerSource_SetCornerFactor, METH_VARARGS,
   "V.SetCornerFactor(float)\nC++: virtual void SetCornerFactor(double _arg)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactorMinValue", PyvtkOutlineCornerSource_GetCornerFactorMinValue, METH_VARARGS,
   "V.GetCornerFactorMinValue() -> float\nC++: virtual double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactorMaxValue", PyvtkOutlineCornerSource_GetCornerFactorMaxValue, METH_VARARGS,
   "V.GetCornerFactorMaxValue() -> float\nC++: virtual double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {"GetCornerFactor", PyvtkOutlineCornerSource_GetCornerFactor, METH_VARARGS,
   "V.GetCornerFactor() -> float\nC++: virtual double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOutlineCornerSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkOutlineCornerSource", // tp_name
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
  PyvtkOutlineCornerSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutlineCornerSource_StaticNew()
{
  return vtkOutlineCornerSource::New();
}

PyObject *PyvtkOutlineCornerSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOutlineCornerSource_Type, PyvtkOutlineCornerSource_Methods,
    "vtkOutlineCornerSource",
 &PyvtkOutlineCornerSource_StaticNew);

  PyTypeObject *pytype = &PyvtkOutlineCornerSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOutlineSource_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOutlineCornerSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutlineCornerSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutlineCornerSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

