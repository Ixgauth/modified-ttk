// python wrapper for vtkEnvironmentAnnotationFilter
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
#include "vtkStdString.h"
#include "vtkEnvironmentAnnotationFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnvironmentAnnotationFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnvironmentAnnotationFilter_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkEnvironmentAnnotationFilter_Doc =
  "vtkEnvironmentAnnotationFilter - filter used to generate text\nannotation for the current project.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkEnvironmentAnnotationFilter is designed to help annotate the scene\n"
  "with frequently needed information.\n\n"
  "The variables available in the expression evaluation scope are as\n"
  "follows:\n"
  "\\li FileName: the name of the file that the user is working on.\n"
  "\\li DisplayFileName: Boolean value representing whether the file name\n"
  "is visible.\n"
  "\\li DisplayDate: Boolean value representing whether thedate/time is\n"
  "    visible.\n"
  "\\li DisplaySystemName: Boolean value representing whether the system\n"
  "    type is visible.\n"
  "\\li DisplayUserName: Boolean value representing whether the username\n"
  "    is visible.\n\n";


static PyObject *
PyvtkEnvironmentAnnotationFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnvironmentAnnotationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnvironmentAnnotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnvironmentAnnotationFilter *tempr = vtkEnvironmentAnnotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnvironmentAnnotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnvironmentAnnotationFilter::NewInstance());

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
PyvtkEnvironmentAnnotationFilter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkEnvironmentAnnotationFilter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SetDisplayUserName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayUserName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayUserName(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetDisplayUserName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetDisplayUserName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayUserName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayUserName() :
      op->vtkEnvironmentAnnotationFilter::GetDisplayUserName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SetDisplaySystemName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySystemName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySystemName(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetDisplaySystemName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetDisplaySystemName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySystemName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplaySystemName() :
      op->vtkEnvironmentAnnotationFilter::GetDisplaySystemName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SetDisplayFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayFileName(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetDisplayFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetDisplayFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayFileName() :
      op->vtkEnvironmentAnnotationFilter::GetDisplayFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SetDisplayFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayFilePath(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetDisplayFilePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetDisplayFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayFilePath() :
      op->vtkEnvironmentAnnotationFilter::GetDisplayFilePath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_SetDisplayDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayDate(temp0);
    }
    else
    {
      op->vtkEnvironmentAnnotationFilter::SetDisplayDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnvironmentAnnotationFilter_GetDisplayDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnvironmentAnnotationFilter *op = static_cast<vtkEnvironmentAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayDate() :
      op->vtkEnvironmentAnnotationFilter::GetDisplayDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnvironmentAnnotationFilter_Methods[] = {
  {"IsTypeOf", PyvtkEnvironmentAnnotationFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnvironmentAnnotationFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnvironmentAnnotationFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnvironmentAnnotationFilter\nC++: static vtkEnvironmentAnnotationFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnvironmentAnnotationFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnvironmentAnnotationFilter\nC++: vtkEnvironmentAnnotationFilter *NewInstance()\n\n"},
  {"SetFileName", PyvtkEnvironmentAnnotationFilter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(std::string _arg)\n\n"},
  {"GetFileName", PyvtkEnvironmentAnnotationFilter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual std::string GetFileName()\n\n"},
  {"SetDisplayUserName", PyvtkEnvironmentAnnotationFilter_SetDisplayUserName, METH_VARARGS,
   "V.SetDisplayUserName(bool)\nC++: virtual void SetDisplayUserName(bool _arg)\n\n"},
  {"GetDisplayUserName", PyvtkEnvironmentAnnotationFilter_GetDisplayUserName, METH_VARARGS,
   "V.GetDisplayUserName() -> bool\nC++: virtual bool GetDisplayUserName()\n\n"},
  {"SetDisplaySystemName", PyvtkEnvironmentAnnotationFilter_SetDisplaySystemName, METH_VARARGS,
   "V.SetDisplaySystemName(bool)\nC++: virtual void SetDisplaySystemName(bool _arg)\n\n"},
  {"GetDisplaySystemName", PyvtkEnvironmentAnnotationFilter_GetDisplaySystemName, METH_VARARGS,
   "V.GetDisplaySystemName() -> bool\nC++: virtual bool GetDisplaySystemName()\n\n"},
  {"SetDisplayFileName", PyvtkEnvironmentAnnotationFilter_SetDisplayFileName, METH_VARARGS,
   "V.SetDisplayFileName(bool)\nC++: virtual void SetDisplayFileName(bool _arg)\n\n"},
  {"GetDisplayFileName", PyvtkEnvironmentAnnotationFilter_GetDisplayFileName, METH_VARARGS,
   "V.GetDisplayFileName() -> bool\nC++: virtual bool GetDisplayFileName()\n\n"},
  {"SetDisplayFilePath", PyvtkEnvironmentAnnotationFilter_SetDisplayFilePath, METH_VARARGS,
   "V.SetDisplayFilePath(bool)\nC++: virtual void SetDisplayFilePath(bool _arg)\n\n"},
  {"GetDisplayFilePath", PyvtkEnvironmentAnnotationFilter_GetDisplayFilePath, METH_VARARGS,
   "V.GetDisplayFilePath() -> bool\nC++: virtual bool GetDisplayFilePath()\n\n"},
  {"SetDisplayDate", PyvtkEnvironmentAnnotationFilter_SetDisplayDate, METH_VARARGS,
   "V.SetDisplayDate(bool)\nC++: virtual void SetDisplayDate(bool _arg)\n\n"},
  {"GetDisplayDate", PyvtkEnvironmentAnnotationFilter_GetDisplayDate, METH_VARARGS,
   "V.GetDisplayDate() -> bool\nC++: virtual bool GetDisplayDate()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnvironmentAnnotationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkEnvironmentAnnotationFilter", // tp_name
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
  PyvtkEnvironmentAnnotationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnvironmentAnnotationFilter_StaticNew()
{
  return vtkEnvironmentAnnotationFilter::New();
}

PyObject *PyvtkEnvironmentAnnotationFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnvironmentAnnotationFilter_Type, PyvtkEnvironmentAnnotationFilter_Methods,
    "vtkEnvironmentAnnotationFilter",
 &PyvtkEnvironmentAnnotationFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkEnvironmentAnnotationFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnvironmentAnnotationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnvironmentAnnotationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnvironmentAnnotationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

