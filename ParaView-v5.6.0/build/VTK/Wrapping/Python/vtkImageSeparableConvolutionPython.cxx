// python wrapper for vtkImageSeparableConvolution
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
#include "vtkImageSeparableConvolution.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSeparableConvolution(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSeparableConvolution_ClassNew(); }

#ifndef DECLARED_PyvtkImageDecomposeFilter_ClassNew
extern "C" { PyObject *PyvtkImageDecomposeFilter_ClassNew(); }
#define DECLARED_PyvtkImageDecomposeFilter_ClassNew
#endif

static const char *PyvtkImageSeparableConvolution_Doc =
  "vtkImageSeparableConvolution - 3 1D convolutions on an image\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageSeparableConvolution performs a convolution along the X, Y,\n"
  "and Z axes of an image, based on the three different 1D convolution\n"
  "kernels.  The kernels must be of odd size, and are considered to be\n"
  "centered at (int)((kernelsize - 1) / 2.0 ).  If a kernel is nullptr,\n"
  "that dimension is skipped.  This filter is designed to efficiently\n"
  "convolve separable filters that can be decomposed into 1 or more 1D\n"
  "convolutions.  It also handles arbitrarly large kernel sizes, and\n"
  "uses edge replication to handle boundaries.\n\n";


static PyObject *
PyvtkImageSeparableConvolution_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSeparableConvolution::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSeparableConvolution::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSeparableConvolution *tempr = vtkImageSeparableConvolution::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSeparableConvolution *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSeparableConvolution::NewInstance());

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
PyvtkImageSeparableConvolution_SetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetXKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetXKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetXKernel() :
      op->vtkImageSeparableConvolution::GetXKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetYKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetYKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetYKernel() :
      op->vtkImageSeparableConvolution::GetYKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetZKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetZKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetZKernel() :
      op->vtkImageSeparableConvolution::GetZKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSeparableConvolution::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeparableConvolution_Methods[] = {
  {"IsTypeOf", PyvtkImageSeparableConvolution_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageSeparableConvolution_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageSeparableConvolution_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSeparableConvolution\nC++: static vtkImageSeparableConvolution *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageSeparableConvolution_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SetXKernel", PyvtkImageSeparableConvolution_SetXKernel, METH_VARARGS,
   "V.SetXKernel(vtkFloatArray)\nC++: virtual void SetXKernel(vtkFloatArray *)\n\n"},
  {"GetXKernel", PyvtkImageSeparableConvolution_GetXKernel, METH_VARARGS,
   "V.GetXKernel() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetXKernel()\n\n"},
  {"SetYKernel", PyvtkImageSeparableConvolution_SetYKernel, METH_VARARGS,
   "V.SetYKernel(vtkFloatArray)\nC++: virtual void SetYKernel(vtkFloatArray *)\n\n"},
  {"GetYKernel", PyvtkImageSeparableConvolution_GetYKernel, METH_VARARGS,
   "V.GetYKernel() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetYKernel()\n\n"},
  {"SetZKernel", PyvtkImageSeparableConvolution_SetZKernel, METH_VARARGS,
   "V.SetZKernel(vtkFloatArray)\nC++: virtual void SetZKernel(vtkFloatArray *)\n\n"},
  {"GetZKernel", PyvtkImageSeparableConvolution_GetZKernel, METH_VARARGS,
   "V.GetZKernel() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetZKernel()\n\n"},
  {"GetMTime", PyvtkImageSeparableConvolution_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If kernel arrays are\nmodified, then this object is modified as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSeparableConvolution_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageSeparableConvolution", // tp_name
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
  PyvtkImageSeparableConvolution_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSeparableConvolution_StaticNew()
{
  return vtkImageSeparableConvolution::New();
}

PyObject *PyvtkImageSeparableConvolution_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSeparableConvolution_Type, PyvtkImageSeparableConvolution_Methods,
    "vtkImageSeparableConvolution",
 &PyvtkImageSeparableConvolution_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSeparableConvolution_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageDecomposeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSeparableConvolution(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSeparableConvolution_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSeparableConvolution", o) != 0)
  {
    Py_DECREF(o);
  }

}

