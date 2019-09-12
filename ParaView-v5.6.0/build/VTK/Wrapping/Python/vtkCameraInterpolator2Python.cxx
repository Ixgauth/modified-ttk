// python wrapper for vtkCameraInterpolator2
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
#include "vtkCameraInterpolator2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraInterpolator2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraInterpolator2_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCameraInterpolator2_Doc =
  "vtkCameraInterpolator2 - \n\n"
  "Superclass: vtkObject\n\n"
;

static PyTypeObject PyvtkCameraInterpolator2_Modes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCameraInterpolator2.Modes", // tp_name
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

PyObject *PyvtkCameraInterpolator2_Modes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCameraInterpolator2_Modes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCameraInterpolator2_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkCameraInterpolator2_PathInterpolationModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCameraInterpolator2.PathInterpolationModes", // tp_name
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

PyObject *PyvtkCameraInterpolator2_PathInterpolationModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCameraInterpolator2_PathInterpolationModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCameraInterpolator2_PathInterpolationModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCameraInterpolator2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraInterpolator2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraInterpolator2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraInterpolator2 *tempr = vtkCameraInterpolator2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraInterpolator2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraInterpolator2::NewInstance());

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
PyvtkCameraInterpolator2_AddPositionPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPositionPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

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
      op->AddPositionPathPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCameraInterpolator2::AddPositionPathPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClearPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPositionPath();
    }
    else
    {
      op->vtkCameraInterpolator2::ClearPositionPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_AddFocalPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFocalPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

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
      op->AddFocalPathPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCameraInterpolator2::AddFocalPathPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClearFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFocalPath();
    }
    else
    {
      op->vtkCameraInterpolator2::ClearFocalPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFocalPointMode(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetFocalPointMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointModeMinValue() :
      op->vtkCameraInterpolator2::GetFocalPointModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointModeMaxValue() :
      op->vtkCameraInterpolator2::GetFocalPointModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointMode() :
      op->vtkCameraInterpolator2::GetFocalPointMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionMode(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetPositionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionModeMinValue() :
      op->vtkCameraInterpolator2::GetPositionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionModeMaxValue() :
      op->vtkCameraInterpolator2::GetPositionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionMode() :
      op->vtkCameraInterpolator2::GetPositionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetPositionPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionPathInterpolationMode(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetPositionPathInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationModeMinValue() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationModeMaxValue() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationMode() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetFocalPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFocalPathInterpolationMode(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetFocalPathInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationModeMinValue() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationModeMaxValue() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationMode() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedFocalPath(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetClosedFocalPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClosedFocalPath() :
      op->vtkCameraInterpolator2::GetClosedFocalPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedFocalPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedFocalPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedFocalPathOn();
    }
    else
    {
      op->vtkCameraInterpolator2::ClosedFocalPathOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedFocalPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedFocalPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedFocalPathOff();
    }
    else
    {
      op->vtkCameraInterpolator2::ClosedFocalPathOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedPositionPath(temp0);
    }
    else
    {
      op->vtkCameraInterpolator2::SetClosedPositionPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClosedPositionPath() :
      op->vtkCameraInterpolator2::GetClosedPositionPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedPositionPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedPositionPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedPositionPathOn();
    }
    else
    {
      op->vtkCameraInterpolator2::ClosedPositionPathOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedPositionPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedPositionPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedPositionPathOff();
    }
    else
    {
      op->vtkCameraInterpolator2::ClosedPositionPathOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_InterpolateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  double temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->InterpolateCamera(temp0, temp1);
    }
    else
    {
      op->vtkCameraInterpolator2::InterpolateCamera(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraInterpolator2_Methods[] = {
  {"IsTypeOf", PyvtkCameraInterpolator2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraInterpolator2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraInterpolator2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraInterpolator2\nC++: static vtkCameraInterpolator2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraInterpolator2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraInterpolator2\nC++: vtkCameraInterpolator2 *NewInstance()\n\n"},
  {"AddPositionPathPoint", PyvtkCameraInterpolator2_AddPositionPathPoint, METH_VARARGS,
   "V.AddPositionPathPoint(float, float, float)\nC++: void AddPositionPathPoint(double x, double y, double z)\n\n"},
  {"ClearPositionPath", PyvtkCameraInterpolator2_ClearPositionPath, METH_VARARGS,
   "V.ClearPositionPath()\nC++: void ClearPositionPath()\n\n"},
  {"AddFocalPathPoint", PyvtkCameraInterpolator2_AddFocalPathPoint, METH_VARARGS,
   "V.AddFocalPathPoint(float, float, float)\nC++: void AddFocalPathPoint(double x, double y, double z)\n\n"},
  {"ClearFocalPath", PyvtkCameraInterpolator2_ClearFocalPath, METH_VARARGS,
   "V.ClearFocalPath()\nC++: void ClearFocalPath()\n\n"},
  {"SetFocalPointMode", PyvtkCameraInterpolator2_SetFocalPointMode, METH_VARARGS,
   "V.SetFocalPointMode(int)\nC++: virtual void SetFocalPointMode(int _arg)\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {"GetFocalPointModeMinValue", PyvtkCameraInterpolator2_GetFocalPointModeMinValue, METH_VARARGS,
   "V.GetFocalPointModeMinValue() -> int\nC++: virtual int GetFocalPointModeMinValue()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {"GetFocalPointModeMaxValue", PyvtkCameraInterpolator2_GetFocalPointModeMaxValue, METH_VARARGS,
   "V.GetFocalPointModeMaxValue() -> int\nC++: virtual int GetFocalPointModeMaxValue()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {"GetFocalPointMode", PyvtkCameraInterpolator2_GetFocalPointMode, METH_VARARGS,
   "V.GetFocalPointMode() -> int\nC++: virtual int GetFocalPointMode()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {"SetPositionMode", PyvtkCameraInterpolator2_SetPositionMode, METH_VARARGS,
   "V.SetPositionMode(int)\nC++: virtual void SetPositionMode(int _arg)\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {"GetPositionModeMinValue", PyvtkCameraInterpolator2_GetPositionModeMinValue, METH_VARARGS,
   "V.GetPositionModeMinValue() -> int\nC++: virtual int GetPositionModeMinValue()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {"GetPositionModeMaxValue", PyvtkCameraInterpolator2_GetPositionModeMaxValue, METH_VARARGS,
   "V.GetPositionModeMaxValue() -> int\nC++: virtual int GetPositionModeMaxValue()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {"GetPositionMode", PyvtkCameraInterpolator2_GetPositionMode, METH_VARARGS,
   "V.GetPositionMode() -> int\nC++: virtual int GetPositionMode()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {"SetPositionPathInterpolationMode", PyvtkCameraInterpolator2_SetPositionPathInterpolationMode, METH_VARARGS,
   "V.SetPositionPathInterpolationMode(int)\nC++: virtual void SetPositionPathInterpolationMode(int _arg)\n\n"},
  {"GetPositionPathInterpolationModeMinValue", PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMinValue, METH_VARARGS,
   "V.GetPositionPathInterpolationModeMinValue() -> int\nC++: virtual int GetPositionPathInterpolationModeMinValue()\n\n"},
  {"GetPositionPathInterpolationModeMaxValue", PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMaxValue, METH_VARARGS,
   "V.GetPositionPathInterpolationModeMaxValue() -> int\nC++: virtual int GetPositionPathInterpolationModeMaxValue()\n\n"},
  {"GetPositionPathInterpolationMode", PyvtkCameraInterpolator2_GetPositionPathInterpolationMode, METH_VARARGS,
   "V.GetPositionPathInterpolationMode() -> int\nC++: virtual int GetPositionPathInterpolationMode()\n\n"},
  {"SetFocalPathInterpolationMode", PyvtkCameraInterpolator2_SetFocalPathInterpolationMode, METH_VARARGS,
   "V.SetFocalPathInterpolationMode(int)\nC++: virtual void SetFocalPathInterpolationMode(int _arg)\n\n"},
  {"GetFocalPathInterpolationModeMinValue", PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMinValue, METH_VARARGS,
   "V.GetFocalPathInterpolationModeMinValue() -> int\nC++: virtual int GetFocalPathInterpolationModeMinValue()\n\n"},
  {"GetFocalPathInterpolationModeMaxValue", PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMaxValue, METH_VARARGS,
   "V.GetFocalPathInterpolationModeMaxValue() -> int\nC++: virtual int GetFocalPathInterpolationModeMaxValue()\n\n"},
  {"GetFocalPathInterpolationMode", PyvtkCameraInterpolator2_GetFocalPathInterpolationMode, METH_VARARGS,
   "V.GetFocalPathInterpolationMode() -> int\nC++: virtual int GetFocalPathInterpolationMode()\n\n"},
  {"SetClosedFocalPath", PyvtkCameraInterpolator2_SetClosedFocalPath, METH_VARARGS,
   "V.SetClosedFocalPath(bool)\nC++: virtual void SetClosedFocalPath(bool _arg)\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {"GetClosedFocalPath", PyvtkCameraInterpolator2_GetClosedFocalPath, METH_VARARGS,
   "V.GetClosedFocalPath() -> bool\nC++: virtual bool GetClosedFocalPath()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {"ClosedFocalPathOn", PyvtkCameraInterpolator2_ClosedFocalPathOn, METH_VARARGS,
   "V.ClosedFocalPathOn()\nC++: virtual void ClosedFocalPathOn()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {"ClosedFocalPathOff", PyvtkCameraInterpolator2_ClosedFocalPathOff, METH_VARARGS,
   "V.ClosedFocalPathOff()\nC++: virtual void ClosedFocalPathOff()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {"SetClosedPositionPath", PyvtkCameraInterpolator2_SetClosedPositionPath, METH_VARARGS,
   "V.SetClosedPositionPath(bool)\nC++: virtual void SetClosedPositionPath(bool _arg)\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {"GetClosedPositionPath", PyvtkCameraInterpolator2_GetClosedPositionPath, METH_VARARGS,
   "V.GetClosedPositionPath() -> bool\nC++: virtual bool GetClosedPositionPath()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {"ClosedPositionPathOn", PyvtkCameraInterpolator2_ClosedPositionPathOn, METH_VARARGS,
   "V.ClosedPositionPathOn()\nC++: virtual void ClosedPositionPathOn()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {"ClosedPositionPathOff", PyvtkCameraInterpolator2_ClosedPositionPathOff, METH_VARARGS,
   "V.ClosedPositionPathOff()\nC++: virtual void ClosedPositionPathOff()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {"InterpolateCamera", PyvtkCameraInterpolator2_InterpolateCamera, METH_VARARGS,
   "V.InterpolateCamera(float, vtkCamera)\nC++: void InterpolateCamera(double u, vtkCamera *)\n\nu has to be in the range [0, 1].\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraInterpolator2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCameraInterpolator2", // tp_name
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
  PyvtkCameraInterpolator2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraInterpolator2_StaticNew()
{
  return vtkCameraInterpolator2::New();
}

PyObject *PyvtkCameraInterpolator2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraInterpolator2_Type, PyvtkCameraInterpolator2_Methods,
    "vtkCameraInterpolator2",
 &PyvtkCameraInterpolator2_StaticNew);

  PyTypeObject *pytype = &PyvtkCameraInterpolator2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCameraInterpolator2_Modes_Type);
  PyvtkCameraInterpolator2_Modes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCameraInterpolator2_Modes_Type);

  o = (PyObject *)&PyvtkCameraInterpolator2_Modes_Type;
  if (PyDict_SetItemString(d, "Modes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCameraInterpolator2_PathInterpolationModes_Type);
  PyvtkCameraInterpolator2_PathInterpolationModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCameraInterpolator2_PathInterpolationModes_Type);

  o = (PyObject *)&PyvtkCameraInterpolator2_PathInterpolationModes_Type;
  if (PyDict_SetItemString(d, "PathInterpolationModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkCameraInterpolator2::Modes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "PATH", vtkCameraInterpolator2::PATH },
        { "FIXED_DIRECTION", vtkCameraInterpolator2::FIXED_DIRECTION },
        { "LOOK_AHEAD", vtkCameraInterpolator2::LOOK_AHEAD },
        { "ORTHOGONAL", vtkCameraInterpolator2::ORTHOGONAL },
      };

    o = PyvtkCameraInterpolator2_Modes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCameraInterpolator2::PathInterpolationModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "LINEAR", vtkCameraInterpolator2::LINEAR },
        { "SPLINE", vtkCameraInterpolator2::SPLINE },
      };

    o = PyvtkCameraInterpolator2_PathInterpolationModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraInterpolator2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraInterpolator2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraInterpolator2", o) != 0)
  {
    Py_DECREF(o);
  }

}

