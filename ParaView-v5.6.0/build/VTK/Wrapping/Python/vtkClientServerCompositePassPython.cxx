// python wrapper for vtkClientServerCompositePass
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
#include "vtkClientServerCompositePass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerCompositePass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerCompositePass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkClientServerCompositePass_Doc =
  "vtkClientServerCompositePass - vtkClientServerCompositePass is a\nrender-pass that can handle client-server image delivery.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "This is designed to be used in configurations in two-processes\n"
  "configurations.\n\n";


static PyObject *
PyvtkClientServerCompositePass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClientServerCompositePass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientServerCompositePass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientServerCompositePass *tempr = vtkClientServerCompositePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerCompositePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientServerCompositePass::NewInstance());

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
PyvtkClientServerCompositePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

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
      op->vtkClientServerCompositePass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkClientServerCompositePass::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkClientServerCompositePass::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetRenderPass(temp0);
    }
    else
    {
      op->vtkClientServerCompositePass::SetRenderPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetRenderPass() :
      op->vtkClientServerCompositePass::GetRenderPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetPostProcessingRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostProcessingRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetPostProcessingRenderPass(temp0);
    }
    else
    {
      op->vtkClientServerCompositePass::SetPostProcessingRenderPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetPostProcessingRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostProcessingRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetPostProcessingRenderPass() :
      op->vtkClientServerCompositePass::GetPostProcessingRenderPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetProcessIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIsServer(temp0);
    }
    else
    {
      op->vtkClientServerCompositePass::SetProcessIsServer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ProcessIsServerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsServerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessIsServerOn();
    }
    else
    {
      op->vtkClientServerCompositePass::ProcessIsServerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ProcessIsServerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsServerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessIsServerOff();
    }
    else
    {
      op->vtkClientServerCompositePass::ProcessIsServerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetProcessIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessIsServer() :
      op->vtkClientServerCompositePass::GetProcessIsServer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_SetServerSideRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerSideRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetServerSideRendering(temp0);
    }
    else
    {
      op->vtkClientServerCompositePass::SetServerSideRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ServerSideRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ServerSideRenderingOn();
    }
    else
    {
      op->vtkClientServerCompositePass::ServerSideRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_ServerSideRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ServerSideRenderingOff();
    }
    else
    {
      op->vtkClientServerCompositePass::ServerSideRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerCompositePass_GetServerSideRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerSideRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerCompositePass *op = static_cast<vtkClientServerCompositePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetServerSideRendering() :
      op->vtkClientServerCompositePass::GetServerSideRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerCompositePass_Methods[] = {
  {"IsTypeOf", PyvtkClientServerCompositePass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClientServerCompositePass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClientServerCompositePass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClientServerCompositePass\nC++: static vtkClientServerCompositePass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClientServerCompositePass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClientServerCompositePass\nC++: vtkClientServerCompositePass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkClientServerCompositePass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetController", PyvtkClientServerCompositePass_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer. This must be\nset to the socket controller used for communicating between the\nclient and the server.\n"},
  {"SetController", PyvtkClientServerCompositePass_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer. This must be\nset to the socket controller used for communicating between the\nclient and the server.\n"},
  {"SetRenderPass", PyvtkClientServerCompositePass_SetRenderPass, METH_VARARGS,
   "V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set the render pass used to do the actual rendering. When\nServerSideRendering is true, the rendering-pass is called only on\nthe server side.\n"},
  {"GetRenderPass", PyvtkClientServerCompositePass_GetRenderPass, METH_VARARGS,
   "V.GetRenderPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetRenderPass()\n\nGet/Set the render pass used to do the actual rendering. When\nServerSideRendering is true, the rendering-pass is called only on\nthe server side.\n"},
  {"SetPostProcessingRenderPass", PyvtkClientServerCompositePass_SetPostProcessingRenderPass, METH_VARARGS,
   "V.SetPostProcessingRenderPass(vtkRenderPass)\nC++: void SetPostProcessingRenderPass(vtkRenderPass *)\n\nSet/Get the optional post-fetch render pass. On the\nclient-process this is called after the server-side image is\nfetched (if ServerSideRendering is true). On server-process, this\nis called after the image rendered by this->RenderPass is\ndelivered to the client (if ServerSideRendering is true). This is\noptional, so you can set this either on one of the two processes\nor both or neither.\n"},
  {"GetPostProcessingRenderPass", PyvtkClientServerCompositePass_GetPostProcessingRenderPass, METH_VARARGS,
   "V.GetPostProcessingRenderPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetPostProcessingRenderPass()\n\nSet/Get the optional post-fetch render pass. On the\nclient-process this is called after the server-side image is\nfetched (if ServerSideRendering is true). On server-process, this\nis called after the image rendered by this->RenderPass is\ndelivered to the client (if ServerSideRendering is true). This is\noptional, so you can set this either on one of the two processes\nor both or neither.\n"},
  {"SetProcessIsServer", PyvtkClientServerCompositePass_SetProcessIsServer, METH_VARARGS,
   "V.SetProcessIsServer(bool)\nC++: virtual void SetProcessIsServer(bool _arg)\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {"ProcessIsServerOn", PyvtkClientServerCompositePass_ProcessIsServerOn, METH_VARARGS,
   "V.ProcessIsServerOn()\nC++: virtual void ProcessIsServerOn()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {"ProcessIsServerOff", PyvtkClientServerCompositePass_ProcessIsServerOff, METH_VARARGS,
   "V.ProcessIsServerOff()\nC++: virtual void ProcessIsServerOff()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {"GetProcessIsServer", PyvtkClientServerCompositePass_GetProcessIsServer, METH_VARARGS,
   "V.GetProcessIsServer() -> bool\nC++: virtual bool GetProcessIsServer()\n\nSet the current process type. This is needed since when using the\nsocket communicator there's no easy way of determining which\nprocess is the server and which one is the client.\n"},
  {"SetServerSideRendering", PyvtkClientServerCompositePass_SetServerSideRendering, METH_VARARGS,
   "V.SetServerSideRendering(bool)\nC++: virtual void SetServerSideRendering(bool _arg)\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {"ServerSideRenderingOn", PyvtkClientServerCompositePass_ServerSideRenderingOn, METH_VARARGS,
   "V.ServerSideRenderingOn()\nC++: virtual void ServerSideRenderingOn()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {"ServerSideRenderingOff", PyvtkClientServerCompositePass_ServerSideRenderingOff, METH_VARARGS,
   "V.ServerSideRenderingOff()\nC++: virtual void ServerSideRenderingOff()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {"GetServerSideRendering", PyvtkClientServerCompositePass_GetServerSideRendering, METH_VARARGS,
   "V.GetServerSideRendering() -> bool\nC++: virtual bool GetServerSideRendering()\n\nEnable/Disable fetching of the image from the server side to the\nclient. If this flag is disabled, then this pass just acts as a\n\"pass-through\" pass. This flag must be set to the same value on\nboth the processes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClientServerCompositePass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkClientServerCompositePass", // tp_name
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
  PyvtkClientServerCompositePass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClientServerCompositePass_StaticNew()
{
  return vtkClientServerCompositePass::New();
}

PyObject *PyvtkClientServerCompositePass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClientServerCompositePass_Type, PyvtkClientServerCompositePass_Methods,
    "vtkClientServerCompositePass",
 &PyvtkClientServerCompositePass_StaticNew);

  PyTypeObject *pytype = &PyvtkClientServerCompositePass_Type;

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

void PyVTKAddFile_vtkClientServerCompositePass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerCompositePass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerCompositePass", o) != 0)
  {
    Py_DECREF(o);
  }

}

