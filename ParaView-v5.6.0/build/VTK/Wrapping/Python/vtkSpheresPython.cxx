// python wrapper for vtkSpheres
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
#include "vtkSpheres.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpheres(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpheres_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkSpheres_Doc =
  "vtkSpheres - implicit function for a set of spheres\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkSpheres computes the implicit function and function gradient for a\n"
  "set of spheres. The spheres are combined via a union operation (i.e.,\n"
  "the minimum value from the evaluation of all spheres is taken).\n\n"
  "The function value is the distance of a point to the closest sphere,\n"
  "with negative values interior to the spheres, positive outside the\n"
  "spheres, and distance=0 on the spheres surface.  The function\n"
  "gradient is the sphere normal at the function value.\n\n"
  "@sa\n"
  "vtkPlanes vtkImplicitBoolean\n\n";


static PyObject *
PyvtkSpheres_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpheres::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpheres::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpheres *tempr = vtkSpheres::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpheres *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpheres::NewInstance());

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
PyvtkSpheres_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkSpheres::EvaluateFunction(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkSpheres::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkSpheres::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSpheres_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkSpheres_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkSpheres_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkSpheres_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkSpheres::EvaluateGradient(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_SetCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetCenters(temp0);
    }
    else
    {
      op->vtkSpheres::SetCenters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCenters() :
      op->vtkSpheres::GetCenters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_SetRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetRadii(temp0);
    }
    else
    {
      op->vtkSpheres::SetRadii(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRadii() :
      op->vtkSpheres::GetRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetNumberOfSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSpheres() :
      op->vtkSpheres::GetNumberOfSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetSphere_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSphere *tempr = (ap.IsBound() ?
      op->GetSphere(temp0) :
      op->vtkSpheres::GetSphere(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_GetSphere_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  int temp0;
  vtkSphere *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSphere"))
  {
    if (ap.IsBound())
    {
      op->GetSphere(temp0, temp1);
    }
    else
    {
      op->vtkSpheres::GetSphere(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_GetSphere(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSpheres_GetSphere_s1(self, args);
    case 2:
      return PyvtkSpheres_GetSphere_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSphere");
  return nullptr;
}


static PyMethodDef PyvtkSpheres_Methods[] = {
  {"IsTypeOf", PyvtkSpheres_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkSpheres_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkSpheres_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpheres\nC++: static vtkSpheres *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkSpheres_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpheres\nC++: vtkSpheres *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"EvaluateFunction", PyvtkSpheres_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate spheres equations. Return largest value when evaluating\nall sphere equations.\n"},
  {"EvaluateGradient", PyvtkSpheres_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate spheres gradient. Gradients point towards the outside of\nthe spheres.\n"},
  {"SetCenters", PyvtkSpheres_SetCenters, METH_VARARGS,
   "V.SetCenters(vtkPoints)\nC++: virtual void SetCenters(vtkPoints *)\n\nSpecify a list of points defining sphere centers.\n"},
  {"GetCenters", PyvtkSpheres_GetCenters, METH_VARARGS,
   "V.GetCenters() -> vtkPoints\nC++: virtual vtkPoints *GetCenters()\n\nSpecify a list of points defining sphere centers.\n"},
  {"SetRadii", PyvtkSpheres_SetRadii, METH_VARARGS,
   "V.SetRadii(vtkDataArray)\nC++: void SetRadii(vtkDataArray *radii)\n\nSpecify a list of radii for the spheres. There is a one-to-one\ncorrespondence between sphere points and sphere radii.\n"},
  {"GetRadii", PyvtkSpheres_GetRadii, METH_VARARGS,
   "V.GetRadii() -> vtkDataArray\nC++: virtual vtkDataArray *GetRadii()\n\nSpecify a list of radii for the spheres. There is a one-to-one\ncorrespondence between sphere points and sphere radii.\n"},
  {"GetNumberOfSpheres", PyvtkSpheres_GetNumberOfSpheres, METH_VARARGS,
   "V.GetNumberOfSpheres() -> int\nC++: int GetNumberOfSpheres()\n\nReturn the number of spheres in the set of spheres.\n"},
  {"GetSphere", PyvtkSpheres_GetSphere, METH_VARARGS,
   "V.GetSphere(int) -> vtkSphere\nC++: vtkSphere *GetSphere(int i)\nV.GetSphere(int, vtkSphere)\nC++: void GetSphere(int i, vtkSphere *sphere)\n\nCreate and return a pointer to a vtkSphere object at the ith\nposition. Asking for a sphere outside the allowable range returns\nnullptr.  This method always returns the same object. \nAlternatively use GetSphere(int i, vtkSphere *sphere) to update a\nuser supplied sphere.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpheres_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSpheres", // tp_name
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
  PyvtkSpheres_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpheres_StaticNew()
{
  return vtkSpheres::New();
}

PyObject *PyvtkSpheres_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpheres_Type, PyvtkSpheres_Methods,
    "vtkSpheres",
 &PyvtkSpheres_StaticNew);

  PyTypeObject *pytype = &PyvtkSpheres_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpheres(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpheres_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpheres", o) != 0)
  {
    Py_DECREF(o);
  }

}

