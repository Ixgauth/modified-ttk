// python wrapper for vtkImageProcessingPass
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
#include "vtkImageProcessingPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageProcessingPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageProcessingPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkImageProcessingPass_Doc =
  "vtkImageProcessingPass - Convenient class for post-processing passes.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "render pass.\n\n"
  "Abstract class with some convenient methods frequently used in\n"
  "subclasses.\n\n"
  "@sa\n"
  "vtkRenderPass vtkGaussianBlurPass vtkSobelGradientMagnitudePass\n\n";


static PyObject *
PyvtkImageProcessingPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageProcessingPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageProcessingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageProcessingPass *tempr = vtkImageProcessingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProcessingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageProcessingPass::NewInstance());

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
PyvtkImageProcessingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

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
      op->vtkImageProcessingPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetDelegatePass() :
      op->vtkImageProcessingPass::GetDelegatePass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetDelegatePass(temp0);
    }
    else
    {
      op->vtkImageProcessingPass::SetDelegatePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageProcessingPass_Methods[] = {
  {"IsTypeOf", PyvtkImageProcessingPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageProcessingPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageProcessingPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageProcessingPass\nC++: static vtkImageProcessingPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageProcessingPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkImageProcessingPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetDelegatePass", PyvtkImageProcessingPass_GetDelegatePass, METH_VARARGS,
   "V.GetDelegatePass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {"SetDelegatePass", PyvtkImageProcessingPass_SetDelegatePass, METH_VARARGS,
   "V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageProcessingPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkImageProcessingPass", // tp_name
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
  PyvtkImageProcessingPass_Doc, // tp_doc
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

PyObject *PyvtkImageProcessingPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageProcessingPass_Type, PyvtkImageProcessingPass_Methods,
    "vtkImageProcessingPass",
 nullptr);

  PyTypeObject *pytype = &PyvtkImageProcessingPass_Type;

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

void PyVTKAddFile_vtkImageProcessingPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageProcessingPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageProcessingPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

