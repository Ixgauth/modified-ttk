// python wrapper for vtkFramebufferPass
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
#include "vtkFramebufferPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFramebufferPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFramebufferPass_ClassNew(); }

#ifndef DECLARED_PyvtkDepthImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkDepthImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkDepthImageProcessingPass_ClassNew
#endif

static const char *PyvtkFramebufferPass_Doc =
  "vtkFramebufferPass - Render into a FO\n\n"
  "Superclass: vtkDepthImageProcessingPass\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkFramebufferPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFramebufferPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFramebufferPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFramebufferPass *tempr = vtkFramebufferPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFramebufferPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFramebufferPass::NewInstance());

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
PyvtkFramebufferPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkFramebufferPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_SetDepthFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthFormat(temp0);
    }
    else
    {
      op->vtkFramebufferPass::SetDepthFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_SetColorFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorFormat(temp0);
    }
    else
    {
      op->vtkFramebufferPass::SetColorFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_GetDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetDepthTexture() :
      op->vtkFramebufferPass::GetDepthTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFramebufferPass_GetColorTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFramebufferPass *op = static_cast<vtkFramebufferPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorTexture() :
      op->vtkFramebufferPass::GetColorTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFramebufferPass_Methods[] = {
  {"IsTypeOf", PyvtkFramebufferPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFramebufferPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFramebufferPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFramebufferPass\nC++: static vtkFramebufferPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFramebufferPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFramebufferPass\nC++: vtkFramebufferPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkFramebufferPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"SetDepthFormat", PyvtkFramebufferPass_SetDepthFormat, METH_VARARGS,
   "V.SetDepthFormat(int)\nC++: virtual void SetDepthFormat(int _arg)\n\nSet the format to use for the depth texture e.g.\nvtkTextureObject::Float32\n"},
  {"SetColorFormat", PyvtkFramebufferPass_SetColorFormat, METH_VARARGS,
   "V.SetColorFormat(int)\nC++: virtual void SetColorFormat(int _arg)\n\nSet the format to use for the color texture\nvtkTextureObject::Float16 vtkTextureObject::Float32 and\nvtkTextureObject::Fixed8 are supported. Fixed8 is the default.\n"},
  {"GetDepthTexture", PyvtkFramebufferPass_GetDepthTexture, METH_VARARGS,
   "V.GetDepthTexture() -> vtkTextureObject\nC++: virtual vtkTextureObject *GetDepthTexture()\n\n"},
  {"GetColorTexture", PyvtkFramebufferPass_GetColorTexture, METH_VARARGS,
   "V.GetColorTexture() -> vtkTextureObject\nC++: virtual vtkTextureObject *GetColorTexture()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFramebufferPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkFramebufferPass", // tp_name
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
  PyvtkFramebufferPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFramebufferPass_StaticNew()
{
  return vtkFramebufferPass::New();
}

PyObject *PyvtkFramebufferPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFramebufferPass_Type, PyvtkFramebufferPass_Methods,
    "vtkFramebufferPass",
 &PyvtkFramebufferPass_StaticNew);

  PyTypeObject *pytype = &PyvtkFramebufferPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDepthImageProcessingPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFramebufferPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFramebufferPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFramebufferPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

