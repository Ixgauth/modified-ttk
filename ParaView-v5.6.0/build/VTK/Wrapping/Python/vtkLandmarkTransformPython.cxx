// python wrapper for vtkLandmarkTransform
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
#include "vtkLandmarkTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLandmarkTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLandmarkTransform_ClassNew(); }

#ifndef DECLARED_PyvtkLinearTransform_ClassNew
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }
#define DECLARED_PyvtkLinearTransform_ClassNew
#endif

static const char *PyvtkLandmarkTransform_Doc =
  "vtkLandmarkTransform - a linear transform specified by two\ncorresponding point sets\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "A vtkLandmarkTransform is defined by two sets of landmarks, the\n"
  "transform computed gives the best fit mapping one onto the other, in\n"
  "a least squares sense. The indices are taken to correspond, so point\n"
  "1 in the first set will get mapped close to point 1 in the second\n"
  "set, etc. Call SetSourceLandmarks and SetTargetLandmarks to specify\n"
  "the two sets of landmarks, ensure they have the same number of\n"
  "points.\n"
  "@warning\n"
  "Whenever you add, subtract, or set points you must call Modified() on\n"
  "the vtkPoints object, or the transformation might not update.\n"
  "@sa\n"
  "vtkLinearTransform\n\n";


static PyObject *
PyvtkLandmarkTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLandmarkTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLandmarkTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLandmarkTransform *tempr = vtkLandmarkTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLandmarkTransform::NewInstance());

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
PyvtkLandmarkTransform_SetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

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
      op->vtkLandmarkTransform::SetSourceLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

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
      op->vtkLandmarkTransform::SetTargetLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSourceLandmarks() :
      op->vtkLandmarkTransform::GetSourceLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetTargetLandmarks() :
      op->vtkLandmarkTransform::GetTargetLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkLandmarkTransform::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToRigidBody(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRigidBody");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToRigidBody();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToRigidBody();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToSimilarity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSimilarity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToSimilarity();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToSimilarity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToAffine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToAffine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToAffine();
    }
    else
    {
      op->vtkLandmarkTransform::SetModeToAffine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkLandmarkTransform::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModeAsString() :
      op->vtkLandmarkTransform::GetModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkLandmarkTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLandmarkTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkLandmarkTransform::MakeTransform());

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

static PyMethodDef PyvtkLandmarkTransform_Methods[] = {
  {"IsTypeOf", PyvtkLandmarkTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLandmarkTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLandmarkTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLandmarkTransform\nC++: static vtkLandmarkTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLandmarkTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *NewInstance()\n\n"},
  {"SetSourceLandmarks", PyvtkLandmarkTransform_SetSourceLandmarks, METH_VARARGS,
   "V.SetSourceLandmarks(vtkPoints)\nC++: void SetSourceLandmarks(vtkPoints *points)\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {"SetTargetLandmarks", PyvtkLandmarkTransform_SetTargetLandmarks, METH_VARARGS,
   "V.SetTargetLandmarks(vtkPoints)\nC++: void SetTargetLandmarks(vtkPoints *points)\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {"GetSourceLandmarks", PyvtkLandmarkTransform_GetSourceLandmarks, METH_VARARGS,
   "V.GetSourceLandmarks() -> vtkPoints\nC++: virtual vtkPoints *GetSourceLandmarks()\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {"GetTargetLandmarks", PyvtkLandmarkTransform_GetTargetLandmarks, METH_VARARGS,
   "V.GetTargetLandmarks() -> vtkPoints\nC++: virtual vtkPoints *GetTargetLandmarks()\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {"SetMode", PyvtkLandmarkTransform_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand isotropic scaling. Affine (VTK_LANDMARK_AFFINE): collinearity\nis preserved. Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {"SetModeToRigidBody", PyvtkLandmarkTransform_SetModeToRigidBody, METH_VARARGS,
   "V.SetModeToRigidBody()\nC++: void SetModeToRigidBody()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand isotropic scaling. Affine (VTK_LANDMARK_AFFINE): collinearity\nis preserved. Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {"SetModeToSimilarity", PyvtkLandmarkTransform_SetModeToSimilarity, METH_VARARGS,
   "V.SetModeToSimilarity()\nC++: void SetModeToSimilarity()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand isotropic scaling. Affine (VTK_LANDMARK_AFFINE): collinearity\nis preserved. Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {"SetModeToAffine", PyvtkLandmarkTransform_SetModeToAffine, METH_VARARGS,
   "V.SetModeToAffine()\nC++: void SetModeToAffine()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand isotropic scaling. Affine (VTK_LANDMARK_AFFINE): collinearity\nis preserved. Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {"GetMode", PyvtkLandmarkTransform_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nGet the current transformation mode.\n"},
  {"GetModeAsString", PyvtkLandmarkTransform_GetModeAsString, METH_VARARGS,
   "V.GetModeAsString() -> string\nC++: const char *GetModeAsString()\n\nGet the current transformation mode.\n"},
  {"Inverse", PyvtkLandmarkTransform_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse() override;\n\nInvert the transformation.  This is done by switching the source\nand target landmarks.\n"},
  {"GetMTime", PyvtkLandmarkTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {"MakeTransform", PyvtkLandmarkTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLandmarkTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkLandmarkTransform", // tp_name
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
  PyvtkLandmarkTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLandmarkTransform_StaticNew()
{
  return vtkLandmarkTransform::New();
}

PyObject *PyvtkLandmarkTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLandmarkTransform_Type, PyvtkLandmarkTransform_Methods,
    "vtkLandmarkTransform",
 &PyvtkLandmarkTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkLandmarkTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLinearTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLandmarkTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLandmarkTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLandmarkTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_LANDMARK_RIGIDBODY", 6 },
        { "VTK_LANDMARK_SIMILARITY", 7 },
        { "VTK_LANDMARK_AFFINE", 12 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

