// python wrapper for vtkImplicitSelectionLoop
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
#include "vtkImplicitSelectionLoop.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitSelectionLoop(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitSelectionLoop_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkImplicitSelectionLoop_Doc =
  "vtkImplicitSelectionLoop - implicit function for a selection loop\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitSelectionLoop computes the implicit function value and\n"
  "function gradient for a irregular, cylinder-like object whose cross\n"
  "section is defined by a set of points forming a loop. The loop need\n"
  "not be convex nor its points coplanar. However, the loop must be\n"
  "non-self-intersecting when projected onto the plane defined by the\n"
  "accumulated cross product around the loop (i.e., the axis of the\n"
  "loop). (Alternatively, you can specify the normal to use.)\n\n"
  "The following procedure is used to compute the implicit function\n"
  "value for a point x. Each point of the loop is first projected onto\n"
  "the plane defined by the loop normal. This forms a polygon. Then, to\n"
  "evaluate the implicit function value, inside/outside tests are used\n"
  "to determine if x is inside the polygon, and the distance to the loop\n"
  "boundary is computed (negative values are inside the loop).\n\n"
  "One example application of this implicit function class is to draw a\n"
  "loop on the surface of a mesh, and use the loop to clip or extract\n"
  "cells from within the loop. Remember, the selection loop is\n"
  "\"infinite\" in length, you can use a plane (in boolean combination) to\n"
  "cap the extent of the selection loop. Another trick is to use a\n"
  "connectivity filter to extract the closest region to a given point\n"
  "(i.e., one of the points used to define the selection loop).\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkImplicitBoolean vtkExtractGeometry\n"
  "vtkClipPolyData vtkConnectivityFilter vtkPolyDataConnectivityFilter\n\n";


static PyObject *
PyvtkImplicitSelectionLoop_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitSelectionLoop::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitSelectionLoop::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitSelectionLoop *tempr = vtkImplicitSelectionLoop::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitSelectionLoop *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitSelectionLoop::NewInstance());

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
PyvtkImplicitSelectionLoop_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0));

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
PyvtkImplicitSelectionLoop_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitSelectionLoop_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitSelectionLoop_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkImplicitSelectionLoop::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticNormalGeneration(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetAutomaticNormalGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticNormalGeneration() :
      op->vtkImplicitSelectionLoop::GetAutomaticNormalGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticNormalGenerationOn();
    }
    else
    {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticNormalGenerationOff();
    }
    else
    {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitSelectionLoop_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitSelectionLoop_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkImplicitSelectionLoop_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitSelectionLoop::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitSelectionLoop::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitSelectionLoop_Methods[] = {
  {"IsTypeOf", PyvtkImplicitSelectionLoop_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods for printing and type information.\n"},
  {"IsA", PyvtkImplicitSelectionLoop_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods for printing and type information.\n"},
  {"SafeDownCast", PyvtkImplicitSelectionLoop_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitSelectionLoop\nC++: static vtkImplicitSelectionLoop *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods for printing and type information.\n"},
  {"NewInstance", PyvtkImplicitSelectionLoop_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitSelectionLoop\nC++: vtkImplicitSelectionLoop *NewInstance()\n\nStandard VTK methods for printing and type information.\n"},
  {"EvaluateFunction", PyvtkImplicitSelectionLoop_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate selection loop returning a signed distance.\n"},
  {"EvaluateGradient", PyvtkImplicitSelectionLoop_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate selection loop returning the gradient.\n"},
  {"SetLoop", PyvtkImplicitSelectionLoop_SetLoop, METH_VARARGS,
   "V.SetLoop(vtkPoints)\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"GetLoop", PyvtkImplicitSelectionLoop_GetLoop, METH_VARARGS,
   "V.GetLoop() -> vtkPoints\nC++: virtual vtkPoints *GetLoop()\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"SetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration, METH_VARARGS,
   "V.SetAutomaticNormalGeneration(int)\nC++: virtual void SetAutomaticNormalGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {"GetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration, METH_VARARGS,
   "V.GetAutomaticNormalGeneration() -> int\nC++: virtual vtkTypeBool GetAutomaticNormalGeneration()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {"AutomaticNormalGenerationOn", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn, METH_VARARGS,
   "V.AutomaticNormalGenerationOn()\nC++: virtual void AutomaticNormalGenerationOn()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {"AutomaticNormalGenerationOff", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff, METH_VARARGS,
   "V.AutomaticNormalGenerationOff()\nC++: virtual void AutomaticNormalGenerationOff()\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {"SetNormal", PyvtkImplicitSelectionLoop_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkImplicitSelectionLoop_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet / get the normal used to determine whether a point is inside\nor outside the selection loop.\n"},
  {"GetMTime", PyvtkImplicitSelectionLoop_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload GetMTime() because we depend on the Loop\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitSelectionLoop_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitSelectionLoop", // tp_name
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
  PyvtkImplicitSelectionLoop_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitSelectionLoop_StaticNew()
{
  return vtkImplicitSelectionLoop::New();
}

PyObject *PyvtkImplicitSelectionLoop_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitSelectionLoop_Type, PyvtkImplicitSelectionLoop_Methods,
    "vtkImplicitSelectionLoop",
 &PyvtkImplicitSelectionLoop_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitSelectionLoop_Type;

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

void PyVTKAddFile_vtkImplicitSelectionLoop(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitSelectionLoop_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitSelectionLoop", o) != 0)
  {
    Py_DECREF(o);
  }

}

