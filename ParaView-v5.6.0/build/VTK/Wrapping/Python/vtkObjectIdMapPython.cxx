// python wrapper for vtkObjectIdMap
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
#include "vtkObjectIdMap.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObjectIdMap(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkObjectIdMap_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkObjectIdMap_Doc =
  "vtkObjectIdMap - class used to assign Id to any VTK object and be\nable to retrieve it base on its id.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkObjectIdMap_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectIdMap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectIdMap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObjectIdMap *tempr = vtkObjectIdMap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectIdMap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObjectIdMap::NewInstance());

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
PyvtkObjectIdMap_GetGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalId(temp0) :
      op->vtkObjectIdMap::GetGlobalId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetVTKObject(temp0) :
      op->vtkObjectIdMap::GetVTKObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_SetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->SetActiveObject(temp0, temp1) :
      op->vtkObjectIdMap::SetActiveObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetActiveObject(temp0) :
      op->vtkObjectIdMap::GetActiveObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_FreeObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->FreeObject(temp0);
    }
    else
    {
      op->vtkObjectIdMap::FreeObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObjectIdMap_Methods[] = {
  {"IsTypeOf", PyvtkObjectIdMap_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObjectIdMap_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObjectIdMap_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkObjectIdMap\nC++: static vtkObjectIdMap *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObjectIdMap_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkObjectIdMap\nC++: vtkObjectIdMap *NewInstance()\n\n"},
  {"GetGlobalId", PyvtkObjectIdMap_GetGlobalId, METH_VARARGS,
   "V.GetGlobalId(vtkObject) -> int\nC++: vtkTypeUInt32 GetGlobalId(vtkObject *obj)\n\nRetrieve a unique identifier for the given object or generate a\nnew one if its global id was never requested.\n"},
  {"GetVTKObject", PyvtkObjectIdMap_GetVTKObject, METH_VARARGS,
   "V.GetVTKObject(int) -> vtkObject\nC++: vtkObject *GetVTKObject(vtkTypeUInt32 globalId)\n\nRetrieve a vtkObject based on its global id. If not found return\nnullptr\n"},
  {"SetActiveObject", PyvtkObjectIdMap_SetActiveObject, METH_VARARGS,
   "V.SetActiveObject(string, vtkObject) -> int\nC++: vtkTypeUInt32 SetActiveObject(const char *objectType,\n    vtkObject *obj)\n\nAssign an active key (string) to an existing object. This is\nusually used to provide another type of access to specific\nvtkObject that we want to retrieve easily using a string. Return\nthe global Id of the given registered object\n"},
  {"GetActiveObject", PyvtkObjectIdMap_GetActiveObject, METH_VARARGS,
   "V.GetActiveObject(string) -> vtkObject\nC++: vtkObject *GetActiveObject(const char *objectType)\n\nRetrieve a previously stored object based on a name\n"},
  {"FreeObject", PyvtkObjectIdMap_FreeObject, METH_VARARGS,
   "V.FreeObject(vtkObject)\nC++: void FreeObject(vtkObject *obj)\n\nRemove any internal reference count due to internal Id/Object\nmapping\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkObjectIdMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkObjectIdMap", // tp_name
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
  PyvtkObjectIdMap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObjectIdMap_StaticNew()
{
  return vtkObjectIdMap::New();
}

PyObject *PyvtkObjectIdMap_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkObjectIdMap_Type, PyvtkObjectIdMap_Methods,
    "vtkObjectIdMap",
 &PyvtkObjectIdMap_StaticNew);

  PyTypeObject *pytype = &PyvtkObjectIdMap_Type;

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

void PyVTKAddFile_vtkObjectIdMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObjectIdMap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectIdMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

