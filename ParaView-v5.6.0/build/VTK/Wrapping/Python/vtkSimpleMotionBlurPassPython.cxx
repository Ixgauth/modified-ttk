// python wrapper for vtkSimpleMotionBlurPass
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
#include "vtkSimpleMotionBlurPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleMotionBlurPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleMotionBlurPass_ClassNew(); }

#ifndef DECLARED_PyvtkDepthImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkDepthImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkDepthImageProcessingPass_ClassNew
#endif

static const char *PyvtkSimpleMotionBlurPass_Doc =
  "vtkSimpleMotionBlurPass - Avergae frames to simulate motion blur.\n\n"
  "Superclass: vtkDepthImageProcessingPass\n\n"
  "A slow and simple approach that simply renders multiple frames and\n"
  "accumulates them before displaying them. As such it causes the render\n"
  "process to be SubFrames times slower than normal but handles all\n"
  "types of motion correctly as it is actually rendering all the sub\n"
  "frames.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkSimpleMotionBlurPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleMotionBlurPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleMotionBlurPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleMotionBlurPass *tempr = vtkSimpleMotionBlurPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleMotionBlurPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleMotionBlurPass::NewInstance());

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
PyvtkSimpleMotionBlurPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

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
      op->vtkSimpleMotionBlurPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_GetSubFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubFrames() :
      op->vtkSimpleMotionBlurPass::GetSubFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_SetSubFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubFrames(temp0);
    }
    else
    {
      op->vtkSimpleMotionBlurPass::SetSubFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_SetDepthFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

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
      op->vtkSimpleMotionBlurPass::SetDepthFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_SetColorFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

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
      op->vtkSimpleMotionBlurPass::SetColorFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_GetDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetDepthTexture() :
      op->vtkSimpleMotionBlurPass::GetDepthTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMotionBlurPass_GetColorTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleMotionBlurPass *op = static_cast<vtkSimpleMotionBlurPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorTexture() :
      op->vtkSimpleMotionBlurPass::GetColorTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleMotionBlurPass_Methods[] = {
  {"IsTypeOf", PyvtkSimpleMotionBlurPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleMotionBlurPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleMotionBlurPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSimpleMotionBlurPass\nC++: static vtkSimpleMotionBlurPass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleMotionBlurPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSimpleMotionBlurPass\nC++: vtkSimpleMotionBlurPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkSimpleMotionBlurPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetSubFrames", PyvtkSimpleMotionBlurPass_GetSubFrames, METH_VARARGS,
   "V.GetSubFrames() -> int\nC++: virtual int GetSubFrames()\n\nSet the number of sub frames for doing motion blur. Once this is\nset greater than one, you will no longer see a new frame for\nevery Render().  If you set this to five, you will need to do\nfive Render() invocations before seeing the result. This isn't\nvery impressive unless something is changing between the Renders.\nChanging this value may reset the current subframe count.\n"},
  {"SetSubFrames", PyvtkSimpleMotionBlurPass_SetSubFrames, METH_VARARGS,
   "V.SetSubFrames(int)\nC++: virtual void SetSubFrames(int subFrames)\n\nSet the number of sub frames for doing motion blur. Once this is\nset greater than one, you will no longer see a new frame for\nevery Render().  If you set this to five, you will need to do\nfive Render() invocations before seeing the result. This isn't\nvery impressive unless something is changing between the Renders.\nChanging this value may reset the current subframe count.\n"},
  {"SetDepthFormat", PyvtkSimpleMotionBlurPass_SetDepthFormat, METH_VARARGS,
   "V.SetDepthFormat(int)\nC++: virtual void SetDepthFormat(int _arg)\n\nSet the format to use for the depth texture e.g.\nvtkTextureObject::Float32\n"},
  {"SetColorFormat", PyvtkSimpleMotionBlurPass_SetColorFormat, METH_VARARGS,
   "V.SetColorFormat(int)\nC++: virtual void SetColorFormat(int _arg)\n\nSet the format to use for the color texture\nvtkTextureObject::Float16 vtkTextureObject::Float32 and\nvtkTextureObject::Fixed8 are supported. Fixed8 is the default.\n"},
  {"GetDepthTexture", PyvtkSimpleMotionBlurPass_GetDepthTexture, METH_VARARGS,
   "V.GetDepthTexture() -> vtkTextureObject\nC++: virtual vtkTextureObject *GetDepthTexture()\n\n"},
  {"GetColorTexture", PyvtkSimpleMotionBlurPass_GetColorTexture, METH_VARARGS,
   "V.GetColorTexture() -> vtkTextureObject\nC++: virtual vtkTextureObject *GetColorTexture()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSimpleMotionBlurPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkSimpleMotionBlurPass", // tp_name
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
  PyvtkSimpleMotionBlurPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimpleMotionBlurPass_StaticNew()
{
  return vtkSimpleMotionBlurPass::New();
}

PyObject *PyvtkSimpleMotionBlurPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSimpleMotionBlurPass_Type, PyvtkSimpleMotionBlurPass_Methods,
    "vtkSimpleMotionBlurPass",
 &PyvtkSimpleMotionBlurPass_StaticNew);

  PyTypeObject *pytype = &PyvtkSimpleMotionBlurPass_Type;

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

void PyVTKAddFile_vtkSimpleMotionBlurPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleMotionBlurPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleMotionBlurPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

