// python wrapper for vtkBoundedVolumeSource
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
#include "vtkBoundingBox.h"
#include "vtkVector.h"
#include "vtkBoundedVolumeSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundedVolumeSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoundedVolumeSource_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkBoundedVolumeSource_Doc =
  "vtkBoundedVolumeSource - a source to generate an image volume.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkBoundedVolumeSource generate an image data given the position and\n"
  "scale factors for a unit volume.\n\n";

static PyTypeObject PyvtkBoundedVolumeSource_RefinementModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsPointsPython.vtkBoundedVolumeSource.RefinementModes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkBoundedVolumeSource_RefinementModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBoundedVolumeSource_RefinementModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBoundedVolumeSource_RefinementModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBoundedVolumeSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundedVolumeSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedVolumeSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundedVolumeSource *tempr = vtkBoundedVolumeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedVolumeSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedVolumeSource::NewInstance());

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
PyvtkBoundedVolumeSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundedVolumeSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkBoundedVolumeSource_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkBoundedVolumeSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkBoundedVolumeSource::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundedVolumeSource_SetScale_s1(self, args);
    case 1:
      return PyvtkBoundedVolumeSource_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkBoundedVolumeSource_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkBoundedVolumeSource::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetRefinementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefinementMode(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetRefinementMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetRefinementModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementModeMinValue() :
      op->vtkBoundedVolumeSource::GetRefinementModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetRefinementModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementModeMaxValue() :
      op->vtkBoundedVolumeSource::GetRefinementModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetRefinementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementMode() :
      op->vtkBoundedVolumeSource::GetRefinementMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetResolution_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

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
      op->SetResolution(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetResolution(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetResolution_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetResolution(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundedVolumeSource_SetResolution_s1(self, args);
    case 1:
      return PyvtkBoundedVolumeSource_SetResolution_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetResolution");
  return nullptr;
}



static PyObject *
PyvtkBoundedVolumeSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkBoundedVolumeSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellSize(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetCellSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellSize() :
      op->vtkBoundedVolumeSource::GetCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkBoundedVolumeSource::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkBoundedVolumeSource::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkBoundedVolumeSource::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedVolumeSource *op = static_cast<vtkBoundedVolumeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkBoundedVolumeSource::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedVolumeSource_SetImageParameters_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetImageParameters");

  vtkImageData *temp0 = nullptr;
  vtkBoundingBox *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector3i *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkBoundingBox") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVector3i"))
  {
    bool tempr = vtkBoundedVolumeSource::SetImageParameters(temp0, *temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkBoundedVolumeSource_SetImageParameters_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetImageParameters");

  vtkImageData *temp0 = nullptr;
  vtkBoundingBox *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkBoundingBox") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkBoundedVolumeSource::SetImageParameters(temp0, *temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkBoundedVolumeSource_SetImageParameters_Methods[] = {
  {nullptr, PyvtkBoundedVolumeSource_SetImageParameters_s1, METH_VARARGS | METH_STATIC,
   "VWW *vtkImageData vtkBoundingBox vtkVector3i"},
  {nullptr, PyvtkBoundedVolumeSource_SetImageParameters_s2, METH_VARARGS | METH_STATIC,
   "VWd *vtkImageData vtkBoundingBox"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundedVolumeSource_SetImageParameters(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundedVolumeSource_SetImageParameters_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageParameters");
  return nullptr;
}


static PyMethodDef PyvtkBoundedVolumeSource_Methods[] = {
  {"IsTypeOf", PyvtkBoundedVolumeSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundedVolumeSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundedVolumeSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoundedVolumeSource\nC++: static vtkBoundedVolumeSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundedVolumeSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoundedVolumeSource\nC++: vtkBoundedVolumeSource *NewInstance()\n\n"},
  {"SetOrigin", PyvtkBoundedVolumeSource_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkBoundedVolumeSource_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"SetScale", PyvtkBoundedVolumeSource_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {"GetScale", PyvtkBoundedVolumeSource_GetScale, METH_VARARGS,
   "V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\n"},
  {"SetRefinementMode", PyvtkBoundedVolumeSource_SetRefinementMode, METH_VARARGS,
   "V.SetRefinementMode(int)\nC++: virtual void SetRefinementMode(int _arg)\n\nGet/Set how the output refinement is to be determined.\n"},
  {"GetRefinementModeMinValue", PyvtkBoundedVolumeSource_GetRefinementModeMinValue, METH_VARARGS,
   "V.GetRefinementModeMinValue() -> int\nC++: virtual int GetRefinementModeMinValue()\n\n"},
  {"GetRefinementModeMaxValue", PyvtkBoundedVolumeSource_GetRefinementModeMaxValue, METH_VARARGS,
   "V.GetRefinementModeMaxValue() -> int\nC++: virtual int GetRefinementModeMaxValue()\n\n"},
  {"GetRefinementMode", PyvtkBoundedVolumeSource_GetRefinementMode, METH_VARARGS,
   "V.GetRefinementMode() -> int\nC++: virtual int GetRefinementMode()\n\n"},
  {"SetResolution", PyvtkBoundedVolumeSource_SetResolution, METH_VARARGS,
   "V.SetResolution(int, int, int)\nC++: void SetResolution(int, int, int)\nV.SetResolution((int, int, int))\nC++: void SetResolution(int a[3])\n\n"},
  {"GetResolution", PyvtkBoundedVolumeSource_GetResolution, METH_VARARGS,
   "V.GetResolution() -> (int, int, int)\nC++: int *GetResolution()\n\n"},
  {"SetCellSize", PyvtkBoundedVolumeSource_SetCellSize, METH_VARARGS,
   "V.SetCellSize(float)\nC++: virtual void SetCellSize(double _arg)\n\nSpecify the cell-size of the output image. Used only when\nRefinementMode is set to USE_CELL_SIZE.\n"},
  {"GetCellSize", PyvtkBoundedVolumeSource_GetCellSize, METH_VARARGS,
   "V.GetCellSize() -> float\nC++: virtual double GetCellSize()\n\nSpecify the cell-size of the output image. Used only when\nRefinementMode is set to USE_CELL_SIZE.\n"},
  {"SetPadding", PyvtkBoundedVolumeSource_SetPadding, METH_VARARGS,
   "V.SetPadding(float)\nC++: virtual void SetPadding(double _arg)\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions.\n"},
  {"GetPaddingMinValue", PyvtkBoundedVolumeSource_GetPaddingMinValue, METH_VARARGS,
   "V.GetPaddingMinValue() -> float\nC++: virtual double GetPaddingMinValue()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions.\n"},
  {"GetPaddingMaxValue", PyvtkBoundedVolumeSource_GetPaddingMaxValue, METH_VARARGS,
   "V.GetPaddingMaxValue() -> float\nC++: virtual double GetPaddingMaxValue()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions.\n"},
  {"GetPadding", PyvtkBoundedVolumeSource_GetPadding, METH_VARARGS,
   "V.GetPadding() -> float\nC++: virtual double GetPadding()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions.\n"},
  {"SetImageParameters", PyvtkBoundedVolumeSource_SetImageParameters, METH_VARARGS,
   "V.SetImageParameters(vtkImageData, vtkBoundingBox, vtkVector3i)\n    -> bool\nC++: static bool SetImageParameters(vtkImageData *image,\n    const vtkBoundingBox &bbox, const vtkVector3i &resolution)\nV.SetImageParameters(vtkImageData, vtkBoundingBox, float) -> bool\nC++: static bool SetImageParameters(vtkImageData *image,\n    const vtkBoundingBox &bbox, const double cellSize)\n\nConvenience methods that setup a image extents, origin and\nspacing given the bounding box, and either the target image\nresolution or unit cell size.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoundedVolumeSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsPointsPython.vtkBoundedVolumeSource", // tp_name
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
  PyvtkBoundedVolumeSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundedVolumeSource_StaticNew()
{
  return vtkBoundedVolumeSource::New();
}

PyObject *PyvtkBoundedVolumeSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoundedVolumeSource_Type, PyvtkBoundedVolumeSource_Methods,
    "vtkBoundedVolumeSource",
 &PyvtkBoundedVolumeSource_StaticNew);

  PyTypeObject *pytype = &PyvtkBoundedVolumeSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBoundedVolumeSource_RefinementModes_Type);
  PyvtkBoundedVolumeSource_RefinementModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBoundedVolumeSource_RefinementModes_Type);

  o = (PyObject *)&PyvtkBoundedVolumeSource_RefinementModes_Type;
  if (PyDict_SetItemString(d, "RefinementModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkBoundedVolumeSource::RefinementModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "USE_RESOLUTION", vtkBoundedVolumeSource::USE_RESOLUTION },
        { "USE_CELL_SIZE", vtkBoundedVolumeSource::USE_CELL_SIZE },
      };

    o = PyvtkBoundedVolumeSource_RefinementModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundedVolumeSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundedVolumeSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundedVolumeSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

