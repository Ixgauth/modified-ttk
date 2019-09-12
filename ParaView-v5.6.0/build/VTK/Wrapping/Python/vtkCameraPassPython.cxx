// python wrapper for vtkCameraPass
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
#include "vtkCameraPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkCameraPass_Doc =
  "vtkCameraPass - Implement the camera render pass.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "Render the camera.\n\n"
  "It setups the projection and modelview matrices and can clear the\n"
  "background It calls its delegate once. After its delegate returns, it\n"
  "restore the modelview matrix stack.\n\n"
  "Its delegate is usually set to a vtkSequencePass with a vtkLigthsPass\n"
  "and a list of passes for the geometry.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkCameraPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraPass *tempr = vtkCameraPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraPass::NewInstance());

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
PyvtkCameraPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

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
      op->vtkCameraPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetDelegatePass() :
      op->vtkCameraPass::GetDelegatePass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

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
      op->vtkCameraPass::SetDelegatePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_SetAspectRatioOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatioOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAspectRatioOverride(temp0);
    }
    else
    {
      op->vtkCameraPass::SetAspectRatioOverride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPass_GetAspectRatioOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatioOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAspectRatioOverride() :
      op->vtkCameraPass::GetAspectRatioOverride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraPass_Methods[] = {
  {"IsTypeOf", PyvtkCameraPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraPass\nC++: static vtkCameraPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraPass\nC++: vtkCameraPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCameraPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetDelegatePass", PyvtkCameraPass_GetDelegatePass, METH_VARARGS,
   "V.GetDelegatePass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the geometry. If it is NULL, nothing will\nbe rendered and a warning will be emitted. It is usually set to a\nvtkSequencePass with a vtkLigthsPass and a list of passes for the\ngeometry. Initial value is a NULL pointer.\n"},
  {"SetDelegatePass", PyvtkCameraPass_SetDelegatePass, METH_VARARGS,
   "V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the geometry. If it is NULL, nothing will\nbe rendered and a warning will be emitted. It is usually set to a\nvtkSequencePass with a vtkLigthsPass and a list of passes for the\ngeometry. Initial value is a NULL pointer.\n"},
  {"SetAspectRatioOverride", PyvtkCameraPass_SetAspectRatioOverride, METH_VARARGS,
   "V.SetAspectRatioOverride(float)\nC++: virtual void SetAspectRatioOverride(double _arg)\n\nUsed to override the aspect ratio used when computing the\nprojection matrix. This is useful when rendering for\ntile-displays for example.\n"},
  {"GetAspectRatioOverride", PyvtkCameraPass_GetAspectRatioOverride, METH_VARARGS,
   "V.GetAspectRatioOverride() -> float\nC++: virtual double GetAspectRatioOverride()\n\nUsed to override the aspect ratio used when computing the\nprojection matrix. This is useful when rendering for\ntile-displays for example.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkCameraPass", // tp_name
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
  PyvtkCameraPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraPass_StaticNew()
{
  return vtkCameraPass::New();
}

PyObject *PyvtkCameraPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraPass_Type, PyvtkCameraPass_Methods,
    "vtkCameraPass",
 &PyvtkCameraPass_StaticNew);

  PyTypeObject *pytype = &PyvtkCameraPass_Type;

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

void PyVTKAddFile_vtkCameraPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

