// python wrapper for vtkInformationObjectBaseVectorKey
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
#include "vtkObjectBase.h"
#include "vtkInformationObjectBaseVectorKey.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationObjectBaseVectorKey(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationObjectBaseVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static const char *PyvtkInformationObjectBaseVectorKey_Doc =
  "vtkInformationObjectBaseVectorKey - Key for vtkObjectBase vector\nvalues.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationObjectBaseVectorKey is used to represent keys for\n"
  "double vector values in vtkInformation.h. NOTE the interface in this\n"
  "key differs from that in other similar keys because of our internal\n"
  "use of smart pointers.\n\n";


static PyObject *
PyvtkInformationObjectBaseVectorKey_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationObjectBaseVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationObjectBaseVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationObjectBaseVectorKey *tempr = vtkInformationObjectBaseVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationObjectBaseVectorKey::NewInstance());

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
PyvtkInformationObjectBaseVectorKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkInformationObjectBaseVectorKey *tempr = vtkInformationObjectBaseVectorKey::MakeKey(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Clear(temp0);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Clear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Size(temp0) :
      op->vtkInformationObjectBaseVectorKey::Size(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationObjectBaseVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkObjectBase") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationObjectBaseVectorKey_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationObjectBaseVectorKey_Remove_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformationObjectBaseVectorKey::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationObjectBaseVectorKey_Remove_Methods[] = {
  {nullptr, PyvtkInformationObjectBaseVectorKey_Remove_s1, METH_VARARGS,
   "@VV *vtkInformation *vtkObjectBase"},
  {nullptr, PyvtkInformationObjectBaseVectorKey_Remove_s2, METH_VARARGS,
   "@Vi *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformationObjectBaseVectorKey_Remove(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformationObjectBaseVectorKey_Remove_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformationObjectBaseVectorKey_Remove_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return nullptr;
}



static PyObject *
PyvtkInformationObjectBaseVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformationObjectBaseVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

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
      op->vtkInformationObjectBaseVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationObjectBaseVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationObjectBaseVectorKey_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationObjectBaseVectorKey_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationObjectBaseVectorKey_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationObjectBaseVectorKey\nC++: static vtkInformationObjectBaseVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationObjectBaseVectorKey_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationObjectBaseVectorKey\nC++: vtkInformationObjectBaseVectorKey *NewInstance()\n\n"},
  {"MakeKey", PyvtkInformationObjectBaseVectorKey_MakeKey, METH_VARARGS,
   "V.MakeKey(string, string, string)\n    -> vtkInformationObjectBaseVectorKey\nC++: static vtkInformationObjectBaseVectorKey *MakeKey(\n    const char *name, const char *location,\n    const char *requiredClass=nullptr)\n\nThis method simply returns a new\nvtkInformationObjectBaseVectorKey, given a name, location and\noptionally a required class (a classname to restrict which class\ntypes can be set with this key). This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"Clear", PyvtkInformationObjectBaseVectorKey_Clear, METH_VARARGS,
   "V.Clear(vtkInformation)\nC++: void Clear(vtkInformation *info)\n\nClear the vector.\n"},
  {"Resize", PyvtkInformationObjectBaseVectorKey_Resize, METH_VARARGS,
   "V.Resize(vtkInformation, int)\nC++: void Resize(vtkInformation *info, int n)\n\nResize (extend) the vector to hold n objects. Any new elements\ncreated will be null initialized.\n"},
  {"Size", PyvtkInformationObjectBaseVectorKey_Size, METH_VARARGS,
   "V.Size(vtkInformation) -> int\nC++: int Size(vtkInformation *info)\n\nGet the vector's length.\n"},
  {"Length", PyvtkInformationObjectBaseVectorKey_Length, METH_VARARGS,
   "V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\n"},
  {"Append", PyvtkInformationObjectBaseVectorKey_Append, METH_VARARGS,
   "V.Append(vtkInformation, vtkObjectBase)\nC++: void Append(vtkInformation *info, vtkObjectBase *value)\n\nPut the value on the back of the vector, with ref counting.\n"},
  {"Set", PyvtkInformationObjectBaseVectorKey_Set, METH_VARARGS,
   "V.Set(vtkInformation, vtkObjectBase, int)\nC++: void Set(vtkInformation *info, vtkObjectBase *value, int i)\n\nSet element i of the vector to value. Resizes the vector if\nneeded.\n"},
  {"Remove", PyvtkInformationObjectBaseVectorKey_Remove, METH_VARARGS,
   "V.Remove(vtkInformation, vtkObjectBase)\nC++: void Remove(vtkInformation *info, vtkObjectBase *val)\nV.Remove(vtkInformation, int)\nC++: void Remove(vtkInformation *info, int idx)\nV.Remove(vtkInformation)\nC++: virtual void Remove(vtkInformation *info)\n\nRemove all instances of val from the list. If using the indexed\noverload, the object at the specified position is removed.\n"},
  {"Get", PyvtkInformationObjectBaseVectorKey_Get, METH_VARARGS,
   "V.Get(vtkInformation, int) -> vtkObjectBase\nC++: vtkObjectBase *Get(vtkInformation *info, int idx)\n\nGet the vtkObjectBase at a specific location in the vector.\n"},
  {"ShallowCopy", PyvtkInformationObjectBaseVectorKey_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkInformation, vtkInformation)\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationObjectBaseVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformationObjectBaseVectorKey", // tp_name
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
  PyvtkInformationObjectBaseVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationObjectBaseVectorKey_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationObjectBaseVectorKey_Type, PyvtkInformationObjectBaseVectorKey_Methods,
    "vtkInformationObjectBaseVectorKey",
 nullptr);

  PyTypeObject *pytype = &PyvtkInformationObjectBaseVectorKey_Type;

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

void PyVTKAddFile_vtkInformationObjectBaseVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationObjectBaseVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationObjectBaseVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

