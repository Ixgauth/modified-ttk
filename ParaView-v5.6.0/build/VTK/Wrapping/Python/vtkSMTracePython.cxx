// python wrapper for vtkSMTrace
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
#include "vtkStdString.h"
#include "vtkSMTrace.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTrace(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTrace_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMTrace_Doc =
  "vtkSMTrace - vtkSMTrace is used to produce Python trace in the\nParaView application.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMTrace is used to produce Python trace in the ParaView\n"
  "application. To start/stop trace, use the static API\n"
  "vtkSMTrace::StartTrace() and vtkSMTrace::StopTrace(). That sets up\n"
  "the vtkSMTrace instance used as the ActiveTracer. You can setup\n"
  "configuration parameters on the vtkSMTrace instance returned by\n"
  "vtkSMTrace::StartTrace(). The configuration parameters control\n"
  "various aspects of the trace.\n\n"
  "To effective tracing, the application logic should explicitly trace\n"
  "traceable actions by using the SM_SCOPED_TRACE() macro. This macro\n"
  "will have any effect only when there's an ActiveTracer setup i.e\n"
  "tracing is in effect. The result on using SM_SCOPED_TRACE() when\n"
  "tracing is active, is to crate a Python class instance. The name of\n"
  "the class is the argument to SM_SCOPED_TRACE() and the class is\n"
  "defined in paraview.smtrace module. There are various classes defined\n"
  "for tracing specific actions like Show, RegisterViewProxy, and\n"
  "generic actions like PropertiesModified. Keyword or positional\n"
  "arguments can be passed to the constructor using the following the\n"
  "syntax:\n\n"
  "{.cpp}\n"
  "   // pass keyword arguments.\n"
  "   SM_SCOPED_TRACE(PropertiesModified)\n"
  "               .arg(\"proxy\", aProxy)\n"
  "               .arg(\"comment\", \"some comment\");\n\n\n"
  "   // pass positional arguments.\n"
  "   SM_SCOPED_TRACE(PropertiesModified)\n"
  "               .arg(aProxy)\n"
  "               .arg(\"some comment\");\n\n\n"
  "   // mixing positional and keyword arguments.\n"
  "   SM_SCOPED_TRACE(PropertiesModified)\n"
  "               .arg(aProxy)\n"
  "               .arg(\"comment\", \"some comment\");\n\n"
  "The constructed class instance is finalized and deleted when the\n"
  "temporary variable created by the macro goes out of scope (hence the\n"
  "name SM_SCOPED_TRACE).\n\n";


