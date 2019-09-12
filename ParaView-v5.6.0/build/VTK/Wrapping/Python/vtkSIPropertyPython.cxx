// python wrapper for vtkSIProperty
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
#include "vtkSIProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIProperty_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSIProperty_Doc =
  "vtkSIProperty - Basic ServerImplementation property used to call a\nmethod with no argument on a VTK object.\n\n"
  "Superclass: vtkObject\n\n"
  "If overridden, we naturally allow to call a method either to set or\n"
  "get a set of values.\n\n";


static PyObject *
PyvtkSIProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIProperty *tempr = vtkSIProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProperty::NewInstance());

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
PyvtkSIProperty_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSIProperty::GetXMLName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCommand() :
      op->vtkSIProperty::GetCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_GetInformationOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInformationOnly() :
      op->vtkSIProperty::GetInformationOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_GetRepeatable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRepeatable() :
      op->vtkSIProperty::GetRepeatable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_SetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsInternal(temp0);
    }
    else
    {
      op->vtkSIProperty::SetIsInternal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProperty_GetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsInternal() :
      op->vtkSIProperty::GetIsInternal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIProperty\nC++: static vtkSIProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIProperty\nC++: vtkSIProperty *NewInstance()\n\n"},
  {"GetXMLName", PyvtkSIProperty_GetXMLName, METH_VARARGS,
   "V.GetXMLName() -> string\nC++: virtual char *GetXMLName()\n\nThe name assigned by the xml parser. Used to get the property\nfrom a proxy.\n"},
  {"GetCommand", PyvtkSIProperty_GetCommand, METH_VARARGS,
   "V.GetCommand() -> string\nC++: virtual char *GetCommand()\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {"GetInformationOnly", PyvtkSIProperty_GetInformationOnly, METH_VARARGS,
   "V.GetInformationOnly() -> bool\nC++: virtual bool GetInformationOnly()\n\nIs InformationOnly is set to true, this property is used to get\ninformation from server instead of setting values.\n"},
  {"GetRepeatable", PyvtkSIProperty_GetRepeatable, METH_VARARGS,
   "V.GetRepeatable() -> bool\nC++: virtual bool GetRepeatable()\n\nIf repeatable, a property can have 1 or more values of the same\nkind. This ivar is configured when the xml file is read and is\nmainly useful for information (for example from python).\n"},
  {"SetIsInternal", PyvtkSIProperty_SetIsInternal, METH_VARARGS,
   "V.SetIsInternal(bool)\nC++: virtual void SetIsInternal(bool _arg)\n\nThis ivar is configured when the xml file is read and is mainly\nuseful to trigger a method call. Internal properties are not\nsaved in state\n"},
  {"GetIsInternal", PyvtkSIProperty_GetIsInternal, METH_VARARGS,
   "V.GetIsInternal() -> bool\nC++: virtual bool GetIsInternal()\n\nThis ivar is configured when the xml file is read and is mainly\nuseful to trigger a method call. Internal properties are not\nsaved in state\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIProperty", // tp_name
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
  PyvtkSIProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIProperty_StaticNew()
{
  return vtkSIProperty::New();
}

PyObject *PyvtkSIProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIProperty_Type, PyvtkSIProperty_Methods,
    "vtkSIProperty",
 &PyvtkSIProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSIProperty_Type;

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

void PyVTKAddFile_vtkSIProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

