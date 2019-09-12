// python wrapper for vtkSMPropertyGroup
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
#include "vtkSMPropertyGroup.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPropertyGroup(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPropertyGroup_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMPropertyGroup_Doc =
  "vtkSMPropertyGroup - no description provided.\n\n"
  "Superclass: vtkSMObject\n\n"
;


static PyObject *
PyvtkSMPropertyGroup_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPropertyGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPropertyGroup *tempr = vtkSMPropertyGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyGroup::NewInstance());

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
PyvtkSMPropertyGroup_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkSMPropertyGroup::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSMPropertyGroup::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMLLabel(temp0);
    }
    else
    {
      op->vtkSMPropertyGroup::SetXMLLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMPropertyGroup::GetXMLLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanelWidget(temp0);
    }
    else
    {
      op->vtkSMPropertyGroup::SetPanelWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPanelWidget() :
      op->vtkSMPropertyGroup::GetPanelWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanelVisibility(temp0);
    }
    else
    {
      op->vtkSMPropertyGroup::SetPanelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibility() :
      op->vtkSMPropertyGroup::GetPanelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkSMPropertyGroup::IsEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_AddProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  vtkSMProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->AddProperty(temp0, temp1);
    }
    else
    {
      op->vtkSMPropertyGroup::AddProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMPropertyGroup::GetProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyGroup_GetProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMPropertyGroup::GetProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyGroup_GetProperty_Methods[] = {
  {nullptr, PyvtkSMPropertyGroup_GetProperty_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMPropertyGroup_GetProperty_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyGroup_GetProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyGroup_GetProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProperty");
  return nullptr;
}



static PyObject *
PyvtkSMPropertyGroup_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFunction(temp0) :
      op->vtkSMPropertyGroup::GetFunction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetNumberOfProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProperties() :
      op->vtkSMPropertyGroup::GetNumberOfProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMPropertyGroup::GetDocumentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMPropertyGroup::GetHints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyGroup_Methods[] = {
  {"IsTypeOf", PyvtkSMPropertyGroup_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPropertyGroup_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPropertyGroup_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPropertyGroup\nC++: static vtkSMPropertyGroup *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPropertyGroup_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPropertyGroup\nC++: vtkSMPropertyGroup *NewInstance()\n\n"},
  {"SetName", PyvtkSMPropertyGroup_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSets the name of the property group to name.\n"},
  {"GetName", PyvtkSMPropertyGroup_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nReturns the name of the property group.\n"},
  {"SetXMLLabel", PyvtkSMPropertyGroup_SetXMLLabel, METH_VARARGS,
   "V.SetXMLLabel(string)\nC++: virtual void SetXMLLabel(const char *_arg)\n\nSets the name of the property group to name.\n"},
  {"GetXMLLabel", PyvtkSMPropertyGroup_GetXMLLabel, METH_VARARGS,
   "V.GetXMLLabel() -> string\nC++: virtual char *GetXMLLabel()\n\nReturns the name of the property group.\n"},
  {"SetPanelWidget", PyvtkSMPropertyGroup_SetPanelWidget, METH_VARARGS,
   "V.SetPanelWidget(string)\nC++: virtual void SetPanelWidget(const char *_arg)\n\nSets the name of the panel widget to use for the property group.\n"},
  {"GetPanelWidget", PyvtkSMPropertyGroup_GetPanelWidget, METH_VARARGS,
   "V.GetPanelWidget() -> string\nC++: virtual char *GetPanelWidget()\n\nGets the name of the panel widget to use for the property group.\n"},
  {"SetPanelVisibility", PyvtkSMPropertyGroup_SetPanelVisibility, METH_VARARGS,
   "V.SetPanelVisibility(string)\nC++: virtual void SetPanelVisibility(const char *_arg)\n\nSets the panel visibility for the property group.\n\n\\see vtkSMProperty::SetPanelVisibility()\n"},
  {"GetPanelVisibility", PyvtkSMPropertyGroup_GetPanelVisibility, METH_VARARGS,
   "V.GetPanelVisibility() -> string\nC++: virtual char *GetPanelVisibility()\n\nReturns the panel visibility for the property group.\n"},
  {"IsEmpty", PyvtkSMPropertyGroup_IsEmpty, METH_VARARGS,
   "V.IsEmpty() -> bool\nC++: bool IsEmpty()\n\nReturns true if the property group contains zero properties.\n"},
  {"AddProperty", PyvtkSMPropertyGroup_AddProperty, METH_VARARGS,
   "V.AddProperty(string, vtkSMProperty)\nC++: void AddProperty(const char *function,\n    vtkSMProperty *property)\n\nAdds property to the group. function can be NULL.\n"},
  {"GetProperty", PyvtkSMPropertyGroup_GetProperty, METH_VARARGS,
   "V.GetProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetProperty(unsigned int index)\nV.GetProperty(string) -> vtkSMProperty\nC++: vtkSMProperty *GetProperty(const char *function)\n\nReturns the property at index.\n"},
  {"GetFunction", PyvtkSMPropertyGroup_GetFunction, METH_VARARGS,
   "V.GetFunction(vtkSMProperty) -> string\nC++: const char *GetFunction(vtkSMProperty *property)\n\nGiven property in the group, returns its function. Will return\nNULL if the property is not present in this group.\n"},
  {"GetNumberOfProperties", PyvtkSMPropertyGroup_GetNumberOfProperties, METH_VARARGS,
   "V.GetNumberOfProperties() -> int\nC++: unsigned int GetNumberOfProperties()\n\nReturns the number of properties in the group.\n"},
  {"GetDocumentation", PyvtkSMPropertyGroup_GetDocumentation, METH_VARARGS,
   "V.GetDocumentation() -> vtkSMDocumentation\nC++: virtual vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy.\n"},
  {"GetHints", PyvtkSMPropertyGroup_GetHints, METH_VARARGS,
   "V.GetHints() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define <Hints /> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPropertyGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPropertyGroup", // tp_name
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
  PyvtkSMPropertyGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPropertyGroup_StaticNew()
{
  return vtkSMPropertyGroup::New();
}

PyObject *PyvtkSMPropertyGroup_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPropertyGroup_Type, PyvtkSMPropertyGroup_Methods,
    "vtkSMPropertyGroup",
 &PyvtkSMPropertyGroup_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPropertyGroup_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPropertyGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPropertyGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPropertyGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

