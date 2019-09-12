// python wrapper for vtkSampleImplicitFunctionFilter
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
#include "vtkSampleImplicitFunctionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSampleImplicitFunctionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSampleImplicitFunctionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSampleImplicitFunctionFilter_Doc =
  "vtkSampleImplicitFunctionFilter - sample an implicit function over a\ndataset, generating scalar values and optional gradient vectors\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSampleImplicitFunctionFilter is a filter that evaluates an\n"
  "implicit function and (optional) gradients at each point in an input\n"
  "vtkDataSet. The output of the filter are new scalar values (the\n"
  "function values) and the optional vector (function gradient) array.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkSampleFunction vtkImplicitModeller\n\n";


static PyObject *
PyvtkSampleImplicitFunctionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSampleImplicitFunctionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSampleImplicitFunctionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSampleImplicitFunctionFilter *tempr = vtkSampleImplicitFunctionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSampleImplicitFunctionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSampleImplicitFunctionFilter::NewInstance());

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
PyvtkSampleImplicitFunctionFilter_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkSampleImplicitFunctionFilter::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradients(temp0);
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::SetComputeGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkSampleImplicitFunctionFilter::GetComputeGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOn();
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::ComputeGradientsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOff();
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::ComputeGradientsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArrayName(temp0);
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::SetScalarArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkSampleImplicitFunctionFilter::GetScalarArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_SetGradientArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientArrayName(temp0);
    }
    else
    {
      op->vtkSampleImplicitFunctionFilter::SetGradientArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_GetGradientArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGradientArrayName() :
      op->vtkSampleImplicitFunctionFilter::GetGradientArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSampleImplicitFunctionFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleImplicitFunctionFilter *op = static_cast<vtkSampleImplicitFunctionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSampleImplicitFunctionFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSampleImplicitFunctionFilter_Methods[] = {
  {"IsTypeOf", PyvtkSampleImplicitFunctionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard instantiation, type information, and print methods.\n"},
  {"IsA", PyvtkSampleImplicitFunctionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard instantiation, type information, and print methods.\n"},
  {"SafeDownCast", PyvtkSampleImplicitFunctionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSampleImplicitFunctionFilter\nC++: static vtkSampleImplicitFunctionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard instantiation, type information, and print methods.\n"},
  {"NewInstance", PyvtkSampleImplicitFunctionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSampleImplicitFunctionFilter\nC++: vtkSampleImplicitFunctionFilter *NewInstance()\n\nStandard instantiation, type information, and print methods.\n"},
  {"SetImplicitFunction", PyvtkSampleImplicitFunctionFilter_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to use to generate data.\n"},
  {"GetImplicitFunction", PyvtkSampleImplicitFunctionFilter_GetImplicitFunction, METH_VARARGS,
   "V.GetImplicitFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function to use to generate data.\n"},
  {"SetComputeGradients", PyvtkSampleImplicitFunctionFilter_SetComputeGradients, METH_VARARGS,
   "V.SetComputeGradients(int)\nC++: virtual void SetComputeGradients(vtkTypeBool _arg)\n\nTurn on/off the computation of gradients.\n"},
  {"GetComputeGradients", PyvtkSampleImplicitFunctionFilter_GetComputeGradients, METH_VARARGS,
   "V.GetComputeGradients() -> int\nC++: virtual vtkTypeBool GetComputeGradients()\n\nTurn on/off the computation of gradients.\n"},
  {"ComputeGradientsOn", PyvtkSampleImplicitFunctionFilter_ComputeGradientsOn, METH_VARARGS,
   "V.ComputeGradientsOn()\nC++: virtual void ComputeGradientsOn()\n\nTurn on/off the computation of gradients.\n"},
  {"ComputeGradientsOff", PyvtkSampleImplicitFunctionFilter_ComputeGradientsOff, METH_VARARGS,
   "V.ComputeGradientsOff()\nC++: virtual void ComputeGradientsOff()\n\nTurn on/off the computation of gradients.\n"},
  {"SetScalarArrayName", PyvtkSampleImplicitFunctionFilter_SetScalarArrayName, METH_VARARGS,
   "V.SetScalarArrayName(string)\nC++: virtual void SetScalarArrayName(const char *_arg)\n\nSet/get the scalar array name for this data set. The initial\nvalue is \"Implicit scalars\".\n"},
  {"GetScalarArrayName", PyvtkSampleImplicitFunctionFilter_GetScalarArrayName, METH_VARARGS,
   "V.GetScalarArrayName() -> string\nC++: virtual char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set. The initial\nvalue is \"Implicit scalars\".\n"},
  {"SetGradientArrayName", PyvtkSampleImplicitFunctionFilter_SetGradientArrayName, METH_VARARGS,
   "V.SetGradientArrayName(string)\nC++: virtual void SetGradientArrayName(const char *_arg)\n\nSet/get the gradient array name for this data set. The initial\nvalue is \"Implicit gradients\".\n"},
  {"GetGradientArrayName", PyvtkSampleImplicitFunctionFilter_GetGradientArrayName, METH_VARARGS,
   "V.GetGradientArrayName() -> string\nC++: virtual char *GetGradientArrayName()\n\nSet/get the gradient array name for this data set. The initial\nvalue is \"Implicit gradients\".\n"},
  {"GetMTime", PyvtkSampleImplicitFunctionFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also taking into account the implicit function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSampleImplicitFunctionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSampleImplicitFunctionFilter", // tp_name
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
  PyvtkSampleImplicitFunctionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSampleImplicitFunctionFilter_StaticNew()
{
  return vtkSampleImplicitFunctionFilter::New();
}

PyObject *PyvtkSampleImplicitFunctionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSampleImplicitFunctionFilter_Type, PyvtkSampleImplicitFunctionFilter_Methods,
    "vtkSampleImplicitFunctionFilter",
 &PyvtkSampleImplicitFunctionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkSampleImplicitFunctionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSampleImplicitFunctionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSampleImplicitFunctionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSampleImplicitFunctionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

