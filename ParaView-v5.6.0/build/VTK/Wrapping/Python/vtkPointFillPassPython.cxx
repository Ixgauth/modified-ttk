// python wrapper for vtkPointFillPass
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
#include "vtkPointFillPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointFillPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointFillPass_ClassNew(); }

#ifndef DECLARED_PyvtkDepthImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkDepthImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkDepthImageProcessingPass_ClassNew
#endif

static const char *PyvtkPointFillPass_Doc =
  "vtkPointFillPass - Implement a post-processing fillpass\n\n"
  "Superclass: vtkDepthImageProcessingPass\n\n"
  "This pass is designed to fill in rendering of sparse point\n"
  "sets/coulds The delegate is used once and is usually set to a\n"
  "vtkCameraPass or to a post-processing pass.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkPointFillPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointFillPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointFillPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointFillPass *tempr = vtkPointFillPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointFillPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointFillPass::NewInstance());

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
PyvtkPointFillPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

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
      op->vtkPointFillPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_SetCandidatePointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCandidatePointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCandidatePointRatio(temp0);
    }
    else
    {
      op->vtkPointFillPass::SetCandidatePointRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_GetCandidatePointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCandidatePointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCandidatePointRatio() :
      op->vtkPointFillPass::GetCandidatePointRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_SetMinimumCandidateAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCandidateAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumCandidateAngle(temp0);
    }
    else
    {
      op->vtkPointFillPass::SetMinimumCandidateAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointFillPass_GetMinimumCandidateAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCandidateAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointFillPass *op = static_cast<vtkPointFillPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumCandidateAngle() :
      op->vtkPointFillPass::GetMinimumCandidateAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointFillPass_Methods[] = {
  {"IsTypeOf", PyvtkPointFillPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointFillPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointFillPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointFillPass\nC++: static vtkPointFillPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointFillPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointFillPass\nC++: vtkPointFillPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkPointFillPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"SetCandidatePointRatio", PyvtkPointFillPass_SetCandidatePointRatio, METH_VARARGS,
   "V.SetCandidatePointRatio(float)\nC++: virtual void SetCandidatePointRatio(float _arg)\n\nHow far in front of a point must a neighboring point be to be\nused as a filler candidate.  Expressed as a multiple of the\npoints distance from the camera. Defaults to 0.95\n"},
  {"GetCandidatePointRatio", PyvtkPointFillPass_GetCandidatePointRatio, METH_VARARGS,
   "V.GetCandidatePointRatio() -> float\nC++: virtual float GetCandidatePointRatio()\n\nHow far in front of a point must a neighboring point be to be\nused as a filler candidate.  Expressed as a multiple of the\npoints distance from the camera. Defaults to 0.95\n"},
  {"SetMinimumCandidateAngle", PyvtkPointFillPass_SetMinimumCandidateAngle, METH_VARARGS,
   "V.SetMinimumCandidateAngle(float)\nC++: virtual void SetMinimumCandidateAngle(float _arg)\n\nHow large of an angle must the filler candidates span before a\npoint will be filled. Expressed in radians. A value of pi will\nkeep edges from growing out. Large values require more support,\nlower values less.\n"},
  {"GetMinimumCandidateAngle", PyvtkPointFillPass_GetMinimumCandidateAngle, METH_VARARGS,
   "V.GetMinimumCandidateAngle() -> float\nC++: virtual float GetMinimumCandidateAngle()\n\nHow large of an angle must the filler candidates span before a\npoint will be filled. Expressed in radians. A value of pi will\nkeep edges from growing out. Large values require more support,\nlower values less.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointFillPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkPointFillPass", // tp_name
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
  PyvtkPointFillPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointFillPass_StaticNew()
{
  return vtkPointFillPass::New();
}

PyObject *PyvtkPointFillPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointFillPass_Type, PyvtkPointFillPass_Methods,
    "vtkPointFillPass",
 &PyvtkPointFillPass_StaticNew);

  PyTypeObject *pytype = &PyvtkPointFillPass_Type;

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

void PyVTKAddFile_vtkPointFillPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointFillPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointFillPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

