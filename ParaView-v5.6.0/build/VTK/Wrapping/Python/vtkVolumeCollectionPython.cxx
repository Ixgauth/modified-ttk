// python wrapper for vtkVolumeCollection
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
#include "vtkVolumeCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeCollection_ClassNew(); }

#ifndef DECLARED_PyvtkPropCollection_ClassNew
extern "C" { PyObject *PyvtkPropCollection_ClassNew(); }
#define DECLARED_PyvtkPropCollection_ClassNew
#endif

static const char *PyvtkVolumeCollection_Doc =
  "vtkVolumeCollection - an ordered list of volumes\n\n"
  "Superclass: vtkPropCollection\n\n"
  "vtkVolumeCollection represents and provides methods to manipulate a\n"
  "list of volumes (i.e., vtkVolume and subclasses). The list is ordered\n"
  "and duplicate entries are not prevented.\n\n"
  "@sa\n"
  "vtkCollection vtkVolume\n\n";


static PyObject *
PyvtkVolumeCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeCollection *tempr = vtkVolumeCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeCollection::NewInstance());

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
PyvtkVolumeCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkVolumeCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetNextVolume() :
      op->vtkVolumeCollection::GetNextVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeCollection *op = static_cast<vtkVolumeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkVolumeCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeCollection_Methods[] = {
  {"IsTypeOf", PyvtkVolumeCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeCollection\nC++: static vtkVolumeCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeCollection\nC++: vtkVolumeCollection *NewInstance()\n\n"},
  {"AddItem", PyvtkVolumeCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkVolume)\nC++: void AddItem(vtkVolume *a)\n\nAdd a Volume to the bottom of the list.\n"},
  {"GetNextVolume", PyvtkVolumeCollection_GetNextVolume, METH_VARARGS,
   "V.GetNextVolume() -> vtkVolume\nC++: vtkVolume *GetNextVolume()\n\nGet the next Volume in the list. Return NULL when at the end of\nthe list.\n"},
  {"GetNextItem", PyvtkVolumeCollection_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkVolume\nC++: vtkVolume *GetNextItem()\n\nAccess routine provided for compatibility with previous versions\nof VTK.  Please use the GetNextVolume() variant where possible.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkVolumeCollection", // tp_name
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
  PyvtkVolumeCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeCollection_StaticNew()
{
  return vtkVolumeCollection::New();
}

PyObject *PyvtkVolumeCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeCollection_Type, PyvtkVolumeCollection_Methods,
    "vtkVolumeCollection",
 &PyvtkVolumeCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeCollection_Type;

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

void PyVTKAddFile_vtkVolumeCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

