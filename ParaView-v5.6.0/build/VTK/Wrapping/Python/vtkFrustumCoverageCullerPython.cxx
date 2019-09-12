// python wrapper for vtkFrustumCoverageCuller
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
#include "vtkProp.h"
#include "vtkFrustumCoverageCuller.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFrustumCoverageCuller(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFrustumCoverageCuller_ClassNew(); }

#ifndef DECLARED_PyvtkCuller_ClassNew
extern "C" { PyObject *PyvtkCuller_ClassNew(); }
#define DECLARED_PyvtkCuller_ClassNew
#endif

static const char *PyvtkFrustumCoverageCuller_Doc =
  "vtkFrustumCoverageCuller - cull props based on frustum coverage\n\n"
  "Superclass: vtkCuller\n\n"
  "vtkFrustumCoverageCuller will cull props based on the coverage in the\n"
  "view frustum. The coverage is computed by enclosing the prop in a\n"
  "bounding sphere, projecting that to the viewing coordinate system,\n"
  "then taking a slice through the view frustum at the center of the\n"
  "sphere. This results in a circle on the plane slice through the view\n"
  "frustum. This circle is enclosed in a squared, and the fraction of\n"
  "the plane slice that this square covers is the coverage. This is a\n"
  "number between 0 and 1. If the number is less than the\n"
  "MinimumCoverage, the allocated render time for that prop is set to\n"
  "zero. If it is greater than the MaximumCoverage, the allocated render\n"
  "time is set to 1.0. In between, a linear ramp is used to convert\n"
  "coverage into allocated render time.\n\n"
  "@sa\n"
  "vtkCuller\n\n";


