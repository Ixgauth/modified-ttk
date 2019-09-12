// python wrapper for vtkSMXYChartRepresentationInitializationHelper
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
#include "vtkSMXYChartRepresentationInitializationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMXYChartRepresentationInitializationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMXYChartRepresentationInitializationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
extern "C" { PyObject *PyvtkSMProxyInitializationHelper_ClassNew(); }
#define DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
#endif

static const char *PyvtkSMXYChartRepresentationInitializationHelper_Doc =
  "vtkSMXYChartRepresentationInitializationHelper - initialization\nhelper for XYChartRepresentation proxy.\n\n"
  "Superclass: vtkSMProxyInitializationHelper\n\n"
  "vtkSMXYChartRepresentationInitializationHelper is an initialization\n"
  "helper for the XYChartRepresentation proxy that change default\n"
  "PlotCorner values in case the representation is added to a\n"
  "XYBarCharView.\n\n";


static PyObject *
PyvtkSMXYChartRepresentationInitializationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMXYChartRepresentationInitializationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMXYChartRepresentationInitializationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMXYChartRepresentationInitializationHelper *op = static_cast<vtkSMXYChartRepresentationInitializationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMXYChartRepresentationInitializationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMXYChartRepresentationInitializationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMXYChartRepresentationInitializationHelper *tempr = vtkSMXYChartRepresentationInitializationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMXYChartRepresentationInitializationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMXYChartRepresentationInitializationHelper *op = static_cast<vtkSMXYChartRepresentationInitializationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMXYChartRepresentationInitializationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMXYChartRepresentationInitializationHelper::NewInstance());

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
PyvtkSMXYChartRepresentationInitializationHelper_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMXYChartRepresentationInitializationHelper *op = static_cast<vtkSMXYChartRepresentationInitializationHelper *>(vp);

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
      op->vtkSMXYChartRepresentationInitializationHelper::PostInitializeProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMXYChartRepresentationInitializationHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMXYChartRepresentationInitializationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMXYChartRepresentationInitializationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMXYChartRepresentationInitializationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMXYChartRepresentationInitializationHelper\nC++: static vtkSMXYChartRepresentationInitializationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMXYChartRepresentationInitializationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMXYChartRepresentationInitializationHelper\nC++: vtkSMXYChartRepresentationInitializationHelper *NewInstance()\n\n"},
  {"PostInitializeProxy", PyvtkSMXYChartRepresentationInitializationHelper_PostInitializeProxy, METH_VARARGS,
   "V.PostInitializeProxy(vtkSMProxy, vtkPVXMLElement, int)\nC++: void PostInitializeProxy(vtkSMProxy *, vtkPVXMLElement *,\n    vtkMTimeType) override;\n\nCalled during\nvtkSMParaViewPipelineController::PostInitializeProxy() to\ninitialize a proxy.\n@param proxy : the proxy being initialized.\n@param xml : the XML configuration from this helper from this\n    Hints for the\nproxy. This makes it possible to pass additional configuration\nparameters to the initialization helper.\n@param initializationTimeStamp: the timestamp for the proxy\n    initialization.\nGenerally, if a property on the proxy has MTime greater than\ninitializationTimeStamp, the initializer should not modify the\nproperty since it was explicitly set by the user during\ninitialization.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMXYChartRepresentationInitializationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMXYChartRepresentationInitializationHelper", // tp_name
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
  PyvtkSMXYChartRepresentationInitializationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMXYChartRepresentationInitializationHelper_StaticNew()
{
  return vtkSMXYChartRepresentationInitializationHelper::New();
}

PyObject *PyvtkSMXYChartRepresentationInitializationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMXYChartRepresentationInitializationHelper_Type, PyvtkSMXYChartRepresentationInitializationHelper_Methods,
    "vtkSMXYChartRepresentationInitializationHelper",
 &PyvtkSMXYChartRepresentationInitializationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMXYChartRepresentationInitializationHelper_Type;

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

void PyVTKAddFile_vtkSMXYChartRepresentationInitializationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMXYChartRepresentationInitializationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMXYChartRepresentationInitializationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

