// python wrapper for vtkEquivalenceSet
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
#include "vtkEquivalenceSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEquivalenceSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEquivalenceSet_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkEquivalenceSet_Doc =
  "vtkEquivalenceSet - records groups of integers that are equivalent.\n\n"
  "Superclass: vtkObject\n\n"
  "Useful for connectivity on multiple processes.  Run connectivity on\n"
  "each processes, then make touching fragments equivalent.\n\n";


static PyObject *
PyvtkEquivalenceSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEquivalenceSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEquivalenceSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEquivalenceSet *tempr = vtkEquivalenceSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEquivalenceSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEquivalenceSet::NewInstance());

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
PyvtkEquivalenceSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkEquivalenceSet::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_AddEquivalence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEquivalence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddEquivalence(temp0, temp1);
    }
    else
    {
      op->vtkEquivalenceSet::AddEquivalence(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetNumberOfMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMembers() :
      op->vtkEquivalenceSet::GetNumberOfMembers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetNumberOfResolvedSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfResolvedSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfResolvedSets() :
      op->vtkEquivalenceSet::GetNumberOfResolvedSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetEquivalentSetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEquivalentSetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEquivalentSetId(temp0) :
      op->vtkEquivalenceSet::GetEquivalentSetId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_ResolveEquivalences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResolveEquivalences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ResolveEquivalences() :
      op->vtkEquivalenceSet::ResolveEquivalences());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  vtkEquivalenceSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEquivalenceSet"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkEquivalenceSet::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPointer() :
      op->vtkEquivalenceSet::GetPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkEquivalenceSet::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_Capacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Capacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->Capacity() :
      op->vtkEquivalenceSet::Capacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquivalenceSet_GetReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquivalenceSet *op = static_cast<vtkEquivalenceSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReference(temp0) :
      op->vtkEquivalenceSet::GetReference(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEquivalenceSet_Methods[] = {
  {"IsTypeOf", PyvtkEquivalenceSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEquivalenceSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEquivalenceSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEquivalenceSet\nC++: static vtkEquivalenceSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEquivalenceSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEquivalenceSet\nC++: vtkEquivalenceSet *NewInstance()\n\n"},
  {"Initialize", PyvtkEquivalenceSet_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\n"},
  {"AddEquivalence", PyvtkEquivalenceSet_AddEquivalence, METH_VARARGS,
   "V.AddEquivalence(int, int)\nC++: void AddEquivalence(int id1, int id2)\n\n"},
  {"GetNumberOfMembers", PyvtkEquivalenceSet_GetNumberOfMembers, METH_VARARGS,
   "V.GetNumberOfMembers() -> int\nC++: int GetNumberOfMembers()\n\n"},
  {"GetNumberOfResolvedSets", PyvtkEquivalenceSet_GetNumberOfResolvedSets, METH_VARARGS,
   "V.GetNumberOfResolvedSets() -> int\nC++: int GetNumberOfResolvedSets()\n\n"},
  {"GetEquivalentSetId", PyvtkEquivalenceSet_GetEquivalentSetId, METH_VARARGS,
   "V.GetEquivalentSetId(int) -> int\nC++: int GetEquivalentSetId(int memberId)\n\n"},
  {"ResolveEquivalences", PyvtkEquivalenceSet_ResolveEquivalences, METH_VARARGS,
   "V.ResolveEquivalences() -> int\nC++: virtual int ResolveEquivalences()\n\n"},
  {"DeepCopy", PyvtkEquivalenceSet_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkEquivalenceSet)\nC++: void DeepCopy(vtkEquivalenceSet *in)\n\n"},
  {"GetPointer", PyvtkEquivalenceSet_GetPointer, METH_VARARGS,
   "V.GetPointer() -> (int, ...)\nC++: int *GetPointer()\n\n"},
  {"Squeeze", PyvtkEquivalenceSet_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\n"},
  {"Capacity", PyvtkEquivalenceSet_Capacity, METH_VARARGS,
   "V.Capacity() -> int\nC++: vtkIdType Capacity()\n\n"},
  {"GetReference", PyvtkEquivalenceSet_GetReference, METH_VARARGS,
   "V.GetReference(int) -> int\nC++: int GetReference(int memberId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEquivalenceSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkEquivalenceSet", // tp_name
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
  PyvtkEquivalenceSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEquivalenceSet_StaticNew()
{
  return vtkEquivalenceSet::New();
}

PyObject *PyvtkEquivalenceSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEquivalenceSet_Type, PyvtkEquivalenceSet_Methods,
    "vtkEquivalenceSet",
 &PyvtkEquivalenceSet_StaticNew);

  PyTypeObject *pytype = &PyvtkEquivalenceSet_Type;

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

void PyVTKAddFile_vtkEquivalenceSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEquivalenceSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEquivalenceSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

