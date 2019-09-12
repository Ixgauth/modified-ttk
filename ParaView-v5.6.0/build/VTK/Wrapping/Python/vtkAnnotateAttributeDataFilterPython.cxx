// python wrapper for vtkAnnotateAttributeDataFilter
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
#include "vtkAnnotateAttributeDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotateAttributeDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnnotateAttributeDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPythonAnnotationFilter_ClassNew
extern "C" { PyObject *PyvtkPythonAnnotationFilter_ClassNew(); }
#define DECLARED_PyvtkPythonAnnotationFilter_ClassNew
#endif

static const char *PyvtkAnnotateAttributeDataFilter_Doc =
  "vtkAnnotateAttributeDataFilter - specialization of\nvtkPythonAnnotationFilter to work with element data.\n\n"
  "Superclass: vtkPythonAnnotationFilter\n\n"
  "vtkAnnotateAttributeDataFilter is a specialization of\n"
  "vtkPythonAnnotationFilter which makes it easier to annotate using\n"
  "data values from any input dataset.\n\n";


static PyObject *
PyvtkAnnotateAttributeDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotateAttributeDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotateAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotateAttributeDataFilter *tempr = vtkAnnotateAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotateAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotateAttributeDataFilter::NewInstance());

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
PyvtkAnnotateAttributeDataFilter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkAnnotateAttributeDataFilter::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAnnotateAttributeDataFilter::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetElementId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElementId(temp0);
    }
    else
    {
      op->vtkAnnotateAttributeDataFilter::SetElementId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetElementId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetElementId() :
      op->vtkAnnotateAttributeDataFilter::GetElementId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessId(temp0);
    }
    else
    {
      op->vtkAnnotateAttributeDataFilter::SetProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessId() :
      op->vtkAnnotateAttributeDataFilter::GetProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefix(temp0);
    }
    else
    {
      op->vtkAnnotateAttributeDataFilter::SetPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkAnnotateAttributeDataFilter::GetPrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotateAttributeDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkAnnotateAttributeDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotateAttributeDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotateAttributeDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnnotateAttributeDataFilter\nC++: static vtkAnnotateAttributeDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotateAttributeDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnnotateAttributeDataFilter\nC++: vtkAnnotateAttributeDataFilter *NewInstance()\n\n"},
  {"SetArrayName", PyvtkAnnotateAttributeDataFilter_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nSet the attribute array name to annotate with.\n"},
  {"GetArrayName", PyvtkAnnotateAttributeDataFilter_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nSet the attribute array name to annotate with.\n"},
  {"SetElementId", PyvtkAnnotateAttributeDataFilter_SetElementId, METH_VARARGS,
   "V.SetElementId(int)\nC++: virtual void SetElementId(vtkIdType _arg)\n\nSet the element number to annotate with.\n"},
  {"GetElementId", PyvtkAnnotateAttributeDataFilter_GetElementId, METH_VARARGS,
   "V.GetElementId() -> int\nC++: virtual vtkIdType GetElementId()\n\nSet the element number to annotate with.\n"},
  {"SetProcessId", PyvtkAnnotateAttributeDataFilter_SetProcessId, METH_VARARGS,
   "V.SetProcessId(int)\nC++: virtual void SetProcessId(int _arg)\n\nSet the rank to extract the data from. Default is 0.\n"},
  {"GetProcessId", PyvtkAnnotateAttributeDataFilter_GetProcessId, METH_VARARGS,
   "V.GetProcessId() -> int\nC++: virtual int GetProcessId()\n\nSet the rank to extract the data from. Default is 0.\n"},
  {"SetPrefix", PyvtkAnnotateAttributeDataFilter_SetPrefix, METH_VARARGS,
   "V.SetPrefix(string)\nC++: virtual void SetPrefix(const char *_arg)\n\nSet the text prefix to display in front of the Field value\n"},
  {"GetPrefix", PyvtkAnnotateAttributeDataFilter_GetPrefix, METH_VARARGS,
   "V.GetPrefix() -> string\nC++: virtual char *GetPrefix()\n\nSet the text prefix to display in front of the Field value\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnnotateAttributeDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkAnnotateAttributeDataFilter", // tp_name
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
  PyvtkAnnotateAttributeDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotateAttributeDataFilter_StaticNew()
{
  return vtkAnnotateAttributeDataFilter::New();
}

PyObject *PyvtkAnnotateAttributeDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnnotateAttributeDataFilter_Type, PyvtkAnnotateAttributeDataFilter_Methods,
    "vtkAnnotateAttributeDataFilter",
 &PyvtkAnnotateAttributeDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAnnotateAttributeDataFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPythonAnnotationFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnnotateAttributeDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotateAttributeDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotateAttributeDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

