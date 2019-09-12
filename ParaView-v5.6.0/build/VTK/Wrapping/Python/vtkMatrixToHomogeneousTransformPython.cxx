// python wrapper for vtkMatrixToHomogeneousTransform
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
#include "vtkMatrixToHomogeneousTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrixToHomogeneousTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatrixToHomogeneousTransform_ClassNew(); }

#ifndef DECLARED_PyvtkHomogeneousTransform_ClassNew
extern "C" { PyObject *PyvtkHomogeneousTransform_ClassNew(); }
#define DECLARED_PyvtkHomogeneousTransform_ClassNew
#endif

static const char *PyvtkMatrixToHomogeneousTransform_Doc =
  "vtkMatrixToHomogeneousTransform - convert a matrix to a transform\n\n"
  "Superclass: vtkHomogeneousTransform\n\n"
  "This is a very simple class which allows a vtkMatrix4x4 to be used in\n"
  "place of a vtkHomogeneousTransform or vtkAbstractTransform.  For\n"
  "example, if you use it as a proxy between a matrix and\n"
  "vtkTransformPolyDataFilter then any modifications to the matrix will\n"
  "automatically be reflected in the output of the filter.\n"
  "@sa\n"
  "vtkPerspectiveTransform vtkMatrix4x4 vtkMatrixToLinearTransform\n\n";


static PyObject *
PyvtkMatrixToHomogeneousTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrixToHomogeneousTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrixToHomogeneousTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrixToHomogeneousTransform *tempr = vtkMatrixToHomogeneousTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrixToHomogeneousTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrixToHomogeneousTransform::NewInstance());

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
PyvtkMatrixToHomogeneousTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkMatrixToHomogeneousTransform::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMatrixToHomogeneousTransform::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkMatrixToHomogeneousTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMatrixToHomogeneousTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkMatrixToHomogeneousTransform::MakeTransform());

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

static PyMethodDef PyvtkMatrixToHomogeneousTransform_Methods[] = {
  {"IsTypeOf", PyvtkMatrixToHomogeneousTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrixToHomogeneousTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrixToHomogeneousTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatrixToHomogeneousTransform\nC++: static vtkMatrixToHomogeneousTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrixToHomogeneousTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatrixToHomogeneousTransform\nC++: vtkMatrixToHomogeneousTransform *NewInstance()\n\n"},
  {"SetInput", PyvtkMatrixToHomogeneousTransform_SetInput, METH_VARARGS,
   "V.SetInput(vtkMatrix4x4)\nC++: virtual void SetInput(vtkMatrix4x4 *)\n\n"},
  {"GetInput", PyvtkMatrixToHomogeneousTransform_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetInput()\n\n"},
  {"Inverse", PyvtkMatrixToHomogeneousTransform_Inverse, METH_VARARGS,
   "V.Inverse()\nC++: void Inverse() override;\n\nThe input matrix is left as-is, but the transformation matrix is\ninverted.\n"},
  {"GetMTime", PyvtkMatrixToHomogeneousTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime: this is the bit of magic that makes everything\nwork.\n"},
  {"MakeTransform", PyvtkMatrixToHomogeneousTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake a new transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatrixToHomogeneousTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkMatrixToHomogeneousTransform", // tp_name
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
  PyvtkMatrixToHomogeneousTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrixToHomogeneousTransform_StaticNew()
{
  return vtkMatrixToHomogeneousTransform::New();
}

PyObject *PyvtkMatrixToHomogeneousTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatrixToHomogeneousTransform_Type, PyvtkMatrixToHomogeneousTransform_Methods,
    "vtkMatrixToHomogeneousTransform",
 &PyvtkMatrixToHomogeneousTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkMatrixToHomogeneousTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHomogeneousTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMatrixToHomogeneousTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrixToHomogeneousTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrixToHomogeneousTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

