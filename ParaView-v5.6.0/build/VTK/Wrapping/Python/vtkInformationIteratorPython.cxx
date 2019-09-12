// python wrapper for vtkInformationIterator
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
#include "vtkInformationIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInformationIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInformationIterator_Doc =
  "vtkInformationIterator - Iterates over keys of an information object\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInformationIterator can be used to iterate over the keys of an\n"
  "information object. The corresponding values can then be directly\n"
  "obtained from the information object using the keys.\n\n"
  "@sa\n"
  "vtkInformation vtkInformationKey\n\n";


static PyObject *
PyvtkInformationIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationIterator *tempr = vtkInformationIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIterator::NewInstance());

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
PyvtkInformationIterator_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkInformationIterator::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkInformationIterator::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_SetInformationWeak(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationWeak");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformationWeak(temp0);
    }
    else
    {
      op->vtkInformationIterator::SetInformationWeak(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkInformationIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstItem();
    }
    else
    {
      op->vtkInformationIterator::GoToFirstItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkInformationIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkInformationIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIterator_GetCurrentKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->GetCurrentKey() :
      op->vtkInformationIterator::GetCurrentKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationIterator_Methods[] = {
  {"IsTypeOf", PyvtkInformationIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInformationIterator\nC++: static vtkInformationIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInformationIterator\nC++: vtkInformationIterator *NewInstance()\n\n"},
  {"SetInformation", PyvtkInformationIterator_SetInformation, METH_VARARGS,
   "V.SetInformation(vtkInformation)\nC++: void SetInformation(vtkInformation *)\n\nSet/Get the information to iterator over.\n"},
  {"GetInformation", PyvtkInformationIterator_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information to iterator over.\n"},
  {"SetInformationWeak", PyvtkInformationIterator_SetInformationWeak, METH_VARARGS,
   "V.SetInformationWeak(vtkInformation)\nC++: void SetInformationWeak(vtkInformation *)\n\nSet the function to iterate over. The iterator will not hold a\nreference to the information object. Can be used to optimize\ncertain places by avoiding garbage collection.\n"},
  {"InitTraversal", PyvtkInformationIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: void InitTraversal()\n\nMove the iterator to the beginning of the collection.\n"},
  {"GoToFirstItem", PyvtkInformationIterator_GoToFirstItem, METH_VARARGS,
   "V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {"GoToNextItem", PyvtkInformationIterator_GoToNextItem, METH_VARARGS,
   "V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkInformationIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is currently pointing to a valid item.\nReturns 1 for yes, 0 for no.\n"},
  {"GetCurrentKey", PyvtkInformationIterator_GetCurrentKey, METH_VARARGS,
   "V.GetCurrentKey() -> vtkInformationKey\nC++: virtual vtkInformationKey *GetCurrentKey()\n\nGet the current item. Valid only when IsDoneWithTraversal()\nreturns 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInformationIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkInformationIterator", // tp_name
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
  PyvtkInformationIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInformationIterator_StaticNew()
{
  return vtkInformationIterator::New();
}

PyObject *PyvtkInformationIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInformationIterator_Type, PyvtkInformationIterator_Methods,
    "vtkInformationIterator",
 &PyvtkInformationIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkInformationIterator_Type;

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

void PyVTKAddFile_vtkInformationIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

