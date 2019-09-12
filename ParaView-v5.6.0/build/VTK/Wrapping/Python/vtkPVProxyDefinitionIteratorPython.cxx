// python wrapper for vtkPVProxyDefinitionIterator
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
#include "vtkPVProxyDefinitionIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVProxyDefinitionIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVProxyDefinitionIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVProxyDefinitionIterator_Doc =
  "vtkPVProxyDefinitionIterator - iterates over all proxy definitions\nfrom which the vtkSMProxyManager can use to create new proxy.\n\n"
  "Superclass: vtkObject\n\n"
  "It can also iterate over registered compound proxy definitions.\n\n"
  "vtkPVProxyDefinitionIterator iterates over all proxy definitions\n"
  "known to the proxy manager. The iterator allow to filter the\n"
  "iteration on a subset of group and/or on the global or custom\n"
  "proxies. Custom and Compound proxy are exactly the same thing. We\n"
  "should stick with only one name.\n"
  "@sa\n"
  "vtkSMProxyManager\n\n";


static PyObject *
PyvtkPVProxyDefinitionIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVProxyDefinitionIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProxyDefinitionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVProxyDefinitionIterator *tempr = vtkPVProxyDefinitionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProxyDefinitionIterator::NewInstance());

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
PyvtkPVProxyDefinitionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->GoToFirstItem();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkPVProxyDefinitionIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->GoToNextItem();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GoToNextGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->GoToNextGroup();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_AddTraversalGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTraversalGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->AddTraversalGroupName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetGroupName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetProxyName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_IsCustom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCustom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCustom() :
      op->vtkPVProxyDefinitionIterator::IsCustom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = op->GetProxyDefinition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProxyDefinitionIterator_GetProxyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProxyDefinitionIterator *op = static_cast<vtkPVProxyDefinitionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = op->GetProxyHints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVProxyDefinitionIterator_Methods[] = {
  {"IsTypeOf", PyvtkPVProxyDefinitionIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVProxyDefinitionIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVProxyDefinitionIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVProxyDefinitionIterator\nC++: static vtkPVProxyDefinitionIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVProxyDefinitionIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewInstance()\n\n"},
  {"GoToFirstItem", PyvtkPVProxyDefinitionIterator_GoToFirstItem, METH_VARARGS,
   "V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning.\n"},
  {"InitTraversal", PyvtkPVProxyDefinitionIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: virtual void InitTraversal()\n\nReset the iterator and move it to the head.\n"},
  {"GoToNextItem", PyvtkPVProxyDefinitionIterator_GoToNextItem, METH_VARARGS,
   "V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item. This will also move to next\ngroup automatically if needed.\n"},
  {"GoToNextGroup", PyvtkPVProxyDefinitionIterator_GoToNextGroup, METH_VARARGS,
   "V.GoToNextGroup()\nC++: virtual void GoToNextGroup()\n\nMove the iterator to the next group.\n"},
  {"IsDoneWithTraversal", PyvtkPVProxyDefinitionIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nTest whether the iterator is currently pointing to a valid item.\n"},
  {"AddTraversalGroupName", PyvtkPVProxyDefinitionIterator_AddTraversalGroupName, METH_VARARGS,
   "V.AddTraversalGroupName(string)\nC++: virtual void AddTraversalGroupName(const char *groupName)\n\n"},
  {"GetGroupName", PyvtkPVProxyDefinitionIterator_GetGroupName, METH_VARARGS,
   "V.GetGroupName() -> string\nC++: virtual const char *GetGroupName()\n\nReturn the current group name or NULL if Next() was never called.\n"},
  {"GetProxyName", PyvtkPVProxyDefinitionIterator_GetProxyName, METH_VARARGS,
   "V.GetProxyName() -> string\nC++: virtual const char *GetProxyName()\n\nReturn the current proxy name or NULL if Next() was never called.\n"},
  {"IsCustom", PyvtkPVProxyDefinitionIterator_IsCustom, METH_VARARGS,
   "V.IsCustom() -> bool\nC++: virtual bool IsCustom()\n\nReturn true if the current definition has been defined in the\nCustom scope\n"},
  {"GetProxyDefinition", PyvtkPVProxyDefinitionIterator_GetProxyDefinition, METH_VARARGS,
   "V.GetProxyDefinition() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetProxyDefinition()\n\nReturn the current XML proxy definition\n"},
  {"GetProxyHints", PyvtkPVProxyDefinitionIterator_GetProxyHints, METH_VARARGS,
   "V.GetProxyHints() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetProxyHints()\n\nReturn the current XML proxy hints\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVProxyDefinitionIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVProxyDefinitionIterator", // tp_name
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
  PyvtkPVProxyDefinitionIterator_Doc, // tp_doc
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

PyObject *PyvtkPVProxyDefinitionIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVProxyDefinitionIterator_Type, PyvtkPVProxyDefinitionIterator_Methods,
    "vtkPVProxyDefinitionIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVProxyDefinitionIterator_Type;

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

void PyVTKAddFile_vtkPVProxyDefinitionIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVProxyDefinitionIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVProxyDefinitionIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

