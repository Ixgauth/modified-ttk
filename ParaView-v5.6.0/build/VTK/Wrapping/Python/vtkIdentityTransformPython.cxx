// python wrapper for vtkIdentityTransform
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
#include "vtkDataArray.h"
#include "vtkIdentityTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIdentityTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIdentityTransform_ClassNew(); }

#ifndef DECLARED_PyvtkLinearTransform_ClassNew
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }
#define DECLARED_PyvtkLinearTransform_ClassNew
#endif

static const char *PyvtkIdentityTransform_Doc =
  "vtkIdentityTransform - a transform that doesn't do anything\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "vtkIdentityTransform is a transformation which will simply pass\n"
  "coordinate data unchanged.  All other transform types can also do\n"
  "this, however, the vtkIdentityTransform does so with much greater\n"
  "efficiency.\n"
  "@sa\n"
  "vtkLinearTransform\n\n";


static PyObject *
PyvtkIdentityTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdentityTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdentityTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdentityTransform *tempr = vtkIdentityTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdentityTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdentityTransform::NewInstance());

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
PyvtkIdentityTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformNormals(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformVectors(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkIdentityTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformNormal(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformVector(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformVector(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkIdentityTransform::MakeTransform());

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

static PyMethodDef PyvtkIdentityTransform_Methods[] = {
  {"IsTypeOf", PyvtkIdentityTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIdentityTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIdentityTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIdentityTransform\nC++: static vtkIdentityTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIdentityTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIdentityTransform\nC++: vtkIdentityTransform *NewInstance()\n\n"},
  {"TransformPoints", PyvtkIdentityTransform_TransformPoints, METH_VARARGS,
   "V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n    override;\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"TransformNormals", PyvtkIdentityTransform_TransformNormals, METH_VARARGS,
   "V.TransformNormals(vtkDataArray, vtkDataArray)\nC++: void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms) override;\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {"TransformVectors", PyvtkIdentityTransform_TransformVectors, METH_VARARGS,
   "V.TransformVectors(vtkDataArray, vtkDataArray)\nC++: void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs) override;\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {"Inverse", PyvtkIdentityTransform_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse() override;\n\nInvert the transformation.\n"},
  {"InternalTransformPoint", PyvtkIdentityTransform_InternalTransformPoint, METH_VARARGS,
   "V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformNormal", PyvtkIdentityTransform_InternalTransformNormal, METH_VARARGS,
   "V.InternalTransformNormal((float, float, float), [float, float,\n    float])\nC++: void InternalTransformNormal(const double in[3],\n    double out[3]) override;\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformVector", PyvtkIdentityTransform_InternalTransformVector, METH_VARARGS,
   "V.InternalTransformVector((float, float, float), [float, float,\n    float])\nC++: void InternalTransformVector(const double in[3],\n    double out[3]) override;\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformDerivative", PyvtkIdentityTransform_InternalTransformDerivative, METH_VARARGS,
   "V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {"MakeTransform", PyvtkIdentityTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake a transform of the same type.  This will actually return the\nsame transform.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIdentityTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkIdentityTransform", // tp_name
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
  PyvtkIdentityTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdentityTransform_StaticNew()
{
  return vtkIdentityTransform::New();
}

PyObject *PyvtkIdentityTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIdentityTransform_Type, PyvtkIdentityTransform_Methods,
    "vtkIdentityTransform",
 &PyvtkIdentityTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkIdentityTransform_Type;

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

void PyVTKAddFile_vtkIdentityTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdentityTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdentityTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

