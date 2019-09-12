// python wrapper for vtkUpdateSuppressorPipeline
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
#include "vtkInformationVector.h"
#include "vtkUpdateSuppressorPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUpdateSuppressorPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUpdateSuppressorPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataPipeline_ClassNew
extern "C" { PyObject *PyvtkCompositeDataPipeline_ClassNew(); }
#define DECLARED_PyvtkCompositeDataPipeline_ClassNew
#endif

static const char *PyvtkUpdateSuppressorPipeline_Doc =
  "vtkUpdateSuppressorPipeline - pipeline for vtkPVUpdateSuppressor\n\n"
  "Superclass: vtkCompositeDataPipeline\n\n"
  "vtkUpdateSuppressorPipeline is designed to for with\n"
  "vtkPVUpdateSuppressor. It stops all update extent and data requests.\n\n";


static PyObject *
PyvtkUpdateSuppressorPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUpdateSuppressorPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUpdateSuppressorPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUpdateSuppressorPipeline *tempr = vtkUpdateSuppressorPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUpdateSuppressorPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUpdateSuppressorPipeline::NewInstance());

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
PyvtkUpdateSuppressorPipeline_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkUpdateSuppressorPipeline::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkUpdateSuppressorPipeline::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUpdateSuppressorPipeline_Methods[] = {
  {"IsTypeOf", PyvtkUpdateSuppressorPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUpdateSuppressorPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUpdateSuppressorPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUpdateSuppressorPipeline\nC++: static vtkUpdateSuppressorPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUpdateSuppressorPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUpdateSuppressorPipeline\nC++: vtkUpdateSuppressorPipeline *NewInstance()\n\n"},
  {"SetEnabled", PyvtkUpdateSuppressorPipeline_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: void SetEnabled(bool e)\n\nGet/Set if the update suppressions are enabled. Enabled by\ndefault.\n"},
  {"GetEnabled", PyvtkUpdateSuppressorPipeline_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nGet/Set if the update suppressions are enabled. Enabled by\ndefault.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUpdateSuppressorPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkUpdateSuppressorPipeline", // tp_name
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
  PyvtkUpdateSuppressorPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUpdateSuppressorPipeline_StaticNew()
{
  return vtkUpdateSuppressorPipeline::New();
}

PyObject *PyvtkUpdateSuppressorPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUpdateSuppressorPipeline_Type, PyvtkUpdateSuppressorPipeline_Methods,
    "vtkUpdateSuppressorPipeline",
 &PyvtkUpdateSuppressorPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkUpdateSuppressorPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUpdateSuppressorPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUpdateSuppressorPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUpdateSuppressorPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

