// python wrapper for vtkPVClientServerSynchronizedRenderers
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
#include "vtkPVClientServerSynchronizedRenderers.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVClientServerSynchronizedRenderers(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVClientServerSynchronizedRenderers_ClassNew(); }

#ifndef DECLARED_PyvtkSynchronizedRenderers_ClassNew
extern "C" { PyObject *PyvtkSynchronizedRenderers_ClassNew(); }
#define DECLARED_PyvtkSynchronizedRenderers_ClassNew
#endif

static const char *PyvtkPVClientServerSynchronizedRenderers_Doc =
  "vtkPVClientServerSynchronizedRenderers -\nvtkPVClientServerSynchronizedRenderers is similar to\nvtkClientServerSynchronizedRenderers except that it optionally uses\nimage compressors to compress the image before transmitting.\n\n"
  "Superclass: vtkSynchronizedRenderers\n\n"
;


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVClientServerSynchronizedRenderers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClientServerSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVClientServerSynchronizedRenderers *tempr = vtkPVClientServerSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVClientServerSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClientServerSynchronizedRenderers::NewInstance());

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
PyvtkPVClientServerSynchronizedRenderers_SetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLossLessCompression(temp0);
    }
    else
    {
      op->vtkPVClientServerSynchronizedRenderers::SetLossLessCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_GetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLossLessCompression() :
      op->vtkPVClientServerSynchronizedRenderers::GetLossLessCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_SetNVPipeSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNVPipeSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNVPipeSupport(temp0);
    }
    else
    {
      op->vtkPVClientServerSynchronizedRenderers::SetNVPipeSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_GetNVPipeSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNVPipeSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNVPipeSupport() :
      op->vtkPVClientServerSynchronizedRenderers::GetNVPipeSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ConfigureCompressor(temp0);
    }
    else
    {
      op->vtkPVClientServerSynchronizedRenderers::ConfigureCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVClientServerSynchronizedRenderers_Methods[] = {
  {"IsTypeOf", PyvtkPVClientServerSynchronizedRenderers_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVClientServerSynchronizedRenderers_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVClientServerSynchronizedRenderers_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVClientServerSynchronizedRenderers\nC++: static vtkPVClientServerSynchronizedRenderers *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVClientServerSynchronizedRenderers_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVClientServerSynchronizedRenderers\nC++: vtkPVClientServerSynchronizedRenderers *NewInstance()\n\n"},
  {"SetLossLessCompression", PyvtkPVClientServerSynchronizedRenderers_SetLossLessCompression, METH_VARARGS,
   "V.SetLossLessCompression(bool)\nC++: virtual void SetLossLessCompression(bool _arg)\n\nThis flag is set by the renderer during still renderers. When set\ncompressor must use loss-less compression. When unset compressor\ncan (if it's enabled) use lossy compression.\n"},
  {"GetLossLessCompression", PyvtkPVClientServerSynchronizedRenderers_GetLossLessCompression, METH_VARARGS,
   "V.GetLossLessCompression() -> bool\nC++: virtual bool GetLossLessCompression()\n\nThis flag is set by the renderer during still renderers. When set\ncompressor must use loss-less compression. When unset compressor\ncan (if it's enabled) use lossy compression.\n"},
  {"SetNVPipeSupport", PyvtkPVClientServerSynchronizedRenderers_SetNVPipeSupport, METH_VARARGS,
   "V.SetNVPipeSupport(bool)\nC++: virtual void SetNVPipeSupport(bool _arg)\n\nThis flag is set when NVPipe is supported.  NVPipe may not be\navailable even when compiled in, if the system is not using an\nNVIDIA GPU, for example.\n"},
  {"GetNVPipeSupport", PyvtkPVClientServerSynchronizedRenderers_GetNVPipeSupport, METH_VARARGS,
   "V.GetNVPipeSupport() -> bool\nC++: virtual bool GetNVPipeSupport()\n\nThis flag is set when NVPipe is supported.  NVPipe may not be\navailable even when compiled in, if the system is not using an\nNVIDIA GPU, for example.\n"},
  {"ConfigureCompressor", PyvtkPVClientServerSynchronizedRenderers_ConfigureCompressor, METH_VARARGS,
   "V.ConfigureCompressor(string)\nC++: virtual void ConfigureCompressor(const char *stream)\n\nSet and configure a compressor from it's own configuration\nstream. This is used by ParaView to configure the compressor from\napplication wide user settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVClientServerSynchronizedRenderers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVClientServerSynchronizedRenderers", // tp_name
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
  PyvtkPVClientServerSynchronizedRenderers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVClientServerSynchronizedRenderers_StaticNew()
{
  return vtkPVClientServerSynchronizedRenderers::New();
}

PyObject *PyvtkPVClientServerSynchronizedRenderers_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVClientServerSynchronizedRenderers_Type, PyvtkPVClientServerSynchronizedRenderers_Methods,
    "vtkPVClientServerSynchronizedRenderers",
 &PyvtkPVClientServerSynchronizedRenderers_StaticNew);

  PyTypeObject *pytype = &PyvtkPVClientServerSynchronizedRenderers_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSynchronizedRenderers_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVClientServerSynchronizedRenderers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVClientServerSynchronizedRenderers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVClientServerSynchronizedRenderers", o) != 0)
  {
    Py_DECREF(o);
  }

}

