// python wrapper for vtkQuerySelectionSource
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
#include "vtkQuerySelectionSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuerySelectionSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuerySelectionSource_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkQuerySelectionSource_Doc =
  "vtkQuerySelectionSource - a selection source that uses a \"query\" to\ngenerate the selection.\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkQuerySelectionSource is a selection source that uses a \"query\" to\n"
  "generate the vtkSelection object. A query has the following form: \"TERM OPERATOR\n"
  "VALUE(s)\" eg. \"GLOBALID is_in_range (0, 10)\" here GLOBALID is the\n"
  "TERM, is_in_range is the operator and (0,10) are the values. A query\n"
  "can have additional qualifiers such as the process id, block id, amr\n"
  "level, amr block.\n\n";


static PyObject *
PyvtkQuerySelectionSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuerySelectionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuerySelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuerySelectionSource *tempr = vtkQuerySelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuerySelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuerySelectionSource::NewInstance());

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
PyvtkQuerySelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQueryString(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkQuerySelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIndex(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex() :
      op->vtkQuerySelectionSource::GetCompositeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalLevel(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetHierarchicalLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel() :
      op->vtkQuerySelectionSource::GetHierarchicalLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalIndex(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetHierarchicalIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex() :
      op->vtkQuerySelectionSource::GetHierarchicalIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessID(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetProcessID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessID() :
      op->vtkQuerySelectionSource::GetProcessID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkQuerySelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetUserFriendlyText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserFriendlyText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUserFriendlyText() :
      op->vtkQuerySelectionSource::GetUserFriendlyText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0);
    }
    else
    {
      op->vtkQuerySelectionSource::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkQuerySelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuerySelectionSource_Methods[] = {
  {"IsTypeOf", PyvtkQuerySelectionSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuerySelectionSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuerySelectionSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuerySelectionSource\nC++: static vtkQuerySelectionSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuerySelectionSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuerySelectionSource\nC++: vtkQuerySelectionSource *NewInstance()\n\n"},
  {"SetQueryString", PyvtkQuerySelectionSource_SetQueryString, METH_VARARGS,
   "V.SetQueryString(string)\nC++: virtual void SetQueryString(const char *_arg)\n\nSet/get the query expression string.\n"},
  {"GetQueryString", PyvtkQuerySelectionSource_GetQueryString, METH_VARARGS,
   "V.GetQueryString() -> string\nC++: virtual char *GetQueryString()\n\nSet/get the query expression string.\n"},
  {"SetCompositeIndex", PyvtkQuerySelectionSource_SetCompositeIndex, METH_VARARGS,
   "V.SetCompositeIndex(int)\nC++: virtual void SetCompositeIndex(int _arg)\n\n"},
  {"GetCompositeIndex", PyvtkQuerySelectionSource_GetCompositeIndex, METH_VARARGS,
   "V.GetCompositeIndex() -> int\nC++: virtual int GetCompositeIndex()\n\n"},
  {"SetHierarchicalLevel", PyvtkQuerySelectionSource_SetHierarchicalLevel, METH_VARARGS,
   "V.SetHierarchicalLevel(int)\nC++: virtual void SetHierarchicalLevel(int _arg)\n\n"},
  {"GetHierarchicalLevel", PyvtkQuerySelectionSource_GetHierarchicalLevel, METH_VARARGS,
   "V.GetHierarchicalLevel() -> int\nC++: virtual int GetHierarchicalLevel()\n\n"},
  {"SetHierarchicalIndex", PyvtkQuerySelectionSource_SetHierarchicalIndex, METH_VARARGS,
   "V.SetHierarchicalIndex(int)\nC++: virtual void SetHierarchicalIndex(int _arg)\n\n"},
  {"GetHierarchicalIndex", PyvtkQuerySelectionSource_GetHierarchicalIndex, METH_VARARGS,
   "V.GetHierarchicalIndex() -> int\nC++: virtual int GetHierarchicalIndex()\n\n"},
  {"SetProcessID", PyvtkQuerySelectionSource_SetProcessID, METH_VARARGS,
   "V.SetProcessID(int)\nC++: virtual void SetProcessID(int _arg)\n\n"},
  {"GetProcessID", PyvtkQuerySelectionSource_GetProcessID, METH_VARARGS,
   "V.GetProcessID() -> int\nC++: virtual int GetProcessID()\n\n"},
  {"SetFieldType", PyvtkQuerySelectionSource_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\n"},
  {"GetFieldType", PyvtkQuerySelectionSource_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\n"},
  {"GetUserFriendlyText", PyvtkQuerySelectionSource_GetUserFriendlyText, METH_VARARGS,
   "V.GetUserFriendlyText() -> string\nC++: const char *GetUserFriendlyText()\n\nThis merely reconstructs the query as a user friendly text eg. \"IDs >=\n12\". ( Makes you want to wonder if we should support parsing\ninput query text as well ;) )\n"},
  {"SetInverse", PyvtkQuerySelectionSource_SetInverse, METH_VARARGS,
   "V.SetInverse(int)\nC++: virtual void SetInverse(int _arg)\n\nSet/get the invert selection flag.\n"},
  {"GetInverse", PyvtkQuerySelectionSource_GetInverse, METH_VARARGS,
   "V.GetInverse() -> int\nC++: virtual int GetInverse()\n\nSet/get the invert selection flag.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuerySelectionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkQuerySelectionSource", // tp_name
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
  PyvtkQuerySelectionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuerySelectionSource_StaticNew()
{
  return vtkQuerySelectionSource::New();
}

PyObject *PyvtkQuerySelectionSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuerySelectionSource_Type, PyvtkQuerySelectionSource_Methods,
    "vtkQuerySelectionSource",
 &PyvtkQuerySelectionSource_StaticNew);

  PyTypeObject *pytype = &PyvtkQuerySelectionSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelectionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuerySelectionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuerySelectionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuerySelectionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

