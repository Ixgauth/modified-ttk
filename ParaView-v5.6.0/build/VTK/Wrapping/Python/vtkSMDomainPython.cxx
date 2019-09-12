// python wrapper for vtkSMDomain
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
#include "vtkSMDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMSessionObject_ClassNew
extern "C" { PyObject *PyvtkSMSessionObject_ClassNew(); }
#define DECLARED_PyvtkSMSessionObject_ClassNew
#endif

static const char *PyvtkSMDomain_Doc =
  "vtkSMDomain - represents the possible values a property can have\n\n"
  "Superclass: vtkSMSessionObject\n\n"
  "vtkSMDomain is an abstract class that describes the \"domain\" of a a\n"
  "widget. A domain is a collection of possible values a property can\n"
  "have.\n\n"
  "Each domain can depend on one or more properties to compute it's\n"
  "values. This are called \"required\" properties and can be set in the\n"
  "XML configuration file.\n\n"
  "Every time a domain changes it must fire a\n"
  "vtkCommand::DomainModifiedEvent. Applications may decide to update\n"
  "the UI every-time the domain changes. As a result, domains ideally\n"
  "should only fire that event when their values change for real not\n"
  "just potentially changed.\n\n";


static PyObject *
PyvtkSMDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDomain *tempr = vtkSMDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDomain::NewInstance());

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
PyvtkSMDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = op->IsInDomain(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAnimationValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMDomain::SetAnimationValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMDomain::GetXMLName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_GetIsOptional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOptional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsOptional() :
      op->vtkSMDomain::GetIsOptional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDomain::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomain_GetInputDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetInputDataInformation(temp0, temp1) :
      op->vtkSMDomain::GetInputDataInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDomain\nC++: static vtkSMDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDomain\nC++: vtkSMDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\n\nIs the (unchecked) value of the property in the domain?\nOverwritten by sub-classes.\n"},
  {"Update", PyvtkSMDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *requestingProperty)\n\nUpdate self based on the \"unchecked\" values of all required\nproperties. Subclasses must override this method to update the\ndomain based on the requestingProperty (and/or other required\nproperties).\n"},
  {"SetAnimationValue", PyvtkSMDomain_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(vtkSMProperty, int, float)\nC++: virtual void SetAnimationValue(vtkSMProperty *, int index,\n    double value)\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {"SetDefaultValues", PyvtkSMDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. If\nuse_unchecked_values is true, the property's unchecked values\nwill be changed by this method. Returns 1 if the domain updated\nthe property. Default implementation does nothing.\n"},
  {"GetXMLName", PyvtkSMDomain_GetXMLName, METH_VARARGS,
   "V.GetXMLName() -> string\nC++: virtual char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the\ndomain.\n"},
  {"GetIsOptional", PyvtkSMDomain_GetIsOptional, METH_VARARGS,
   "V.GetIsOptional() -> bool\nC++: virtual bool GetIsOptional()\n\nWhen the IsOptional flag is set, IsInDomain() always returns\ntrue. This is used by properties that use domains to provide\ninformation (a suggestion to the gui for example) as opposed to\nrestrict their values.\n"},
  {"GetProperty", PyvtkSMDomain_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty()\n\nProvides access to the vtkSMProperty on which this domain is\nhooked up.\n"},
  {"GetInputDataInformation", PyvtkSMDomain_GetInputDataInformation, METH_VARARGS,
   "V.GetInputDataInformation(string, int) -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetInputDataInformation(\n    const char *function, int index=0)\n\nHelper method to get vtkPVDataInformation from input proxy\nconnected to the required property with the given function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDomain", // tp_name
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
  PyvtkSMDomain_Doc, // tp_doc
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

PyObject *PyvtkSMDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDomain_Type, PyvtkSMDomain_Methods,
    "vtkSMDomain",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSessionObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

