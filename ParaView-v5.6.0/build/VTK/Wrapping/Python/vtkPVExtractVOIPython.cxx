// python wrapper for vtkPVExtractVOI
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
#include "vtkPVExtractVOI.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVExtractVOI(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVExtractVOI_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPVExtractVOI_Doc =
  "vtkPVExtractVOI - select piece (e.g., volume of interest) and/or\nsubsample structured dataset\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPVExtractVOI is a wrapper around vtkExtractVOI, vtkExtractGrid and\n"
  "vtkExtractRectilinearGrid. It choose the right filter depending on\n"
  "input and passes the necessary parameters.\n\n"
  "@sa\n"
  "vtkExtractVOI vtkExtractGrid vtkExtractRectilinearGrid\n\n";


static PyObject *
PyvtkPVExtractVOI_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVExtractVOI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVExtractVOI *tempr = vtkPVExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractVOI::NewInstance());

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
PyvtkPVExtractVOI_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPVExtractVOI::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPVExtractVOI_SetVOI_s1(self, args);
    case 1:
      return PyvtkPVExtractVOI_SetVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return nullptr;
}



static PyObject *
PyvtkPVExtractVOI_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkPVExtractVOI::GetVOI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVExtractVOI::SetSampleRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetSampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVExtractVOI_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkPVExtractVOI_SetSampleRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return nullptr;
}



static PyObject *
PyvtkPVExtractVOI_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkPVExtractVOI::GetSampleRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRateI(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetSampleRateI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRateJ(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetSampleRateJ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRateK(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetSampleRateK(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateI() :
      op->vtkPVExtractVOI::GetSampleRateI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateJ() :
      op->vtkPVExtractVOI::GetSampleRateJ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateK() :
      op->vtkPVExtractVOI::GetSampleRateK());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeBoundary(temp0);
    }
    else
    {
      op->vtkPVExtractVOI::SetIncludeBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkPVExtractVOI::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOn();
    }
    else
    {
      op->vtkPVExtractVOI::IncludeBoundaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOff();
    }
    else
    {
      op->vtkPVExtractVOI::IncludeBoundaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVExtractVOI_Methods[] = {
  {"IsTypeOf", PyvtkPVExtractVOI_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVExtractVOI_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVExtractVOI_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVExtractVOI\nC++: static vtkPVExtractVOI *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVExtractVOI_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVExtractVOI\nC++: vtkPVExtractVOI *NewInstance()\n\n"},
  {"SetVOI", PyvtkPVExtractVOI_SetVOI, METH_VARARGS,
   "V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {"GetVOI", PyvtkPVExtractVOI_GetVOI, METH_VARARGS,
   "V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured grid dataset can be of any topological dimension\n(i.e., point, line, plane, or 3D grid).\n"},
  {"SetSampleRate", PyvtkPVExtractVOI_SetSampleRate, METH_VARARGS,
   "V.SetSampleRate(int, int, int)\nC++: void SetSampleRate(int, int, int)\nV.SetSampleRate((int, int, int))\nC++: void SetSampleRate(int a[3])\n\n"},
  {"GetSampleRate", PyvtkPVExtractVOI_GetSampleRate, METH_VARARGS,
   "V.GetSampleRate() -> (int, int, int)\nC++: int *GetSampleRate()\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input. For example, if the SampleRate=(2,2,2), every other\npoint will be selected, resulting in a volume 1/8th the original\nsize.\n"},
  {"SetSampleRateI", PyvtkPVExtractVOI_SetSampleRateI, METH_VARARGS,
   "V.SetSampleRateI(int)\nC++: void SetSampleRateI(int ratei)\n\nSet/get the individual components of the sample rate.\n"},
  {"SetSampleRateJ", PyvtkPVExtractVOI_SetSampleRateJ, METH_VARARGS,
   "V.SetSampleRateJ(int)\nC++: void SetSampleRateJ(int ratej)\n\nSet/get the individual components of the sample rate.\n"},
  {"SetSampleRateK", PyvtkPVExtractVOI_SetSampleRateK, METH_VARARGS,
   "V.SetSampleRateK(int)\nC++: void SetSampleRateK(int ratek)\n\nSet/get the individual components of the sample rate.\n"},
  {"GetSampleRateI", PyvtkPVExtractVOI_GetSampleRateI, METH_VARARGS,
   "V.GetSampleRateI() -> int\nC++: int GetSampleRateI()\n\nSet/get the individual components of the sample rate.\n"},
  {"GetSampleRateJ", PyvtkPVExtractVOI_GetSampleRateJ, METH_VARARGS,
   "V.GetSampleRateJ() -> int\nC++: int GetSampleRateJ()\n\nSet/get the individual components of the sample rate.\n"},
  {"GetSampleRateK", PyvtkPVExtractVOI_GetSampleRateK, METH_VARARGS,
   "V.GetSampleRateK() -> int\nC++: int GetSampleRateK()\n\nSet/get the individual components of the sample rate.\n"},
  {"SetIncludeBoundary", PyvtkPVExtractVOI_SetIncludeBoundary, METH_VARARGS,
   "V.SetIncludeBoundary(int)\nC++: virtual void SetIncludeBoundary(int _arg)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"GetIncludeBoundary", PyvtkPVExtractVOI_GetIncludeBoundary, METH_VARARGS,
   "V.GetIncludeBoundary() -> int\nC++: virtual int GetIncludeBoundary()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"IncludeBoundaryOn", PyvtkPVExtractVOI_IncludeBoundaryOn, METH_VARARGS,
   "V.IncludeBoundaryOn()\nC++: virtual void IncludeBoundaryOn()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"IncludeBoundaryOff", PyvtkPVExtractVOI_IncludeBoundaryOff, METH_VARARGS,
   "V.IncludeBoundaryOff()\nC++: virtual void IncludeBoundaryOff()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVExtractVOI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVExtractVOI", // tp_name
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
  PyvtkPVExtractVOI_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVExtractVOI_StaticNew()
{
  return vtkPVExtractVOI::New();
}

PyObject *PyvtkPVExtractVOI_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVExtractVOI_Type, PyvtkPVExtractVOI_Methods,
    "vtkPVExtractVOI",
 &PyvtkPVExtractVOI_StaticNew);

  PyTypeObject *pytype = &PyvtkPVExtractVOI_Type;

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

void PyVTKAddFile_vtkPVExtractVOI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVExtractVOI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVExtractVOI", o) != 0)
  {
    Py_DECREF(o);
  }

}

