// python wrapper for vtkImageButterworthLowPass
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
#include "vtkImageButterworthLowPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageButterworthLowPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageButterworthLowPass_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageButterworthLowPass_Doc =
  "vtkImageButterworthLowPass - Frequency domain Low pass.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "This filter only works on an image after it has been converted to\n"
  "frequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\n"
  "be used to convert the output back into the spatial domain.\n"
  "vtkImageButterworthLowPass the high frequency components are\n"
  "attenuated.  Input and output are in doubles, with two components\n"
  "(complex numbers). out(i, j) = (1 + pow(CutOff/Freq(i,j), 2*Order));\n\n"
  "@sa\n"
  "vtkImageButterworthHighPass vtkImageFFT vtkImageRFFT\n\n";


static PyObject *
PyvtkImageButterworthLowPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageButterworthLowPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageButterworthLowPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageButterworthLowPass *tempr = vtkImageButterworthLowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageButterworthLowPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageButterworthLowPass::NewInstance());

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
PyvtkImageButterworthLowPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCutOff(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetCutOff(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCutOff(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCutOff(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_SetCutOff_Methods[] = {
  {nullptr, PyvtkImageButterworthLowPass_SetCutOff_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkImageButterworthLowPass_SetCutOff_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageButterworthLowPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageButterworthLowPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return nullptr;
}



static PyObject *
PyvtkImageButterworthLowPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXCutOff(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetXCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYCutOff(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetYCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZCutOff(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetZCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageButterworthLowPass::GetCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageButterworthLowPass::GetXCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageButterworthLowPass::GetYCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageButterworthLowPass::GetZCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrder(temp0);
    }
    else
    {
      op->vtkImageButterworthLowPass::SetOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkImageButterworthLowPass::GetOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_Methods[] = {
  {"IsTypeOf", PyvtkImageButterworthLowPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageButterworthLowPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageButterworthLowPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageButterworthLowPass\nC++: static vtkImageButterworthLowPass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageButterworthLowPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageButterworthLowPass\nC++: vtkImageButterworthLowPass *NewInstance()\n\n"},
  {"SetCutOff", PyvtkImageButterworthLowPass_SetCutOff, METH_VARARGS,
   "V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {"SetXCutOff", PyvtkImageButterworthLowPass_SetXCutOff, METH_VARARGS,
   "V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetYCutOff", PyvtkImageButterworthLowPass_SetYCutOff, METH_VARARGS,
   "V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetZCutOff", PyvtkImageButterworthLowPass_SetZCutOff, METH_VARARGS,
   "V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetCutOff", PyvtkImageButterworthLowPass_GetCutOff, METH_VARARGS,
   "V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {"GetXCutOff", PyvtkImageButterworthLowPass_GetXCutOff, METH_VARARGS,
   "V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetYCutOff", PyvtkImageButterworthLowPass_GetYCutOff, METH_VARARGS,
   "V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetZCutOff", PyvtkImageButterworthLowPass_GetZCutOff, METH_VARARGS,
   "V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetOrder", PyvtkImageButterworthLowPass_SetOrder, METH_VARARGS,
   "V.SetOrder(int)\nC++: virtual void SetOrder(int _arg)\n\nThe order determines sharpness of the cutoff curve.\n"},
  {"GetOrder", PyvtkImageButterworthLowPass_GetOrder, METH_VARARGS,
   "V.GetOrder() -> int\nC++: virtual int GetOrder()\n\nThe order determines sharpness of the cutoff curve.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageButterworthLowPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingFourierPython.vtkImageButterworthLowPass", // tp_name
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
  PyvtkImageButterworthLowPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageButterworthLowPass_StaticNew()
{
  return vtkImageButterworthLowPass::New();
}

PyObject *PyvtkImageButterworthLowPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageButterworthLowPass_Type, PyvtkImageButterworthLowPass_Methods,
    "vtkImageButterworthLowPass",
 &PyvtkImageButterworthLowPass_StaticNew);

  PyTypeObject *pytype = &PyvtkImageButterworthLowPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageButterworthLowPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageButterworthLowPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageButterworthLowPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

