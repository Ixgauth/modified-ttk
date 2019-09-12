// python wrapper for vtkHomogeneousTransform
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
#include "vtkHomogeneousTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHomogeneousTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHomogeneousTransform_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractTransform_ClassNew
extern "C" { PyObject *PyvtkAbstractTransform_ClassNew(); }
#define DECLARED_PyvtkAbstractTransform_ClassNew
#endif

static const char *PyvtkHomogeneousTransform_Doc =
  "vtkHomogeneousTransform - superclass for homogeneous transformations\n\n"
  "Superclass: vtkAbstractTransform\n\n"
  "vtkHomogeneousTransform provides a generic interface for homogeneous\n"
  "transformations, i.e. transformations which can be represented by\n"
  "multiplying a 4x4 matrix with a homogeneous coordinate.\n"
  "@sa\n"
  "vtkPerspectiveTransform vtkLinearTransform vtkIdentityTransform\n\n";


static PyObject *
PyvtkHomogeneousTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHomogeneousTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHomogeneousTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHomogeneousTransform *tempr = vtkHomogeneousTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHomogeneousTransform::NewInstance());

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
PyvtkHomogeneousTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkHomogeneousTransform::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHomogeneousTransform_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkHomogeneousTransform::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHomogeneousTransform_GetMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHomogeneousTransform_GetMatrix_s1(self, args);
    case 0:
      return PyvtkHomogeneousTransform_GetMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return nullptr;
}



static PyObject *
PyvtkHomogeneousTransform_GetHomogeneousInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHomogeneousInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetHomogeneousInverse() :
      op->vtkHomogeneousTransform::GetHomogeneousInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHomogeneousTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkHomogeneousTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHomogeneousTransform *op = static_cast<vtkHomogeneousTransform *>(vp);

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
      op->vtkHomogeneousTransform::InternalTransformDerivative(temp0, temp1, temp2);
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

static PyMethodDef PyvtkHomogeneousTransform_Methods[] = {
  {"IsTypeOf", PyvtkHomogeneousTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHomogeneousTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHomogeneousTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHomogeneousTransform\nC++: static vtkHomogeneousTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHomogeneousTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *NewInstance()\n\n"},
  {"TransformPoints", PyvtkHomogeneousTransform_TransformPoints, METH_VARARGS,
   "V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n    override;\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"GetMatrix", PyvtkHomogeneousTransform_GetMatrix, METH_VARARGS,
   "V.GetMatrix(vtkMatrix4x4)\nC++: void GetMatrix(vtkMatrix4x4 *m)\nV.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix()\n\nGet a copy of the internal transformation matrix.  The transform\nis Updated first, to guarantee that the matrix is valid.\n"},
  {"GetHomogeneousInverse", PyvtkHomogeneousTransform_GetHomogeneousInverse, METH_VARARGS,
   "V.GetHomogeneousInverse() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetHomogeneousInverse()\n\nJust like GetInverse(), but includes typecast to\nvtkHomogeneousTransform.\n"},
  {"InternalTransformPoint", PyvtkHomogeneousTransform_InternalTransformPoint, METH_VARARGS,
   "V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformDerivative", PyvtkHomogeneousTransform_InternalTransformDerivative, METH_VARARGS,
   "V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHomogeneousTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkHomogeneousTransform", // tp_name
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
  PyvtkHomogeneousTransform_Doc, // tp_doc
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

PyObject *PyvtkHomogeneousTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHomogeneousTransform_Type, PyvtkHomogeneousTransform_Methods,
    "vtkHomogeneousTransform",
 nullptr);

  PyTypeObject *pytype = &PyvtkHomogeneousTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHomogeneousTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHomogeneousTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHomogeneousTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

