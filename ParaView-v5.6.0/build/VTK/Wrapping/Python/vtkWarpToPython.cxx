// python wrapper for vtkWarpTo
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
#include "vtkWarpTo.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWarpTo(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWarpTo_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkWarpTo_Doc =
  "vtkWarpTo - deform geometry by warping towards a point\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkWarpTo is a filter that modifies point coordinates by moving the\n"
  "points towards a user specified position.\n\n";


static PyObject *
PyvtkWarpTo_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWarpTo::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpTo::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWarpTo *tempr = vtkWarpTo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWarpTo *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpTo::NewInstance());

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
PyvtkWarpTo_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkWarpTo::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkWarpTo::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkWarpTo::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWarpTo::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpTo_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkWarpTo::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpTo_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkWarpTo_SetPosition_s1(self, args);
    case 1:
      return PyvtkWarpTo_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkWarpTo_SetAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsolute(temp0);
    }
    else
    {
      op->vtkWarpTo::SetAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_GetAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbsolute() :
      op->vtkWarpTo::GetAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_AbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbsoluteOn();
    }
    else
    {
      op->vtkWarpTo::AbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_AbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbsoluteOff();
    }
    else
    {
      op->vtkWarpTo::AbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTo_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkWarpTo::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWarpTo_Methods[] = {
  {"IsTypeOf", PyvtkWarpTo_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWarpTo_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWarpTo_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWarpTo\nC++: static vtkWarpTo *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWarpTo_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWarpTo\nC++: vtkWarpTo *NewInstance()\n\n"},
  {"SetScaleFactor", PyvtkWarpTo_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSet/Get the value to scale displacement.\n"},
  {"GetScaleFactor", PyvtkWarpTo_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSet/Get the value to scale displacement.\n"},
  {"GetPosition", PyvtkWarpTo_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position to warp towards.\n"},
  {"SetPosition", PyvtkWarpTo_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {"SetAbsolute", PyvtkWarpTo_SetAbsolute, METH_VARARGS,
   "V.SetAbsolute(int)\nC++: virtual void SetAbsolute(vtkTypeBool _arg)\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {"GetAbsolute", PyvtkWarpTo_GetAbsolute, METH_VARARGS,
   "V.GetAbsolute() -> int\nC++: virtual vtkTypeBool GetAbsolute()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {"AbsoluteOn", PyvtkWarpTo_AbsoluteOn, METH_VARARGS,
   "V.AbsoluteOn()\nC++: virtual void AbsoluteOn()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {"AbsoluteOff", PyvtkWarpTo_AbsoluteOff, METH_VARARGS,
   "V.AbsoluteOff()\nC++: virtual void AbsoluteOff()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {"FillInputPortInformation", PyvtkWarpTo_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWarpTo_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkWarpTo", // tp_name
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
  PyvtkWarpTo_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWarpTo_StaticNew()
{
  return vtkWarpTo::New();
}

PyObject *PyvtkWarpTo_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWarpTo_Type, PyvtkWarpTo_Methods,
    "vtkWarpTo",
 &PyvtkWarpTo_StaticNew);

  PyTypeObject *pytype = &PyvtkWarpTo_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWarpTo(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWarpTo_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWarpTo", o) != 0)
  {
    Py_DECREF(o);
  }

}

