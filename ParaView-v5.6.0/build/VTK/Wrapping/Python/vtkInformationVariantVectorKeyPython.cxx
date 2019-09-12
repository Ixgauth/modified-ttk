// python wrapper for vtkInformationVariantVectorKey
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
#include "vtkInformationVariantVectorKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationVariantVectorKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationVariantVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static const char *PyvtkInformationVariantVectorKey_Doc =
  "vtkInformationVariantVectorKey - Key for variant vector values.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationVariantVectorKey is used to represent keys for variant\n"
  "vector values in vtkInformation.h\n\n";


static PyObject *
PyvtkInformationVariantVectorKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationVariantVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationVariantVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationVariantVectorKey *tempr = vtkInformationVariantVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationVariantVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationVariantVectorKey::NewInstance());

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
PyvtkInformationVariantVectorKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkInformationVariantVectorKey *tempr = vtkInformationVariantVectorKey::MakeKey(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, *temp1);
    }
    else
    {
      op->vtkInformationVariantVectorKey::Append(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0, temp1) :
      &op->vtkInformationVariantVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationVariantVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVariantVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVariantVectorKey *op = static_cast<vtkInformationVariantVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0, temp1);
    }
    else
    {
      op->vtkInformationVariantVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationVariantVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationVariantVectorKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationVariantVectorKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationVariantVectorKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationVariantVectorKey\nC++: static vtkInformationVariantVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationVariantVectorKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationVariantVectorKey\nC++: vtkInformationVariantVectorKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationVariantVectorKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string, int) -> vtkInformationVariantVectorKey\nC++: static vtkInformationVariantVectorKey *MakeKey(\n    const char *name, const char *location, int length=-1)\n\nThis method simply returns a new vtkInformationVariantVectorKey,\ngiven a name, a location and a required length. This method is\nprovided for wrappers. Use the constructor directly from C++\ninstead.\n"},
  {"Append", PyvtkInformationVariantVectorKey_Append, METH_VARARGS,
   "V.Append(vtkInformation, vtkVariant)\nC++: void Append(vtkInformation *info, const vtkVariant &value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Get", PyvtkInformationVariantVectorKey_Get, METH_VARARGS,
   "V.Get(vtkInformation, int) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformation *info, int idx)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Length", PyvtkInformationVariantVectorKey_Length, METH_VARARGS,
   "V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"ShallowCopy", PyvtkInformationVariantVectorKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationVariantVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformationVariantVectorKey", // tp_name
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
  PyvtkInformationVariantVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationVariantVectorKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationVariantVectorKey_Type, PyvtkInformationVariantVectorKey_Methods,
    "vtkInformationVariantVectorKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationVariantVectorKey_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInformationKey_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationVariantVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationVariantVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationVariantVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

