// python wrapper for vtkSSAAPass
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
#include "vtkSSAAPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSSAAPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSSAAPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkSSAAPass_Doc =
  "vtkSSAAPass - Implement Screen Space Anti Aliasing pass.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "Render to a larger image and then sample down\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color.\n\n"
  "The delegate is used once.\n\n"
  "Its delegate is usually set to a vtkCameraPass or to a\n"
  "post-processing pass.\n\n"
  "@par Implementation: As the filter is separable, it first blurs the\n"
  "image horizontally and then vertically. This reduces the number of\n"
  "texture samples taken.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkSSAAPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSSAAPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAAPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAAPass *op = static_cast<vtkSSAAPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSSAAPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAAPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSSAAPass *tempr = vtkSSAAPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAAPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAAPass *op = static_cast<vtkSSAAPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSSAAPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSSAAPass::NewInstance());

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
PyvtkSSAAPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAAPass *op = static_cast<vtkSSAAPass *>(vp);

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
      op->vtkSSAAPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAAPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAAPass *op = static_cast<vtkSSAAPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetDelegatePass() :
      op->vtkSSAAPass::GetDelegatePass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAAPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAAPass *op = static_cast<vtkSSAAPass *>(vp);

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
      op->vtkSSAAPass::SetDelegatePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSSAAPass_Methods[] = {
  {"IsTypeOf", PyvtkSSAAPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSSAAPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSSAAPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSSAAPass\nC++: static vtkSSAAPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSSAAPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSSAAPass\nC++: vtkSSAAPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkSSAAPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetDelegatePass", PyvtkSSAAPass_GetDelegatePass, METH_VARARGS,
   "V.GetDelegatePass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {"SetDelegatePass", PyvtkSSAAPass_SetDelegatePass, METH_VARARGS,
   "V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSSAAPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkSSAAPass", // tp_name
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
  PyvtkSSAAPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSSAAPass_StaticNew()
{
  return vtkSSAAPass::New();
}

PyObject *PyvtkSSAAPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSSAAPass_Type, PyvtkSSAAPass_Methods,
    "vtkSSAAPass",
 &PyvtkSSAAPass_StaticNew);

  PyTypeObject *pytype = &PyvtkSSAAPass_Type;

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

void PyVTKAddFile_vtkSSAAPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSSAAPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSSAAPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

