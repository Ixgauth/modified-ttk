// python wrapper for vtkPVRayCastPickingHelper
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
#include "vtkPVRayCastPickingHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRayCastPickingHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRayCastPickingHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVRayCastPickingHelper_Doc =
  "vtkPVRayCastPickingHelper - helper class that used selection and ray\ncasting to find the intersection point between the user picking point\nand the concreate cell underneath.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkPVRayCastPickingHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRayCastPickingHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRayCastPickingHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRayCastPickingHelper *tempr = vtkPVRayCastPickingHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRayCastPickingHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRayCastPickingHelper::NewInstance());

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
PyvtkPVRayCastPickingHelper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

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
      op->SetPointA(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetPointA(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPointA(temp0);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetPointA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVRayCastPickingHelper_SetPointA_s1(self, args);
    case 1:
      return PyvtkPVRayCastPickingHelper_SetPointA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointA");
  return nullptr;
}



static PyObject *
PyvtkPVRayCastPickingHelper_GetPointA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointA() :
      op->vtkPVRayCastPickingHelper::GetPointA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

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
      op->SetPointB(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetPointB(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPointB(temp0);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetPointB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVRayCastPickingHelper_SetPointB_s1(self, args);
    case 1:
      return PyvtkPVRayCastPickingHelper_SetPointB_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointB");
  return nullptr;
}



static PyObject *
PyvtkPVRayCastPickingHelper_GetPointB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointB() :
      op->vtkPVRayCastPickingHelper::GetPointB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetSnapOnMeshPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapOnMeshPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapOnMeshPoint(temp0);
    }
    else
    {
      op->vtkPVRayCastPickingHelper::SetSnapOnMeshPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_GetSnapOnMeshPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapOnMeshPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapOnMeshPoint() :
      op->vtkPVRayCastPickingHelper::GetSnapOnMeshPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_ComputeIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeIntersection();
    }
    else
    {
      op->vtkPVRayCastPickingHelper::ComputeIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_GetIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetIntersection() :
      op->vtkPVRayCastPickingHelper::GetIntersection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRayCastPickingHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVRayCastPickingHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRayCastPickingHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRayCastPickingHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVRayCastPickingHelper\nC++: static vtkPVRayCastPickingHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRayCastPickingHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRayCastPickingHelper\nC++: vtkPVRayCastPickingHelper *NewInstance()\n\n"},
  {"SetInput", PyvtkPVRayCastPickingHelper_SetInput, METH_VARARGS,
   "V.SetInput(vtkAlgorithm)\nC++: void SetInput(vtkAlgorithm *)\n\nSet input on which the selection apply\n"},
  {"SetSelection", PyvtkPVRayCastPickingHelper_SetSelection, METH_VARARGS,
   "V.SetSelection(vtkAlgorithm)\nC++: void SetSelection(vtkAlgorithm *)\n\nSet the selection that extract the cell that intersect the ray\n"},
  {"SetPointA", PyvtkPVRayCastPickingHelper_SetPointA, METH_VARARGS,
   "V.SetPointA(float, float, float)\nC++: void SetPointA(double, double, double)\nV.SetPointA((float, float, float))\nC++: void SetPointA(double a[3])\n\n"},
  {"GetPointA", PyvtkPVRayCastPickingHelper_GetPointA, METH_VARARGS,
   "V.GetPointA() -> (float, float, float)\nC++: double *GetPointA()\n\n"},
  {"SetPointB", PyvtkPVRayCastPickingHelper_SetPointB, METH_VARARGS,
   "V.SetPointB(float, float, float)\nC++: void SetPointB(double, double, double)\nV.SetPointB((float, float, float))\nC++: void SetPointB(double a[3])\n\n"},
  {"GetPointB", PyvtkPVRayCastPickingHelper_GetPointB, METH_VARARGS,
   "V.GetPointB() -> (float, float, float)\nC++: double *GetPointB()\n\n"},
  {"SetSnapOnMeshPoint", PyvtkPVRayCastPickingHelper_SetSnapOnMeshPoint, METH_VARARGS,
   "V.SetSnapOnMeshPoint(bool)\nC++: virtual void SetSnapOnMeshPoint(bool _arg)\n\nSet the flag to use directly selected points on mesh as\nintersection\n"},
  {"GetSnapOnMeshPoint", PyvtkPVRayCastPickingHelper_GetSnapOnMeshPoint, METH_VARARGS,
   "V.GetSnapOnMeshPoint() -> bool\nC++: virtual bool GetSnapOnMeshPoint()\n\nSet the flag to use directly selected points on mesh as\nintersection\n"},
  {"ComputeIntersection", PyvtkPVRayCastPickingHelper_ComputeIntersection, METH_VARARGS,
   "V.ComputeIntersection()\nC++: void ComputeIntersection()\n\nCompute the intersection\n"},
  {"GetIntersection", PyvtkPVRayCastPickingHelper_GetIntersection, METH_VARARGS,
   "V.GetIntersection() -> (float, float, float)\nC++: double *GetIntersection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRayCastPickingHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRayCastPickingHelper", // tp_name
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
  PyvtkPVRayCastPickingHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRayCastPickingHelper_StaticNew()
{
  return vtkPVRayCastPickingHelper::New();
}

PyObject *PyvtkPVRayCastPickingHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRayCastPickingHelper_Type, PyvtkPVRayCastPickingHelper_Methods,
    "vtkPVRayCastPickingHelper",
 &PyvtkPVRayCastPickingHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRayCastPickingHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRayCastPickingHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRayCastPickingHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRayCastPickingHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