static PyObject *
PyvtkSMTrace_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTrace::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTrace::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTrace *tempr = vtkSMTrace::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTrace *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTrace::NewInstance());

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
PyvtkSMTrace_GetActiveTracer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveTracer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMTrace *tempr = vtkSMTrace::GetActiveTracer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_StartTrace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StartTrace");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkSMTrace *tempr = vtkSMTrace::StartTrace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_StopTrace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StopTrace");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStdString tempr = vtkSMTrace::StopTrace();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_SetTraceXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraceXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTraceXMLDefaults(temp0);
    }
    else
    {
      op->vtkSMTrace::SetTraceXMLDefaults(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetTraceXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraceXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTraceXMLDefaults() :
      op->vtkSMTrace::GetTraceXMLDefaults());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_SetLogTraceToStdout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogTraceToStdout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogTraceToStdout(temp0);
    }
    else
    {
      op->vtkSMTrace::SetLogTraceToStdout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetLogTraceToStdout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogTraceToStdout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogTraceToStdout() :
      op->vtkSMTrace::GetLogTraceToStdout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_SetFullyTraceSupplementalProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullyTraceSupplementalProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullyTraceSupplementalProxies(temp0);
    }
    else
    {
      op->vtkSMTrace::SetFullyTraceSupplementalProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetFullyTraceSupplementalProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullyTraceSupplementalProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFullyTraceSupplementalProxies() :
      op->vtkSMTrace::GetFullyTraceSupplementalProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_SetPropertiesToTraceOnCreate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesToTraceOnCreate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropertiesToTraceOnCreate(temp0);
    }
    else
    {
      op->vtkSMTrace::SetPropertiesToTraceOnCreate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreateMinValue() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreateMaxValue() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreate() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetCurrentTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetCurrentTrace() :
      op->vtkSMTrace::GetCurrentTrace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTrace_GetState(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetState");

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStdString tempr = vtkSMTrace::GetState(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTrace_Methods[] = {
  {"IsTypeOf", PyvtkSMTrace_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTrace_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTrace_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTrace\nC++: static vtkSMTrace *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTrace_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTrace\nC++: vtkSMTrace *NewInstance()\n\n"},
  {"GetActiveTracer", PyvtkSMTrace_GetActiveTracer, METH_VARARGS,
   "V.GetActiveTracer() -> vtkSMTrace\nC++: static vtkSMTrace *GetActiveTracer()\n\nProvides access to the \"active\" tracer. There can only be one\nactive tracer in the application currently.\n"},
  {"StartTrace", PyvtkSMTrace_StartTrace, METH_VARARGS,
   "V.StartTrace(string) -> vtkSMTrace\nC++: static vtkSMTrace *StartTrace(const char *preamble=nullptr)\n\nMethods to start/stop tracing. This will create a new instance of\nvtkSMTrace and set that up as the active tracer. If an active\ntracer is already present, then this will simply return the\ncurrent active tracer.\n\n@arg `preamble` non-null string to use as the header for the\ngenerated\n     trace. If nullptr, then a default preamble using ParaView\nversion\n     number will be used. If empty string, then no preamble will\n     be added added.\n"},
  {"StopTrace", PyvtkSMTrace_StopTrace, METH_VARARGS,
   "V.StopTrace() -> string\nC++: static vtkStdString StopTrace()\n\nStop trace and return the generated trace script. This will also\ndestroy the active tracer.\n"},
  {"SetTraceXMLDefaults", PyvtkSMTrace_SetTraceXMLDefaults, METH_VARARGS,
   "V.SetTraceXMLDefaults(bool)\nC++: virtual void SetTraceXMLDefaults(bool _arg)\n\nGet/Set whether all properties should be saved for a proxy,\nincluding the default values. If false, only the properties that\nhave been modified from the XML-defaults will be logged.\n"},
  {"GetTraceXMLDefaults", PyvtkSMTrace_GetTraceXMLDefaults, METH_VARARGS,
   "V.GetTraceXMLDefaults() -> bool\nC++: virtual bool GetTraceXMLDefaults()\n\nGet/Set whether all properties should be saved for a proxy,\nincluding the default values. If false, only the properties that\nhave been modified from the XML-defaults will be logged.\n"},
  {"SetLogTraceToStdout", PyvtkSMTrace_SetLogTraceToStdout, METH_VARARGS,
   "V.SetLogTraceToStdout(bool)\nC++: virtual void SetLogTraceToStdout(bool _arg)\n\nLog generated trace to stdout as the trace is being generated\n(useful for debugging).\n"},
  {"GetLogTraceToStdout", PyvtkSMTrace_GetLogTraceToStdout, METH_VARARGS,
   "V.GetLogTraceToStdout() -> bool\nC++: virtual bool GetLogTraceToStdout()\n\nLog generated trace to stdout as the trace is being generated\n(useful for debugging).\n"},
  {"SetFullyTraceSupplementalProxies", PyvtkSMTrace_SetFullyTraceSupplementalProxies, METH_VARARGS,
   "V.SetFullyTraceSupplementalProxies(bool)\nC++: virtual void SetFullyTraceSupplementalProxies(bool _arg)\n\nSupplemental proxies are proxies that not explicitly created by\nthe user i.e. proxies such as lookup tables, scalar bars,\nanimation scene, etc. When set to true (default is false), the\nfirst time such a proxy is encountered in the trace, the trace\nwill log the property values on that proxy using the\nPropertiesToTraceOnCreate rules.\n"},
  {"GetFullyTraceSupplementalProxies", PyvtkSMTrace_GetFullyTraceSupplementalProxies, METH_VARARGS,
   "V.GetFullyTraceSupplementalProxies() -> bool\nC++: virtual bool GetFullyTraceSupplementalProxies()\n\nSupplemental proxies are proxies that not explicitly created by\nthe user i.e. proxies such as lookup tables, scalar bars,\nanimation scene, etc. When set to true (default is false), the\nfirst time such a proxy is encountered in the trace, the trace\nwill log the property values on that proxy using the\nPropertiesToTraceOnCreate rules.\n"},
  {"SetPropertiesToTraceOnCreate", PyvtkSMTrace_SetPropertiesToTraceOnCreate, METH_VARARGS,
   "V.SetPropertiesToTraceOnCreate(int)\nC++: virtual void SetPropertiesToTraceOnCreate(int _arg)\n\n"},
  {"GetPropertiesToTraceOnCreateMinValue", PyvtkSMTrace_GetPropertiesToTraceOnCreateMinValue, METH_VARARGS,
   "V.GetPropertiesToTraceOnCreateMinValue() -> int\nC++: virtual int GetPropertiesToTraceOnCreateMinValue()\n\n"},
  {"GetPropertiesToTraceOnCreateMaxValue", PyvtkSMTrace_GetPropertiesToTraceOnCreateMaxValue, METH_VARARGS,
   "V.GetPropertiesToTraceOnCreateMaxValue() -> int\nC++: virtual int GetPropertiesToTraceOnCreateMaxValue()\n\n"},
  {"GetPropertiesToTraceOnCreate", PyvtkSMTrace_GetPropertiesToTraceOnCreate, METH_VARARGS,
   "V.GetPropertiesToTraceOnCreate() -> int\nC++: virtual int GetPropertiesToTraceOnCreate()\n\n"},
  {"GetCurrentTrace", PyvtkSMTrace_GetCurrentTrace, METH_VARARGS,
   "V.GetCurrentTrace() -> string\nC++: vtkStdString GetCurrentTrace()\n\nReturn the current trace.\n"},
  {"GetState", PyvtkSMTrace_GetState, METH_VARARGS,
   "V.GetState(int, bool) -> string\nC++: static vtkStdString GetState(int propertiesToTraceOnCreate,\n    bool skipHiddenRepresentations)\n\nSave a Python state for the application and return it. Note this\ncannot be called when tracing is active.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTrace_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMTrace", // tp_name
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
  PyvtkSMTrace_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTrace_StaticNew()
{
  return vtkSMTrace::New();
}

PyObject *PyvtkSMTrace_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTrace_Type, PyvtkSMTrace_Methods,
    "vtkSMTrace",
 &PyvtkSMTrace_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTrace_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "RECORD_ALL_PROPERTIES", vtkSMTrace::RECORD_ALL_PROPERTIES },
        { "RECORD_MODIFIED_PROPERTIES", vtkSMTrace::RECORD_MODIFIED_PROPERTIES },
        { "RECORD_USER_MODIFIED_PROPERTIES", vtkSMTrace::RECORD_USER_MODIFIED_PROPERTIES },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTrace(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTrace_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTrace", o) != 0)
  {
    Py_DECREF(o);
  }

}

