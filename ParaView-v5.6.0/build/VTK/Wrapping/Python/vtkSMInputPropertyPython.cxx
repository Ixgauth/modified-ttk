// python wrapper for vtkSMInputProperty
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
#include "vtkSMProxy.h"
#include "vtkSMInputProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMInputProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMInputProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyProperty_ClassNew
extern "C" { PyObject *PyvtkSMProxyProperty_ClassNew(); }
#define DECLARED_PyvtkSMProxyProperty_ClassNew
#endif

static const char *PyvtkSMInputProperty_Doc =
  "vtkSMInputProperty - proxy representing inputs to a filter\n\n"
  "Superclass: vtkSMProxyProperty\n\n"
  "vtkSMInputProperty is a concrete sub-class of vtkSMProperty\n"
  "representing inputs to a filter (through vtkSMProxy). It is a special\n"
  "property that always calls AddInput on a vtkSMSourceProxy. The xml\n"
  "configuration for input proxy supports the following attributes:\n"
  "multiple_input: For an input port that connects multiple connections\n"
  "such as the input of an append filter. port_index: The input port to\n"
  "be used.\n"
  "@sa\n"
  "vtkSMInputProperty vtkSMSourceProxy\n\n";


static PyObject *
PyvtkSMInputProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMInputProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInputProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMInputProperty *tempr = vtkSMInputProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMInputProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInputProperty::NewInstance());

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
PyvtkSMInputProperty_SetMultipleInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultipleInput(temp0);
    }
    else
    {
      op->vtkSMInputProperty::SetMultipleInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetMultipleInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultipleInput() :
      op->vtkSMInputProperty::GetMultipleInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_AddInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSMInputProperty::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMInputProperty::SetInputConnection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_AddUncheckedInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUncheckedInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddUncheckedInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSMInputProperty::AddUncheckedInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetUncheckedInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetUncheckedInputConnection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMInputProperty::SetUncheckedInputConnection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetOutputPortForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOutputPortForConnection(temp0) :
      op->vtkSMInputProperty::GetOutputPortForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetUncheckedOutputPortForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedOutputPortForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetUncheckedOutputPortForConnection(temp0) :
      op->vtkSMInputProperty::GetUncheckedOutputPortForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPortIndex(temp0);
    }
    else
    {
      op->vtkSMInputProperty::SetPortIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSMInputProperty::GetPortIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMInputProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMInputProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMInputProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMInputProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMInputProperty\nC++: static vtkSMInputProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMInputProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMInputProperty\nC++: vtkSMInputProperty *NewInstance()\n\n"},
  {"SetMultipleInput", PyvtkSMInputProperty_SetMultipleInput, METH_VARARGS,
   "V.SetMultipleInput(int)\nC++: virtual void SetMultipleInput(int _arg)\n\nShould be set to true if the \"input port\" this property\nrepresents can accept multiple inputs (for example, an append\nfilter)\n"},
  {"GetMultipleInput", PyvtkSMInputProperty_GetMultipleInput, METH_VARARGS,
   "V.GetMultipleInput() -> int\nC++: virtual int GetMultipleInput()\n\nShould be set to true if the \"input port\" this property\nrepresents can accept multiple inputs (for example, an append\nfilter)\n"},
  {"AddInputConnection", PyvtkSMInputProperty_AddInputConnection, METH_VARARGS,
   "V.AddInputConnection(vtkSMProxy, int)\nC++: void AddInputConnection(vtkSMProxy *proxy,\n    unsigned int outputPort)\n\nAdd a proxy to the list of input proxies. The outputPort controls\nwhich outputPort will be used in connecting the pipeline. The\nproxy is added with corresponding Add and Set methods and can be\nremoved with RemoveXXX() methods as usual.\n"},
  {"SetInputConnection", PyvtkSMInputProperty_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkSMProxy, int)\nC++: void SetInputConnection(unsigned int idx, vtkSMProxy *proxy,\n    unsigned int outputPort)\n\nAdd a proxy to the list of input proxies. The outputPort controls\nwhich outputPort will be used in connecting the pipeline. The\nproxy is added with corresponding Add and Set methods and can be\nremoved with RemoveXXX() methods as usual.\n"},
  {"AddUncheckedInputConnection", PyvtkSMInputProperty_AddUncheckedInputConnection, METH_VARARGS,
   "V.AddUncheckedInputConnection(vtkSMProxy, int)\nC++: void AddUncheckedInputConnection(vtkSMProxy *proxy,\n    unsigned int outputPort)\n\n"},
  {"SetUncheckedInputConnection", PyvtkSMInputProperty_SetUncheckedInputConnection, METH_VARARGS,
   "V.SetUncheckedInputConnection(int, vtkSMProxy, int)\nC++: void SetUncheckedInputConnection(unsigned int idx,\n    vtkSMProxy *proxy, unsigned int inputPort)\n\n"},
  {"GetOutputPortForConnection", PyvtkSMInputProperty_GetOutputPortForConnection, METH_VARARGS,
   "V.GetOutputPortForConnection(int) -> int\nC++: unsigned int GetOutputPortForConnection(unsigned int idx)\n\nGiven an index for a connection (proxy), returns which output\nport is used to connect the pipeline.\n"},
  {"GetUncheckedOutputPortForConnection", PyvtkSMInputProperty_GetUncheckedOutputPortForConnection, METH_VARARGS,
   "V.GetUncheckedOutputPortForConnection(int) -> int\nC++: unsigned int GetUncheckedOutputPortForConnection(\n    unsigned int idx)\n\nGiven an index for a connection (proxy), returns which output\nport is used to connect the pipeline.\n"},
  {"SetPortIndex", PyvtkSMInputProperty_SetPortIndex, METH_VARARGS,
   "V.SetPortIndex(int)\nC++: virtual void SetPortIndex(int _arg)\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {"GetPortIndex", PyvtkSMInputProperty_GetPortIndex, METH_VARARGS,
   "V.GetPortIndex() -> int\nC++: virtual int GetPortIndex()\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMInputProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMInputProperty", // tp_name
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
  PyvtkSMInputProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMInputProperty_StaticNew()
{
  return vtkSMInputProperty::New();
}

PyObject *PyvtkSMInputProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMInputProperty_Type, PyvtkSMInputProperty_Methods,
    "vtkSMInputProperty",
 &PyvtkSMInputProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMInputProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxyProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMInputProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMInputProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMInputProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

