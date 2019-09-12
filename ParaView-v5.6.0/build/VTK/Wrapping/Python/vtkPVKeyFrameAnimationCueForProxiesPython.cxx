// python wrapper for vtkPVKeyFrameAnimationCueForProxies
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
#include "vtkPVKeyFrameAnimationCueForProxies.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVKeyFrameAnimationCueForProxies(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVKeyFrameAnimationCueForProxies_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrameAnimationCue_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrameAnimationCue_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrameAnimationCue_ClassNew
#endif

static const char *PyvtkPVKeyFrameAnimationCueForProxies_Doc =
  "vtkPVKeyFrameAnimationCueForProxies -\nvtkPVKeyFrameAnimationCueForProxies extends vtkPVKeyFrameAnimationCue\nto update properties on proxies in SetAnimationValue().\n\n"
  "Superclass: vtkPVKeyFrameAnimationCue\n\n"
;


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVKeyFrameAnimationCueForProxies::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameAnimationCueForProxies::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVKeyFrameAnimationCueForProxies *tempr = vtkPVKeyFrameAnimationCueForProxies::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVKeyFrameAnimationCueForProxies *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameAnimationCueForProxies::NewInstance());

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
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedProxy(temp0);
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimatedProxy() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_RemoveAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAnimatedProxy();
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::RemoveAnimatedProxy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedPropertyName(temp0);
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedPropertyName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedPropertyName() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedPropertyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedDomainName(temp0);
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedDomainName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedDomainName() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedDomainName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginUpdateAnimationValues();
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::BeginUpdateAnimationValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAnimationValue(temp0, temp1);
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimationValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndUpdateAnimationValues();
    }
    else
    {
      op->vtkPVKeyFrameAnimationCueForProxies::EndUpdateAnimationValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameAnimationCueForProxies_Methods[] = {
  {"IsTypeOf", PyvtkPVKeyFrameAnimationCueForProxies_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVKeyFrameAnimationCueForProxies_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVKeyFrameAnimationCueForProxies_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVKeyFrameAnimationCueForProxies\nC++: static vtkPVKeyFrameAnimationCueForProxies *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVKeyFrameAnimationCueForProxies_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVKeyFrameAnimationCueForProxies\nC++: vtkPVKeyFrameAnimationCueForProxies *NewInstance()\n\n"},
  {"SetAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedProxy, METH_VARARGS,
   "V.SetAnimatedProxy(vtkSMProxy)\nC++: void SetAnimatedProxy(vtkSMProxy *)\n\nSet/Get the animated proxy.\n"},
  {"GetAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedProxy, METH_VARARGS,
   "V.GetAnimatedProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {"RemoveAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_RemoveAnimatedProxy, METH_VARARGS,
   "V.RemoveAnimatedProxy()\nC++: void RemoveAnimatedProxy()\n\n"},
  {"SetAnimatedPropertyName", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedPropertyName, METH_VARARGS,
   "V.SetAnimatedPropertyName(string)\nC++: virtual void SetAnimatedPropertyName(const char *_arg)\n\nSet/Get the animated property name.\n"},
  {"GetAnimatedPropertyName", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedPropertyName, METH_VARARGS,
   "V.GetAnimatedPropertyName() -> string\nC++: virtual char *GetAnimatedPropertyName()\n\nSet/Get the animated property name.\n"},
  {"SetAnimatedDomainName", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedDomainName, METH_VARARGS,
   "V.SetAnimatedDomainName(string)\nC++: virtual void SetAnimatedDomainName(const char *_arg)\n\nSet/Get the animated domain name.\n"},
  {"GetAnimatedDomainName", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedDomainName, METH_VARARGS,
   "V.GetAnimatedDomainName() -> string\nC++: virtual char *GetAnimatedDomainName()\n\nSet/Get the animated domain name.\n"},
  {"BeginUpdateAnimationValues", PyvtkPVKeyFrameAnimationCueForProxies_BeginUpdateAnimationValues, METH_VARARGS,
   "V.BeginUpdateAnimationValues()\nC++: void BeginUpdateAnimationValues() override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"SetAnimationValue", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(int, float)\nC++: void SetAnimationValue(int index, double value) override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"EndUpdateAnimationValues", PyvtkPVKeyFrameAnimationCueForProxies_EndUpdateAnimationValues, METH_VARARGS,
   "V.EndUpdateAnimationValues()\nC++: void EndUpdateAnimationValues() override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVKeyFrameAnimationCueForProxies_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVKeyFrameAnimationCueForProxies", // tp_name
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
  PyvtkPVKeyFrameAnimationCueForProxies_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVKeyFrameAnimationCueForProxies_StaticNew()
{
  return vtkPVKeyFrameAnimationCueForProxies::New();
}

PyObject *PyvtkPVKeyFrameAnimationCueForProxies_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVKeyFrameAnimationCueForProxies_Type, PyvtkPVKeyFrameAnimationCueForProxies_Methods,
    "vtkPVKeyFrameAnimationCueForProxies",
 &PyvtkPVKeyFrameAnimationCueForProxies_StaticNew);

  PyTypeObject *pytype = &PyvtkPVKeyFrameAnimationCueForProxies_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrameAnimationCue_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVKeyFrameAnimationCueForProxies(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVKeyFrameAnimationCueForProxies_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVKeyFrameAnimationCueForProxies", o) != 0)
  {
    Py_DECREF(o);
  }

}

