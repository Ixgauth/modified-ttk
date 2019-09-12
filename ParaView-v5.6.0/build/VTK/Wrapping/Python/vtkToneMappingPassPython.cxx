// python wrapper for vtkToneMappingPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkToneMappingPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkToneMappingPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkToneMappingPass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static const char *PyvtkToneMappingPass_Doc =
  "vtkToneMappingPass - Implement a post-processing Tone Mapping.\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "Tone mapping is the process of mapping HDR colors to [0;1] range.\n"
  "This render pass supports three different modes:\n"
  "- Clamp: clamps the color to [0;1] range\n"
  "- Reinhard: maps the color using formula: x/(x+1)\n"
  "- Exponential: maps the colors using a coefficient and the formula:\n"
  "  1-exp(-a*x)\n\n"
  "Advanced tone maping like Reinhard or Exponential can be useful when\n"
  "several lights are added to the renderer.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkToneMappingPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkToneMappingPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkToneMappingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkToneMappingPass *tempr = vtkToneMappingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkToneMappingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkToneMappingPass::NewInstance());

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
PyvtkToneMappingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

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
      op->vtkToneMappingPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetToneMappingType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToneMappingType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToneMappingType(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetToneMappingType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingTypeMinValue() :
      op->vtkToneMappingPass::GetToneMappingTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingTypeMaxValue() :
      op->vtkToneMappingPass::GetToneMappingTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingType() :
      op->vtkToneMappingPass::GetToneMappingType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetExposure() :
      op->vtkToneMappingPass::GetExposure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExposure(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetExposure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkToneMappingPass_Methods[] = {
  {"IsTypeOf", PyvtkToneMappingPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkToneMappingPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkToneMappingPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkToneMappingPass\nC++: static vtkToneMappingPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkToneMappingPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkToneMappingPass\nC++: vtkToneMappingPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkToneMappingPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n"},
  {"SetToneMappingType", PyvtkToneMappingPass_SetToneMappingType, METH_VARARGS,
   "V.SetToneMappingType(int)\nC++: virtual void SetToneMappingType(int _arg)\n\nGet/Set the tone mapping type Default is Clamp\n"},
  {"GetToneMappingTypeMinValue", PyvtkToneMappingPass_GetToneMappingTypeMinValue, METH_VARARGS,
   "V.GetToneMappingTypeMinValue() -> int\nC++: virtual int GetToneMappingTypeMinValue()\n\nGet/Set the tone mapping type Default is Clamp\n"},
  {"GetToneMappingTypeMaxValue", PyvtkToneMappingPass_GetToneMappingTypeMaxValue, METH_VARARGS,
   "V.GetToneMappingTypeMaxValue() -> int\nC++: virtual int GetToneMappingTypeMaxValue()\n\nGet/Set the tone mapping type Default is Clamp\n"},
  {"GetToneMappingType", PyvtkToneMappingPass_GetToneMappingType, METH_VARARGS,
   "V.GetToneMappingType() -> int\nC++: virtual int GetToneMappingType()\n\nGet/Set the tone mapping type Default is Clamp\n"},
  {"GetExposure", PyvtkToneMappingPass_GetExposure, METH_VARARGS,
   "V.GetExposure() -> float\nC++: virtual float GetExposure()\n\nGet/Set Exposure coefficient used for exponential tone mapping.\nDefault is 1.0\n"},
  {"SetExposure", PyvtkToneMappingPass_SetExposure, METH_VARARGS,
   "V.SetExposure(float)\nC++: virtual void SetExposure(float _arg)\n\nGet/Set Exposure coefficient used for exponential tone mapping.\nDefault is 1.0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkToneMappingPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkToneMappingPass", // tp_name
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
  PyvtkToneMappingPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkToneMappingPass_StaticNew()
{
  return vtkToneMappingPass::New();
}

PyObject *PyvtkToneMappingPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkToneMappingPass_Type, PyvtkToneMappingPass_Methods,
    "vtkToneMappingPass",
 &PyvtkToneMappingPass_StaticNew);

  PyTypeObject *pytype = &PyvtkToneMappingPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Clamp", vtkToneMappingPass::Clamp },
        { "Reinhard", vtkToneMappingPass::Reinhard },
        { "Exponential", vtkToneMappingPass::Exponential },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkToneMappingPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkToneMappingPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkToneMappingPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

