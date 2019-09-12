// python wrapper for vtkActorCollection
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
#include "vtkActorCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActorCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkActorCollection_ClassNew(); }

#ifndef DECLARED_PyvtkPropCollection_ClassNew
extern "C" { PyObject *PyvtkPropCollection_ClassNew(); }
#define DECLARED_PyvtkPropCollection_ClassNew
#endif

static const char *PyvtkActorCollection_Doc =
  "vtkActorCollection - an ordered list of actors\n\n"
  "Superclass: vtkPropCollection\n\n"
  "vtkActorCollection represents and provides methods to manipulate a\n"
  "list of actors (i.e., vtkActor and subclasses). The list is ordered\n"
  "and duplicate entries are not prevented.\n\n"
  "@sa\n"
  "vtkActor vtkCollection\n\n";


static PyObject *
PyvtkActorCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActorCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActorCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActorCollection *tempr = vtkActorCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActorCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActorCollection::NewInstance());

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
PyvtkActorCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkActorCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_GetNextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetNextActor() :
      op->vtkActorCollection::GetNextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_GetLastActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetLastActor() :
      op->vtkActorCollection::GetLastActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkActorCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkActorCollection::GetLastItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActorCollection_ApplyProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActorCollection *op = static_cast<vtkActorCollection *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->ApplyProperties(temp0);
    }
    else
    {
      op->vtkActorCollection::ApplyProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkActorCollection_Methods[] = {
  {"IsTypeOf", PyvtkActorCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActorCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActorCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkActorCollection\nC++: static vtkActorCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActorCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkActorCollection\nC++: vtkActorCollection *NewInstance()\n\n"},
  {"AddItem", PyvtkActorCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkActor)\nC++: void AddItem(vtkActor *a)\n\nAdd an actor to the bottom of the list.\n"},
  {"GetNextActor", PyvtkActorCollection_GetNextActor, METH_VARARGS,
   "V.GetNextActor() -> vtkActor\nC++: vtkActor *GetNextActor()\n\nGet the next actor in the list.\n"},
  {"GetLastActor", PyvtkActorCollection_GetLastActor, METH_VARARGS,
   "V.GetLastActor() -> vtkActor\nC++: vtkActor *GetLastActor()\n\nGet the last actor in the list.\n"},
  {"GetNextItem", PyvtkActorCollection_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkActor\nC++: vtkActor *GetNextItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor(), GetLastActor()\nvariants where possible.\n"},
  {"GetLastItem", PyvtkActorCollection_GetLastItem, METH_VARARGS,
   "V.GetLastItem() -> vtkActor\nC++: vtkActor *GetLastItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor(), GetLastActor()\nvariants where possible.\n"},
  {"ApplyProperties", PyvtkActorCollection_ApplyProperties, METH_VARARGS,
   "V.ApplyProperties(vtkProperty)\nC++: void ApplyProperties(vtkProperty *p)\n\nApply properties to all actors in this collection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkActorCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkActorCollection", // tp_name
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
  PyvtkActorCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActorCollection_StaticNew()
{
  return vtkActorCollection::New();
}

PyObject *PyvtkActorCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkActorCollection_Type, PyvtkActorCollection_Methods,
    "vtkActorCollection",
 &PyvtkActorCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkActorCollection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPropCollection_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkActorCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActorCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActorCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

