// python wrapper for vtkMapperCollection
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
#include "vtkMapperCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMapperCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMapperCollection_ClassNew(); }

#ifndef DECLARED_PyvtkCollection_ClassNew
extern "C" { PyObject *PyvtkCollection_ClassNew(); }
#define DECLARED_PyvtkCollection_ClassNew
#endif

static const char *PyvtkMapperCollection_Doc =
  "vtkMapperCollection - an ordered list of mappers\n\n"
  "Superclass: vtkCollection\n\n"
  "vtkMapperCollection represents and provides methods to manipulate a\n"
  "list of mappers (i.e., vtkMapper and subclasses). The list is ordered\n"
  "and duplicate entries are not prevented.\n\n"
  "@sa\n"
  "vtkMapper vtkCollection\n\n";


static PyObject *
PyvtkMapperCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMapperCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapperCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapperCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapperCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMapperCollection *tempr = vtkMapperCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapperCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapperCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapperCollection::NewInstance());

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
PyvtkMapperCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  vtkMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkMapperCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkMapperCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapperCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapperCollection *op = static_cast<vtkMapperCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkMapperCollection::GetLastItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMapperCollection_Methods[] = {
  {"IsTypeOf", PyvtkMapperCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMapperCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMapperCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMapperCollection\nC++: static vtkMapperCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMapperCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMapperCollection\nC++: vtkMapperCollection *NewInstance()\n\n"},
  {"AddItem", PyvtkMapperCollection_AddItem, METH_VARARGS,
   "V.AddItem(vtkMapper)\nC++: void AddItem(vtkMapper *a)\n\nAdd an mapper to the bottom of the list.\n"},
  {"GetNextItem", PyvtkMapperCollection_GetNextItem, METH_VARARGS,
   "V.GetNextItem() -> vtkMapper\nC++: vtkMapper *GetNextItem()\n\nGet the next mapper in the list.\n"},
  {"GetLastItem", PyvtkMapperCollection_GetLastItem, METH_VARARGS,
   "V.GetLastItem() -> vtkMapper\nC++: vtkMapper *GetLastItem()\n\nGet the last mapper in the list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMapperCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkMapperCollection", // tp_name
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
  PyvtkMapperCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMapperCollection_StaticNew()
{
  return vtkMapperCollection::New();
}

PyObject *PyvtkMapperCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMapperCollection_Type, PyvtkMapperCollection_Methods,
    "vtkMapperCollection",
 &PyvtkMapperCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkMapperCollection_Type;

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

void PyVTKAddFile_vtkMapperCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMapperCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMapperCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

