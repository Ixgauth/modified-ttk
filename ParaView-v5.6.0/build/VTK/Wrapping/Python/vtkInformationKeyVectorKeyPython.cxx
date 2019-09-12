// python wrapper for vtkInformationKeyVectorKey
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
#include "vtkInformationKey.h"
#include "vtkInformationKeyVectorKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationKeyVectorKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationKeyVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static const char *PyvtkInformationKeyVectorKey_Doc =
  "vtkInformationKeyVectorKey - Key for vector-of-keys values.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationKeyVectorKey is used to represent keys for\n"
  "vector-of-keys values in vtkInformation.\n\n";


static PyObject *
PyvtkInformationKeyVectorKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationKeyVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationKeyVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationKeyVectorKey *tempr = vtkInformationKeyVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationKeyVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationKeyVectorKey::NewInstance());

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
PyvtkInformationKeyVectorKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationKeyVectorKey *tempr = vtkInformationKeyVectorKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_AppendUnique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::RemoveItem(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformationKeyVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationKeyVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

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
      op->vtkInformationKeyVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationKeyVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationKeyVectorKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationKeyVectorKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationKeyVectorKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationKeyVectorKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationKeyVectorKey\nC++: vtkInformationKeyVectorKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationKeyVectorKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string) -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *MakeKey(const char *name,\n    const char *location)\n\nThis method simply returns a new vtkInformationKeyVectorKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"Append", PyvtkInformationKeyVectorKey_Append, METH_VARARGS,
   "V.Append(vtkInformation, vtkInformationKey)\nC++: void Append(vtkInformation *info, vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"AppendUnique", PyvtkInformationKeyVectorKey_AppendUnique, METH_VARARGS,
   "V.AppendUnique(vtkInformation, vtkInformationKey)\nC++: void AppendUnique(vtkInformation *info,\n    vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"RemoveItem", PyvtkInformationKeyVectorKey_RemoveItem, METH_VARARGS,
   "V.RemoveItem(vtkInformation, vtkInformationKey)\nC++: void RemoveItem(vtkInformation *info,\n    vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Get", PyvtkInformationKeyVectorKey_Get, METH_VARARGS,
   "V.Get(vtkInformation, int) -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformation *info, int idx)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Length", PyvtkInformationKeyVectorKey_Length, METH_VARARGS,
   "V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"ShallowCopy", PyvtkInformationKeyVectorKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationKeyVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformationKeyVectorKey", // tp_name
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
  PyvtkInformationKeyVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationKeyVectorKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationKeyVectorKey_Type, PyvtkInformationKeyVectorKey_Methods,
    "vtkInformationKeyVectorKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationKeyVectorKey_Type;

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

void PyVTKAddFile_vtkInformationKeyVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationKeyVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationKeyVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

