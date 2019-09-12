// python wrapper for vtkPVCylinder
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
#include "vtkPVCylinder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCylinder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCylinder_ClassNew(); }

#ifndef DECLARED_PyvtkCylinder_ClassNew
extern "C" { PyObject *PyvtkCylinder_ClassNew(); }
#define DECLARED_PyvtkCylinder_ClassNew
#endif

static const char *PyvtkPVCylinder_Doc =
  "vtkPVCylinder - extends vtkCylinder to add ParaView specific API.\n\n"
  "Superclass: vtkCylinder\n\n"
  "vtkPVCylinder extends vtkCylinder to add ParaView specific API.\n\n";


static PyObject *
PyvtkPVCylinder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCylinder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCylinder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCylinder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCylinder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCylinder *tempr = vtkPVCylinder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCylinder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCylinder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCylinder::NewInstance());

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
PyvtkPVCylinder_SetOrientedAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

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
      op->SetOrientedAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCylinder::SetOrientedAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCylinder_SetOrientedAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientedAxis(temp0);
    }
    else
    {
      op->vtkPVCylinder::SetOrientedAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCylinder_SetOrientedAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVCylinder_SetOrientedAxis_s1(self, args);
    case 1:
      return PyvtkPVCylinder_SetOrientedAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientedAxis");
  return nullptr;
}



static PyObject *
PyvtkPVCylinder_GetOrientedAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientedAxis() :
      op->vtkPVCylinder::GetOrientedAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCylinder_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCylinder::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCylinder_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCylinder *op = static_cast<vtkPVCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkPVCylinder::SetCenter(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCylinder_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVCylinder_SetCenter_s1(self, args);
    case 1:
      return PyvtkPVCylinder_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyMethodDef PyvtkPVCylinder_Methods[] = {
  {"IsTypeOf", PyvtkPVCylinder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCylinder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCylinder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCylinder\nC++: static vtkPVCylinder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCylinder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCylinder\nC++: vtkPVCylinder *NewInstance()\n\n"},
  {"SetOrientedAxis", PyvtkPVCylinder_SetOrientedAxis, METH_VARARGS,
   "V.SetOrientedAxis(float, float, float)\nC++: void SetOrientedAxis(double x, double y, double z)\nV.SetOrientedAxis((float, float, float))\nC++: void SetOrientedAxis(const double axis[3])\n\nGet/Set the vector defining the direction of the cylinder.\n"},
  {"GetOrientedAxis", PyvtkPVCylinder_GetOrientedAxis, METH_VARARGS,
   "V.GetOrientedAxis() -> (float, float, float)\nC++: double *GetOrientedAxis()\n\n"},
  {"SetCenter", PyvtkPVCylinder_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z) override;\nV.SetCenter([float, float, float])\nC++: void SetCenter(double xyz[3]) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCylinder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVCylinder", // tp_name
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
  PyvtkPVCylinder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCylinder_StaticNew()
{
  return vtkPVCylinder::New();
}

PyObject *PyvtkPVCylinder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCylinder_Type, PyvtkPVCylinder_Methods,
    "vtkPVCylinder",
 &PyvtkPVCylinder_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCylinder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCylinder_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCylinder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCylinder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCylinder", o) != 0)
  {
    Py_DECREF(o);
  }

}