static PyObject *
PyvtkFrustumCoverageCuller_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFrustumCoverageCuller::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrustumCoverageCuller::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFrustumCoverageCuller *tempr = vtkFrustumCoverageCuller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrustumCoverageCuller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrustumCoverageCuller::NewInstance());

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
PyvtkFrustumCoverageCuller_SetMinimumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumCoverage(temp0);
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetMinimumCoverage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetMinimumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumCoverage() :
      op->vtkFrustumCoverageCuller::GetMinimumCoverage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetMaximumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumCoverage(temp0);
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetMaximumCoverage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetMaximumCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCoverage() :
      op->vtkFrustumCoverageCuller::GetMaximumCoverage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortingStyle(temp0);
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetSortingStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyleMinValue() :
      op->vtkFrustumCoverageCuller::GetSortingStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyleMaxValue() :
      op->vtkFrustumCoverageCuller::GetSortingStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortingStyle() :
      op->vtkFrustumCoverageCuller::GetSortingStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortingStyleToNone();
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetSortingStyleToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortingStyleToBackToFront();
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetSortingStyleToBackToFront();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_SetSortingStyleToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingStyleToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortingStyleToFrontToBack();
    }
    else
    {
      op->vtkFrustumCoverageCuller::SetSortingStyleToFrontToBack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumCoverageCuller_GetSortingStyleAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingStyleAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumCoverageCuller *op = static_cast<vtkFrustumCoverageCuller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSortingStyleAsString() :
      op->vtkFrustumCoverageCuller::GetSortingStyleAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFrustumCoverageCuller_Methods[] = {
  {"IsTypeOf", PyvtkFrustumCoverageCuller_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFrustumCoverageCuller_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFrustumCoverageCuller_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFrustumCoverageCuller\nC++: static vtkFrustumCoverageCuller *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFrustumCoverageCuller_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFrustumCoverageCuller\nC++: vtkFrustumCoverageCuller *NewInstance()\n\n"},
  {"SetMinimumCoverage", PyvtkFrustumCoverageCuller_SetMinimumCoverage, METH_VARARGS,
   "V.SetMinimumCoverage(float)\nC++: virtual void SetMinimumCoverage(double _arg)\n\nSet/Get the minimum coverage - props with less coverage than this\nare given no time to render (they are culled)\n"},
  {"GetMinimumCoverage", PyvtkFrustumCoverageCuller_GetMinimumCoverage, METH_VARARGS,
   "V.GetMinimumCoverage() -> float\nC++: virtual double GetMinimumCoverage()\n\nSet/Get the minimum coverage - props with less coverage than this\nare given no time to render (they are culled)\n"},
  {"SetMaximumCoverage", PyvtkFrustumCoverageCuller_SetMaximumCoverage, METH_VARARGS,
   "V.SetMaximumCoverage(float)\nC++: virtual void SetMaximumCoverage(double _arg)\n\nSet/Get the maximum coverage - props with more coverage than this\nare given an allocated render time of 1.0 (the maximum)\n"},
  {"GetMaximumCoverage", PyvtkFrustumCoverageCuller_GetMaximumCoverage, METH_VARARGS,
   "V.GetMaximumCoverage() -> float\nC++: virtual double GetMaximumCoverage()\n\nSet/Get the maximum coverage - props with more coverage than this\nare given an allocated render time of 1.0 (the maximum)\n"},
  {"SetSortingStyle", PyvtkFrustumCoverageCuller_SetSortingStyle, METH_VARARGS,
   "V.SetSortingStyle(int)\nC++: virtual void SetSortingStyle(int _arg)\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"GetSortingStyleMinValue", PyvtkFrustumCoverageCuller_GetSortingStyleMinValue, METH_VARARGS,
   "V.GetSortingStyleMinValue() -> int\nC++: virtual int GetSortingStyleMinValue()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"GetSortingStyleMaxValue", PyvtkFrustumCoverageCuller_GetSortingStyleMaxValue, METH_VARARGS,
   "V.GetSortingStyleMaxValue() -> int\nC++: virtual int GetSortingStyleMaxValue()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"GetSortingStyle", PyvtkFrustumCoverageCuller_GetSortingStyle, METH_VARARGS,
   "V.GetSortingStyle() -> int\nC++: virtual int GetSortingStyle()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"SetSortingStyleToNone", PyvtkFrustumCoverageCuller_SetSortingStyleToNone, METH_VARARGS,
   "V.SetSortingStyleToNone()\nC++: void SetSortingStyleToNone()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"SetSortingStyleToBackToFront", PyvtkFrustumCoverageCuller_SetSortingStyleToBackToFront, METH_VARARGS,
   "V.SetSortingStyleToBackToFront()\nC++: void SetSortingStyleToBackToFront()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"SetSortingStyleToFrontToBack", PyvtkFrustumCoverageCuller_SetSortingStyleToFrontToBack, METH_VARARGS,
   "V.SetSortingStyleToFrontToBack()\nC++: void SetSortingStyleToFrontToBack()\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {"GetSortingStyleAsString", PyvtkFrustumCoverageCuller_GetSortingStyleAsString, METH_VARARGS,
   "V.GetSortingStyleAsString() -> string\nC++: const char *GetSortingStyleAsString(void)\n\nSet the sorting style - none, front-to-back or back-to-front The\ndefault is none\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFrustumCoverageCuller_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkFrustumCoverageCuller", // tp_name
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
  PyvtkFrustumCoverageCuller_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFrustumCoverageCuller_StaticNew()
{
  return vtkFrustumCoverageCuller::New();
}

PyObject *PyvtkFrustumCoverageCuller_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFrustumCoverageCuller_Type, PyvtkFrustumCoverageCuller_Methods,
    "vtkFrustumCoverageCuller",
 &PyvtkFrustumCoverageCuller_StaticNew);

  PyTypeObject *pytype = &PyvtkFrustumCoverageCuller_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCuller_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFrustumCoverageCuller(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFrustumCoverageCuller_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFrustumCoverageCuller", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_CULLER_SORT_NONE", 0 },
        { "VTK_CULLER_SORT_FRONT_TO_BACK", 1 },
        { "VTK_CULLER_SORT_BACK_TO_FRONT", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

