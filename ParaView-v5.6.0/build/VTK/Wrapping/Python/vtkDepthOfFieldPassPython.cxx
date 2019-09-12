// python wrapper for vtkDepthOfFieldPass
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
#include "vtkDepthOfFieldPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDepthOfFieldPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDepthOfFieldPass_ClassNew(); }

#ifndef DECLARED_PyvtkDepthImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkDepthImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkDepthImageProcessingPass_ClassNew
#endif

static const char *PyvtkDepthOfFieldPass_Doc =
  "vtkDepthOfFieldPass - Implement a post-processing DOF blur pass.\n\n"
  "Superclass: vtkDepthImageProcessingPass\n\n"
  "Currently only does behind the focal plane\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color.\n\n"
  "The delegate is used once.\n\n"
  "Its delegate is usually set to a vtkCameraPass or to a\n"
  "post-processing pass.\n\n"
  "@par Implementation: As the filter is separable, it first blurs the\n"
  "image horizontally and then vertically. This reduces the number of\n"
  "texture samples\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkDepthOfFieldPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDepthOfFieldPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthOfFieldPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDepthOfFieldPass *tempr = vtkDepthOfFieldPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDepthOfFieldPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthOfFieldPass::NewInstance());

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
PyvtkDepthOfFieldPass_SetAutomaticFocalDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticFocalDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticFocalDistance(temp0);
    }
    else
    {
      op->vtkDepthOfFieldPass::SetAutomaticFocalDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_GetAutomaticFocalDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticFocalDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutomaticFocalDistance() :
      op->vtkDepthOfFieldPass::GetAutomaticFocalDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_AutomaticFocalDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticFocalDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticFocalDistanceOn();
    }
    else
    {
      op->vtkDepthOfFieldPass::AutomaticFocalDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_AutomaticFocalDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticFocalDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticFocalDistanceOff();
    }
    else
    {
      op->vtkDepthOfFieldPass::AutomaticFocalDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthOfFieldPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthOfFieldPass *op = static_cast<vtkDepthOfFieldPass *>(vp);

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
      op->vtkDepthOfFieldPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDepthOfFieldPass_Methods[] = {
  {"IsTypeOf", PyvtkDepthOfFieldPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDepthOfFieldPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDepthOfFieldPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDepthOfFieldPass\nC++: static vtkDepthOfFieldPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDepthOfFieldPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDepthOfFieldPass\nC++: vtkDepthOfFieldPass *NewInstance()\n\n"},
  {"SetAutomaticFocalDistance", PyvtkDepthOfFieldPass_SetAutomaticFocalDistance, METH_VARARGS,
   "V.SetAutomaticFocalDistance(bool)\nC++: virtual void SetAutomaticFocalDistance(bool _arg)\n\nUse automatic focal distance calculation, this is on by default\nWhen on the center of the viewport will always be in focus\nregardless of where the focal point is.\n"},
  {"GetAutomaticFocalDistance", PyvtkDepthOfFieldPass_GetAutomaticFocalDistance, METH_VARARGS,
   "V.GetAutomaticFocalDistance() -> bool\nC++: virtual bool GetAutomaticFocalDistance()\n\nUse automatic focal distance calculation, this is on by default\nWhen on the center of the viewport will always be in focus\nregardless of where the focal point is.\n"},
  {"AutomaticFocalDistanceOn", PyvtkDepthOfFieldPass_AutomaticFocalDistanceOn, METH_VARARGS,
   "V.AutomaticFocalDistanceOn()\nC++: virtual void AutomaticFocalDistanceOn()\n\nUse automatic focal distance calculation, this is on by default\nWhen on the center of the viewport will always be in focus\nregardless of where the focal point is.\n"},
  {"AutomaticFocalDistanceOff", PyvtkDepthOfFieldPass_AutomaticFocalDistanceOff, METH_VARARGS,
   "V.AutomaticFocalDistanceOff()\nC++: virtual void AutomaticFocalDistanceOff()\n\nUse automatic focal distance calculation, this is on by default\nWhen on the center of the viewport will always be in focus\nregardless of where the focal point is.\n"},
  {"ReleaseGraphicsResources", PyvtkDepthOfFieldPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDepthOfFieldPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkDepthOfFieldPass", // tp_name
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
  PyvtkDepthOfFieldPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDepthOfFieldPass_StaticNew()
{
  return vtkDepthOfFieldPass::New();
}

PyObject *PyvtkDepthOfFieldPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDepthOfFieldPass_Type, PyvtkDepthOfFieldPass_Methods,
    "vtkDepthOfFieldPass",
 &PyvtkDepthOfFieldPass_StaticNew);

  PyTypeObject *pytype = &PyvtkDepthOfFieldPass_Type;

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

void PyVTKAddFile_vtkDepthOfFieldPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDepthOfFieldPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDepthOfFieldPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

