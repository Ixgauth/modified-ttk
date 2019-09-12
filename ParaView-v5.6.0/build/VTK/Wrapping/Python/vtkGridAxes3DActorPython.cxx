// python wrapper for vtkGridAxes3DActor
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
#include "vtkStdString.h"
#include "vtkGridAxes3DActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridAxes3DActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridAxes3DActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkGridAxes3DActor_Doc =
  "vtkGridAxes3DActor - actor for a cube-axes like prop in the 3D view.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxes3DActor is an alternate implementation for something like\n"
  "the vtkCubeAxesActor which can be used to render a 3D grid in a\n"
  "scene. It uses vtkGridAxes2DActor to render individual axes planes\n"
  "for the box.\n\n";

static PyTypeObject PyvtkGridAxes3DActor_FaceMasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes3DActor.FaceMasks", // tp_name
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

PyObject *PyvtkGridAxes3DActor_FaceMasks_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxes3DActor_FaceMasks_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxes3DActor_FaceMasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGridAxes3DActor_LabelMasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes3DActor.LabelMasks", // tp_name
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

PyObject *PyvtkGridAxes3DActor_LabelMasks_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxes3DActor_LabelMasks_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxes3DActor_LabelMasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGridAxes3DActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxes3DActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxes3DActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxes3DActor *tempr = vtkGridAxes3DActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxes3DActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxes3DActor::NewInstance());

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
PyvtkGridAxes3DActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

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
      op->SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGridAxes3DActor::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes3DActor_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes3DActor_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxes3DActor_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxes3DActor_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}



