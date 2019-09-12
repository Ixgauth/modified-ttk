// python wrapper for vtkStringList
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
#include "vtkStringList.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringList(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStringList_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkStringList_Doc =
  "vtkStringList - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkStringList_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringList::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringList::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringList *tempr = vtkStringList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringList *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringList::NewInstance());

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
PyvtkStringList_AddString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddString(temp0);
    }
    else
    {
      op->vtkStringList::AddString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_AddUniqueString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUniqueString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddUniqueString(temp0);
    }
    else
    {
      op->vtkStringList::AddUniqueString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_AddFormattedString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFormattedString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFormattedString(temp0);
    }
    else
    {
      op->vtkStringList::AddFormattedString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllItems();
    }
    else
    {
      op->vtkStringList::RemoveAllItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_SetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetString(temp0, temp1);
    }
    else
    {
      op->vtkStringList::SetString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkStringList::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndex(temp0) :
      op->vtkStringList::GetIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkStringList::GetString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringList_GetNumberOfStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringList *op = static_cast<vtkStringList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStrings() :
      op->vtkStringList::GetNumberOfStrings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStringList_Methods[] = {
  {"IsTypeOf", PyvtkStringList_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringList_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringList_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStringList\nC++: static vtkStringList *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringList_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStringList\nC++: vtkStringList *NewInstance()\n\n"},
  {"AddString", PyvtkStringList_AddString, METH_VARARGS,
   "V.AddString(string)\nC++: void AddString(const char *str)\n\nAdd a simple string.\n"},
  {"AddUniqueString", PyvtkStringList_AddUniqueString, METH_VARARGS,
   "V.AddUniqueString(string)\nC++: void AddUniqueString(const char *str)\n\nAdd a simple string.\n"},
  {"AddFormattedString", PyvtkStringList_AddFormattedString, METH_VARARGS,
   "V.AddFormattedString(string)\nC++: void AddFormattedString(const char *EventString, ...)\n\nAdd a command and format it any way you like.\n"},
  {"RemoveAllItems", PyvtkStringList_RemoveAllItems, METH_VARARGS,
   "V.RemoveAllItems()\nC++: void RemoveAllItems()\n\nInitialize to empty.\n"},
  {"SetString", PyvtkStringList_SetString, METH_VARARGS,
   "V.SetString(int, string)\nC++: void SetString(int idx, const char *str)\n\nRandom access.\n"},
  {"GetLength", PyvtkStringList_GetLength, METH_VARARGS,
   "V.GetLength() -> int\nC++: int GetLength()\n\nGet the length of the list.\n"},
  {"GetIndex", PyvtkStringList_GetIndex, METH_VARARGS,
   "V.GetIndex(string) -> int\nC++: int GetIndex(const char *str)\n\nGet the index of a string.\n"},
  {"GetString", PyvtkStringList_GetString, METH_VARARGS,
   "V.GetString(int) -> string\nC++: const char *GetString(int idx)\n\nGet a command from its index.\n"},
  {"GetNumberOfStrings", PyvtkStringList_GetNumberOfStrings, METH_VARARGS,
   "V.GetNumberOfStrings() -> int\nC++: virtual int GetNumberOfStrings()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStringList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkStringList", // tp_name
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
  PyvtkStringList_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStringList_StaticNew()
{
  return vtkStringList::New();
}

PyObject *PyvtkStringList_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStringList_Type, PyvtkStringList_Methods,
    "vtkStringList",
 &PyvtkStringList_StaticNew);

  PyTypeObject *pytype = &PyvtkStringList_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringList_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringList", o) != 0)
  {
    Py_DECREF(o);
  }

}

