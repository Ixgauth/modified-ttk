// python wrapper for vtkCinemaExporter
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
#include "vtkCinemaExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCinemaExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCinemaExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static const char *PyvtkCinemaExporter_Doc =
  "vtkCinemaExporter - Exports a view as a Cinema database.\n\n"
  "Superclass: vtkExporter\n\n"
  "Specifies and runs a Python script which uses pv_introspect.py to\n"
  "generate images from a set of parameters of the different elements in\n"
  "a pipeline for later visualization. Takes different options from\n"
  "pqCinemaTrackSelection and pqExportViewSelection as strings to be\n"
  "included in the script.\n\n";


static PyObject *
PyvtkCinemaExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCinemaExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCinemaExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCinemaExporter *tempr = vtkCinemaExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCinemaExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCinemaExporter::NewInstance());

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
PyvtkCinemaExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCinemaExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCinemaExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_SetViewSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewSelection(temp0);
    }
    else
    {
      op->vtkCinemaExporter::SetViewSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_GetViewSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetViewSelection() :
      op->vtkCinemaExporter::GetViewSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_SetTrackSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrackSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrackSelection(temp0);
    }
    else
    {
      op->vtkCinemaExporter::SetTrackSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_GetTrackSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrackSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTrackSelection() :
      op->vtkCinemaExporter::GetTrackSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_SetArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArraySelection(temp0);
    }
    else
    {
      op->vtkCinemaExporter::SetArraySelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaExporter_GetArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaExporter *op = static_cast<vtkCinemaExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArraySelection() :
      op->vtkCinemaExporter::GetArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCinemaExporter_Methods[] = {
  {"IsTypeOf", PyvtkCinemaExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCinemaExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCinemaExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCinemaExporter\nC++: static vtkCinemaExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCinemaExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCinemaExporter\nC++: vtkCinemaExporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkCinemaExporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkCinemaExporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetViewSelection", PyvtkCinemaExporter_SetViewSelection, METH_VARARGS,
   "V.SetViewSelection(string)\nC++: virtual void SetViewSelection(const char *_arg)\n\n"},
  {"GetViewSelection", PyvtkCinemaExporter_GetViewSelection, METH_VARARGS,
   "V.GetViewSelection() -> string\nC++: virtual char *GetViewSelection()\n\n"},
  {"SetTrackSelection", PyvtkCinemaExporter_SetTrackSelection, METH_VARARGS,
   "V.SetTrackSelection(string)\nC++: virtual void SetTrackSelection(const char *_arg)\n\n"},
  {"GetTrackSelection", PyvtkCinemaExporter_GetTrackSelection, METH_VARARGS,
   "V.GetTrackSelection() -> string\nC++: virtual char *GetTrackSelection()\n\n"},
  {"SetArraySelection", PyvtkCinemaExporter_SetArraySelection, METH_VARARGS,
   "V.SetArraySelection(string)\nC++: virtual void SetArraySelection(const char *_arg)\n\n"},
  {"GetArraySelection", PyvtkCinemaExporter_GetArraySelection, METH_VARARGS,
   "V.GetArraySelection() -> string\nC++: virtual char *GetArraySelection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCinemaExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCinemaExporter", // tp_name
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
  PyvtkCinemaExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCinemaExporter_StaticNew()
{
  return vtkCinemaExporter::New();
}

PyObject *PyvtkCinemaExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCinemaExporter_Type, PyvtkCinemaExporter_Methods,
    "vtkCinemaExporter",
 &PyvtkCinemaExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkCinemaExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCinemaExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCinemaExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCinemaExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

