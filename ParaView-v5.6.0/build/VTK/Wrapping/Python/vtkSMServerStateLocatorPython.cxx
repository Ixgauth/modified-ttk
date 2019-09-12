// python wrapper for vtkSMServerStateLocator
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
#include "vtkSMServerStateLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMServerStateLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMServerStateLocator_ClassNew(); }

#ifndef DECLARED_PyvtkSMStateLocator_ClassNew
extern "C" { PyObject *PyvtkSMStateLocator_ClassNew(); }
#define DECLARED_PyvtkSMStateLocator_ClassNew
#endif

static const char *PyvtkSMServerStateLocator_Doc =
  "vtkSMServerStateLocator - Class used to retrieve a given message\nstate based on its GlobalID from the DataServer.\n\n"
  "Superclass: vtkSMStateLocator\n\n"
  "Retrieve a given state from the server.\n\n";


static PyObject *
PyvtkSMServerStateLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMServerStateLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMServerStateLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMServerStateLocator *tempr = vtkSMServerStateLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMServerStateLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMServerStateLocator::NewInstance());

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
PyvtkSMServerStateLocator_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMServerStateLocator::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMServerStateLocator::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_FindState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  unsigned int temp0;
  vtkSMMessage *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMMessage") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->FindState(temp0, temp1, temp2) :
      op->vtkSMServerStateLocator::FindState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMServerStateLocator_Methods[] = {
  {"IsTypeOf", PyvtkSMServerStateLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMServerStateLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMServerStateLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMServerStateLocator\nC++: static vtkSMServerStateLocator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMServerStateLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMServerStateLocator\nC++: vtkSMServerStateLocator *NewInstance()\n\n"},
  {"GetSession", PyvtkSMServerStateLocator_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkSMSession\nC++: vtkSMSession *GetSession()\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {"SetSession", PyvtkSMServerStateLocator_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {"FindState", PyvtkSMServerStateLocator_FindState, METH_VARARGS,
   "V.FindState(int, vtkSMMessage, bool) -> bool\nC++: bool FindState(vtkTypeUInt32 globalID,\n    vtkSMMessage *stateToFill, bool useParent) override;\n\nFill the provided State message with the state found inside the\ncurrent locator or one of its parent. The method return true if\nthe state was successfully filled. In that case useParent is not\nused and is set to false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMServerStateLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMServerStateLocator", // tp_name
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
  PyvtkSMServerStateLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMServerStateLocator_StaticNew()
{
  return vtkSMServerStateLocator::New();
}

PyObject *PyvtkSMServerStateLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMServerStateLocator_Type, PyvtkSMServerStateLocator_Methods,
    "vtkSMServerStateLocator",
 &PyvtkSMServerStateLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMServerStateLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMStateLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMServerStateLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMServerStateLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMServerStateLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

