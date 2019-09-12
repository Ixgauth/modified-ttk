// python wrapper for vtkSMCSVProxiesInitializationHelper
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
#include "vtkSMCSVProxiesInitializationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCSVProxiesInitializationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCSVProxiesInitializationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
extern "C" { PyObject *PyvtkSMProxyInitializationHelper_ClassNew(); }
#define DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
#endif

static const char *PyvtkSMCSVProxiesInitializationHelper_Doc =
  "vtkSMCSVProxiesInitializationHelper - initialization helper for\n(writers, PCSVReader) proxy.\n\n"
  "Superclass: vtkSMProxyInitializationHelper\n\n"
  "vtkSMCSVProxiesInitializationHelper is an initialization helper for\n"
  "the PCSVReader or PCSVWriter proxy that sets up the delimiter to use\n"
  "based on the file extension. If the file extension is .txt or .tsv\n"
  "then '\\t' is set as the delimiter.\n\n";


static PyObject *
PyvtkSMCSVProxiesInitializationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCSVProxiesInitializationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCSVProxiesInitializationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVProxiesInitializationHelper *op = static_cast<vtkSMCSVProxiesInitializationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCSVProxiesInitializationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCSVProxiesInitializationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCSVProxiesInitializationHelper *tempr = vtkSMCSVProxiesInitializationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCSVProxiesInitializationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVProxiesInitializationHelper *op = static_cast<vtkSMCSVProxiesInitializationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCSVProxiesInitializationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCSVProxiesInitializationHelper::NewInstance());

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
PyvtkSMCSVProxiesInitializationHelper_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVProxiesInitializationHelper *op = static_cast<vtkSMCSVProxiesInitializationHelper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->PostInitializeProxy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMCSVProxiesInitializationHelper::PostInitializeProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCSVProxiesInitializationHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMCSVProxiesInitializationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCSVProxiesInitializationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCSVProxiesInitializationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMCSVProxiesInitializationHelper\nC++: static vtkSMCSVProxiesInitializationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCSVProxiesInitializationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCSVProxiesInitializationHelper\nC++: vtkSMCSVProxiesInitializationHelper *NewInstance()\n\n"},
  {"PostInitializeProxy", PyvtkSMCSVProxiesInitializationHelper_PostInitializeProxy, METH_VARARGS,
   "V.PostInitializeProxy(vtkSMProxy, vtkPVXMLElement, int)\nC++: void PostInitializeProxy(vtkSMProxy *, vtkPVXMLElement *,\n    vtkMTimeType) override;\n\nCalled during\nvtkSMParaViewPipelineController::PostInitializeProxy() to\ninitialize a proxy.\n@param proxy : the proxy being initialized.\n@param xml : the XML configuration from this helper from this\n    Hints for the\nproxy. This makes it possible to pass additional configuration\nparameters to the initialization helper.\n@param initializationTimeStamp: the timestamp for the proxy\n    initialization.\nGenerally, if a property on the proxy has MTime greater than\ninitializationTimeStamp, the initializer should not modify the\nproperty since it was explicitly set by the user during\ninitialization.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCSVProxiesInitializationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMCSVProxiesInitializationHelper", // tp_name
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
  PyvtkSMCSVProxiesInitializationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCSVProxiesInitializationHelper_StaticNew()
{
  return vtkSMCSVProxiesInitializationHelper::New();
}

PyObject *PyvtkSMCSVProxiesInitializationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCSVProxiesInitializationHelper_Type, PyvtkSMCSVProxiesInitializationHelper_Methods,
    "vtkSMCSVProxiesInitializationHelper",
 &PyvtkSMCSVProxiesInitializationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCSVProxiesInitializationHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxyInitializationHelper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCSVProxiesInitializationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCSVProxiesInitializationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCSVProxiesInitializationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

