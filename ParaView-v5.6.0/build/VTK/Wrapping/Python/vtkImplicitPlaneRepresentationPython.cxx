// python wrapper for vtkImplicitPlaneRepresentation
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
#include "vtkImplicitPlaneRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitPlaneRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitPlaneRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkImplicitPlaneRepresentation_Doc =
  "vtkImplicitPlaneRepresentation - a class defining the representation\nfor a vtkImplicitPlaneWidget2\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkImplicitPlaneWidget2. It represents an infinite plane defined by a\n"
  "normal and point in the context of a bounding box. Through\n"
  "interaction with the widget, the plane can be manipulated by\n"
  "adjusting the plane normal or moving the origin point.\n\n"
  "To use this representation, you normally define a (plane) origin and\n"
  "(plane) normal. The PlaceWidget() method is also used to initially\n"
  "position the representation.\n\n"
  "@warning\n"
  "This class, and vtkImplicitPlaneWidget2, are next generation VTK\n"
  "widgets. An earlier version of this functionality was defined in the\n"
  "class vtkImplicitPlaneWidget.\n\n"
  "@sa\n"
  "vtkImplicitPlaneWidget2 vtkImplicitPlaneWidget\n\n";

static PyTypeObject PyvtkImplicitPlaneRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImplicitPlaneRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkImplicitPlaneRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkImplicitPlaneRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkImplicitPlaneRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkImplicitPlaneRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitPlaneRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitPlaneRepresentation *tempr = vtkImplicitPlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneRepresentation::NewInstance());

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
PyvtkImplicitPlaneRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetOrigin(temp0);
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
PyvtkImplicitPlaneRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPlaneRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImplicitPlaneRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::GetOrigin(temp0);
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
PyvtkImplicitPlaneRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitPlaneRepresentation_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetNormal(temp0);
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
PyvtkImplicitPlaneRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPlaneRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToCamera();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetNormalToCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitPlaneRepresentation::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNormal(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::GetNormal(temp0);
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
PyvtkImplicitPlaneRepresentation_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitPlaneRepresentation_GetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToXAxis(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetNormalToXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkImplicitPlaneRepresentation::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToYAxis(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetNormalToYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkImplicitPlaneRepresentation::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToZAxis(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetNormalToZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkImplicitPlaneRepresentation::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::NormalToZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockNormalToCamera(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockNormalToCamera() :
      op->vtkImplicitPlaneRepresentation::GetLockNormalToCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_LockNormalToCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::LockNormalToCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_LockNormalToCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::LockNormalToCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitPlaneRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPlane(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetDrawPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkImplicitPlaneRepresentation::GetDrawPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::DrawPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::DrawPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetDrawOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawOutline(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetDrawOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetDrawOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawOutline() :
      op->vtkImplicitPlaneRepresentation::GetDrawOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOutlineOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::DrawOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOutlineOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::DrawOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineTranslation(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetOutlineTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkImplicitPlaneRepresentation::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::OutlineTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::OutlineTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutsideBounds(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetOutsideBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkImplicitPlaneRepresentation::GetOutsideBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::OutsideBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::OutsideBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetWidgetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetWidgetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetBounds(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetWidgetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImplicitPlaneRepresentation_SetWidgetBounds_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_SetWidgetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWidgetBounds");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_GetWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWidgetBounds() :
      op->vtkImplicitPlaneRepresentation::GetWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrainToWidgetBounds(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetConstrainToWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainToWidgetBounds() :
      op->vtkImplicitPlaneRepresentation::GetConstrainToWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ConstrainToWidgetBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::ConstrainToWidgetBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ConstrainToWidgetBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::ConstrainToWidgetBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleEnabled(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitPlaneRepresentation::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkImplicitPlaneRepresentation::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->GetPlane(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::GetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkImplicitPlaneRepresentation::GetNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkImplicitPlaneRepresentation::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkImplicitPlaneRepresentation::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkImplicitPlaneRepresentation::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkImplicitPlaneRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkImplicitPlaneRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkImplicitPlaneRepresentation::GetEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetEdgeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetEdgeColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetEdgeColor(temp0);
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

static PyMethodDef PyvtkImplicitPlaneRepresentation_SetEdgeColor_Methods[] = {
  {nullptr, PyvtkImplicitPlaneRepresentation_SetEdgeColor_s1, METH_VARARGS,
   "@V *vtkLookupTable"},
  {nullptr, PyvtkImplicitPlaneRepresentation_SetEdgeColor_s3, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitPlaneRepresentation_SetEdgeColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitPlaneRepresentation_SetEdgeColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPlaneRepresentation_SetEdgeColor_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBumpDistance(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetBumpDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetBumpDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMinValue() :
      op->vtkImplicitPlaneRepresentation::GetBumpDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetBumpDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMaxValue() :
      op->vtkImplicitPlaneRepresentation::GetBumpDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistance() :
      op->vtkImplicitPlaneRepresentation::GetBumpDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_BumpPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BumpPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BumpPlane(temp0, temp1);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::BumpPlane(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_PushPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushPlane(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::PushPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkImplicitPlaneRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::PlaceWidget(temp0);
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
PyvtkImplicitPlaneRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::StartWidgetInteraction(temp0);
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
PyvtkImplicitPlaneRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::WidgetInteraction(temp0);
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
PyvtkImplicitPlaneRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::EndWidgetInteraction(temp0);
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
PyvtkImplicitPlaneRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkImplicitPlaneRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->EndComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImplicitPlaneRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImplicitPlaneRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImplicitPlaneRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImplicitPlaneRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkImplicitPlaneRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkImplicitPlaneRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkImplicitPlaneRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetUnderlyingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnderlyingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetUnderlyingPlane() :
      op->vtkImplicitPlaneRepresentation::GetUnderlyingPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetCropPlaneToBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropPlaneToBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropPlaneToBoundingBox(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetCropPlaneToBoundingBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetCropPlaneToBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropPlaneToBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCropPlaneToBoundingBox() :
      op->vtkImplicitPlaneRepresentation::GetCropPlaneToBoundingBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_CropPlaneToBoundingBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CropPlaneToBoundingBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CropPlaneToBoundingBoxOn();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::CropPlaneToBoundingBoxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_CropPlaneToBoundingBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CropPlaneToBoundingBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CropPlaneToBoundingBoxOff();
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::CropPlaneToBoundingBoxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToAxes() :
      op->vtkImplicitPlaneRepresentation::GetSnapToAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToAxes(temp0);
    }
    else
    {
      op->vtkImplicitPlaneRepresentation::SetSnapToAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitPlaneRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkImplicitPlaneRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkImplicitPlaneRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitPlaneRepresentation\nC++: static vtkImplicitPlaneRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkImplicitPlaneRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {"SetOrigin", PyvtkImplicitPlaneRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double x[3])\n\nGet the origin of the plane.\n"},
  {"GetOrigin", PyvtkImplicitPlaneRepresentation_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nGet the origin of the plane.\n"},
  {"SetNormal", PyvtkImplicitPlaneRepresentation_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {"SetNormalToCamera", PyvtkImplicitPlaneRepresentation_SetNormalToCamera, METH_VARARGS,
   "V.SetNormalToCamera()\nC++: void SetNormalToCamera()\n\nGet the normal to the plane.\n"},
  {"GetNormal", PyvtkImplicitPlaneRepresentation_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {"SetNormalToXAxis", PyvtkImplicitPlaneRepresentation_SetNormalToXAxis, METH_VARARGS,
   "V.SetNormalToXAxis(int)\nC++: void SetNormalToXAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToXAxis", PyvtkImplicitPlaneRepresentation_GetNormalToXAxis, METH_VARARGS,
   "V.GetNormalToXAxis() -> int\nC++: virtual vtkTypeBool GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToXAxisOn", PyvtkImplicitPlaneRepresentation_NormalToXAxisOn, METH_VARARGS,
   "V.NormalToXAxisOn()\nC++: virtual void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToXAxisOff", PyvtkImplicitPlaneRepresentation_NormalToXAxisOff, METH_VARARGS,
   "V.NormalToXAxisOff()\nC++: virtual void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetNormalToYAxis", PyvtkImplicitPlaneRepresentation_SetNormalToYAxis, METH_VARARGS,
   "V.SetNormalToYAxis(int)\nC++: void SetNormalToYAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToYAxis", PyvtkImplicitPlaneRepresentation_GetNormalToYAxis, METH_VARARGS,
   "V.GetNormalToYAxis() -> int\nC++: virtual vtkTypeBool GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToYAxisOn", PyvtkImplicitPlaneRepresentation_NormalToYAxisOn, METH_VARARGS,
   "V.NormalToYAxisOn()\nC++: virtual void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToYAxisOff", PyvtkImplicitPlaneRepresentation_NormalToYAxisOff, METH_VARARGS,
   "V.NormalToYAxisOff()\nC++: virtual void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetNormalToZAxis", PyvtkImplicitPlaneRepresentation_SetNormalToZAxis, METH_VARARGS,
   "V.SetNormalToZAxis(int)\nC++: void SetNormalToZAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToZAxis", PyvtkImplicitPlaneRepresentation_GetNormalToZAxis, METH_VARARGS,
   "V.GetNormalToZAxis() -> int\nC++: virtual vtkTypeBool GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToZAxisOn", PyvtkImplicitPlaneRepresentation_NormalToZAxisOn, METH_VARARGS,
   "V.NormalToZAxisOn()\nC++: virtual void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToZAxisOff", PyvtkImplicitPlaneRepresentation_NormalToZAxisOff, METH_VARARGS,
   "V.NormalToZAxisOff()\nC++: virtual void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetLockNormalToCamera", PyvtkImplicitPlaneRepresentation_SetLockNormalToCamera, METH_VARARGS,
   "V.SetLockNormalToCamera(int)\nC++: virtual void SetLockNormalToCamera(vtkTypeBool)\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"GetLockNormalToCamera", PyvtkImplicitPlaneRepresentation_GetLockNormalToCamera, METH_VARARGS,
   "V.GetLockNormalToCamera() -> int\nC++: virtual vtkTypeBool GetLockNormalToCamera()\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"LockNormalToCameraOn", PyvtkImplicitPlaneRepresentation_LockNormalToCameraOn, METH_VARARGS,
   "V.LockNormalToCameraOn()\nC++: virtual void LockNormalToCameraOn()\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"LockNormalToCameraOff", PyvtkImplicitPlaneRepresentation_LockNormalToCameraOff, METH_VARARGS,
   "V.LockNormalToCameraOff()\nC++: virtual void LockNormalToCameraOff()\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"SetTubing", PyvtkImplicitPlaneRepresentation_SetTubing, METH_VARARGS,
   "V.SetTubing(int)\nC++: virtual void SetTubing(vtkTypeBool _arg)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"GetTubing", PyvtkImplicitPlaneRepresentation_GetTubing, METH_VARARGS,
   "V.GetTubing() -> int\nC++: virtual vtkTypeBool GetTubing()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOn", PyvtkImplicitPlaneRepresentation_TubingOn, METH_VARARGS,
   "V.TubingOn()\nC++: virtual void TubingOn()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOff", PyvtkImplicitPlaneRepresentation_TubingOff, METH_VARARGS,
   "V.TubingOff()\nC++: virtual void TubingOff()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"SetDrawPlane", PyvtkImplicitPlaneRepresentation_SetDrawPlane, METH_VARARGS,
   "V.SetDrawPlane(int)\nC++: void SetDrawPlane(vtkTypeBool plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"GetDrawPlane", PyvtkImplicitPlaneRepresentation_GetDrawPlane, METH_VARARGS,
   "V.GetDrawPlane() -> int\nC++: virtual vtkTypeBool GetDrawPlane()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOn", PyvtkImplicitPlaneRepresentation_DrawPlaneOn, METH_VARARGS,
   "V.DrawPlaneOn()\nC++: virtual void DrawPlaneOn()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOff", PyvtkImplicitPlaneRepresentation_DrawPlaneOff, METH_VARARGS,
   "V.DrawPlaneOff()\nC++: virtual void DrawPlaneOff()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"SetDrawOutline", PyvtkImplicitPlaneRepresentation_SetDrawOutline, METH_VARARGS,
   "V.SetDrawOutline(int)\nC++: void SetDrawOutline(vtkTypeBool plane)\n\nEnable/disable the drawing of the outline.\n"},
  {"GetDrawOutline", PyvtkImplicitPlaneRepresentation_GetDrawOutline, METH_VARARGS,
   "V.GetDrawOutline() -> int\nC++: virtual vtkTypeBool GetDrawOutline()\n\nEnable/disable the drawing of the outline.\n"},
  {"DrawOutlineOn", PyvtkImplicitPlaneRepresentation_DrawOutlineOn, METH_VARARGS,
   "V.DrawOutlineOn()\nC++: virtual void DrawOutlineOn()\n\nEnable/disable the drawing of the outline.\n"},
  {"DrawOutlineOff", PyvtkImplicitPlaneRepresentation_DrawOutlineOff, METH_VARARGS,
   "V.DrawOutlineOff()\nC++: virtual void DrawOutlineOff()\n\nEnable/disable the drawing of the outline.\n"},
  {"SetOutlineTranslation", PyvtkImplicitPlaneRepresentation_SetOutlineTranslation, METH_VARARGS,
   "V.SetOutlineTranslation(int)\nC++: virtual void SetOutlineTranslation(vtkTypeBool _arg)\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"GetOutlineTranslation", PyvtkImplicitPlaneRepresentation_GetOutlineTranslation, METH_VARARGS,
   "V.GetOutlineTranslation() -> int\nC++: virtual vtkTypeBool GetOutlineTranslation()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"OutlineTranslationOn", PyvtkImplicitPlaneRepresentation_OutlineTranslationOn, METH_VARARGS,
   "V.OutlineTranslationOn()\nC++: virtual void OutlineTranslationOn()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"OutlineTranslationOff", PyvtkImplicitPlaneRepresentation_OutlineTranslationOff, METH_VARARGS,
   "V.OutlineTranslationOff()\nC++: virtual void OutlineTranslationOff()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"SetOutsideBounds", PyvtkImplicitPlaneRepresentation_SetOutsideBounds, METH_VARARGS,
   "V.SetOutsideBounds(int)\nC++: virtual void SetOutsideBounds(vtkTypeBool _arg)\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {"GetOutsideBounds", PyvtkImplicitPlaneRepresentation_GetOutsideBounds, METH_VARARGS,
   "V.GetOutsideBounds() -> int\nC++: virtual vtkTypeBool GetOutsideBounds()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {"OutsideBoundsOn", PyvtkImplicitPlaneRepresentation_OutsideBoundsOn, METH_VARARGS,
   "V.OutsideBoundsOn()\nC++: virtual void OutsideBoundsOn()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {"OutsideBoundsOff", PyvtkImplicitPlaneRepresentation_OutsideBoundsOff, METH_VARARGS,
   "V.OutsideBoundsOff()\nC++: virtual void OutsideBoundsOff()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {"SetWidgetBounds", PyvtkImplicitPlaneRepresentation_SetWidgetBounds, METH_VARARGS,
   "V.SetWidgetBounds(float, float, float, float, float, float)\nC++: void SetWidgetBounds(double, double, double, double, double,\n    double)\nV.SetWidgetBounds((float, float, float, float, float, float))\nC++: void SetWidgetBounds(double a[6])\n\n"},
  {"GetWidgetBounds", PyvtkImplicitPlaneRepresentation_GetWidgetBounds, METH_VARARGS,
   "V.GetWidgetBounds() -> (float, float, float, float, float, float)\nC++: double *GetWidgetBounds()\n\n"},
  {"SetConstrainToWidgetBounds", PyvtkImplicitPlaneRepresentation_SetConstrainToWidgetBounds, METH_VARARGS,
   "V.SetConstrainToWidgetBounds(int)\nC++: virtual void SetConstrainToWidgetBounds(vtkTypeBool _arg)\n\nTurn on/off whether the plane should be constrained to the widget\nbounds. If on, the origin will not be allowed to move outside the\nset widget bounds. This is the default behaviour. If off, the\norigin can be freely moved and the widget outline will change\naccordingly.\n"},
  {"GetConstrainToWidgetBounds", PyvtkImplicitPlaneRepresentation_GetConstrainToWidgetBounds, METH_VARARGS,
   "V.GetConstrainToWidgetBounds() -> int\nC++: virtual vtkTypeBool GetConstrainToWidgetBounds()\n\nTurn on/off whether the plane should be constrained to the widget\nbounds. If on, the origin will not be allowed to move outside the\nset widget bounds. This is the default behaviour. If off, the\norigin can be freely moved and the widget outline will change\naccordingly.\n"},
  {"ConstrainToWidgetBoundsOn", PyvtkImplicitPlaneRepresentation_ConstrainToWidgetBoundsOn, METH_VARARGS,
   "V.ConstrainToWidgetBoundsOn()\nC++: virtual void ConstrainToWidgetBoundsOn()\n\nTurn on/off whether the plane should be constrained to the widget\nbounds. If on, the origin will not be allowed to move outside the\nset widget bounds. This is the default behaviour. If off, the\norigin can be freely moved and the widget outline will change\naccordingly.\n"},
  {"ConstrainToWidgetBoundsOff", PyvtkImplicitPlaneRepresentation_ConstrainToWidgetBoundsOff, METH_VARARGS,
   "V.ConstrainToWidgetBoundsOff()\nC++: virtual void ConstrainToWidgetBoundsOff()\n\nTurn on/off whether the plane should be constrained to the widget\nbounds. If on, the origin will not be allowed to move outside the\nset widget bounds. This is the default behaviour. If off, the\norigin can be freely moved and the widget outline will change\naccordingly.\n"},
  {"SetScaleEnabled", PyvtkImplicitPlaneRepresentation_SetScaleEnabled, METH_VARARGS,
   "V.SetScaleEnabled(int)\nC++: virtual void SetScaleEnabled(vtkTypeBool _arg)\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"GetScaleEnabled", PyvtkImplicitPlaneRepresentation_GetScaleEnabled, METH_VARARGS,
   "V.GetScaleEnabled() -> int\nC++: virtual vtkTypeBool GetScaleEnabled()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"ScaleEnabledOn", PyvtkImplicitPlaneRepresentation_ScaleEnabledOn, METH_VARARGS,
   "V.ScaleEnabledOn()\nC++: virtual void ScaleEnabledOn()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"ScaleEnabledOff", PyvtkImplicitPlaneRepresentation_ScaleEnabledOff, METH_VARARGS,
   "V.ScaleEnabledOff()\nC++: virtual void ScaleEnabledOff()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"GetPolyData", PyvtkImplicitPlaneRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon that is clipped by the bounding box.\n"},
  {"GetPolyDataAlgorithm", PyvtkImplicitPlaneRepresentation_GetPolyDataAlgorithm, METH_VARARGS,
   "V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData (which represents the plane).\n"},
  {"GetPlane", PyvtkImplicitPlaneRepresentation_GetPlane, METH_VARARGS,
   "V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the implicit function for the plane by copying the origin and\nnormal of the cut plane into the provided vtkPlane. The user must\nprovide the instance of the class vtkPlane. Note that vtkPlane is\na subclass of vtkImplicitFunction, meaning that it can be used by\na variety of filters to perform clipping, cutting, and selection\nof data.\n"},
  {"SetPlane", PyvtkImplicitPlaneRepresentation_SetPlane, METH_VARARGS,
   "V.SetPlane(vtkPlane)\nC++: void SetPlane(vtkPlane *plane)\n\nAlternative way to define the cutting plane. The normal and\norigin of the plane provided is copied into the internal instance\nof the class cutting vtkPlane.\n"},
  {"UpdatePlacement", PyvtkImplicitPlaneRepresentation_UpdatePlacement, METH_VARARGS,
   "V.UpdatePlacement()\nC++: void UpdatePlacement(void)\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {"GetNormalProperty", PyvtkImplicitPlaneRepresentation_GetNormalProperty, METH_VARARGS,
   "V.GetNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetSelectedNormalProperty", PyvtkImplicitPlaneRepresentation_GetSelectedNormalProperty, METH_VARARGS,
   "V.GetSelectedNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetPlaneProperty", PyvtkImplicitPlaneRepresentation_GetPlaneProperty, METH_VARARGS,
   "V.GetPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedPlaneProperty", PyvtkImplicitPlaneRepresentation_GetSelectedPlaneProperty, METH_VARARGS,
   "V.GetSelectedPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetOutlineProperty", PyvtkImplicitPlaneRepresentation_GetOutlineProperty, METH_VARARGS,
   "V.GetOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetSelectedOutlineProperty", PyvtkImplicitPlaneRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "V.GetSelectedOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetEdgesProperty", PyvtkImplicitPlaneRepresentation_GetEdgesProperty, METH_VARARGS,
   "V.GetEdgesProperty() -> vtkProperty\nC++: virtual vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {"SetEdgeColor", PyvtkImplicitPlaneRepresentation_SetEdgeColor, METH_VARARGS,
   "V.SetEdgeColor(vtkLookupTable)\nC++: void SetEdgeColor(vtkLookupTable *)\nV.SetEdgeColor(float, float, float)\nC++: void SetEdgeColor(double, double, double)\nV.SetEdgeColor([float, float, float])\nC++: void SetEdgeColor(double x[3])\n\nSet color to the edge\n"},
  {"SetBumpDistance", PyvtkImplicitPlaneRepresentation_SetBumpDistance, METH_VARARGS,
   "V.SetBumpDistance(float)\nC++: virtual void SetBumpDistance(double _arg)\n\nSpecify a translation distance used by the BumpPlane() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"GetBumpDistanceMinValue", PyvtkImplicitPlaneRepresentation_GetBumpDistanceMinValue, METH_VARARGS,
   "V.GetBumpDistanceMinValue() -> float\nC++: virtual double GetBumpDistanceMinValue()\n\nSpecify a translation distance used by the BumpPlane() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"GetBumpDistanceMaxValue", PyvtkImplicitPlaneRepresentation_GetBumpDistanceMaxValue, METH_VARARGS,
   "V.GetBumpDistanceMaxValue() -> float\nC++: virtual double GetBumpDistanceMaxValue()\n\nSpecify a translation distance used by the BumpPlane() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"GetBumpDistance", PyvtkImplicitPlaneRepresentation_GetBumpDistance, METH_VARARGS,
   "V.GetBumpDistance() -> float\nC++: virtual double GetBumpDistance()\n\nSpecify a translation distance used by the BumpPlane() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"BumpPlane", PyvtkImplicitPlaneRepresentation_BumpPlane, METH_VARARGS,
   "V.BumpPlane(int, float)\nC++: void BumpPlane(int dir, double factor)\n\nTranslate the plane in the direction of the normal by the\nspecified BumpDistance.  The dir parameter controls which\ndirection the pushing occurs, either in the same direction as the\nnormal, or when negative, in the opposite direction. The factor\ncontrols whether what percentage of the bump is used.\n"},
  {"PushPlane", PyvtkImplicitPlaneRepresentation_PushPlane, METH_VARARGS,
   "V.PushPlane(float)\nC++: void PushPlane(double distance)\n\nPush the plane the distance specified along the normal. Positive\nvalues are in the direction of the normal; negative values are in\nthe opposite direction of the normal. The distance value is\nexpressed in world coordinates.\n"},
  {"ComputeInteractionState", PyvtkImplicitPlaneRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"PlaceWidget", PyvtkImplicitPlaneRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"BuildRepresentation", PyvtkImplicitPlaneRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"StartWidgetInteraction", PyvtkImplicitPlaneRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"WidgetInteraction", PyvtkImplicitPlaneRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"EndWidgetInteraction", PyvtkImplicitPlaneRepresentation_EndWidgetInteraction, METH_VARARGS,
   "V.EndWidgetInteraction([float, float])\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"StartComplexInteraction", PyvtkImplicitPlaneRepresentation_StartComplexInteraction, METH_VARARGS,
   "V.StartComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"ComplexInteraction", PyvtkImplicitPlaneRepresentation_ComplexInteraction, METH_VARARGS,
   "V.ComplexInteraction(vtkRenderWindowInteractor, vtkAbstractWidget,\n     int, void)\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"ComputeComplexInteractionState", PyvtkImplicitPlaneRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "V.ComputeComplexInteractionState(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void, int) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"EndComplexInteraction", PyvtkImplicitPlaneRepresentation_EndComplexInteraction, METH_VARARGS,
   "V.EndComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void EndComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nMethods to interface with the vtkImplicitPlaneWidget2.\n"},
  {"GetBounds", PyvtkImplicitPlaneRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkImplicitPlaneRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nMethods supporting the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkImplicitPlaneRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkImplicitPlaneRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting the rendering process.\n"},
  {"SetInteractionState", PyvtkImplicitPlaneRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkImplicitPlaneRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "V.GetInteractionStateMinValue() -> int\nC++: virtual int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMaxValue", PyvtkImplicitPlaneRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "V.GetInteractionStateMaxValue() -> int\nC++: virtual int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"SetRepresentationState", PyvtkImplicitPlaneRepresentation_SetRepresentationState, METH_VARARGS,
   "V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkImplicitPlaneRepresentation_GetRepresentationState, METH_VARARGS,
   "V.GetRepresentationState() -> int\nC++: virtual int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetUnderlyingPlane", PyvtkImplicitPlaneRepresentation_GetUnderlyingPlane, METH_VARARGS,
   "V.GetUnderlyingPlane() -> vtkPlane\nC++: vtkPlane *GetUnderlyingPlane()\n\n"},
  {"SetCropPlaneToBoundingBox", PyvtkImplicitPlaneRepresentation_SetCropPlaneToBoundingBox, METH_VARARGS,
   "V.SetCropPlaneToBoundingBox(bool)\nC++: virtual void SetCropPlaneToBoundingBox(bool)\n\nControl if the plane should be drawn cropped by the bounding box\nor without cropping. Defaults to on.\n"},
  {"GetCropPlaneToBoundingBox", PyvtkImplicitPlaneRepresentation_GetCropPlaneToBoundingBox, METH_VARARGS,
   "V.GetCropPlaneToBoundingBox() -> bool\nC++: virtual bool GetCropPlaneToBoundingBox()\n\nControl if the plane should be drawn cropped by the bounding box\nor without cropping. Defaults to on.\n"},
  {"CropPlaneToBoundingBoxOn", PyvtkImplicitPlaneRepresentation_CropPlaneToBoundingBoxOn, METH_VARARGS,
   "V.CropPlaneToBoundingBoxOn()\nC++: virtual void CropPlaneToBoundingBoxOn()\n\nControl if the plane should be drawn cropped by the bounding box\nor without cropping. Defaults to on.\n"},
  {"CropPlaneToBoundingBoxOff", PyvtkImplicitPlaneRepresentation_CropPlaneToBoundingBoxOff, METH_VARARGS,
   "V.CropPlaneToBoundingBoxOff()\nC++: virtual void CropPlaneToBoundingBoxOff()\n\nControl if the plane should be drawn cropped by the bounding box\nor without cropping. Defaults to on.\n"},
  {"GetSnapToAxes", PyvtkImplicitPlaneRepresentation_GetSnapToAxes, METH_VARARGS,
   "V.GetSnapToAxes() -> bool\nC++: virtual bool GetSnapToAxes()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"SetSnapToAxes", PyvtkImplicitPlaneRepresentation_SetSnapToAxes, METH_VARARGS,
   "V.SetSnapToAxes(bool)\nC++: virtual void SetSnapToAxes(bool _arg)\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitPlaneRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImplicitPlaneRepresentation", // tp_name
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
  PyvtkImplicitPlaneRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitPlaneRepresentation_StaticNew()
{
  return vtkImplicitPlaneRepresentation::New();
}

PyObject *PyvtkImplicitPlaneRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitPlaneRepresentation_Type, PyvtkImplicitPlaneRepresentation_Methods,
    "vtkImplicitPlaneRepresentation",
 &PyvtkImplicitPlaneRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitPlaneRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitPlaneRepresentation__InteractionState_Type);
  PyvtkImplicitPlaneRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkImplicitPlaneRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkImplicitPlaneRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkImplicitPlaneRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Outside", vtkImplicitPlaneRepresentation::Outside },
        { "Moving", vtkImplicitPlaneRepresentation::Moving },
        { "MovingOutline", vtkImplicitPlaneRepresentation::MovingOutline },
        { "MovingOrigin", vtkImplicitPlaneRepresentation::MovingOrigin },
        { "Rotating", vtkImplicitPlaneRepresentation::Rotating },
        { "Pushing", vtkImplicitPlaneRepresentation::Pushing },
        { "Scaling", vtkImplicitPlaneRepresentation::Scaling },
      };

    o = PyvtkImplicitPlaneRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitPlaneRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitPlaneRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitPlaneRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

