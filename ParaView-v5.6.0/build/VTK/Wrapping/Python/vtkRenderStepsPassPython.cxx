// python wrapper for vtkRenderStepsPass
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
#include "vtkRenderStepsPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderStepsPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderStepsPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkRenderStepsPass_Doc =
  "vtkRenderStepsPass - Execute render passes sequentially.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "vtkRenderStepsPass executes a standard list of render passes\n"
  "sequentially. This class allows to define a sequence of render passes\n"
  "at run time. You can set a step to NULL in order to skip that step.\n"
  "Likewise you can replace any of the default steps with your own step.\n"
  "Typically in such a case you would get the current step, replace it\n"
  "with your own and likely have your step call the current step as a\n"
  "delegate. For example to replace the translucent step with a\n"
  "depthpeeling step you would get the current tranlucent step and set\n"
  "it as a delegate on the depthpeeling step. Then set this classes\n"
  "translparent step to the depthpeelnig step.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkRenderStepsPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderStepsPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderStepsPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderStepsPass *tempr = vtkRenderStepsPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderStepsPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderStepsPass::NewInstance());

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
PyvtkRenderStepsPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

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
      op->vtkRenderStepsPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetCameraPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraPass *tempr = (ap.IsBound() ?
      op->GetCameraPass() :
      op->vtkRenderStepsPass::GetCameraPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetCameraPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkCameraPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraPass"))
  {
    if (ap.IsBound())
    {
      op->SetCameraPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetCameraPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetLightsPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightsPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetLightsPass() :
      op->vtkRenderStepsPass::GetLightsPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetLightsPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightsPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetLightsPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetLightsPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaquePass() :
      op->vtkRenderStepsPass::GetOpaquePass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOpaquePass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetOpaquePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetTranslucentPass() :
      op->vtkRenderStepsPass::GetTranslucentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetTranslucentPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetTranslucentPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetVolumetricPass() :
      op->vtkRenderStepsPass::GetVolumetricPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetVolumetricPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetVolumetricPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetOverlayPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlayPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOverlayPass() :
      op->vtkRenderStepsPass::GetOverlayPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetOverlayPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlayPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOverlayPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetOverlayPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetPostProcessPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostProcessPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetPostProcessPass() :
      op->vtkRenderStepsPass::GetPostProcessPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetPostProcessPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostProcessPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetPostProcessPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetPostProcessPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderStepsPass_Methods[] = {
  {"IsTypeOf", PyvtkRenderStepsPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderStepsPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderStepsPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderStepsPass\nC++: static vtkRenderStepsPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderStepsPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderStepsPass\nC++: vtkRenderStepsPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkRenderStepsPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetCameraPass", PyvtkRenderStepsPass_GetCameraPass, METH_VARARGS,
   "V.GetCameraPass() -> vtkCameraPass\nC++: virtual vtkCameraPass *GetCameraPass()\n\nGet the RenderPass used for the Camera Step\n"},
  {"SetCameraPass", PyvtkRenderStepsPass_SetCameraPass, METH_VARARGS,
   "V.SetCameraPass(vtkCameraPass)\nC++: void SetCameraPass(vtkCameraPass *)\n\nGet the RenderPass used for the Camera Step\n"},
  {"GetLightsPass", PyvtkRenderStepsPass_GetLightsPass, METH_VARARGS,
   "V.GetLightsPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetLightsPass()\n\nGet the RenderPass used for the Lights Step\n"},
  {"SetLightsPass", PyvtkRenderStepsPass_SetLightsPass, METH_VARARGS,
   "V.SetLightsPass(vtkRenderPass)\nC++: void SetLightsPass(vtkRenderPass *)\n\nGet the RenderPass used for the Lights Step\n"},
  {"GetOpaquePass", PyvtkRenderStepsPass_GetOpaquePass, METH_VARARGS,
   "V.GetOpaquePass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOpaquePass()\n\nGet the RenderPass used for the Opaque Step\n"},
  {"SetOpaquePass", PyvtkRenderStepsPass_SetOpaquePass, METH_VARARGS,
   "V.SetOpaquePass(vtkRenderPass)\nC++: void SetOpaquePass(vtkRenderPass *)\n\nGet the RenderPass used for the Opaque Step\n"},
  {"GetTranslucentPass", PyvtkRenderStepsPass_GetTranslucentPass, METH_VARARGS,
   "V.GetTranslucentPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetTranslucentPass()\n\nGet the RenderPass used for the translucent Step\n"},
  {"SetTranslucentPass", PyvtkRenderStepsPass_SetTranslucentPass, METH_VARARGS,
   "V.SetTranslucentPass(vtkRenderPass)\nC++: void SetTranslucentPass(vtkRenderPass *)\n\nGet the RenderPass used for the translucent Step\n"},
  {"GetVolumetricPass", PyvtkRenderStepsPass_GetVolumetricPass, METH_VARARGS,
   "V.GetVolumetricPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetVolumetricPass()\n\nGet the RenderPass used for the Volume Step\n"},
  {"SetVolumetricPass", PyvtkRenderStepsPass_SetVolumetricPass, METH_VARARGS,
   "V.SetVolumetricPass(vtkRenderPass)\nC++: void SetVolumetricPass(vtkRenderPass *)\n\nGet the RenderPass used for the Volume Step\n"},
  {"GetOverlayPass", PyvtkRenderStepsPass_GetOverlayPass, METH_VARARGS,
   "V.GetOverlayPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOverlayPass()\n\nGet the RenderPass used for the Overlay Step\n"},
  {"SetOverlayPass", PyvtkRenderStepsPass_SetOverlayPass, METH_VARARGS,
   "V.SetOverlayPass(vtkRenderPass)\nC++: void SetOverlayPass(vtkRenderPass *)\n\nGet the RenderPass used for the Overlay Step\n"},
  {"GetPostProcessPass", PyvtkRenderStepsPass_GetPostProcessPass, METH_VARARGS,
   "V.GetPostProcessPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetPostProcessPass()\n\nGet the RenderPass used for the PostProcess Step\n"},
  {"SetPostProcessPass", PyvtkRenderStepsPass_SetPostProcessPass, METH_VARARGS,
   "V.SetPostProcessPass(vtkRenderPass)\nC++: void SetPostProcessPass(vtkRenderPass *)\n\nGet the RenderPass used for the PostProcess Step\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderStepsPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkRenderStepsPass", // tp_name
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
  PyvtkRenderStepsPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderStepsPass_StaticNew()
{
  return vtkRenderStepsPass::New();
}

PyObject *PyvtkRenderStepsPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderStepsPass_Type, PyvtkRenderStepsPass_Methods,
    "vtkRenderStepsPass",
 &PyvtkRenderStepsPass_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderStepsPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderStepsPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderStepsPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderStepsPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