static PyObject *
PyvtkGridAxes3DActor_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxes3DActor::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetFaceMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceMask(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetFaceMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetFaceMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFaceMask() :
      op->vtkGridAxes3DActor::GetFaceMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMask(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxes3DActor::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetLabelUniqueEdgesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelUniqueEdgesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelUniqueEdgesOnly(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetLabelUniqueEdgesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetLabelUniqueEdgesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelUniqueEdgesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelUniqueEdgesOnly() :
      op->vtkGridAxes3DActor::GetLabelUniqueEdgesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGrid(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxes3DActor::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdges(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxes3DActor::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTicks(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxes3DActor::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxes3DActor::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxes3DActor::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetTitleTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkGridAxes3DActor::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXTitle(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitle(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZTitle(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetTitle(temp0) :
      &op->vtkGridAxes3DActor::GetTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomLabels(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetUseCustomLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetNumberOfLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetNumberOfXLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetNumberOfYLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetNumberOfZLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZLabels(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetNumberOfZLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGridAxes3DActor::SetLabel(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkGridAxes3DActor::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNotation(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXNotation(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYNotation(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZNotation(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation(temp0) :
      op->vtkGridAxes3DActor::GetNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0, temp1);
    }
    else
    {
      op->vtkGridAxes3DActor::SetPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetXPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPrecision(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetXPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetYPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPrecision(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetYPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetZPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPrecision(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetZPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision(temp0) :
      op->vtkGridAxes3DActor::GetPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxes3DActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes3DActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::GetBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxes3DActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGridAxes3DActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkGridAxes3DActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkGridAxes3DActor_GetRenderedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRenderedBounds(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::GetRenderedBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkGridAxes3DActor::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkGridAxes3DActor::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkGridAxes3DActor::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkGridAxes3DActor::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxes3DActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxes3DActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxes3DActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxes3DActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxes3DActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxes3DActor *op = static_cast<vtkGridAxes3DActor *>(vp);

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
      op->vtkGridAxes3DActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxes3DActor_Methods[] = {
  {"IsTypeOf", PyvtkGridAxes3DActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxes3DActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxes3DActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridAxes3DActor\nC++: static vtkGridAxes3DActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxes3DActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridAxes3DActor\nC++: vtkGridAxes3DActor *NewInstance()\n\n"},
  {"ShallowCopy", PyvtkGridAxes3DActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy from another vtkGridAxes3DActor.\n"},
  {"SetGridBounds", PyvtkGridAxes3DActor_SetGridBounds, METH_VARARGS,
   "V.SetGridBounds(float, float, float, float, float, float)\nC++: void SetGridBounds(double, double, double, double, double,\n    double)\nV.SetGridBounds((float, float, float, float, float, float))\nC++: void SetGridBounds(double a[6])\n\n"},
  {"GetGridBounds", PyvtkGridAxes3DActor_GetGridBounds, METH_VARARGS,
   "V.GetGridBounds() -> (float, float, float, float, float, float)\nC++: double *GetGridBounds()\n\n"},
  {"SetFaceMask", PyvtkGridAxes3DActor_SetFaceMask, METH_VARARGS,
   "V.SetFaceMask(int)\nC++: virtual void SetFaceMask(unsigned int mask)\n\nSet the mask to select faces. The faces rendered can be a subset\nof the faces selected using the FaceMask based on the\nBackfaceCulling and FrontfaceCulling flags set on the Property.\n"},
  {"GetFaceMask", PyvtkGridAxes3DActor_GetFaceMask, METH_VARARGS,
   "V.GetFaceMask() -> int\nC++: virtual unsigned int GetFaceMask()\n\nSet the mask to select faces. The faces rendered can be a subset\nof the faces selected using the FaceMask based on the\nBackfaceCulling and FrontfaceCulling flags set on the Property.\n"},
  {"SetLabelMask", PyvtkGridAxes3DActor_SetLabelMask, METH_VARARGS,
   "V.SetLabelMask(int)\nC++: virtual void SetLabelMask(unsigned int mask)\n\nSet the axis to label.\n"},
  {"GetLabelMask", PyvtkGridAxes3DActor_GetLabelMask, METH_VARARGS,
   "V.GetLabelMask() -> int\nC++: unsigned int GetLabelMask()\n\nSet the axis to label.\n"},
  {"SetLabelUniqueEdgesOnly", PyvtkGridAxes3DActor_SetLabelUniqueEdgesOnly, METH_VARARGS,
   "V.SetLabelUniqueEdgesOnly(bool)\nC++: virtual void SetLabelUniqueEdgesOnly(bool _arg)\n\nSet to true to only label edges shared with 1 face. Note that if\nall faces are being rendered, this will generate no labels.\n"},
  {"GetLabelUniqueEdgesOnly", PyvtkGridAxes3DActor_GetLabelUniqueEdgesOnly, METH_VARARGS,
   "V.GetLabelUniqueEdgesOnly() -> bool\nC++: virtual bool GetLabelUniqueEdgesOnly()\n\nSet to true to only label edges shared with 1 face. Note that if\nall faces are being rendered, this will generate no labels.\n"},
  {"SetGenerateGrid", PyvtkGridAxes3DActor_SetGenerateGrid, METH_VARARGS,
   "V.SetGenerateGrid(bool)\nC++: void SetGenerateGrid(bool val)\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GetGenerateGrid", PyvtkGridAxes3DActor_GetGenerateGrid, METH_VARARGS,
   "V.GetGenerateGrid() -> bool\nC++: bool GetGenerateGrid()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GenerateGridOn", PyvtkGridAxes3DActor_GenerateGridOn, METH_VARARGS,
   "V.GenerateGridOn()\nC++: virtual void GenerateGridOn()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"GenerateGridOff", PyvtkGridAxes3DActor_GenerateGridOff, METH_VARARGS,
   "V.GenerateGridOff()\nC++: virtual void GenerateGridOff()\n\nTurn off to not generate polydata for the plane's grid.\n"},
  {"SetGenerateEdges", PyvtkGridAxes3DActor_SetGenerateEdges, METH_VARARGS,
   "V.SetGenerateEdges(bool)\nC++: void SetGenerateEdges(bool val)\n\nTurn off to not generate the polydata for the plane's edges.\nWhich edges are rendered is defined by the EdgeMask.\n"},
  {"GetGenerateEdges", PyvtkGridAxes3DActor_GetGenerateEdges, METH_VARARGS,
   "V.GetGenerateEdges() -> bool\nC++: bool GetGenerateEdges()\n\nTurn off to not generate the polydata for the plane's edges.\nWhich edges are rendered is defined by the EdgeMask.\n"},
  {"GenerateEdgesOn", PyvtkGridAxes3DActor_GenerateEdgesOn, METH_VARARGS,
   "V.GenerateEdgesOn()\nC++: virtual void GenerateEdgesOn()\n\nTurn off to not generate the polydata for the plane's edges.\nWhich edges are rendered is defined by the EdgeMask.\n"},
  {"GenerateEdgesOff", PyvtkGridAxes3DActor_GenerateEdgesOff, METH_VARARGS,
   "V.GenerateEdgesOff()\nC++: virtual void GenerateEdgesOff()\n\nTurn off to not generate the polydata for the plane's edges.\nWhich edges are rendered is defined by the EdgeMask.\n"},
  {"SetGenerateTicks", PyvtkGridAxes3DActor_SetGenerateTicks, METH_VARARGS,
   "V.SetGenerateTicks(bool)\nC++: void SetGenerateTicks(bool val)\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GetGenerateTicks", PyvtkGridAxes3DActor_GetGenerateTicks, METH_VARARGS,
   "V.GetGenerateTicks() -> bool\nC++: bool GetGenerateTicks()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GenerateTicksOn", PyvtkGridAxes3DActor_GenerateTicksOn, METH_VARARGS,
   "V.GenerateTicksOn()\nC++: virtual void GenerateTicksOn()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"GenerateTicksOff", PyvtkGridAxes3DActor_GenerateTicksOff, METH_VARARGS,
   "V.GenerateTicksOff()\nC++: virtual void GenerateTicksOff()\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n"},
  {"SetProperty", PyvtkGridAxes3DActor_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n"},
  {"GetProperty", PyvtkGridAxes3DActor_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n"},
  {"SetTitleTextProperty", PyvtkGridAxes3DActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(int, vtkTextProperty)\nC++: void SetTitleTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"SetXTitleTextProperty", PyvtkGridAxes3DActor_SetXTitleTextProperty, METH_VARARGS,
   "V.SetXTitleTextProperty(vtkTextProperty)\nC++: void SetXTitleTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"SetYTitleTextProperty", PyvtkGridAxes3DActor_SetYTitleTextProperty, METH_VARARGS,
   "V.SetYTitleTextProperty(vtkTextProperty)\nC++: void SetYTitleTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"SetZTitleTextProperty", PyvtkGridAxes3DActor_SetZTitleTextProperty, METH_VARARGS,
   "V.SetZTitleTextProperty(vtkTextProperty)\nC++: void SetZTitleTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"GetTitleTextProperty", PyvtkGridAxes3DActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int axis)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"SetTitle", PyvtkGridAxes3DActor_SetTitle, METH_VARARGS,
   "V.SetTitle(int, string)\nC++: void SetTitle(int axis, const vtkStdString &title)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n"},
  {"SetXTitle", PyvtkGridAxes3DActor_SetXTitle, METH_VARARGS,
   "V.SetXTitle(string)\nC++: void SetXTitle(const vtkStdString &title)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n"},
  {"SetYTitle", PyvtkGridAxes3DActor_SetYTitle, METH_VARARGS,
   "V.SetYTitle(string)\nC++: void SetYTitle(const vtkStdString &title)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n"},
  {"SetZTitle", PyvtkGridAxes3DActor_SetZTitle, METH_VARARGS,
   "V.SetZTitle(string)\nC++: void SetZTitle(const vtkStdString &title)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n"},
  {"GetTitle", PyvtkGridAxes3DActor_GetTitle, METH_VARARGS,
   "V.GetTitle(int) -> string\nC++: const vtkStdString &GetTitle(int axis)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n"},
  {"SetUseCustomLabels", PyvtkGridAxes3DActor_SetUseCustomLabels, METH_VARARGS,
   "V.SetUseCustomLabels(int, bool)\nC++: void SetUseCustomLabels(int axis, bool val)\n\nSet whether the specified axis should use custom labels instead\nof automatically determined ones.\n"},
  {"SetXUseCustomLabels", PyvtkGridAxes3DActor_SetXUseCustomLabels, METH_VARARGS,
   "V.SetXUseCustomLabels(bool)\nC++: void SetXUseCustomLabels(bool val)\n\n"},
  {"SetYUseCustomLabels", PyvtkGridAxes3DActor_SetYUseCustomLabels, METH_VARARGS,
   "V.SetYUseCustomLabels(bool)\nC++: void SetYUseCustomLabels(bool val)\n\n"},
  {"SetZUseCustomLabels", PyvtkGridAxes3DActor_SetZUseCustomLabels, METH_VARARGS,
   "V.SetZUseCustomLabels(bool)\nC++: void SetZUseCustomLabels(bool val)\n\n"},
  {"SetNumberOfLabels", PyvtkGridAxes3DActor_SetNumberOfLabels, METH_VARARGS,
   "V.SetNumberOfLabels(int, int)\nC++: void SetNumberOfLabels(int axis, vtkIdType val)\n\n"},
  {"SetNumberOfXLabels", PyvtkGridAxes3DActor_SetNumberOfXLabels, METH_VARARGS,
   "V.SetNumberOfXLabels(int)\nC++: void SetNumberOfXLabels(vtkIdType val)\n\n"},
  {"SetNumberOfYLabels", PyvtkGridAxes3DActor_SetNumberOfYLabels, METH_VARARGS,
   "V.SetNumberOfYLabels(int)\nC++: void SetNumberOfYLabels(vtkIdType val)\n\n"},
  {"SetNumberOfZLabels", PyvtkGridAxes3DActor_SetNumberOfZLabels, METH_VARARGS,
   "V.SetNumberOfZLabels(int)\nC++: void SetNumberOfZLabels(vtkIdType val)\n\n"},
  {"SetLabel", PyvtkGridAxes3DActor_SetLabel, METH_VARARGS,
   "V.SetLabel(int, int, float)\nC++: void SetLabel(int axis, vtkIdType index, double value)\n\n"},
  {"SetXLabel", PyvtkGridAxes3DActor_SetXLabel, METH_VARARGS,
   "V.SetXLabel(int, float)\nC++: void SetXLabel(vtkIdType index, double value)\n\n"},
  {"SetYLabel", PyvtkGridAxes3DActor_SetYLabel, METH_VARARGS,
   "V.SetYLabel(int, float)\nC++: void SetYLabel(vtkIdType index, double value)\n\n"},
  {"SetZLabel", PyvtkGridAxes3DActor_SetZLabel, METH_VARARGS,
   "V.SetZLabel(int, float)\nC++: void SetZLabel(vtkIdType index, double value)\n\n"},
  {"SetLabelTextProperty", PyvtkGridAxes3DActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(int, vtkTextProperty)\nC++: void SetLabelTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetXLabelTextProperty", PyvtkGridAxes3DActor_SetXLabelTextProperty, METH_VARARGS,
   "V.SetXLabelTextProperty(vtkTextProperty)\nC++: void SetXLabelTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetYLabelTextProperty", PyvtkGridAxes3DActor_SetYLabelTextProperty, METH_VARARGS,
   "V.SetYLabelTextProperty(vtkTextProperty)\nC++: void SetYLabelTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetZLabelTextProperty", PyvtkGridAxes3DActor_SetZLabelTextProperty, METH_VARARGS,
   "V.SetZLabelTextProperty(vtkTextProperty)\nC++: void SetZLabelTextProperty(vtkTextProperty *prop)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"GetLabelTextProperty", PyvtkGridAxes3DActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int axis)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetNotation", PyvtkGridAxes3DActor_SetNotation, METH_VARARGS,
   "V.SetNotation(int, int)\nC++: void SetNotation(int axis, int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"SetXNotation", PyvtkGridAxes3DActor_SetXNotation, METH_VARARGS,
   "V.SetXNotation(int)\nC++: void SetXNotation(int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"SetYNotation", PyvtkGridAxes3DActor_SetYNotation, METH_VARARGS,
   "V.SetYNotation(int)\nC++: void SetYNotation(int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"SetZNotation", PyvtkGridAxes3DActor_SetZNotation, METH_VARARGS,
   "V.SetZNotation(int)\nC++: void SetZNotation(int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"GetNotation", PyvtkGridAxes3DActor_GetNotation, METH_VARARGS,
   "V.GetNotation(int) -> int\nC++: int GetNotation(int axis)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n"},
  {"SetPrecision", PyvtkGridAxes3DActor_SetPrecision, METH_VARARGS,
   "V.SetPrecision(int, int)\nC++: void SetPrecision(int axis, int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"SetXPrecision", PyvtkGridAxes3DActor_SetXPrecision, METH_VARARGS,
   "V.SetXPrecision(int)\nC++: void SetXPrecision(int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"SetYPrecision", PyvtkGridAxes3DActor_SetYPrecision, METH_VARARGS,
   "V.SetYPrecision(int)\nC++: void SetYPrecision(int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"SetZPrecision", PyvtkGridAxes3DActor_SetZPrecision, METH_VARARGS,
   "V.SetZPrecision(int)\nC++: void SetZPrecision(int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"GetPrecision", PyvtkGridAxes3DActor_GetPrecision, METH_VARARGS,
   "V.GetPrecision(int) -> int\nC++: int GetPrecision(int axis)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"GetBounds", PyvtkGridAxes3DActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturns the prop bounds.\n"},
  {"GetRenderedBounds", PyvtkGridAxes3DActor_GetRenderedBounds, METH_VARARGS,
   "V.GetRenderedBounds([float, float, float, float, float, float])\nC++: virtual void GetRenderedBounds(double bounds[6])\n\nGet an bounding box that is expected to contain all rendered\nelements, since GetBounds() returns the bounding box the grid\naxes describes.\n"},
  {"SetForceOpaque", PyvtkGridAxes3DActor_SetForceOpaque, METH_VARARGS,
   "V.SetForceOpaque(bool)\nC++: virtual void SetForceOpaque(bool _arg)\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"GetForceOpaque", PyvtkGridAxes3DActor_GetForceOpaque, METH_VARARGS,
   "V.GetForceOpaque() -> bool\nC++: virtual bool GetForceOpaque()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"ForceOpaqueOn", PyvtkGridAxes3DActor_ForceOpaqueOn, METH_VARARGS,
   "V.ForceOpaqueOn()\nC++: virtual void ForceOpaqueOn()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"ForceOpaqueOff", PyvtkGridAxes3DActor_ForceOpaqueOff, METH_VARARGS,
   "V.ForceOpaqueOff()\nC++: virtual void ForceOpaqueOff()\n\nIf true, the actor will always be rendered during the opaque\npass.\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxes3DActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxes3DActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxes3DActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxes3DActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxes3DActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridAxes3DActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxes3DActor", // tp_name
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
  PyvtkGridAxes3DActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxes3DActor_StaticNew()
{
  return vtkGridAxes3DActor::New();
}

PyObject *PyvtkGridAxes3DActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridAxes3DActor_Type, PyvtkGridAxes3DActor_Methods,
    "vtkGridAxes3DActor",
 &PyvtkGridAxes3DActor_StaticNew);

  PyTypeObject *pytype = &PyvtkGridAxes3DActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGridAxes3DActor_FaceMasks_Type);
  PyvtkGridAxes3DActor_FaceMasks_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxes3DActor_FaceMasks_Type);

  o = (PyObject *)&PyvtkGridAxes3DActor_FaceMasks_Type;
  if (PyDict_SetItemString(d, "FaceMasks", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGridAxes3DActor_LabelMasks_Type);
  PyvtkGridAxes3DActor_LabelMasks_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxes3DActor_LabelMasks_Type);

  o = (PyObject *)&PyvtkGridAxes3DActor_LabelMasks_Type;
  if (PyDict_SetItemString(d, "LabelMasks", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxes3DActor::FaceMasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_YZ", vtkGridAxes3DActor::MIN_YZ },
        { "MIN_ZX", vtkGridAxes3DActor::MIN_ZX },
        { "MIN_XY", vtkGridAxes3DActor::MIN_XY },
        { "MAX_YZ", vtkGridAxes3DActor::MAX_YZ },
        { "MAX_ZX", vtkGridAxes3DActor::MAX_ZX },
        { "MAX_XY", vtkGridAxes3DActor::MAX_XY },
      };

    o = PyvtkGridAxes3DActor_FaceMasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxes3DActor::LabelMasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_X", vtkGridAxes3DActor::MIN_X },
        { "MIN_Y", vtkGridAxes3DActor::MIN_Y },
        { "MIN_Z", vtkGridAxes3DActor::MIN_Z },
        { "MAX_X", vtkGridAxes3DActor::MAX_X },
        { "MAX_Y", vtkGridAxes3DActor::MAX_Y },
        { "MAX_Z", vtkGridAxes3DActor::MAX_Z },
      };

    o = PyvtkGridAxes3DActor_LabelMasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxes3DActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxes3DActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxes3DActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

