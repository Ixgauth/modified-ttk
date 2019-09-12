// python wrapper for vtkGridAxesHelper
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
#include "vtkTuple.h"
#include "vtkVector.h"
#include "vtkTuple.h"
#include "vtkVector.h"
#include "vtkTuple.h"
#include "vtkTuple.h"
#include "vtkGridAxesHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridAxesHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridAxesHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGridAxesHelper_Doc =
  "vtkGridAxesHelper - is a helper object used by vtkGridAxes2DActor,\nvtkGridAxes3DActor, and vtkGridAxesPlane2DActor.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGridAxes2DActor, vtkGridAxes3DActor, and vtkGridAxesPlane2DActor\n"
  "shares a lot of the computations and logic. This class makes it\n"
  "possible to share all such information between these classes. This\n"
  "class works with a single face of the bounding box specified using\n"
  "the GridBounds.\n\n";

static PyTypeObject PyvtkGridAxesHelper_Faces_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxesHelper.Faces", // tp_name
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

PyObject *PyvtkGridAxesHelper_Faces_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxesHelper_Faces_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxesHelper_Faces_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGridAxesHelper_LabelMasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxesHelper.LabelMasks", // tp_name
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

PyObject *PyvtkGridAxesHelper_LabelMasks_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGridAxesHelper_LabelMasks_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGridAxesHelper_LabelMasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGridAxesHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesHelper *tempr = vtkGridAxesHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesHelper::NewInstance());

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
PyvtkGridAxesHelper_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

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
      op->vtkGridAxesHelper::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesHelper_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

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
      op->vtkGridAxesHelper::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesHelper_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesHelper_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesHelper_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}



