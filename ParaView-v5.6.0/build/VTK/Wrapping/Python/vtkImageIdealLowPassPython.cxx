// python wrapper for vtkImageIdealLowPass
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
#include "vtkImageIdealLowPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageIdealLowPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageIdealLowPass_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageIdealLowPass_Doc =
  "vtkImageIdealLowPass - Simple frequency domain band pass.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "This filter only works on an image after it has been converted to\n"
  "frequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\n"
  "be used to convert the output back into the spatial domain.\n"
  "vtkImageIdealLowPass just sets a portion of the image to zero.  The\n"
  "result is an image with a lot of ringing.  Input and Output must be\n"
  "doubles. Dimensionality is set when the axes are set.  Defaults to 2D\n"
  "on X and Y axes.\n\n"
  "@sa\n"
  "vtkImageButterworthLowPass vtkImageIdealHighPass vtkImageFFT\n"
  "vtkImageRFFT\n\n";


static PyObject *
PyvtkImageIdealLowPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageIdealLowPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIdealLowPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageIdealLowPass *tempr = vtkImageIdealLowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageIdealLowPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIdealLowPass::NewInstance());

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
PyvtkImageIdealLowPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetCutOff(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageIdealLowPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageIdealLowPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIdealLowPass_SetCutOff_Methods[] = {
  {nullptr, PyvtkImageIdealLowPass_SetCutOff_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkImageIdealLowPass_SetCutOff_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageIdealLowPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageIdealLowPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageIdealLowPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return nullptr;
}



static PyObject *
PyvtkImageIdealLowPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetXCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetYCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->vtkImageIdealLowPass::SetZCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageIdealLowPass::GetCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageIdealLowPass::GetXCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageIdealLowPass::GetYCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageIdealLowPass::GetZCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIdealLowPass_Methods[] = {
  {"IsTypeOf", PyvtkImageIdealLowPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageIdealLowPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageIdealLowPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageIdealLowPass\nC++: static vtkImageIdealLowPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageIdealLowPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageIdealLowPass\nC++: vtkImageIdealLowPass *NewInstance()\n\n"},
  {"SetCutOff", PyvtkImageIdealLowPass_SetCutOff, METH_VARARGS,
   "V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {"SetXCutOff", PyvtkImageIdealLowPass_SetXCutOff, METH_VARARGS,
   "V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetYCutOff", PyvtkImageIdealLowPass_SetYCutOff, METH_VARARGS,
   "V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetZCutOff", PyvtkImageIdealLowPass_SetZCutOff, METH_VARARGS,
   "V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetCutOff", PyvtkImageIdealLowPass_GetCutOff, METH_VARARGS,
   "V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {"GetXCutOff", PyvtkImageIdealLowPass_GetXCutOff, METH_VARARGS,
   "V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetYCutOff", PyvtkImageIdealLowPass_GetYCutOff, METH_VARARGS,
   "V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"GetZCutOff", PyvtkImageIdealLowPass_GetZCutOff, METH_VARARGS,
   "V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageIdealLowPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingFourierPython.vtkImageIdealLowPass", // tp_name
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
  PyvtkImageIdealLowPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageIdealLowPass_StaticNew()
{
  return vtkImageIdealLowPass::New();
}

PyObject *PyvtkImageIdealLowPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageIdealLowPass_Type, PyvtkImageIdealLowPass_Methods,
    "vtkImageIdealLowPass",
 &PyvtkImageIdealLowPass_StaticNew);

  PyTypeObject *pytype = &PyvtkImageIdealLowPass_Type;

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

void PyVTKAddFile_vtkImageIdealLowPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageIdealLowPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageIdealLowPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

