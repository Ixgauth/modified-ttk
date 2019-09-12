// python wrapper for vtkLegendScaleActor
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
#include "vtkLegendScaleActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLegendScaleActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLegendScaleActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif

static const char *PyvtkLegendScaleActor_Doc =
  "vtkLegendScaleActor - annotate the render window with scale and\ndistance information\n\n"
  "Superclass: vtkProp\n\n"
  "This class is used to annotate the render window. Its basic goal is\n"
  "to provide an indication of the scale of the scene. Four axes\n"
  "surrounding the render window indicate (in a variety of ways) the\n"
  "scale of what the camera is viewing. An option also exists for\n"
  "displaying a scale legend.\n\n"
  "The axes can be programmed either to display distance scales or x-y\n"
  "coordinate values. By default, the scales display a distance.\n"
  "However, if you know that the view is down the z-axis, the scales can\n"
  "be programmed to display x-y coordinate values.\n\n"
  "@warning\n"
  "Please be aware that the axes and scale values are subject to\n"
  "perspective effects. The distances are computed in the focal plane of\n"
  "the camera. When there are large view angles (i.e., perspective\n"
  "projection), the computed distances may provide users the wrong sense\n"
  "of scale. These effects are not present when parallel projection is\n"
  "enabled.\n\n";

static PyTypeObject PyvtkLegendScaleActor_AttributeLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkLegendScaleActor.AttributeLocation", // tp_name
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

