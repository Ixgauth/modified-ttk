// python wrapper for vtkThinPlateSplineTransform
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
#include "vtkThinPlateSplineTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThinPlateSplineTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThinPlateSplineTransform_ClassNew(); }

#ifndef DECLARED_PyvtkWarpTransform_ClassNew
extern "C" { PyObject *PyvtkWarpTransform_ClassNew(); }
#define DECLARED_PyvtkWarpTransform_ClassNew
#endif

static const char *PyvtkThinPlateSplineTransform_Doc =
  "vtkThinPlateSplineTransform - a nonlinear warp transformation\n\n"
  "Superclass: vtkWarpTransform\n\n"
  "vtkThinPlateSplineTransform describes a nonlinear warp transform\n"
  "defined by a set of source and target landmarks. Any point on the\n"
  "mesh close to a source landmark will be moved to a place close to the\n"
  "corresponding target landmark. The points in between are interpolated\n"
  "smoothly using Bookstein's Thin Plate Spline algorithm.\n\n"
  "To obtain a correct TPS warp, use the R2LogR kernel if your data is\n"
  "2D, and the R kernel if your data is 3D. Or you can specify your own\n"
  "RBF. (Hence this class is more general than a pure TPS transform.)\n"
  "@warning\n"
  "1) The inverse transform is calculated using an iterative method,\n"
  "and is several times more expensive than the forward transform.\n"
  "2) Whenever you add, subtract, or set points you must call Modified()\n"
  "   on the vtkPoints object, or the transformation might not update.\n"
  "3) Collinear point configurations (except those that lie in the XY\n"
  "   plane) result in an unstable transformation.\n"
  "@sa\n"
  "vtkGridTransform vtkGeneralTransform\n\n";


static PyObject *
PyvtkThinPlateSplineTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThinPlateSplineTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThinPlateSplineTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThinPlateSplineTransform *tempr = vtkThinPlateSplineTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThinPlateSplineTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThinPlateSplineTransform::NewInstance());

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
PyvtkThinPlateSplineTransform_GetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSigma() :
      op->vtkThinPlateSplineTransform::GetSigma());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSigma(temp0);
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetSigma(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBasis(temp0);
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetBasis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBasis() :
      op->vtkThinPlateSplineTransform::GetBasis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasisToR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisToR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBasisToR();
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetBasisToR();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetBasisToR2LogR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisToR2LogR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBasisToR2LogR();
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetBasisToR2LogR();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetBasisAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBasisAsString() :
      op->vtkThinPlateSplineTransform::GetBasisAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetSourceLandmarks(temp0);
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetSourceLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSourceLandmarks() :
      op->vtkThinPlateSplineTransform::GetSourceLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_SetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetTargetLandmarks(temp0);
    }
    else
    {
      op->vtkThinPlateSplineTransform::SetTargetLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetTargetLandmarks() :
      op->vtkThinPlateSplineTransform::GetTargetLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkThinPlateSplineTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThinPlateSplineTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThinPlateSplineTransform *op = static_cast<vtkThinPlateSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkThinPlateSplineTransform::MakeTransform());

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

static PyMethodDef PyvtkThinPlateSplineTransform_Methods[] = {
  {"IsTypeOf", PyvtkThinPlateSplineTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThinPlateSplineTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThinPlateSplineTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThinPlateSplineTransform\nC++: static vtkThinPlateSplineTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThinPlateSplineTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThinPlateSplineTransform\nC++: vtkThinPlateSplineTransform *NewInstance()\n\n"},
  {"GetSigma", PyvtkThinPlateSplineTransform_GetSigma, METH_VARARGS,
   "V.GetSigma() -> float\nC++: virtual double GetSigma()\n\nSpecify the 'stiffness' of the spline. The default is 1.0.\n"},
  {"SetSigma", PyvtkThinPlateSplineTransform_SetSigma, METH_VARARGS,
   "V.SetSigma(float)\nC++: virtual void SetSigma(double _arg)\n\nSpecify the 'stiffness' of the spline. The default is 1.0.\n"},
  {"SetBasis", PyvtkThinPlateSplineTransform_SetBasis, METH_VARARGS,
   "V.SetBasis(int)\nC++: void SetBasis(int basis)\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {"GetBasis", PyvtkThinPlateSplineTransform_GetBasis, METH_VARARGS,
   "V.GetBasis() -> int\nC++: virtual int GetBasis()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {"SetBasisToR", PyvtkThinPlateSplineTransform_SetBasisToR, METH_VARARGS,
   "V.SetBasisToR()\nC++: void SetBasisToR()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {"SetBasisToR2LogR", PyvtkThinPlateSplineTransform_SetBasisToR2LogR, METH_VARARGS,
   "V.SetBasisToR2LogR()\nC++: void SetBasisToR2LogR()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {"GetBasisAsString", PyvtkThinPlateSplineTransform_GetBasisAsString, METH_VARARGS,
   "V.GetBasisAsString() -> string\nC++: const char *GetBasisAsString()\n\nSpecify the radial basis function to use.  The default is R2LogR\nwhich is appropriate for 2D. Use |R| (SetBasisToR) if your data\nis 3D. Alternatively specify your own basis function, however\nthis will mean that the transform will no longer be a true\nthin-plate spline.\n"},
  {"SetSourceLandmarks", PyvtkThinPlateSplineTransform_SetSourceLandmarks, METH_VARARGS,
   "V.SetSourceLandmarks(vtkPoints)\nC++: void SetSourceLandmarks(vtkPoints *source)\n\nSet the source landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {"GetSourceLandmarks", PyvtkThinPlateSplineTransform_GetSourceLandmarks, METH_VARARGS,
   "V.GetSourceLandmarks() -> vtkPoints\nC++: virtual vtkPoints *GetSourceLandmarks()\n\nSet the source landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {"SetTargetLandmarks", PyvtkThinPlateSplineTransform_SetTargetLandmarks, METH_VARARGS,
   "V.SetTargetLandmarks(vtkPoints)\nC++: void SetTargetLandmarks(vtkPoints *target)\n\nSet the target landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {"GetTargetLandmarks", PyvtkThinPlateSplineTransform_GetTargetLandmarks, METH_VARARGS,
   "V.GetTargetLandmarks() -> vtkPoints\nC++: virtual vtkPoints *GetTargetLandmarks()\n\nSet the target landmarks for the warp.  If you add or change the\nvtkPoints object, you must call Modified() on it or the\ntransformation might not update.\n"},
  {"GetMTime", PyvtkThinPlateSplineTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {"MakeTransform", PyvtkThinPlateSplineTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThinPlateSplineTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkThinPlateSplineTransform", // tp_name
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
  PyvtkThinPlateSplineTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThinPlateSplineTransform_StaticNew()
{
  return vtkThinPlateSplineTransform::New();
}

PyObject *PyvtkThinPlateSplineTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThinPlateSplineTransform_Type, PyvtkThinPlateSplineTransform_Methods,
    "vtkThinPlateSplineTransform",
 &PyvtkThinPlateSplineTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkThinPlateSplineTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWarpTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThinPlateSplineTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThinPlateSplineTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThinPlateSplineTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_RBF_CUSTOM", 0 },
        { "VTK_RBF_R", 1 },
        { "VTK_RBF_R2LOGR", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

