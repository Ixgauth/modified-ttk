// python wrapper for vtkCompositeRGBAPass
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
#include "vtkCompositeRGBAPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeRGBAPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeRGBAPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkCompositeRGBAPass_Doc =
  "vtkCompositeRGBAPass - Blend RGBA buffers of processes.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "Blend the RGBA buffers of satellite processes over the root process\n"
  "RGBA buffer. The RGBA buffer of the satellite processes are not\n"
  "changed.\n\n"
  "This pass requires a OpenGL context that supports texture objects\n"
  "(TO), and pixel buffer objects (PBO). If not, it will emit an error\n"
  "message and will render its delegate and return.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkCompositeRGBAPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeRGBAPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeRGBAPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeRGBAPass *tempr = vtkCompositeRGBAPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeRGBAPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeRGBAPass::NewInstance());

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
PyvtkCompositeRGBAPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

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
      op->vtkCompositeRGBAPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCompositeRGBAPass::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

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
      op->vtkCompositeRGBAPass::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_GetKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdtree() :
      op->vtkCompositeRGBAPass::GetKdtree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_SetKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  vtkPKdTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
  {
    if (ap.IsBound())
    {
      op->SetKdtree(temp0);
    }
    else
    {
      op->vtkCompositeRGBAPass::SetKdtree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRGBAPass_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRGBAPass *op = static_cast<vtkCompositeRGBAPass *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkCompositeRGBAPass::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeRGBAPass_Methods[] = {
  {"IsTypeOf", PyvtkCompositeRGBAPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeRGBAPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeRGBAPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeRGBAPass\nC++: static vtkCompositeRGBAPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeRGBAPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeRGBAPass\nC++: vtkCompositeRGBAPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCompositeRGBAPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetController", PyvtkCompositeRGBAPass_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer.\n"},
  {"SetController", PyvtkCompositeRGBAPass_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nController If it is NULL, nothing will be rendered and a warning\nwill be emitted. Initial value is a NULL pointer.\n"},
  {"GetKdtree", PyvtkCompositeRGBAPass_GetKdtree, METH_VARARGS,
   "V.GetKdtree() -> vtkPKdTree\nC++: virtual vtkPKdTree *GetKdtree()\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer.\n"},
  {"SetKdtree", PyvtkCompositeRGBAPass_SetKdtree, METH_VARARGS,
   "V.SetKdtree(vtkPKdTree)\nC++: virtual void SetKdtree(vtkPKdTree *kdtree)\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer.\n"},
  {"IsSupported", PyvtkCompositeRGBAPass_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkOpenGLRenderWindow) -> bool\nC++: bool IsSupported(vtkOpenGLRenderWindow *context)\n\nIs the pass supported by the OpenGL context?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeRGBAPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkCompositeRGBAPass", // tp_name
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
  PyvtkCompositeRGBAPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeRGBAPass_StaticNew()
{
  return vtkCompositeRGBAPass::New();
}

PyObject *PyvtkCompositeRGBAPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeRGBAPass_Type, PyvtkCompositeRGBAPass_Methods,
    "vtkCompositeRGBAPass",
 &PyvtkCompositeRGBAPass_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeRGBAPass_Type;

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

void PyVTKAddFile_vtkCompositeRGBAPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeRGBAPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeRGBAPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

