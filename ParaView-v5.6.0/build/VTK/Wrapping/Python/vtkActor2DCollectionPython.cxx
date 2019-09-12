// python wrapper for vtkActor2DCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkActor2DCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActor2DCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkActor2DCollection_ClassNew(); }

#ifndef DECLARED_PyvtkPropCollection_ClassNew
extern "C" { PyObject *PyvtkPropCollection_ClassNew(); }
#define DECLARED_PyvtkPropCollection_ClassNew
#endif

static const char *PyvtkActor2DCollection_Doc =
  "vtkActor2DCollection - a list of 2D actors\n\n"
  "Superclass: vtkPropCollection\n\n"
  "vtkActor2DCollection is a subclass of vtkCollection. \n"
  "vtkActor2DCollection maintains a collection of vtkActor2D objects\n"
  "that is sorted by layer number, with lower layer numbers at the start\n"
  "of the list.  This allows the vtkActor2D objects to be rendered in\n"
  "the correct order.\n\n"
  "@sa\n"
  "vtkActor2D vtkCollection\n\n";


static PyObject *
PyvtkActor2DCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActor2DCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor2DCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActor2DCollection *tempr = vtkActor2DCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2DCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor2DCollection::NewInstance());

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
PyvtkActor2DCollection_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Sort();
    }
    else
    {
      op->vtkActor2DCollection::Sort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkActor2DCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkActor2DCollection::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextActor2D() :
      op->vtkActor2DCollection::GetNextActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastActor2D() :
      op->vtkActor2DCollection::GetLastActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkActor2DCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkActor2DCollection::GetLastItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0);
    }
    else
    {
      op->vtkActor2DCollection::RenderOverlay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkActor2DCollection_Methods[] = {
  {"IsTypeOf", PyvtkActor2DCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActor2DCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActor2DCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkActor2DCollection\nC++: static vtkActor2DCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActor2DCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkActor2DCollection\nC++: vtkActor2DCollection *NewInstance()\n\n"},
  {"Sort", PyvtkActor2DCollection_Sort, METH_VARARGS,
   "V.Sort()\nC++: void Sort()\n\nSorts the vtkActor2DCollection by layer number.  Smaller layer\nnumbers are first.  Layer numbers can be any integer value.\n"},
  {"AddItem", PyvtkActor2DCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkActor2D)\nC++: void AddItem(vtkActor2D *a)\n\nAdd an actor to the list.  The new actor is inserted in the list\naccording to it's layer number.\n"},
  {"IsItemPresent", PyvtkActor2DCollection_IsItemPresent, METH_VARARGS,
   "V.IsItemPresent(vtkActor2D) -> int\nC++: int IsItemPresent(vtkActor2D *a)\n\nStandard Collection methods\n"},
  {"GetNextActor2D", PyvtkActor2DCollection_GetNextActor2D, METH_VARARGS,
   "V.GetNextActor2D() -> vtkActor2D\nC++: vtkActor2D *GetNextActor2D()\n\nStandard Collection methods\n"},
  {"GetLastActor2D", PyvtkActor2DCollection_GetLastActor2D, METH_VARARGS,
   "V.GetLastActor2D() -> vtkActor2D\nC++: vtkActor2D *GetLastActor2D()\n\nStandard Collection methods\n"},
  {"GetNextItem", PyvtkActor2DCollection_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkActor2D\nC++: vtkActor2D *GetNextItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor2D(),\nGetLastActor2D() variants where possible.\n"},
  {"GetLastItem", PyvtkActor2DCollection_GetLastItem, METH_VARARGS,
   "V.GetLastItem() -> vtkActor2D\nC++: vtkActor2D *GetLastItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor2D(),\nGetLastActor2D() variants where possible.\n"},
  {"RenderOverlay", PyvtkActor2DCollection_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport)\nC++: void RenderOverlay(vtkViewport *viewport)\n\nSort and then render the collection of 2D actors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkActor2DCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkActor2DCollection", // tp_name
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
  PyvtkActor2DCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActor2DCollection_StaticNew()
{
  return vtkActor2DCollection::New();
}

PyObject *PyvtkActor2DCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkActor2DCollection_Type, PyvtkActor2DCollection_Methods,
    "vtkActor2DCollection",
 &PyvtkActor2DCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkActor2DCollection_Type;

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

void PyVTKAddFile_vtkActor2DCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActor2DCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActor2DCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

