// python wrapper for vtkSMProxyIterator
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
#include "vtkSMProxyIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyIterator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyIterator_Doc =
  "vtkSMProxyIterator - iterates over all registered proxies (and groups)\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyIterator iterates over all proxies registered with the\n"
  "proxy manager. It can also iterate over groups.\n"
  "@sa\n"
  "vtkSMProxy vtkSMProxyManager\n\n";

static PyTypeObject PyvtkSMProxyIterator_TraversalMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyIterator.TraversalMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMProxyIterator_TraversalMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMProxyIterator_TraversalMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyIterator_TraversalMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMProxyIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyIterator *tempr = vtkSMProxyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyIterator::NewInstance());

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
PyvtkSMProxyIterator_SetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
  {
    if (ap.IsBound())
    {
      op->SetSessionProxyManager(temp0);
    }
    else
    {
      op->vtkSMProxyIterator::SetSessionProxyManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

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
      op->vtkSMProxyIterator::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_Begin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Begin();
    }
    else
    {
      op->vtkSMProxyIterator::Begin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyIterator_Begin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Begin(temp0);
    }
    else
    {
      op->vtkSMProxyIterator::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyIterator_Begin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMProxyIterator_Begin_s1(self, args);
    case 1:
      return PyvtkSMProxyIterator_Begin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Begin");
  return nullptr;
}



static PyObject *
PyvtkSMProxyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMProxyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkSMProxyIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGroup() :
      op->vtkSMProxyIterator::GetGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMProxyIterator::GetKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyIterator::GetProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkSMProxyIterator::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMProxyIterator::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToGroupsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToGroupsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToGroupsOnly();
    }
    else
    {
      op->vtkSMProxyIterator::SetModeToGroupsOnly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToOneGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToOneGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToOneGroup();
    }
    else
    {
      op->vtkSMProxyIterator::SetModeToOneGroup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToAll();
    }
    else
    {
      op->vtkSMProxyIterator::SetModeToAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetSkipPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipPrototypes(temp0);
    }
    else
    {
      op->vtkSMProxyIterator::SetSkipPrototypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetSkipPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSkipPrototypes() :
      op->vtkSMProxyIterator::GetSkipPrototypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SkipPrototypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipPrototypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipPrototypesOn();
    }
    else
    {
      op->vtkSMProxyIterator::SkipPrototypesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SkipPrototypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipPrototypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipPrototypesOff();
    }
    else
    {
      op->vtkSMProxyIterator::SkipPrototypesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyIterator_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyIterator\nC++: static vtkSMProxyIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyIterator\nC++: vtkSMProxyIterator *NewInstance()\n\n"},
  {"SetSessionProxyManager", PyvtkSMProxyIterator_SetSessionProxyManager, METH_VARARGS,
   "V.SetSessionProxyManager(vtkSMSessionProxyManager)\nC++: void SetSessionProxyManager(vtkSMSessionProxyManager *)\n\nOverride the set session so the SessionProxyManager could be\ncache for\n"},
  {"SetSession", PyvtkSMProxyIterator_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nConvenience method. Internally calls\nthis->SetSessionProxyManager(session->GetSessionProxyManager());\n"},
  {"Begin", PyvtkSMProxyIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: void Begin()\nV.Begin(string)\nC++: void Begin(const char *groupName)\n\nGo to the beginning of the collection.\n"},
  {"IsAtEnd", PyvtkSMProxyIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nIs the iterator pointing past the last element?\n"},
  {"Next", PyvtkSMProxyIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next()\n\nMove to the next property.\n"},
  {"GetGroup", PyvtkSMProxyIterator_GetGroup, METH_VARARGS,
   "V.GetGroup() -> string\nC++: const char *GetGroup()\n\nGet the group at the current iterator location.\n"},
  {"GetKey", PyvtkSMProxyIterator_GetKey, METH_VARARGS,
   "V.GetKey() -> string\nC++: const char *GetKey()\n\nGet the key (proxy name) at the current iterator location.\n"},
  {"GetProxy", PyvtkSMProxyIterator_GetProxy, METH_VARARGS,
   "V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nGet the proxy at the current iterator location.\n"},
  {"SetMode", PyvtkSMProxyIterator_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {"GetMode", PyvtkSMProxyIterator_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {"SetModeToGroupsOnly", PyvtkSMProxyIterator_SetModeToGroupsOnly, METH_VARARGS,
   "V.SetModeToGroupsOnly()\nC++: void SetModeToGroupsOnly()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {"SetModeToOneGroup", PyvtkSMProxyIterator_SetModeToOneGroup, METH_VARARGS,
   "V.SetModeToOneGroup()\nC++: void SetModeToOneGroup()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {"SetModeToAll", PyvtkSMProxyIterator_SetModeToAll, METH_VARARGS,
   "V.SetModeToAll()\nC++: void SetModeToAll()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {"SetSkipPrototypes", PyvtkSMProxyIterator_SetSkipPrototypes, METH_VARARGS,
   "V.SetSkipPrototypes(bool)\nC++: virtual void SetSkipPrototypes(bool _arg)\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {"GetSkipPrototypes", PyvtkSMProxyIterator_GetSkipPrototypes, METH_VARARGS,
   "V.GetSkipPrototypes() -> bool\nC++: virtual bool GetSkipPrototypes()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {"SkipPrototypesOn", PyvtkSMProxyIterator_SkipPrototypesOn, METH_VARARGS,
   "V.SkipPrototypesOn()\nC++: virtual void SkipPrototypesOn()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {"SkipPrototypesOff", PyvtkSMProxyIterator_SkipPrototypesOff, METH_VARARGS,
   "V.SkipPrototypesOff()\nC++: virtual void SkipPrototypesOff()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyIterator", // tp_name
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
  PyvtkSMProxyIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyIterator_StaticNew()
{
  return vtkSMProxyIterator::New();
}

PyObject *PyvtkSMProxyIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyIterator_Type, PyvtkSMProxyIterator_Methods,
    "vtkSMProxyIterator",
 &PyvtkSMProxyIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMProxyIterator_TraversalMode_Type);
  PyvtkSMProxyIterator_TraversalMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMProxyIterator_TraversalMode_Type);

  o = (PyObject *)&PyvtkSMProxyIterator_TraversalMode_Type;
  if (PyDict_SetItemString(d, "TraversalMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMProxyIterator::TraversalMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "GROUPS_ONLY", vtkSMProxyIterator::GROUPS_ONLY },
        { "ONE_GROUP", vtkSMProxyIterator::ONE_GROUP },
        { "ALL", vtkSMProxyIterator::ALL },
      };

    o = PyvtkSMProxyIterator_TraversalMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

