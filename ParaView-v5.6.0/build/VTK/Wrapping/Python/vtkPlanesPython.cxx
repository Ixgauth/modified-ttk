// python wrapper for vtkPlanes
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
#include "vtkPlanes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlanes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlanes_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkPlanes_Doc =
  "vtkPlanes - implicit function for convex set of planes\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkPlanes computes the implicit function and function gradient for a\n"
  "set of planes. The planes must define a convex space.\n\n"
  "The function value is the intersection (i.e., maximum value) obtained\n"
  "by evaluating the each of the supplied planes. Hence the value is the\n"
  "maximum distance of a point to the convex region defined by the\n"
  "planes. The function gradient is the plane normal at the function\n"
  "value.  Note that the normals must point outside of the convex\n"
  "region. Thus, a negative function value means that a point is inside\n"
  "the convex region.\n\n"
  "There are several methods to define the set of planes. The most\n"
  "general is to supply an instance of vtkPoints and an instance of\n"
  "vtkDataArray. (The points define a point on the plane, and the\n"
  "normals corresponding plane normals.) Two other specialized ways are\n"
  "to 1) supply six planes defining the view frustrum of a camera, and\n"
  "2) provide a bounding box.\n\n"
  "@sa\n"
  "vtkImplicitBoolean vtkSpheres vtkFrustrumSource vtkCamera\n\n";


static PyObject *
PyvtkPlanes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlanes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlanes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlanes *tempr = vtkPlanes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlanes::NewInstance());

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
PyvtkPlanes_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      op->vtkPlanes::EvaluateFunction(temp0));

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
PyvtkPlanes_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      op->vtkPlanes::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      op->vtkPlanes::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlanes_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkPlanes_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkPlanes_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkPlanes_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      op->vtkPlanes::EvaluateGradient(temp0, temp1);
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
PyvtkPlanes_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkPlanes::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkPlanes::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetNormals(temp0);
    }
    else
    {
      op->vtkPlanes::SetNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkPlanes::GetNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_SetFrustumPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustumPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  const size_t size0 = 24;
  double temp0[24];
  double save0[24];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFrustumPlanes(temp0);
    }
    else
    {
      op->vtkPlanes::SetFrustumPlanes(temp0);
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
PyvtkPlanes_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkPlanes::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPlanes::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlanes_SetBounds_s1(self, args);
    case 6:
      return PyvtkPlanes_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkPlanes_GetNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPlanes() :
      op->vtkPlanes::GetNumberOfPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanes_GetPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkPlanes::GetPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_GetPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  int temp0;
  vtkPlane *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->GetPlane(temp0, temp1);
    }
    else
    {
      op->vtkPlanes::GetPlane(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanes_GetPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlanes_GetPlane_s1(self, args);
    case 2:
      return PyvtkPlanes_GetPlane_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlane");
  return nullptr;
}


static PyMethodDef PyvtkPlanes_Methods[] = {
  {"IsTypeOf", PyvtkPlanes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkPlanes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkPlanes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlanes\nC++: static vtkPlanes *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkPlanes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlanes\nC++: vtkPlanes *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"EvaluateFunction", PyvtkPlanes_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate plane equations. Return largest value (i.e., an\nintersection operation between all planes).\n"},
  {"EvaluateGradient", PyvtkPlanes_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate planes gradient.\n"},
  {"SetPoints", PyvtkPlanes_SetPoints, METH_VARARGS,
   "V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *)\n\nSpecify a list of points defining points through which the planes\npass.\n"},
  {"GetPoints", PyvtkPlanes_GetPoints, METH_VARARGS,
   "V.GetPoints() -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\nSpecify a list of points defining points through which the planes\npass.\n"},
  {"SetNormals", PyvtkPlanes_SetNormals, METH_VARARGS,
   "V.SetNormals(vtkDataArray)\nC++: void SetNormals(vtkDataArray *normals)\n\nSpecify a list of normal vectors for the planes. There is a\none-to-one correspondence between plane points and plane normals.\n"},
  {"GetNormals", PyvtkPlanes_GetNormals, METH_VARARGS,
   "V.GetNormals() -> vtkDataArray\nC++: virtual vtkDataArray *GetNormals()\n\nSpecify a list of normal vectors for the planes. There is a\none-to-one correspondence between plane points and plane normals.\n"},
  {"SetFrustumPlanes", PyvtkPlanes_SetFrustumPlanes, METH_VARARGS,
   "V.SetFrustumPlanes([float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float])\nC++: void SetFrustumPlanes(double planes[24])\n\nAn alternative method to specify six planes defined by the camera\nview frustrum. See vtkCamera::GetFrustumPlanes() documentation.\n"},
  {"SetBounds", PyvtkPlanes_SetBounds, METH_VARARGS,
   "V.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nAn alternative method to specify six planes defined by a bounding\nbox. The bounding box is a six-vector defined as\n(xmin,xmax,ymin,ymax,zmin,zmax). It defines six planes orthogonal\nto the x-y-z coordinate axes.\n"},
  {"GetNumberOfPlanes", PyvtkPlanes_GetNumberOfPlanes, METH_VARARGS,
   "V.GetNumberOfPlanes() -> int\nC++: int GetNumberOfPlanes()\n\nReturn the number of planes in the set of planes.\n"},
  {"GetPlane", PyvtkPlanes_GetPlane, METH_VARARGS,
   "V.GetPlane(int) -> vtkPlane\nC++: vtkPlane *GetPlane(int i)\nV.GetPlane(int, vtkPlane)\nC++: void GetPlane(int i, vtkPlane *plane)\n\nCreate and return a pointer to a vtkPlane object at the ith\nposition. Asking for a plane outside the allowable range returns\nnullptr. This method always returns the same object. Use\nGetPlane(int i, vtkPlane *plane) instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlanes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPlanes", // tp_name
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
  PyvtkPlanes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlanes_StaticNew()
{
  return vtkPlanes::New();
}

PyObject *PyvtkPlanes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlanes_Type, PyvtkPlanes_Methods,
    "vtkPlanes",
 &PyvtkPlanes_StaticNew);

  PyTypeObject *pytype = &PyvtkPlanes_Type;

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

void PyVTKAddFile_vtkPlanes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlanes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlanes", o) != 0)
  {
    Py_DECREF(o);
  }

}

