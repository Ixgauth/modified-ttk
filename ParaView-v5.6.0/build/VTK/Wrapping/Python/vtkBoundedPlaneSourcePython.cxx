// python wrapper for vtkBoundedPlaneSource
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
#include "vtkBoundedPlaneSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundedPlaneSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoundedPlaneSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkBoundedPlaneSource_Doc =
  "vtkBoundedPlaneSource - a plane source bounded by a bounding box.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBoundedPlaneSource is a simple planar polydata generator that\n"
  "produces a plane by intersecting a bounding box by a plane (specified\n"
  "by center and normal).\n\n";

static PyTypeObject PyvtkBoundedPlaneSource_RefinementModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsPointsPython.vtkBoundedPlaneSource.RefinementModes", // tp_name
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

PyObject *PyvtkBoundedPlaneSource_RefinementModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBoundedPlaneSource_RefinementModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBoundedPlaneSource_RefinementModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBoundedPlaneSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundedPlaneSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedPlaneSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundedPlaneSource *tempr = vtkBoundedPlaneSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedPlaneSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedPlaneSource::NewInstance());

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
PyvtkBoundedPlaneSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundedPlaneSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkBoundedPlaneSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkBoundedPlaneSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkBoundedPlaneSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoundedPlaneSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkBoundedPlaneSource_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkBoundedPlaneSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkBoundedPlaneSource::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBoundingBox(temp0);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetBoundingBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlaneSource_SetBoundingBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBoundedPlaneSource_SetBoundingBox_s1(self, args);
    case 1:
      return PyvtkBoundedPlaneSource_SetBoundingBox_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingBox");
  return nullptr;
}