PyObject *PyvtkLegendScaleActor_AttributeLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLegendScaleActor_AttributeLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLegendScaleActor_AttributeLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLegendScaleActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLegendScaleActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLegendScaleActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLegendScaleActor *tempr = vtkLegendScaleActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendScaleActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLegendScaleActor::NewInstance());

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
PyvtkLegendScaleActor_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMode(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelModeMinValue() :
      op->vtkLegendScaleActor::GetLabelModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelModeMaxValue() :
      op->vtkLegendScaleActor::GetLabelModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkLegendScaleActor::GetLabelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToDistance();
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelModeToDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToXYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToXYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToXYCoordinates();
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelModeToXYCoordinates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetRightAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightAxisVisibility() :
      op->vtkLegendScaleActor::GetRightAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::RightAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::RightAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetTopAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopAxisVisibility() :
      op->vtkLegendScaleActor::GetTopAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::TopAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::TopAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLeftAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftAxisVisibility() :
      op->vtkLegendScaleActor::GetLeftAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::LeftAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::LeftAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetBottomAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomAxisVisibility() :
      op->vtkLegendScaleActor::GetBottomAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BottomAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::BottomAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BottomAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::BottomAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkLegendScaleActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAxesOn();
    }
    else
    {
      op->vtkLegendScaleActor::AllAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAxesOff();
    }
    else
    {
      op->vtkLegendScaleActor::AllAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAnnotationsOn();
    }
    else
    {
      op->vtkLegendScaleActor::AllAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAnnotationsOff();
    }
    else
    {
      op->vtkLegendScaleActor::AllAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetRightBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetRightBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetRightBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffset() :
      op->vtkLegendScaleActor::GetRightBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetTopBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetTopBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetTopBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffset() :
      op->vtkLegendScaleActor::GetTopBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLeftBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetLeftBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetLeftBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffset() :
      op->vtkLegendScaleActor::GetLeftBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetBottomBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetBottomBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetBottomBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffset() :
      op->vtkLegendScaleActor::GetBottomBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffsetFactor(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetCornerOffsetFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactorMinValue() :
      op->vtkLegendScaleActor::GetCornerOffsetFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactorMaxValue() :
      op->vtkLegendScaleActor::GetCornerOffsetFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactor() :
      op->vtkLegendScaleActor::GetCornerOffsetFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendTitleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendTitleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLegendTitleProperty() :
      op->vtkLegendScaleActor::GetLegendTitleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLegendLabelProperty() :
      op->vtkLegendScaleActor::GetLegendLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetRightAxis() :
      op->vtkLegendScaleActor::GetRightAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetTopAxis() :
      op->vtkLegendScaleActor::GetTopAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetLeftAxis() :
      op->vtkLegendScaleActor::GetLeftAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetBottomAxis() :
      op->vtkLegendScaleActor::GetBottomAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::BuildRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

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
      op->vtkLegendScaleActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLegendScaleActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLegendScaleActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLegendScaleActor_Methods[] = {
  {"IsTypeOf", PyvtkLegendScaleActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkLegendScaleActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkLegendScaleActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLegendScaleActor\nC++: static vtkLegendScaleActor *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkLegendScaleActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLegendScaleActor\nC++: vtkLegendScaleActor *NewInstance()\n\nStandard methods for the class.\n"},
  {"SetLabelMode", PyvtkLegendScaleActor_SetLabelMode, METH_VARARGS,
   "V.SetLabelMode(int)\nC++: virtual void SetLabelMode(int _arg)\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"GetLabelModeMinValue", PyvtkLegendScaleActor_GetLabelModeMinValue, METH_VARARGS,
   "V.GetLabelModeMinValue() -> int\nC++: virtual int GetLabelModeMinValue()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"GetLabelModeMaxValue", PyvtkLegendScaleActor_GetLabelModeMaxValue, METH_VARARGS,
   "V.GetLabelModeMaxValue() -> int\nC++: virtual int GetLabelModeMaxValue()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"GetLabelMode", PyvtkLegendScaleActor_GetLabelMode, METH_VARARGS,
   "V.GetLabelMode() -> int\nC++: virtual int GetLabelMode()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"SetLabelModeToDistance", PyvtkLegendScaleActor_SetLabelModeToDistance, METH_VARARGS,
   "V.SetLabelModeToDistance()\nC++: void SetLabelModeToDistance()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"SetLabelModeToXYCoordinates", PyvtkLegendScaleActor_SetLabelModeToXYCoordinates, METH_VARARGS,
   "V.SetLabelModeToXYCoordinates()\nC++: void SetLabelModeToXYCoordinates()\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is down\nthe z-axis; the axes can be labeled with x-y coordinate values.\n"},
  {"SetRightAxisVisibility", PyvtkLegendScaleActor_SetRightAxisVisibility, METH_VARARGS,
   "V.SetRightAxisVisibility(int)\nC++: virtual void SetRightAxisVisibility(vtkTypeBool _arg)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"GetRightAxisVisibility", PyvtkLegendScaleActor_GetRightAxisVisibility, METH_VARARGS,
   "V.GetRightAxisVisibility() -> int\nC++: virtual vtkTypeBool GetRightAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"RightAxisVisibilityOn", PyvtkLegendScaleActor_RightAxisVisibilityOn, METH_VARARGS,
   "V.RightAxisVisibilityOn()\nC++: virtual void RightAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"RightAxisVisibilityOff", PyvtkLegendScaleActor_RightAxisVisibilityOff, METH_VARARGS,
   "V.RightAxisVisibilityOff()\nC++: virtual void RightAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"SetTopAxisVisibility", PyvtkLegendScaleActor_SetTopAxisVisibility, METH_VARARGS,
   "V.SetTopAxisVisibility(int)\nC++: virtual void SetTopAxisVisibility(vtkTypeBool _arg)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"GetTopAxisVisibility", PyvtkLegendScaleActor_GetTopAxisVisibility, METH_VARARGS,
   "V.GetTopAxisVisibility() -> int\nC++: virtual vtkTypeBool GetTopAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"TopAxisVisibilityOn", PyvtkLegendScaleActor_TopAxisVisibilityOn, METH_VARARGS,
   "V.TopAxisVisibilityOn()\nC++: virtual void TopAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"TopAxisVisibilityOff", PyvtkLegendScaleActor_TopAxisVisibilityOff, METH_VARARGS,
   "V.TopAxisVisibilityOff()\nC++: virtual void TopAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"SetLeftAxisVisibility", PyvtkLegendScaleActor_SetLeftAxisVisibility, METH_VARARGS,
   "V.SetLeftAxisVisibility(int)\nC++: virtual void SetLeftAxisVisibility(vtkTypeBool _arg)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"GetLeftAxisVisibility", PyvtkLegendScaleActor_GetLeftAxisVisibility, METH_VARARGS,
   "V.GetLeftAxisVisibility() -> int\nC++: virtual vtkTypeBool GetLeftAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"LeftAxisVisibilityOn", PyvtkLegendScaleActor_LeftAxisVisibilityOn, METH_VARARGS,
   "V.LeftAxisVisibilityOn()\nC++: virtual void LeftAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"LeftAxisVisibilityOff", PyvtkLegendScaleActor_LeftAxisVisibilityOff, METH_VARARGS,
   "V.LeftAxisVisibilityOff()\nC++: virtual void LeftAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"SetBottomAxisVisibility", PyvtkLegendScaleActor_SetBottomAxisVisibility, METH_VARARGS,
   "V.SetBottomAxisVisibility(int)\nC++: virtual void SetBottomAxisVisibility(vtkTypeBool _arg)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"GetBottomAxisVisibility", PyvtkLegendScaleActor_GetBottomAxisVisibility, METH_VARARGS,
   "V.GetBottomAxisVisibility() -> int\nC++: virtual vtkTypeBool GetBottomAxisVisibility()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"BottomAxisVisibilityOn", PyvtkLegendScaleActor_BottomAxisVisibilityOn, METH_VARARGS,
   "V.BottomAxisVisibilityOn()\nC++: virtual void BottomAxisVisibilityOn()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"BottomAxisVisibilityOff", PyvtkLegendScaleActor_BottomAxisVisibilityOff, METH_VARARGS,
   "V.BottomAxisVisibilityOff()\nC++: virtual void BottomAxisVisibilityOff()\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"SetLegendVisibility", PyvtkLegendScaleActor_SetLegendVisibility, METH_VARARGS,
   "V.SetLegendVisibility(int)\nC++: virtual void SetLegendVisibility(vtkTypeBool _arg)\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {"GetLegendVisibility", PyvtkLegendScaleActor_GetLegendVisibility, METH_VARARGS,
   "V.GetLegendVisibility() -> int\nC++: virtual vtkTypeBool GetLegendVisibility()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {"LegendVisibilityOn", PyvtkLegendScaleActor_LegendVisibilityOn, METH_VARARGS,
   "V.LegendVisibilityOn()\nC++: virtual void LegendVisibilityOn()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {"LegendVisibilityOff", PyvtkLegendScaleActor_LegendVisibilityOff, METH_VARARGS,
   "V.LegendVisibilityOff()\nC++: virtual void LegendVisibilityOff()\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {"AllAxesOn", PyvtkLegendScaleActor_AllAxesOn, METH_VARARGS,
   "V.AllAxesOn()\nC++: void AllAxesOn()\n\nConvenience method that turns all the axes either on or off.\n"},
  {"AllAxesOff", PyvtkLegendScaleActor_AllAxesOff, METH_VARARGS,
   "V.AllAxesOff()\nC++: void AllAxesOff()\n\nConvenience method that turns all the axes either on or off.\n"},
  {"AllAnnotationsOn", PyvtkLegendScaleActor_AllAnnotationsOn, METH_VARARGS,
   "V.AllAnnotationsOn()\nC++: void AllAnnotationsOn()\n\nConvenience method that turns all the axes and the legend scale.\n"},
  {"AllAnnotationsOff", PyvtkLegendScaleActor_AllAnnotationsOff, METH_VARARGS,
   "V.AllAnnotationsOff()\nC++: void AllAnnotationsOff()\n\nConvenience method that turns all the axes and the legend scale.\n"},
  {"SetRightBorderOffset", PyvtkLegendScaleActor_SetRightBorderOffset, METH_VARARGS,
   "V.SetRightBorderOffset(int)\nC++: virtual void SetRightBorderOffset(int _arg)\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetRightBorderOffsetMinValue", PyvtkLegendScaleActor_GetRightBorderOffsetMinValue, METH_VARARGS,
   "V.GetRightBorderOffsetMinValue() -> int\nC++: virtual int GetRightBorderOffsetMinValue()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetRightBorderOffsetMaxValue", PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue, METH_VARARGS,
   "V.GetRightBorderOffsetMaxValue() -> int\nC++: virtual int GetRightBorderOffsetMaxValue()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetRightBorderOffset", PyvtkLegendScaleActor_GetRightBorderOffset, METH_VARARGS,
   "V.GetRightBorderOffset() -> int\nC++: virtual int GetRightBorderOffset()\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"SetTopBorderOffset", PyvtkLegendScaleActor_SetTopBorderOffset, METH_VARARGS,
   "V.SetTopBorderOffset(int)\nC++: virtual void SetTopBorderOffset(int _arg)\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {"GetTopBorderOffsetMinValue", PyvtkLegendScaleActor_GetTopBorderOffsetMinValue, METH_VARARGS,
   "V.GetTopBorderOffsetMinValue() -> int\nC++: virtual int GetTopBorderOffsetMinValue()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {"GetTopBorderOffsetMaxValue", PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue, METH_VARARGS,
   "V.GetTopBorderOffsetMaxValue() -> int\nC++: virtual int GetTopBorderOffsetMaxValue()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {"GetTopBorderOffset", PyvtkLegendScaleActor_GetTopBorderOffset, METH_VARARGS,
   "V.GetTopBorderOffset() -> int\nC++: virtual int GetTopBorderOffset()\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {"SetLeftBorderOffset", PyvtkLegendScaleActor_SetLeftBorderOffset, METH_VARARGS,
   "V.SetLeftBorderOffset(int)\nC++: virtual void SetLeftBorderOffset(int _arg)\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetLeftBorderOffsetMinValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue, METH_VARARGS,
   "V.GetLeftBorderOffsetMinValue() -> int\nC++: virtual int GetLeftBorderOffsetMinValue()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetLeftBorderOffsetMaxValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue, METH_VARARGS,
   "V.GetLeftBorderOffsetMaxValue() -> int\nC++: virtual int GetLeftBorderOffsetMaxValue()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetLeftBorderOffset", PyvtkLegendScaleActor_GetLeftBorderOffset, METH_VARARGS,
   "V.GetLeftBorderOffset() -> int\nC++: virtual int GetLeftBorderOffset()\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"SetBottomBorderOffset", PyvtkLegendScaleActor_SetBottomBorderOffset, METH_VARARGS,
   "V.SetBottomBorderOffset(int)\nC++: virtual void SetBottomBorderOffset(int _arg)\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {"GetBottomBorderOffsetMinValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue, METH_VARARGS,
   "V.GetBottomBorderOffsetMinValue() -> int\nC++: virtual int GetBottomBorderOffsetMinValue()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {"GetBottomBorderOffsetMaxValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue, METH_VARARGS,
   "V.GetBottomBorderOffsetMaxValue() -> int\nC++: virtual int GetBottomBorderOffsetMaxValue()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {"GetBottomBorderOffset", PyvtkLegendScaleActor_GetBottomBorderOffset, METH_VARARGS,
   "V.GetBottomBorderOffset() -> int\nC++: virtual int GetBottomBorderOffset()\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {"SetCornerOffsetFactor", PyvtkLegendScaleActor_SetCornerOffsetFactor, METH_VARARGS,
   "V.SetCornerOffsetFactor(float)\nC++: virtual void SetCornerOffsetFactor(double _arg)\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {"GetCornerOffsetFactorMinValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue, METH_VARARGS,
   "V.GetCornerOffsetFactorMinValue() -> float\nC++: virtual double GetCornerOffsetFactorMinValue()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {"GetCornerOffsetFactorMaxValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue, METH_VARARGS,
   "V.GetCornerOffsetFactorMaxValue() -> float\nC++: virtual double GetCornerOffsetFactorMaxValue()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {"GetCornerOffsetFactor", PyvtkLegendScaleActor_GetCornerOffsetFactor, METH_VARARGS,
   "V.GetCornerOffsetFactor() -> float\nC++: virtual double GetCornerOffsetFactor()\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {"GetLegendTitleProperty", PyvtkLegendScaleActor_GetLegendTitleProperty, METH_VARARGS,
   "V.GetLegendTitleProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLegendTitleProperty()\n\nSet/Get the labels text properties for the legend title and\nlabels.\n"},
  {"GetLegendLabelProperty", PyvtkLegendScaleActor_GetLegendLabelProperty, METH_VARARGS,
   "V.GetLegendLabelProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLegendLabelProperty()\n\nSet/Get the labels text properties for the legend title and\nlabels.\n"},
  {"GetRightAxis", PyvtkLegendScaleActor_GetRightAxis, METH_VARARGS,
   "V.GetRightAxis() -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetRightAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {"GetTopAxis", PyvtkLegendScaleActor_GetTopAxis, METH_VARARGS,
   "V.GetTopAxis() -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetTopAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {"GetLeftAxis", PyvtkLegendScaleActor_GetLeftAxis, METH_VARARGS,
   "V.GetLeftAxis() -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetLeftAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {"GetBottomAxis", PyvtkLegendScaleActor_GetBottomAxis, METH_VARARGS,
   "V.GetBottomAxis() -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetBottomAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {"BuildRepresentation", PyvtkLegendScaleActor_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation(vtkViewport)\nC++: virtual void BuildRepresentation(vtkViewport *viewport)\n\nStandard methods supporting the rendering process.\n"},
  {"GetActors2D", PyvtkLegendScaleActor_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nStandard methods supporting the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkLegendScaleActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nStandard methods supporting the rendering process.\n"},
  {"RenderOverlay", PyvtkLegendScaleActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nStandard methods supporting the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkLegendScaleActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nStandard methods supporting the rendering process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLegendScaleActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkLegendScaleActor", // tp_name
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
  PyvtkLegendScaleActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLegendScaleActor_StaticNew()
{
  return vtkLegendScaleActor::New();
}

PyObject *PyvtkLegendScaleActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLegendScaleActor_Type, PyvtkLegendScaleActor_Methods,
    "vtkLegendScaleActor",
 &PyvtkLegendScaleActor_StaticNew);

  PyTypeObject *pytype = &PyvtkLegendScaleActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLegendScaleActor_AttributeLocation_Type);
  PyvtkLegendScaleActor_AttributeLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLegendScaleActor_AttributeLocation_Type);

  o = (PyObject *)&PyvtkLegendScaleActor_AttributeLocation_Type;
  if (PyDict_SetItemString(d, "AttributeLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkLegendScaleActor::AttributeLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DISTANCE", vtkLegendScaleActor::DISTANCE },
        { "XY_COORDINATES", vtkLegendScaleActor::XY_COORDINATES },
      };

    o = PyvtkLegendScaleActor_AttributeLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLegendScaleActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLegendScaleActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLegendScaleActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

