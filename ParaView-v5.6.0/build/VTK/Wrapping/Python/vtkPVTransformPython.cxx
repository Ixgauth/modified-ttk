// python wrapper for vtkPVTransform
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
#include "vtkPVTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTransform_ClassNew(); }

#ifndef DECLARED_PyvtkTransform_ClassNew
extern "C" { PyObject *PyvtkTransform_ClassNew(); }
#define DECLARED_PyvtkTransform_ClassNew
#endif

static const char *PyvtkPVTransform_Doc =
  "vtkPVTransform - baseclass for all ParaView vtkTransform class.\n\n"
  "Superclass: vtkTransform\n\n"
  "vtkPVTransform extend vtkTransform in the sens that it extend the\n"
  "vtkTransform API with absolute position/rotation/scale change and not\n"
  "incremental one like the vtkTransform does.\n\n";


static PyObject *
PyvtkPVTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTransform *tempr = vtkPVTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTransform::NewInstance());

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
PyvtkPVTransform_SetAbsolutePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsolutePosition(temp0);
    }
    else
    {
      op->vtkPVTransform::SetAbsolutePosition(temp0);
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
PyvtkPVTransform_SetAbsolutePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsolutePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVTransform::SetAbsolutePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsolutePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVTransform_SetAbsolutePosition_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsolutePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsolutePosition");
  return nullptr;
}



static PyObject *
PyvtkPVTransform_GetAbsolutePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAbsolutePosition() :
      op->vtkPVTransform::GetAbsolutePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransform_SetAbsoluteRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteRotation(temp0);
    }
    else
    {
      op->vtkPVTransform::SetAbsoluteRotation(temp0);
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
PyvtkPVTransform_SetAbsoluteRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVTransform::SetAbsoluteRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsoluteRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVTransform_SetAbsoluteRotation_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsoluteRotation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsoluteRotation");
  return nullptr;
}



static PyObject *
PyvtkPVTransform_GetAbsoluteRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAbsoluteRotation() :
      op->vtkPVTransform::GetAbsoluteRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransform_SetAbsoluteScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteScale(temp0);
    }
    else
    {
      op->vtkPVTransform::SetAbsoluteScale(temp0);
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
PyvtkPVTransform_SetAbsoluteScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVTransform::SetAbsoluteScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsoluteScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVTransform_SetAbsoluteScale_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsoluteScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsoluteScale");
  return nullptr;
}



static PyObject *
PyvtkPVTransform_GetAbsoluteScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAbsoluteScale() :
      op->vtkPVTransform::GetAbsoluteScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTransform_Methods[] = {
  {"IsTypeOf", PyvtkPVTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTransform\nC++: static vtkPVTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTransform\nC++: vtkPVTransform *NewInstance()\n\n"},
  {"SetAbsolutePosition", PyvtkPVTransform_SetAbsolutePosition, METH_VARARGS,
   "V.SetAbsolutePosition([float, float, float])\nC++: void SetAbsolutePosition(double xyz[3])\nV.SetAbsolutePosition(float, float, float)\nC++: void SetAbsolutePosition(double x, double y, double z)\n\nGet/Set Position of the transform.\n"},
  {"GetAbsolutePosition", PyvtkPVTransform_GetAbsolutePosition, METH_VARARGS,
   "V.GetAbsolutePosition() -> (float, float, float)\nC++: double *GetAbsolutePosition()\n\n"},
  {"SetAbsoluteRotation", PyvtkPVTransform_SetAbsoluteRotation, METH_VARARGS,
   "V.SetAbsoluteRotation([float, float, float])\nC++: void SetAbsoluteRotation(double xyz[3])\nV.SetAbsoluteRotation(float, float, float)\nC++: void SetAbsoluteRotation(double x, double y, double z)\n\nGet/Set Rotation for the transform.\n"},
  {"GetAbsoluteRotation", PyvtkPVTransform_GetAbsoluteRotation, METH_VARARGS,
   "V.GetAbsoluteRotation() -> (float, float, float)\nC++: double *GetAbsoluteRotation()\n\n"},
  {"SetAbsoluteScale", PyvtkPVTransform_SetAbsoluteScale, METH_VARARGS,
   "V.SetAbsoluteScale([float, float, float])\nC++: void SetAbsoluteScale(double xyz[3])\nV.SetAbsoluteScale(float, float, float)\nC++: void SetAbsoluteScale(double x, double y, double z)\n\nGet/Set Scale for the transform.\n"},
  {"GetAbsoluteScale", PyvtkPVTransform_GetAbsoluteScale, METH_VARARGS,
   "V.GetAbsoluteScale() -> (float, float, float)\nC++: double *GetAbsoluteScale()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkPVTransform", // tp_name
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
  PyvtkPVTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTransform_StaticNew()
{
  return vtkPVTransform::New();
}

PyObject *PyvtkPVTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTransform_Type, PyvtkPVTransform_Methods,
    "vtkPVTransform",
 &PyvtkPVTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

