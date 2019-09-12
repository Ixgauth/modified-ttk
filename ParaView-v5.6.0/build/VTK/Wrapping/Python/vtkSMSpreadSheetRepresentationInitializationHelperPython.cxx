// python wrapper for vtkSMSpreadSheetRepresentationInitializationHelper
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
#include "vtkSMSpreadSheetRepresentationInitializationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSpreadSheetRepresentationInitializationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSpreadSheetRepresentationInitializationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
extern "C" { PyObject *PyvtkSMProxyInitializationHelper_ClassNew(); }
#define DECLARED_PyvtkSMProxyInitializationHelper_ClassNew
#endif

static const char *PyvtkSMSpreadSheetRepresentationInitializationHelper_Doc =
  "vtkSMSpreadSheetRepresentationInitializationHelper - initialization\nhelper for SpreadSheetRepresentation proxy.\n\n"
  "Superclass: vtkSMProxyInitializationHelper\n\n"
  "vtkSMSpreadSheetRepresentationInitializationHelper helps\n"
  "initialization of properties on the SpreadSheetRepresentation proxy.\n\n"
  "Currently, this handles choosing a good default value for\n"
  "\"CompositeDataSetIndex\" property. We have plans of refactoring the\n"
  "spreadsheet representation to support partial arrays when showing\n"
  "multiple blocks in a composite dataset at the same time. Until then,\n"
  "however, if the default is the root index, then for filters like the\n"
  "statics filters, we end up with an empty view. This helper avoids\n"
  "that.\n\n";


static PyObject *
PyvtkSMSpreadSheetRepresentationInitializationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSpreadSheetRepresentationInitializationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetRepresentationInitializationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationInitializationHelper *op = static_cast<vtkSMSpreadSheetRepresentationInitializationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSpreadSheetRepresentationInitializationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetRepresentationInitializationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSpreadSheetRepresentationInitializationHelper *tempr = vtkSMSpreadSheetRepresentationInitializationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetRepresentationInitializationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationInitializationHelper *op = static_cast<vtkSMSpreadSheetRepresentationInitializationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSpreadSheetRepresentationInitializationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSpreadSheetRepresentationInitializationHelper::NewInstance());

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
PyvtkSMSpreadSheetRepresentationInitializationHelper_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationInitializationHelper *op = static_cast<vtkSMSpreadSheetRepresentationInitializationHelper *>(vp);

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
      op->vtkSMSpreadSheetRepresentationInitializationHelper::PostInitializeProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSpreadSheetRepresentationInitializationHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMSpreadSheetRepresentationInitializationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSpreadSheetRepresentationInitializationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSpreadSheetRepresentationInitializationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMSpreadSheetRepresentationInitializationHelper\nC++: static vtkSMSpreadSheetRepresentationInitializationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSpreadSheetRepresentationInitializationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance()\n    -> vtkSMSpreadSheetRepresentationInitializationHelper\nC++: vtkSMSpreadSheetRepresentationInitializationHelper *NewInstance(\n    )\n\n"},
  {"PostInitializeProxy", PyvtkSMSpreadSheetRepresentationInitializationHelper_PostInitializeProxy, METH_VARARGS,
   "V.PostInitializeProxy(vtkSMProxy, vtkPVXMLElement, int)\nC++: void PostInitializeProxy(vtkSMProxy *, vtkPVXMLElement *,\n    vtkMTimeType) override;\n\nCalled during\nvtkSMParaViewPipelineController::PostInitializeProxy() to\ninitialize a proxy.\n@param proxy : the proxy being initialized.\n@param xml : the XML configuration from this helper from this\n    Hints for the\nproxy. This makes it possible to pass additional configuration\nparameters to the initialization helper.\n@param initializationTimeStamp: the timestamp for the proxy\n    initialization.\nGenerally, if a property on the proxy has MTime greater than\ninitializationTimeStamp, the initializer should not modify the\nproperty since it was explicitly set by the user during\ninitialization.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSpreadSheetRepresentationInitializationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMSpreadSheetRepresentationInitializationHelper", // tp_name
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
  PyvtkSMSpreadSheetRepresentationInitializationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSpreadSheetRepresentationInitializationHelper_StaticNew()
{
  return vtkSMSpreadSheetRepresentationInitializationHelper::New();
}

PyObject *PyvtkSMSpreadSheetRepresentationInitializationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSpreadSheetRepresentationInitializationHelper_Type, PyvtkSMSpreadSheetRepresentationInitializationHelper_Methods,
    "vtkSMSpreadSheetRepresentationInitializationHelper",
 &PyvtkSMSpreadSheetRepresentationInitializationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSpreadSheetRepresentationInitializationHelper_Type;

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

void PyVTKAddFile_vtkSMSpreadSheetRepresentationInitializationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSpreadSheetRepresentationInitializationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSpreadSheetRepresentationInitializationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

