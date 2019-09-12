// python wrapper for vtkSMDocumentation
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
#include "vtkSMDocumentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDocumentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDocumentation_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMDocumentation_Doc =
  "vtkSMDocumentation - class providing access to the documentation for\na vtkSMProxy.\n\n"
  "Superclass: vtkSMObject\n\n"
  "Every proxy defined in the server manager XML can have documentation\n"
  "associated with it. This class provides access to the various types\n"
  "of documentation text for every proxy.\n\n";


static PyObject *
PyvtkSMDocumentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDocumentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDocumentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDocumentation *tempr = vtkSMDocumentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDocumentation::NewInstance());

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
PyvtkSMDocumentation_GetLongHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLongHelp() :
      op->vtkSMDocumentation::GetLongHelp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetShortHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShortHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShortHelp() :
      op->vtkSMDocumentation::GetShortHelp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkSMDocumentation::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_SetDocumentationElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDocumentationElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SetDocumentationElement(temp0);
    }
    else
    {
      op->vtkSMDocumentation::SetDocumentationElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetDocumentationElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentationElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetDocumentationElement() :
      op->vtkSMDocumentation::GetDocumentationElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDocumentation_Methods[] = {
  {"IsTypeOf", PyvtkSMDocumentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDocumentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDocumentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDocumentation\nC++: static vtkSMDocumentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDocumentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDocumentation\nC++: vtkSMDocumentation *NewInstance()\n\n"},
  {"GetLongHelp", PyvtkSMDocumentation_GetLongHelp, METH_VARARGS,
   "V.GetLongHelp() -> string\nC++: const char *GetLongHelp()\n\nReturns the text for long help, if any. NULL otherwise.\n"},
  {"GetShortHelp", PyvtkSMDocumentation_GetShortHelp, METH_VARARGS,
   "V.GetShortHelp() -> string\nC++: const char *GetShortHelp()\n\nReturns the text for short help, if any. NULL otherwise.\n"},
  {"GetDescription", PyvtkSMDocumentation_GetDescription, METH_VARARGS,
   "V.GetDescription() -> string\nC++: const char *GetDescription()\n\nReturns the description text, if any.\n"},
  {"SetDocumentationElement", PyvtkSMDocumentation_SetDocumentationElement, METH_VARARGS,
   "V.SetDocumentationElement(vtkPVXMLElement)\nC++: void SetDocumentationElement(vtkPVXMLElement *)\n\nGet/Set the documentation XML element.\n"},
  {"GetDocumentationElement", PyvtkSMDocumentation_GetDocumentationElement, METH_VARARGS,
   "V.GetDocumentationElement() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetDocumentationElement()\n\nGet/Set the documentation XML element.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDocumentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDocumentation", // tp_name
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
  PyvtkSMDocumentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDocumentation_StaticNew()
{
  return vtkSMDocumentation::New();
}

PyObject *PyvtkSMDocumentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDocumentation_Type, PyvtkSMDocumentation_Methods,
    "vtkSMDocumentation",
 &PyvtkSMDocumentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDocumentation_Type;

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

void PyVTKAddFile_vtkSMDocumentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDocumentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDocumentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

