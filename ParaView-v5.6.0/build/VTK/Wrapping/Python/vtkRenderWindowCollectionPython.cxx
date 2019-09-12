// python wrapper for vtkRenderWindowCollection
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
#include "vtkRenderWindowCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindowCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderWindowCollection_ClassNew(); }

#ifndef DECLARED_PyvtkCollection_ClassNew
extern "C" { PyObject *PyvtkCollection_ClassNew(); }
#define DECLARED_PyvtkCollection_ClassNew
#endif

static const char *PyvtkRenderWindowCollection_Doc =
  "vtkRenderWindowCollection - an ordered list of RenderWindows\n\n"
  "Superclass: vtkCollection\n\n"
  "vtkRenderWindowCollection represents and provides methods to\n"
  "manipulate a list of RenderWindows. The list is ordered and duplicate\n"
  "entries are not prevented.\n\n"
  "@sa\n"
  "vtkRenderWindow vtkCollection\n\n";


static PyObject *
PyvtkRenderWindowCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindowCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindowCollection *tempr = vtkRenderWindowCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowCollection::NewInstance());

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
PyvtkRenderWindowCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkRenderWindowCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowCollection *op = static_cast<vtkRenderWindowCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkRenderWindowCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindowCollection_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindowCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindowCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindowCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderWindowCollection\nC++: static vtkRenderWindowCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindowCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderWindowCollection\nC++: vtkRenderWindowCollection *NewInstance()\n\n"},
  {"AddItem", PyvtkRenderWindowCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkRenderWindow)\nC++: void AddItem(vtkRenderWindow *a)\n\nAdd a RenderWindow to the bottom of the list.\n"},
  {"GetNextItem", PyvtkRenderWindowCollection_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkRenderWindow\nC++: vtkRenderWindow *GetNextItem()\n\nGet the next RenderWindow in the list. Return NULL when at the\nend of the list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderWindowCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderWindowCollection", // tp_name
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
  PyvtkRenderWindowCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindowCollection_StaticNew()
{
  return vtkRenderWindowCollection::New();
}

PyObject *PyvtkRenderWindowCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderWindowCollection_Type, PyvtkRenderWindowCollection_Methods,
    "vtkRenderWindowCollection",
 &PyvtkRenderWindowCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderWindowCollection_Type;

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

void PyVTKAddFile_vtkRenderWindowCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindowCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindowCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}
