// python wrapper for vtkSIInputProperty
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
#include "vtkSIInputProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIInputProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIInputProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSIProxyProperty_ClassNew
extern "C" { PyObject *PyvtkSIProxyProperty_ClassNew(); }
#define DECLARED_PyvtkSIProxyProperty_ClassNew
#endif

static const char *PyvtkSIInputProperty_Doc =
  "vtkSIInputProperty - ServerSide Property use to set vtkOutputPort as\nmethod parameter.\n\n"
  "Superclass: vtkSIProxyProperty\n\n"
  "For that we need the object on which we should get the Port and its\n"
  "port number.\n\n";


static PyObject *
PyvtkSIInputProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIInputProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIInputProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIInputProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIInputProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIInputProperty *tempr = vtkSIInputProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIInputProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIInputProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIInputProperty::NewInstance());

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
PyvtkSIInputProperty_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSIInputProperty::GetPortIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIInputProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIInputProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIInputProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIInputProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIInputProperty\nC++: static vtkSIInputProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIInputProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIInputProperty\nC++: vtkSIInputProperty *NewInstance()\n\n"},
  {"GetPortIndex", PyvtkSIInputProperty_GetPortIndex, METH_VARARGS,
   "V.GetPortIndex() -> int\nC++: virtual int GetPortIndex()\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIInputProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIInputProperty", // tp_name
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
  PyvtkSIInputProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIInputProperty_StaticNew()
{
  return vtkSIInputProperty::New();
}

PyObject *PyvtkSIInputProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIInputProperty_Type, PyvtkSIInputProperty_Methods,
    "vtkSIInputProperty",
 &PyvtkSIInputProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSIInputProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIProxyProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIInputProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIInputProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIInputProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