static PyObject *
PyvtkGridAxesHelper_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesHelper::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFace(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxesHelper::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxesHelper::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxesHelper::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

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
      op->vtkGridAxesHelper::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxesHelper::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector3d, 4> tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkGridAxesHelper::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector3dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetActiveAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetActiveAxes() :
      op->vtkGridAxesHelper::GetActiveAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetLabelVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<bool, 4> tempr = (ap.IsBound() ?
      op->GetLabelVisibilities() :
      op->vtkGridAxesHelper::GetLabelVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_IbLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkGridAxesHelper::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetTransformedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector3d, 4> tempr = (ap.IsBound() ?
      op->GetTransformedPoints() :
      op->vtkGridAxesHelper::GetTransformedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector3dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_TransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->TransformPoint(*temp0) :
      op->vtkGridAxesHelper::TransformPoint(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetTransformedFaceNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFaceNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetTransformedFaceNormal() :
      op->vtkGridAxesHelper::GetTransformedFaceNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_UpdateForViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateForViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateForViewport(temp0) :
      op->vtkGridAxesHelper::UpdateForViewport(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2i, 4> tempr = (ap.IsBound() ?
      op->GetViewportPoints() :
      op->vtkGridAxesHelper::GetViewportPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2iLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportPointsAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportPointsAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportPointsAsDouble() :
      op->vtkGridAxesHelper::GetViewportPointsAsDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportVectors() :
      op->vtkGridAxesHelper::GetViewportVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportNormals() :
      op->vtkGridAxesHelper::GetViewportNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBackface() :
      op->vtkGridAxesHelper::GetBackface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesHelper_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridAxesHelper\nC++: static vtkGridAxesHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridAxesHelper\nC++: vtkGridAxesHelper *NewInstance()\n\n"},
  {"SetGridBounds", PyvtkGridAxesHelper_SetGridBounds, METH_VARARGS,
   "V.SetGridBounds(float, float, float, float, float, float)\nC++: void SetGridBounds(double, double, double, double, double,\n    double)\nV.SetGridBounds((float, float, float, float, float, float))\nC++: void SetGridBounds(double a[6])\n\n"},
  {"GetGridBounds", PyvtkGridAxesHelper_GetGridBounds, METH_VARARGS,
   "V.GetGridBounds() -> (float, float, float, float, float, float)\nC++: double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxesHelper_SetFace, METH_VARARGS,
   "V.SetFace(int)\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFaceMinValue", PyvtkGridAxesHelper_GetFaceMinValue, METH_VARARGS,
   "V.GetFaceMinValue() -> int\nC++: virtual int GetFaceMinValue()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFaceMaxValue", PyvtkGridAxesHelper_GetFaceMaxValue, METH_VARARGS,
   "V.GetFaceMaxValue() -> int\nC++: virtual int GetFaceMaxValue()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"GetFace", PyvtkGridAxesHelper_GetFace, METH_VARARGS,
   "V.GetFace() -> int\nC++: virtual int GetFace()\n\nIndicate which face of the specified bounds is this class\noperating with.\n"},
  {"SetLabelMask", PyvtkGridAxesHelper_SetLabelMask, METH_VARARGS,
   "V.SetLabelMask(int)\nC++: virtual void SetLabelMask(unsigned int _arg)\n\nSet the axes to label.\n"},
  {"GetLabelMask", PyvtkGridAxesHelper_GetLabelMask, METH_VARARGS,
   "V.GetLabelMask() -> int\nC++: virtual unsigned int GetLabelMask()\n\nSet the axes to label.\n"},
  {"GetPoints", PyvtkGridAxesHelper_GetPoints, METH_VARARGS,
   "V.GetPoints() -> vtkTuple_I11vtkVector3dLi4EE\nC++: vtkTuple<vtkVector3d, 4> GetPoints()\n\nGet the 4 points in world coordinates that define the grid plane.\nThe points are in anticlockwise anticlockwise order with the face\nnormal pointing outward from the box defined by the GridBounds.\n"},
  {"GetActiveAxes", PyvtkGridAxesHelper_GetActiveAxes, METH_VARARGS,
   "V.GetActiveAxes() -> vtkVector2i\nC++: vtkVector2i GetActiveAxes()\n\nReturns which of the 3 coordinate axes for the 2 axes for this\nplane: 0 for X axis, 1, for Y axis, and 3 for Z axis. The two\naxes are specified in order so that together with the face normal\n(which is point outwards from the box defined by GridBounds),\nthey form a right-handed coordinate system.\n"},
  {"GetLabelVisibilities", PyvtkGridAxesHelper_GetLabelVisibilities, METH_VARARGS,
   "V.GetLabelVisibilities() -> vtkTuple_IbLi4EE\nC++: vtkTuple<bool, 4> GetLabelVisibilities()\n\nReturns the visibility for labels for each of the 4 axis defined\nby the face points based on the LabelMask.\n"},
  {"SetMatrix", PyvtkGridAxesHelper_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *)\n\nSet the transform matrix to use to transform the points. The\nmatrix's MTime will be used to determine if the transformed\npoints needed to be recomputed, when needed.\n"},
  {"GetMatrix", PyvtkGridAxesHelper_GetMatrix, METH_VARARGS,
   "V.GetMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\nSet the transform matrix to use to transform the points. The\nmatrix's MTime will be used to determine if the transformed\npoints needed to be recomputed, when needed.\n"},
  {"GetTransformedPoints", PyvtkGridAxesHelper_GetTransformedPoints, METH_VARARGS,
   "V.GetTransformedPoints() -> vtkTuple_I11vtkVector3dLi4EE\nC++: vtkTuple<vtkVector3d, 4> GetTransformedPoints()\n\nGet the 4 points of the plane transformed using the\ntransformation matrix set using SetMatrix(), if any. This method\nto compute the transformed points the first time its called since\nthe plane points or the transformation matrix was set.\n"},
  {"TransformPoint", PyvtkGridAxesHelper_TransformPoint, METH_VARARGS,
   "V.TransformPoint(vtkVector3d) -> vtkVector3d\nC++: vtkVector3d TransformPoint(const vtkVector3d &point)\n\nTransforms the give point using the Matrix.\n"},
  {"GetTransformedFaceNormal", PyvtkGridAxesHelper_GetTransformedFaceNormal, METH_VARARGS,
   "V.GetTransformedFaceNormal() -> vtkVector3d\nC++: vtkVector3d GetTransformedFaceNormal()\n\nGet the normal to the grid plane face **after** applying the\ntransform specified using transformation matrix. Similar to\nGetTransformedPoints(), this method will only compute when input\nparameters have changed since the last time this method was\ncalled.\n"},
  {"UpdateForViewport", PyvtkGridAxesHelper_UpdateForViewport, METH_VARARGS,
   "V.UpdateForViewport(vtkViewport) -> bool\nC++: bool UpdateForViewport(vtkViewport *viewport)\n\nCall this method before accessing any of the attributes in\nviewport space. This computes the location of the plane in the\nviewport space using the specified viewport. This method should\ntypically be called once per render.\n"},
  {"GetViewportPoints", PyvtkGridAxesHelper_GetViewportPoints, METH_VARARGS,
   "V.GetViewportPoints() -> vtkTuple_I11vtkVector2iLi4EE\nC++: vtkTuple<vtkVector2i, 4> GetViewportPoints()\n\nGet the positions for the plane points in viewport coordinates.\n"},
  {"GetViewportPointsAsDouble", PyvtkGridAxesHelper_GetViewportPointsAsDouble, METH_VARARGS,
   "V.GetViewportPointsAsDouble() -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportPointsAsDouble()\n\n"},
  {"GetViewportVectors", PyvtkGridAxesHelper_GetViewportVectors, METH_VARARGS,
   "V.GetViewportVectors() -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportVectors()\n\nGet the axis vectors formed using the points returned by\nGetViewportPoints(). These are in non-normalized form.\n"},
  {"GetViewportNormals", PyvtkGridAxesHelper_GetViewportNormals, METH_VARARGS,
   "V.GetViewportNormals() -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportNormals()\n\nGet the normals to the axis vectors in viewport space. There are\nnot true normals to the axis vector. These are normalized.\n"},
  {"GetBackface", PyvtkGridAxesHelper_GetBackface, METH_VARARGS,
   "V.GetBackface() -> bool\nC++: virtual bool GetBackface()\n\nGet if the face is facing backwards in the current viewport.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridAxesHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkGridAxesHelper", // tp_name
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
  PyvtkGridAxesHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesHelper_StaticNew()
{
  return vtkGridAxesHelper::New();
}

PyObject *PyvtkGridAxesHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridAxesHelper_Type, PyvtkGridAxesHelper_Methods,
    "vtkGridAxesHelper",
 &PyvtkGridAxesHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkGridAxesHelper_Type;

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

  PyType_Ready(&PyvtkGridAxesHelper_Faces_Type);
  PyvtkGridAxesHelper_Faces_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxesHelper_Faces_Type);

  o = (PyObject *)&PyvtkGridAxesHelper_Faces_Type;
  if (PyDict_SetItemString(d, "Faces", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGridAxesHelper_LabelMasks_Type);
  PyvtkGridAxesHelper_LabelMasks_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGridAxesHelper_LabelMasks_Type);

  o = (PyObject *)&PyvtkGridAxesHelper_LabelMasks_Type;
  if (PyDict_SetItemString(d, "LabelMasks", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxesHelper::Faces cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_YZ", vtkGridAxesHelper::MIN_YZ },
        { "MIN_ZX", vtkGridAxesHelper::MIN_ZX },
        { "MIN_XY", vtkGridAxesHelper::MIN_XY },
        { "MAX_YZ", vtkGridAxesHelper::MAX_YZ },
        { "MAX_ZX", vtkGridAxesHelper::MAX_ZX },
        { "MAX_XY", vtkGridAxesHelper::MAX_XY },
      };

    o = PyvtkGridAxesHelper_Faces_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxesHelper::LabelMasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_X", vtkGridAxesHelper::MIN_X },
        { "MIN_Y", vtkGridAxesHelper::MIN_Y },
        { "MIN_Z", vtkGridAxesHelper::MIN_Z },
        { "MAX_X", vtkGridAxesHelper::MAX_X },
        { "MAX_Y", vtkGridAxesHelper::MAX_Y },
        { "MAX_Z", vtkGridAxesHelper::MAX_Z },
      };

    o = PyvtkGridAxesHelper_LabelMasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

