// python wrapper for vtkAnnotateGlobalDataFilter
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
#include "vtkAnnotateGlobalDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotateGlobalDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnnotateGlobalDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPythonAnnotationFilter_ClassNew
extern "C" { PyObject *PyvtkPythonAnnotationFilter_ClassNew(); }
#define DECLARED_PyvtkPythonAnnotationFilter_ClassNew
#endif

static const char *PyvtkAnnotateGlobalDataFilter_Doc =
  "vtkAnnotateGlobalDataFilter - filter for annotating with global data\n(designed for ExodusII reader).\n\n"
  "Superclass: vtkPythonAnnotationFilter\n\n"
  "vtkAnnotateGlobalDataFilter provides a simpler API for creating text\n"
  "annotations using vtkPythonAnnotationFilter. Instead of users\n"
  "specifying the annotation expression, this filter determines the\n"
  "expression based on the array selected by limiting the scope of the\n"
  "functionality. This filter only allows the user to annotate using\n"
  "\"global-data\" aka field data and specify the string prefix to use. If\n"
  "the field array chosen has as many elements as number of timesteps,\n"
  "the array is assumed to be \"temporal\" and indexed using the current\n"
  "timestep.\n\n";


static PyObject *
PyvtkAnnotateGlobalDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotateGlobalDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotateGlobalDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotateGlobalDataFilter *tempr = vtkAnnotateGlobalDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotateGlobalDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotateGlobalDataFilter::NewInstance());

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
PyvtkAnnotateGlobalDataFilter_SetFieldArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldArrayName(temp0);
    }
    else
    {
      op->vtkAnnotateGlobalDataFilter::SetFieldArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetFieldArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldArrayName() :
      op->vtkAnnotateGlobalDataFilter::GetFieldArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

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
      op->vtkAnnotateGlobalDataFilter::SetPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkAnnotateGlobalDataFilter::GetPrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SetPostfix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostfix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPostfix(temp0);
    }
    else
    {
      op->vtkAnnotateGlobalDataFilter::SetPostfix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetPostfix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostfix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPostfix() :
      op->vtkAnnotateGlobalDataFilter::GetPostfix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFormat(temp0);
    }
    else
    {
      op->vtkAnnotateGlobalDataFilter::SetFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFormat() :
      op->vtkAnnotateGlobalDataFilter::GetFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotateGlobalDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkAnnotateGlobalDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotateGlobalDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotateGlobalDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnnotateGlobalDataFilter\nC++: static vtkAnnotateGlobalDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotateGlobalDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnnotateGlobalDataFilter\nC++: vtkAnnotateGlobalDataFilter *NewInstance()\n\n"},
  {"SetFieldArrayName", PyvtkAnnotateGlobalDataFilter_SetFieldArrayName, METH_VARARGS,
   "V.SetFieldArrayName(string)\nC++: virtual void SetFieldArrayName(const char *_arg)\n\nName of the field to display\n"},
  {"GetFieldArrayName", PyvtkAnnotateGlobalDataFilter_GetFieldArrayName, METH_VARARGS,
   "V.GetFieldArrayName() -> string\nC++: virtual char *GetFieldArrayName()\n\nName of the field to display\n"},
  {"SetPrefix", PyvtkAnnotateGlobalDataFilter_SetPrefix, METH_VARARGS,
   "V.SetPrefix(string)\nC++: virtual void SetPrefix(const char *_arg)\n\nSet the text prefix to display in front of the Field value\n"},
  {"GetPrefix", PyvtkAnnotateGlobalDataFilter_GetPrefix, METH_VARARGS,
   "V.GetPrefix() -> string\nC++: virtual char *GetPrefix()\n\nSet the text prefix to display in front of the Field value\n"},
  {"SetPostfix", PyvtkAnnotateGlobalDataFilter_SetPostfix, METH_VARARGS,
   "V.SetPostfix(string)\nC++: virtual void SetPostfix(const char *_arg)\n\nSet the text prefix to display in front of the Field value\n"},
  {"GetPostfix", PyvtkAnnotateGlobalDataFilter_GetPostfix, METH_VARARGS,
   "V.GetPostfix() -> string\nC++: virtual char *GetPostfix()\n\nSet the text prefix to display in front of the Field value\n"},
  {"SetFormat", PyvtkAnnotateGlobalDataFilter_SetFormat, METH_VARARGS,
   "V.SetFormat(string)\nC++: virtual void SetFormat(const char *_arg)\n\nSet the format to use when displaying the field value\n"},
  {"GetFormat", PyvtkAnnotateGlobalDataFilter_GetFormat, METH_VARARGS,
   "V.GetFormat() -> string\nC++: virtual char *GetFormat()\n\nSet the format to use when displaying the field value\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnnotateGlobalDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkAnnotateGlobalDataFilter", // tp_name
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
  PyvtkAnnotateGlobalDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotateGlobalDataFilter_StaticNew()
{
  return vtkAnnotateGlobalDataFilter::New();
}

PyObject *PyvtkAnnotateGlobalDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnnotateGlobalDataFilter_Type, PyvtkAnnotateGlobalDataFilter_Methods,
    "vtkAnnotateGlobalDataFilter",
 &PyvtkAnnotateGlobalDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAnnotateGlobalDataFilter_Type;

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

void PyVTKAddFile_vtkAnnotateGlobalDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotateGlobalDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotateGlobalDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

