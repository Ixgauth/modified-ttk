// python wrapper for vtkAssemblyPaths
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkAssemblyPaths.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssemblyPaths(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAssemblyPaths_ClassNew(); }

#ifndef DECLARED_PyvtkCollection_ClassNew
extern "C" { PyObject *PyvtkCollection_ClassNew(); }
#define DECLARED_PyvtkCollection_ClassNew
#endif

static const char *PyvtkAssemblyPaths_Doc =
  "vtkAssemblyPaths - a list of lists of props representing an assembly\nhierarchy\n\n"
  "Superclass: vtkCollection\n\n"
  "vtkAssemblyPaths represents an assembly hierarchy as a list of\n"
  "vtkAssemblyPath. Each path represents the complete path from the top\n"
  "level assembly (if any) down to the leaf prop.\n\n"
  "@sa\n"
  "vtkAssemblyPath vtkAssemblyNode vtkPicker vtkAssembly vtkProp\n\n";


static PyObject *
PyvtkAssemblyPaths_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssemblyPaths::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyPaths::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssemblyPaths *tempr = vtkAssemblyPaths::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPaths *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyPaths::NewInstance());

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
PyvtkAssemblyPaths_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkAssemblyPaths::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0);
    }
    else
    {
      op->vtkAssemblyPaths::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkAssemblyPaths::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkAssemblyPaths::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyPaths::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAssemblyPaths_Methods[] = {
  {"IsTypeOf", PyvtkAssemblyPaths_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssemblyPaths_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssemblyPaths_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAssemblyPaths\nC++: static vtkAssemblyPaths *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssemblyPaths_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAssemblyPaths\nC++: vtkAssemblyPaths *NewInstance()\n\n"},
  {"AddItem", PyvtkAssemblyPaths_AddItem, METH_VARARGS,
   "V.AddItem(vtkAssemblyPath)\nC++: void AddItem(vtkAssemblyPath *p)\n\nAdd a path to the list.\n"},
  {"RemoveItem", PyvtkAssemblyPaths_RemoveItem, METH_VARARGS,
   "V.RemoveItem(vtkAssemblyPath)\nC++: void RemoveItem(vtkAssemblyPath *p)\n\nRemove a path from the list.\n"},
  {"IsItemPresent", PyvtkAssemblyPaths_IsItemPresent, METH_VARARGS,
   "V.IsItemPresent(vtkAssemblyPath) -> int\nC++: int IsItemPresent(vtkAssemblyPath *p)\n\nDetermine whether a particular path is present. Returns its\nposition in the list.\n"},
  {"GetNextItem", PyvtkAssemblyPaths_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextItem()\n\nGet the next path in the list.\n"},
  {"GetMTime", PyvtkAssemblyPaths_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the standard GetMTime() to check for the modified times\nof the paths.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAssemblyPaths_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAssemblyPaths", // tp_name
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
  PyvtkAssemblyPaths_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssemblyPaths_StaticNew()
{
  return vtkAssemblyPaths::New();
}

PyObject *PyvtkAssemblyPaths_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAssemblyPaths_Type, PyvtkAssemblyPaths_Methods,
    "vtkAssemblyPaths",
 &PyvtkAssemblyPaths_StaticNew);

  PyTypeObject *pytype = &PyvtkAssemblyPaths_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCollection_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssemblyPaths(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssemblyPaths_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssemblyPaths", o) != 0)
  {
    Py_DECREF(o);
  }

}

