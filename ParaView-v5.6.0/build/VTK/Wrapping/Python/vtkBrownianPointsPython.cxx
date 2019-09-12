// python wrapper for vtkBrownianPoints
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
#include "vtkBrownianPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBrownianPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBrownianPoints_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkBrownianPoints_Doc =
  "vtkBrownianPoints - assign random vector to points\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkBrownianPoints is a filter object that assigns a random vector\n"
  "(i.e., magnitude and direction) to each point. The minimum and\n"
  "maximum speed values can be controlled by the user.\n\n"
  "@sa\n"
  "vtkRandomAttributeGenerator\n\n";


static PyObject *
PyvtkBrownianPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBrownianPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrownianPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBrownianPoints *tempr = vtkBrownianPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrownianPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrownianPoints::NewInstance());

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
PyvtkBrownianPoints_SetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSpeed(temp0);
    }
    else
    {
      op->vtkBrownianPoints::SetMinimumSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMinValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeed() :
      op->vtkBrownianPoints::GetMinimumSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSpeed(temp0);
    }
    else
    {
      op->vtkBrownianPoints::SetMaximumSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMinValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeed() :
      op->vtkBrownianPoints::GetMaximumSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBrownianPoints_Methods[] = {
  {"IsTypeOf", PyvtkBrownianPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBrownianPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBrownianPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBrownianPoints\nC++: static vtkBrownianPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBrownianPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBrownianPoints\nC++: vtkBrownianPoints *NewInstance()\n\n"},
  {"SetMinimumSpeed", PyvtkBrownianPoints_SetMinimumSpeed, METH_VARARGS,
   "V.SetMinimumSpeed(float)\nC++: virtual void SetMinimumSpeed(double _arg)\n\nSet the minimum speed value.\n"},
  {"GetMinimumSpeedMinValue", PyvtkBrownianPoints_GetMinimumSpeedMinValue, METH_VARARGS,
   "V.GetMinimumSpeedMinValue() -> float\nC++: virtual double GetMinimumSpeedMinValue()\n\nSet the minimum speed value.\n"},
  {"GetMinimumSpeedMaxValue", PyvtkBrownianPoints_GetMinimumSpeedMaxValue, METH_VARARGS,
   "V.GetMinimumSpeedMaxValue() -> float\nC++: virtual double GetMinimumSpeedMaxValue()\n\nSet the minimum speed value.\n"},
  {"GetMinimumSpeed", PyvtkBrownianPoints_GetMinimumSpeed, METH_VARARGS,
   "V.GetMinimumSpeed() -> float\nC++: virtual double GetMinimumSpeed()\n\nSet the minimum speed value.\n"},
  {"SetMaximumSpeed", PyvtkBrownianPoints_SetMaximumSpeed, METH_VARARGS,
   "V.SetMaximumSpeed(float)\nC++: virtual void SetMaximumSpeed(double _arg)\n\nSet the maximum speed value.\n"},
  {"GetMaximumSpeedMinValue", PyvtkBrownianPoints_GetMaximumSpeedMinValue, METH_VARARGS,
   "V.GetMaximumSpeedMinValue() -> float\nC++: virtual double GetMaximumSpeedMinValue()\n\nSet the maximum speed value.\n"},
  {"GetMaximumSpeedMaxValue", PyvtkBrownianPoints_GetMaximumSpeedMaxValue, METH_VARARGS,
   "V.GetMaximumSpeedMaxValue() -> float\nC++: virtual double GetMaximumSpeedMaxValue()\n\nSet the maximum speed value.\n"},
  {"GetMaximumSpeed", PyvtkBrownianPoints_GetMaximumSpeed, METH_VARARGS,
   "V.GetMaximumSpeed() -> float\nC++: virtual double GetMaximumSpeed()\n\nSet the maximum speed value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBrownianPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkBrownianPoints", // tp_name
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
  PyvtkBrownianPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBrownianPoints_StaticNew()
{
  return vtkBrownianPoints::New();
}

PyObject *PyvtkBrownianPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBrownianPoints_Type, PyvtkBrownianPoints_Methods,
    "vtkBrownianPoints",
 &PyvtkBrownianPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkBrownianPoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBrownianPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBrownianPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBrownianPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