static PyObject *
PyvtkBoundedPlaneSource_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBoundingBox() :
      op->vtkBoundedPlaneSource::GetBoundingBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetRefinementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

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
      op->vtkBoundedPlaneSource::SetRefinementMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetRefinementModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementModeMinValue() :
      op->vtkBoundedPlaneSource::GetRefinementModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetRefinementModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementModeMaxValue() :
      op->vtkBoundedPlaneSource::GetRefinementModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetRefinementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementMode() :
      op->vtkBoundedPlaneSource::GetRefinementMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkBoundedPlaneSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkBoundedPlaneSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkBoundedPlaneSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkBoundedPlaneSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

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
      op->vtkBoundedPlaneSource::SetCellSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellSize() :
      op->vtkBoundedPlaneSource::GetCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

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
      op->vtkBoundedPlaneSource::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkBoundedPlaneSource::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkBoundedPlaneSource::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlaneSource_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlaneSource *op = static_cast<vtkBoundedPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkBoundedPlaneSource::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundedPlaneSource_Methods[] = {
  {"IsTypeOf", PyvtkBoundedPlaneSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundedPlaneSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundedPlaneSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoundedPlaneSource\nC++: static vtkBoundedPlaneSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundedPlaneSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoundedPlaneSource\nC++: vtkBoundedPlaneSource *NewInstance()\n\n"},
  {"SetCenter", PyvtkBoundedPlaneSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkBoundedPlaneSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetNormal", PyvtkBoundedPlaneSource_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkBoundedPlaneSource_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {"SetBoundingBox", PyvtkBoundedPlaneSource_SetBoundingBox, METH_VARARGS,
   "V.SetBoundingBox(float, float, float, float, float, float)\nC++: void SetBoundingBox(double, double, double, double, double,\n    double)\nV.SetBoundingBox((float, float, float, float, float, float))\nC++: void SetBoundingBox(double a[6])\n\n"},
  {"GetBoundingBox", PyvtkBoundedPlaneSource_GetBoundingBox, METH_VARARGS,
   "V.GetBoundingBox() -> (float, float, float, float, float, float)\nC++: double *GetBoundingBox()\n\n"},
  {"SetRefinementMode", PyvtkBoundedPlaneSource_SetRefinementMode, METH_VARARGS,
   "V.SetRefinementMode(int)\nC++: virtual void SetRefinementMode(int _arg)\n\nGet/Set how the output refinement is to be determined.\n"},
  {"GetRefinementModeMinValue", PyvtkBoundedPlaneSource_GetRefinementModeMinValue, METH_VARARGS,
   "V.GetRefinementModeMinValue() -> int\nC++: virtual int GetRefinementModeMinValue()\n\n"},
  {"GetRefinementModeMaxValue", PyvtkBoundedPlaneSource_GetRefinementModeMaxValue, METH_VARARGS,
   "V.GetRefinementModeMaxValue() -> int\nC++: virtual int GetRefinementModeMaxValue()\n\n"},
  {"GetRefinementMode", PyvtkBoundedPlaneSource_GetRefinementMode, METH_VARARGS,
   "V.GetRefinementMode() -> int\nC++: virtual int GetRefinementMode()\n\n"},
  {"SetResolution", PyvtkBoundedPlaneSource_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nSpecify the resolution of the plane. Used only when\nRefinementMode is set to USE_RESOLUTION.\n"},
  {"GetResolutionMinValue", PyvtkBoundedPlaneSource_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nSpecify the resolution of the plane. Used only when\nRefinementMode is set to USE_RESOLUTION.\n"},
  {"GetResolutionMaxValue", PyvtkBoundedPlaneSource_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nSpecify the resolution of the plane. Used only when\nRefinementMode is set to USE_RESOLUTION.\n"},
  {"GetResolution", PyvtkBoundedPlaneSource_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nSpecify the resolution of the plane. Used only when\nRefinementMode is set to USE_RESOLUTION.\n"},
  {"SetCellSize", PyvtkBoundedPlaneSource_SetCellSize, METH_VARARGS,
   "V.SetCellSize(float)\nC++: virtual void SetCellSize(double _arg)\n\nSpecify the cell-size of the plane. Used only when RefinementMode\nis set to USE_CELL_SIZE.\n"},
  {"GetCellSize", PyvtkBoundedPlaneSource_GetCellSize, METH_VARARGS,
   "V.GetCellSize() -> float\nC++: virtual double GetCellSize()\n\nSpecify the cell-size of the plane. Used only when RefinementMode\nis set to USE_CELL_SIZE.\n"},
  {"SetPadding", PyvtkBoundedPlaneSource_SetPadding, METH_VARARGS,
   "V.SetPadding(float)\nC++: virtual void SetPadding(double _arg)\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions\nbefore generating the plane.\n"},
  {"GetPaddingMinValue", PyvtkBoundedPlaneSource_GetPaddingMinValue, METH_VARARGS,
   "V.GetPaddingMinValue() -> float\nC++: virtual double GetPaddingMinValue()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions\nbefore generating the plane.\n"},
  {"GetPaddingMaxValue", PyvtkBoundedPlaneSource_GetPaddingMaxValue, METH_VARARGS,
   "V.GetPaddingMaxValue() -> float\nC++: virtual double GetPaddingMaxValue()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions\nbefore generating the plane.\n"},
  {"GetPadding", PyvtkBoundedPlaneSource_GetPadding, METH_VARARGS,
   "V.GetPadding() -> float\nC++: virtual double GetPadding()\n\nSpecify the padding to use along each of the directions. This is\nused to inflate the bounds by a fixed factor in all directions\nbefore generating the plane.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoundedPlaneSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsPointsPython.vtkBoundedPlaneSource", // tp_name
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
  PyvtkBoundedPlaneSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundedPlaneSource_StaticNew()
{
  return vtkBoundedPlaneSource::New();
}

PyObject *PyvtkBoundedPlaneSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoundedPlaneSource_Type, PyvtkBoundedPlaneSource_Methods,
    "vtkBoundedPlaneSource",
 &PyvtkBoundedPlaneSource_StaticNew);

  PyTypeObject *pytype = &PyvtkBoundedPlaneSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBoundedPlaneSource_RefinementModes_Type);
  PyvtkBoundedPlaneSource_RefinementModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBoundedPlaneSource_RefinementModes_Type);

  o = (PyObject *)&PyvtkBoundedPlaneSource_RefinementModes_Type;
  if (PyDict_SetItemString(d, "RefinementModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkBoundedPlaneSource::RefinementModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "USE_RESOLUTION", vtkBoundedPlaneSource::USE_RESOLUTION },
        { "USE_CELL_SIZE", vtkBoundedPlaneSource::USE_CELL_SIZE },
      };

    o = PyvtkBoundedPlaneSource_RefinementModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundedPlaneSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundedPlaneSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundedPlaneSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

