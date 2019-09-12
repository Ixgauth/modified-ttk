// python wrapper for vtkProp3DCollection
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
#include "vtkProp3DCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp3DCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProp3DCollection_ClassNew(); }

#ifndef DECLARED_PyvtkPropCollection_ClassNew
extern "C" { PyObject *PyvtkPropCollection_ClassNew(); }
#define DECLARED_PyvtkPropCollection_ClassNew
#endif

static const char *PyvtkProp3DCollection_Doc =
  "vtkProp3DCollection - an ordered list of 3D props\n\n"
  "Superclass: vtkPropCollection\n\n"
  "vtkProp3DCollection represents and provides methods to manipulate a\n"
  "list of 3D props (i.e., vtkProp3D and subclasses). The list is\n"
  "ordered and duplicate entries are not prevented.\n\n"
  "@sa\n"
  "vtkProp3D vtkCollection\n\n";


static PyObject *
PyvtkProp3DCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp3DCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3DCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp3DCollection *tempr = vtkProp3DCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3DCollection::NewInstance());

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
PyvtkProp3DCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkProp3DCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DCollection_GetNextProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetNextProp3D() :
      op->vtkProp3DCollection::GetNextProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DCollection_GetLastProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DCollection *op = static_cast<vtkProp3DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetLastProp3D() :
      op->vtkProp3DCollection::GetLastProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3DCollection_Methods[] = {
  {"IsTypeOf", PyvtkProp3DCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProp3DCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProp3DCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProp3DCollection\nC++: static vtkProp3DCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProp3DCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProp3DCollection\nC++: vtkProp3DCollection *NewInstance()\n\n"},
  {"AddItem", PyvtkProp3DCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkProp3D)\nC++: void AddItem(vtkProp3D *p)\n\nAdd an actor to the bottom of the list.\n"},
  {"GetNextProp3D", PyvtkProp3DCollection_GetNextProp3D, METH_VARARGS,
   "V.GetNextProp3D() -> vtkProp3D\nC++: vtkProp3D *GetNextProp3D()\n\nGet the next actor in the list.\n"},
  {"GetLastProp3D", PyvtkProp3DCollection_GetLastProp3D, METH_VARARGS,
   "V.GetLastProp3D() -> vtkProp3D\nC++: vtkProp3D *GetLastProp3D()\n\nGet the last actor in the list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProp3DCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkProp3DCollection", // tp_name
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
  PyvtkProp3DCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProp3DCollection_StaticNew()
{
  return vtkProp3DCollection::New();
}

PyObject *PyvtkProp3DCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProp3DCollection_Type, PyvtkProp3DCollection_Methods,
    "vtkProp3DCollection",
 &PyvtkProp3DCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkProp3DCollection_Type;

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

void PyVTKAddFile_vtkProp3DCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp3DCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp3DCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

