// python wrapper for vtkShadowMapBakerPass
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
#include "vtkShadowMapBakerPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShadowMapBakerPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShadowMapBakerPass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif

static const char *PyvtkShadowMapBakerPass_Doc =
  "vtkShadowMapBakerPass - Implement a builder of shadow map pass.\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "Bake a list of shadow maps, once per spot light. It work in\n"
  "conjunction with the vtkShadowMapPass, which uses the shadow maps for\n"
  "rendering the opaque geometry (a technique to render hard shadows in\n"
  "hardware).\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color. An opaque pass may\n"
  "have been performed right after the initialization.\n\n"
  "Its delegate is usually set to a vtkOpaquePass.\n\n"
  "@par Implementation: The first pass of the algorithm is to generate a\n"
  "shadow map per light (depth map from the light point of view) by\n"
  "rendering the opaque objects\n\n"
  "@sa\n"
  "vtkRenderPass, vtkOpaquePass, vtkShadowMapPass\n\n";


static PyObject *
PyvtkShadowMapBakerPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShadowMapBakerPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShadowMapBakerPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShadowMapBakerPass *tempr = vtkShadowMapBakerPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShadowMapBakerPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShadowMapBakerPass::NewInstance());

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
PyvtkShadowMapBakerPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

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
      op->vtkShadowMapBakerPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaqueSequence() :
      op->vtkShadowMapBakerPass::GetOpaqueSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueSequence(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetOpaqueSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetCompositeZPass() :
      op->vtkShadowMapBakerPass::GetCompositeZPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeZPass(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetCompositeZPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkShadowMapBakerPass::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetHasShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasShadows() :
      op->vtkShadowMapBakerPass::GetHasShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_LightCreatesShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightCreatesShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    bool tempr = (ap.IsBound() ?
      op->LightCreatesShadow(temp0) :
      op->vtkShadowMapBakerPass::LightCreatesShadow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetNeedUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedUpdate() :
      op->vtkShadowMapBakerPass::GetNeedUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetUpToDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpToDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUpToDate();
    }
    else
    {
      op->vtkShadowMapBakerPass::SetUpToDate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkShadowMapBakerPass_Methods[] = {
  {"IsTypeOf", PyvtkShadowMapBakerPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShadowMapBakerPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShadowMapBakerPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShadowMapBakerPass\nC++: static vtkShadowMapBakerPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShadowMapBakerPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkShadowMapBakerPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetOpaqueSequence", PyvtkShadowMapBakerPass_GetOpaqueSequence, METH_VARARGS,
   "V.GetOpaqueSequence() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOpaqueSequence()\n\nDelegate for rendering the camera, lights, and opaque geometry.\nIf it is NULL, nothing will be rendered and a warning will be\nemitted. It defaults to a vtkCameraPass with a sequence of\nvtkLightPass/vtkOpaquePass.\n"},
  {"SetOpaqueSequence", PyvtkShadowMapBakerPass_SetOpaqueSequence, METH_VARARGS,
   "V.SetOpaqueSequence(vtkRenderPass)\nC++: virtual void SetOpaqueSequence(vtkRenderPass *opaqueSequence)\n\nDelegate for rendering the camera, lights, and opaque geometry.\nIf it is NULL, nothing will be rendered and a warning will be\nemitted. It defaults to a vtkCameraPass with a sequence of\nvtkLightPass/vtkOpaquePass.\n"},
  {"GetCompositeZPass", PyvtkShadowMapBakerPass_GetCompositeZPass, METH_VARARGS,
   "V.GetCompositeZPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetCompositeZPass()\n\nDelegate for compositing of the shadow maps across processors. If\nit is NULL, there is no z compositing. It is usually set to a\nvtkCompositeZPass (Parallel package). Initial value is a NULL\npointer.\n"},
  {"SetCompositeZPass", PyvtkShadowMapBakerPass_SetCompositeZPass, METH_VARARGS,
   "V.SetCompositeZPass(vtkRenderPass)\nC++: virtual void SetCompositeZPass(vtkRenderPass *compositeZPass)\n\nDelegate for compositing of the shadow maps across processors. If\nit is NULL, there is no z compositing. It is usually set to a\nvtkCompositeZPass (Parallel package). Initial value is a NULL\npointer.\n"},
  {"SetResolution", PyvtkShadowMapBakerPass_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(unsigned int _arg)\n\nSet/Get the number of pixels in each dimension of the shadow maps\n(shadow maps are square). Initial value is 256. The greater the\nbetter. Resolution does not have to be a power-of-two value.\n"},
  {"GetResolution", PyvtkShadowMapBakerPass_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual unsigned int GetResolution()\n\nSet/Get the number of pixels in each dimension of the shadow maps\n(shadow maps are square). Initial value is 256. The greater the\nbetter. Resolution does not have to be a power-of-two value.\n"},
  {"GetHasShadows", PyvtkShadowMapBakerPass_GetHasShadows, METH_VARARGS,
   "V.GetHasShadows() -> bool\nC++: bool GetHasShadows()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Tell if there is at least one shadow.\n* Initial value is false.\n"},
  {"LightCreatesShadow", PyvtkShadowMapBakerPass_LightCreatesShadow, METH_VARARGS,
   "V.LightCreatesShadow(vtkLight) -> bool\nC++: bool LightCreatesShadow(vtkLight *l)\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Tell if the light `l' can create shadows.\n* The light has to not be a head light and to be directional or\n* positional with an angle less than 180 degrees.\n* \\pre l_exists: l!=0\n"},
  {"GetNeedUpdate", PyvtkShadowMapBakerPass_GetNeedUpdate, METH_VARARGS,
   "V.GetNeedUpdate() -> bool\nC++: bool GetNeedUpdate()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Do the shadows need to be updated?\n* Value changed by vtkShadowMapBakerPass and used by\n  vtkShadowMapPass.\n* Initial value is true.\n"},
  {"SetUpToDate", PyvtkShadowMapBakerPass_SetUpToDate, METH_VARARGS,
   "V.SetUpToDate()\nC++: void SetUpToDate()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShadowMapBakerPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkShadowMapBakerPass", // tp_name
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
  PyvtkShadowMapBakerPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShadowMapBakerPass_StaticNew()
{
  return vtkShadowMapBakerPass::New();
}

PyObject *PyvtkShadowMapBakerPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShadowMapBakerPass_Type, PyvtkShadowMapBakerPass_Methods,
    "vtkShadowMapBakerPass",
 &PyvtkShadowMapBakerPass_StaticNew);

  PyTypeObject *pytype = &PyvtkShadowMapBakerPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShadowMapBakerPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShadowMapBakerPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShadowMapBakerPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

