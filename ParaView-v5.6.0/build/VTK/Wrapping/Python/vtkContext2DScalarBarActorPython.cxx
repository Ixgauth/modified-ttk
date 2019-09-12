// python wrapper for vtkContext2DScalarBarActor
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
#include "vtkRect.h"
#include "vtkContext2DScalarBarActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContext2DScalarBarActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContext2DScalarBarActor_ClassNew(); }

#ifndef DECLARED_PyvtkScalarBarActor_ClassNew
extern "C" { PyObject *PyvtkScalarBarActor_ClassNew(); }
#define DECLARED_PyvtkScalarBarActor_ClassNew
#endif

static const char *PyvtkContext2DScalarBarActor_Doc =
  "vtkContext2DScalarBarActor - Custom scalar bar actor for ParaView\nthat uses the Charts API.\n\n"
  "Superclass: vtkScalarBarActor\n\n"
  "Description:\n\n"
  "vtkContext2DScalarBarActor is a custom scalar bar actor that uses the\n"
  "Charts API for drawing calls. As the scalar bar actor is inherently\n"
  "2D, the Charts API offers a comparatively simpler way of implementing\n"
  "features in the scalar bar actor than using vtkPolyData primitives.\n\n";

static PyTypeObject PyvtkContext2DScalarBarActor_OutOfRangeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkContext2DScalarBarActor.OutOfRangeType", // tp_name
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

PyObject *PyvtkContext2DScalarBarActor_OutOfRangeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkContext2DScalarBarActor_OutOfRangeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkContext2DScalarBarActor_OutOfRangeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkContext2DScalarBarActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContext2DScalarBarActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContext2DScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContext2DScalarBarActor *tempr = vtkContext2DScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContext2DScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContext2DScalarBarActor::NewInstance());

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
PyvtkContext2DScalarBarActor_GetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustification() :
      op->vtkContext2DScalarBarActor::GetTitleJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleJustification(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetTitleJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetTitleJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMinValue() :
      op->vtkContext2DScalarBarActor::GetTitleJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetTitleJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMaxValue() :
      op->vtkContext2DScalarBarActor::GetTitleJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetForceHorizontalTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceHorizontalTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceHorizontalTitle(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetForceHorizontalTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetForceHorizontalTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceHorizontalTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceHorizontalTitle() :
      op->vtkContext2DScalarBarActor::GetForceHorizontalTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_ForceHorizontalTitleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceHorizontalTitleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceHorizontalTitleOn();
    }
    else
    {
      op->vtkContext2DScalarBarActor::ForceHorizontalTitleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_ForceHorizontalTitleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceHorizontalTitleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceHorizontalTitleOff();
    }
    else
    {
      op->vtkContext2DScalarBarActor::ForceHorizontalTitleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetScalarBarThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarThickness(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetScalarBarThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarBarThicknessMinValue() :
      op->vtkContext2DScalarBarActor::GetScalarBarThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarBarThicknessMaxValue() :
      op->vtkContext2DScalarBarActor::GetScalarBarThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarBarThickness() :
      op->vtkContext2DScalarBarActor::GetScalarBarThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetScalarBarLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarLength(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetScalarBarLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarBarLengthMinValue() :
      op->vtkContext2DScalarBarActor::GetScalarBarLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarBarLengthMaxValue() :
      op->vtkContext2DScalarBarActor::GetScalarBarLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetScalarBarLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarBarLength() :
      op->vtkContext2DScalarBarActor::GetScalarBarLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetReverseLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseLegend(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetReverseLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetReverseLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReverseLegend() :
      op->vtkContext2DScalarBarActor::GetReverseLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_ReverseLegendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseLegendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseLegendOn();
    }
    else
    {
      op->vtkContext2DScalarBarActor::ReverseLegendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_ReverseLegendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseLegendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseLegendOff();
    }
    else
    {
      op->vtkContext2DScalarBarActor::ReverseLegendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLabelFormat() :
      op->vtkContext2DScalarBarActor::GetAutomaticLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticLabelFormat(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetAutomaticLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AutomaticLabelFormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLabelFormatOn();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AutomaticLabelFormatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AutomaticLabelFormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLabelFormatOff();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AutomaticLabelFormatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddRangeLabels(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetAddRangeLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeLabels() :
      op->vtkContext2DScalarBarActor::GetAddRangeLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticAnnotations(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetAutomaticAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticAnnotations() :
      op->vtkContext2DScalarBarActor::GetAutomaticAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AutomaticAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticAnnotationsOn();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AutomaticAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AutomaticAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticAnnotationsOff();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AutomaticAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeAnnotations() :
      op->vtkContext2DScalarBarActor::GetAddRangeAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddRangeAnnotations(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetAddRangeAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AddRangeAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeAnnotationsOn();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AddRangeAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_AddRangeAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeAnnotationsOff();
    }
    else
    {
      op->vtkContext2DScalarBarActor::AddRangeAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawTickMarks(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetDrawTickMarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawTickMarks() :
      op->vtkContext2DScalarBarActor::GetDrawTickMarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeLabelFormat(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetRangeLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRangeLabelFormat() :
      op->vtkContext2DScalarBarActor::GetRangeLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomLabels(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomLabels() :
      op->vtkContext2DScalarBarActor::GetUseCustomLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetNumberOfCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCustomLabels(temp0);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetNumberOfCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetNumberOfCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCustomLabels() :
      op->vtkContext2DScalarBarActor::GetNumberOfCustomLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_SetCustomLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomLabel(temp0, temp1);
    }
    else
    {
      op->vtkContext2DScalarBarActor::SetCustomLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkContext2DScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkContext2DScalarBarActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

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
      op->vtkContext2DScalarBarActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContext2DScalarBarActor::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect() :
      op->vtkContext2DScalarBarActor::GetBoundingRect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkContext2DScalarBarActor_GetEstimatedNumberOfAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedNumberOfAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2DScalarBarActor *op = static_cast<vtkContext2DScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEstimatedNumberOfAnnotations() :
      op->vtkContext2DScalarBarActor::GetEstimatedNumberOfAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContext2DScalarBarActor_Methods[] = {
  {"IsTypeOf", PyvtkContext2DScalarBarActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContext2DScalarBarActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContext2DScalarBarActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContext2DScalarBarActor\nC++: static vtkContext2DScalarBarActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContext2DScalarBarActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContext2DScalarBarActor\nC++: vtkContext2DScalarBarActor *NewInstance()\n\n"},
  {"GetTitleJustification", PyvtkContext2DScalarBarActor_GetTitleJustification, METH_VARARGS,
   "V.GetTitleJustification() -> int\nC++: virtual int GetTitleJustification()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"SetTitleJustification", PyvtkContext2DScalarBarActor_SetTitleJustification, METH_VARARGS,
   "V.SetTitleJustification(int)\nC++: virtual void SetTitleJustification(int _arg)\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"GetTitleJustificationMinValue", PyvtkContext2DScalarBarActor_GetTitleJustificationMinValue, METH_VARARGS,
   "V.GetTitleJustificationMinValue() -> int\nC++: virtual int GetTitleJustificationMinValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"GetTitleJustificationMaxValue", PyvtkContext2DScalarBarActor_GetTitleJustificationMaxValue, METH_VARARGS,
   "V.GetTitleJustificationMaxValue() -> int\nC++: virtual int GetTitleJustificationMaxValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"SetForceHorizontalTitle", PyvtkContext2DScalarBarActor_SetForceHorizontalTitle, METH_VARARGS,
   "V.SetForceHorizontalTitle(bool)\nC++: virtual void SetForceHorizontalTitle(bool _arg)\n\nIf this flag is on, the title will be drawn horizontally above\nthe scalar bar. Off by default.\n"},
  {"GetForceHorizontalTitle", PyvtkContext2DScalarBarActor_GetForceHorizontalTitle, METH_VARARGS,
   "V.GetForceHorizontalTitle() -> bool\nC++: virtual bool GetForceHorizontalTitle()\n\nIf this flag is on, the title will be drawn horizontally above\nthe scalar bar. Off by default.\n"},
  {"ForceHorizontalTitleOn", PyvtkContext2DScalarBarActor_ForceHorizontalTitleOn, METH_VARARGS,
   "V.ForceHorizontalTitleOn()\nC++: virtual void ForceHorizontalTitleOn()\n\nIf this flag is on, the title will be drawn horizontally above\nthe scalar bar. Off by default.\n"},
  {"ForceHorizontalTitleOff", PyvtkContext2DScalarBarActor_ForceHorizontalTitleOff, METH_VARARGS,
   "V.ForceHorizontalTitleOff()\nC++: virtual void ForceHorizontalTitleOff()\n\nIf this flag is on, the title will be drawn horizontally above\nthe scalar bar. Off by default.\n"},
  {"SetScalarBarThickness", PyvtkContext2DScalarBarActor_SetScalarBarThickness, METH_VARARGS,
   "V.SetScalarBarThickness(int)\nC++: virtual void SetScalarBarThickness(int _arg)\n\nSet the scalar bar thickness. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar width.  When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nheight. Specified in points akin to font size.\n"},
  {"GetScalarBarThicknessMinValue", PyvtkContext2DScalarBarActor_GetScalarBarThicknessMinValue, METH_VARARGS,
   "V.GetScalarBarThicknessMinValue() -> int\nC++: virtual int GetScalarBarThicknessMinValue()\n\nSet the scalar bar thickness. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar width.  When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nheight. Specified in points akin to font size.\n"},
  {"GetScalarBarThicknessMaxValue", PyvtkContext2DScalarBarActor_GetScalarBarThicknessMaxValue, METH_VARARGS,
   "V.GetScalarBarThicknessMaxValue() -> int\nC++: virtual int GetScalarBarThicknessMaxValue()\n\nSet the scalar bar thickness. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar width.  When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nheight. Specified in points akin to font size.\n"},
  {"GetScalarBarThickness", PyvtkContext2DScalarBarActor_GetScalarBarThickness, METH_VARARGS,
   "V.GetScalarBarThickness() -> int\nC++: virtual int GetScalarBarThickness()\n\nSet the scalar bar thickness. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar width.  When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nheight. Specified in points akin to font size.\n"},
  {"SetScalarBarLength", PyvtkContext2DScalarBarActor_SetScalarBarLength, METH_VARARGS,
   "V.SetScalarBarLength(float)\nC++: virtual void SetScalarBarLength(double _arg)\n\nSet the scalar bar length. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar height. When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nwidth. Specified in normalized viewport coordinates, meaning the\nvalue is the fractional span of the viewport's width or height in\nthe range [0, 1], depending on orientation.\n"},
  {"GetScalarBarLengthMinValue", PyvtkContext2DScalarBarActor_GetScalarBarLengthMinValue, METH_VARARGS,
   "V.GetScalarBarLengthMinValue() -> float\nC++: virtual double GetScalarBarLengthMinValue()\n\nSet the scalar bar length. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar height. When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nwidth. Specified in normalized viewport coordinates, meaning the\nvalue is the fractional span of the viewport's width or height in\nthe range [0, 1], depending on orientation.\n"},
  {"GetScalarBarLengthMaxValue", PyvtkContext2DScalarBarActor_GetScalarBarLengthMaxValue, METH_VARARGS,
   "V.GetScalarBarLengthMaxValue() -> float\nC++: virtual double GetScalarBarLengthMaxValue()\n\nSet the scalar bar length. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar height. When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nwidth. Specified in normalized viewport coordinates, meaning the\nvalue is the fractional span of the viewport's width or height in\nthe range [0, 1], depending on orientation.\n"},
  {"GetScalarBarLength", PyvtkContext2DScalarBarActor_GetScalarBarLength, METH_VARARGS,
   "V.GetScalarBarLength() -> float\nC++: virtual double GetScalarBarLength()\n\nSet the scalar bar length. When the orientation is\nVTK_ORIENT_VERTICAL, this sets the scalar bar height. When the\norientation is VTK_ORIENT_HORIZONTAL, this sets the scalar bar\nwidth. Specified in normalized viewport coordinates, meaning the\nvalue is the fractional span of the viewport's width or height in\nthe range [0, 1], depending on orientation.\n"},
  {"SetReverseLegend", PyvtkContext2DScalarBarActor_SetReverseLegend, METH_VARARGS,
   "V.SetReverseLegend(bool)\nC++: virtual void SetReverseLegend(bool _arg)\n\nSet whether the scalar bar is reversed ie from high to low\ninstead of from low to high. Default is false;\n"},
  {"GetReverseLegend", PyvtkContext2DScalarBarActor_GetReverseLegend, METH_VARARGS,
   "V.GetReverseLegend() -> bool\nC++: virtual bool GetReverseLegend()\n\nSet whether the scalar bar is reversed ie from high to low\ninstead of from low to high. Default is false;\n"},
  {"ReverseLegendOn", PyvtkContext2DScalarBarActor_ReverseLegendOn, METH_VARARGS,
   "V.ReverseLegendOn()\nC++: virtual void ReverseLegendOn()\n\nSet whether the scalar bar is reversed ie from high to low\ninstead of from low to high. Default is false;\n"},
  {"ReverseLegendOff", PyvtkContext2DScalarBarActor_ReverseLegendOff, METH_VARARGS,
   "V.ReverseLegendOff()\nC++: virtual void ReverseLegendOff()\n\nSet whether the scalar bar is reversed ie from high to low\ninstead of from low to high. Default is false;\n"},
  {"GetAutomaticLabelFormat", PyvtkContext2DScalarBarActor_GetAutomaticLabelFormat, METH_VARARGS,
   "V.GetAutomaticLabelFormat() -> int\nC++: virtual int GetAutomaticLabelFormat()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"SetAutomaticLabelFormat", PyvtkContext2DScalarBarActor_SetAutomaticLabelFormat, METH_VARARGS,
   "V.SetAutomaticLabelFormat(int)\nC++: virtual void SetAutomaticLabelFormat(int _arg)\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"AutomaticLabelFormatOn", PyvtkContext2DScalarBarActor_AutomaticLabelFormatOn, METH_VARARGS,
   "V.AutomaticLabelFormatOn()\nC++: virtual void AutomaticLabelFormatOn()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"AutomaticLabelFormatOff", PyvtkContext2DScalarBarActor_AutomaticLabelFormatOff, METH_VARARGS,
   "V.AutomaticLabelFormatOff()\nC++: virtual void AutomaticLabelFormatOff()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"SetAddRangeLabels", PyvtkContext2DScalarBarActor_SetAddRangeLabels, METH_VARARGS,
   "V.SetAddRangeLabels(int)\nC++: virtual void SetAddRangeLabels(int _arg)\n\nSet/get whether to add range labels or not. These are labels that\nhave the minimum/maximum values of the scalar bar range.\n"},
  {"GetAddRangeLabels", PyvtkContext2DScalarBarActor_GetAddRangeLabels, METH_VARARGS,
   "V.GetAddRangeLabels() -> int\nC++: virtual int GetAddRangeLabels()\n\nSet/get whether to add range labels or not. These are labels that\nhave the minimum/maximum values of the scalar bar range.\n"},
  {"SetAutomaticAnnotations", PyvtkContext2DScalarBarActor_SetAutomaticAnnotations, METH_VARARGS,
   "V.SetAutomaticAnnotations(int)\nC++: virtual void SetAutomaticAnnotations(int _arg)\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"GetAutomaticAnnotations", PyvtkContext2DScalarBarActor_GetAutomaticAnnotations, METH_VARARGS,
   "V.GetAutomaticAnnotations() -> int\nC++: virtual int GetAutomaticAnnotations()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"AutomaticAnnotationsOn", PyvtkContext2DScalarBarActor_AutomaticAnnotationsOn, METH_VARARGS,
   "V.AutomaticAnnotationsOn()\nC++: virtual void AutomaticAnnotationsOn()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"AutomaticAnnotationsOff", PyvtkContext2DScalarBarActor_AutomaticAnnotationsOff, METH_VARARGS,
   "V.AutomaticAnnotationsOff()\nC++: virtual void AutomaticAnnotationsOff()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"GetAddRangeAnnotations", PyvtkContext2DScalarBarActor_GetAddRangeAnnotations, METH_VARARGS,
   "V.GetAddRangeAnnotations() -> int\nC++: virtual int GetAddRangeAnnotations()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"SetAddRangeAnnotations", PyvtkContext2DScalarBarActor_SetAddRangeAnnotations, METH_VARARGS,
   "V.SetAddRangeAnnotations(int)\nC++: virtual void SetAddRangeAnnotations(int _arg)\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"AddRangeAnnotationsOn", PyvtkContext2DScalarBarActor_AddRangeAnnotationsOn, METH_VARARGS,
   "V.AddRangeAnnotationsOn()\nC++: virtual void AddRangeAnnotationsOn()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"AddRangeAnnotationsOff", PyvtkContext2DScalarBarActor_AddRangeAnnotationsOff, METH_VARARGS,
   "V.AddRangeAnnotationsOff()\nC++: virtual void AddRangeAnnotationsOff()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"SetDrawTickMarks", PyvtkContext2DScalarBarActor_SetDrawTickMarks, METH_VARARGS,
   "V.SetDrawTickMarks(bool)\nC++: virtual void SetDrawTickMarks(bool _arg)\n\nSet/get whether tick marks should be drawn.\n"},
  {"GetDrawTickMarks", PyvtkContext2DScalarBarActor_GetDrawTickMarks, METH_VARARGS,
   "V.GetDrawTickMarks() -> bool\nC++: virtual bool GetDrawTickMarks()\n\nSet/get whether tick marks should be drawn.\n"},
  {"SetRangeLabelFormat", PyvtkContext2DScalarBarActor_SetRangeLabelFormat, METH_VARARGS,
   "V.SetRangeLabelFormat(string)\nC++: virtual void SetRangeLabelFormat(const char *_arg)\n\nPrintf format for range labels.\n"},
  {"GetRangeLabelFormat", PyvtkContext2DScalarBarActor_GetRangeLabelFormat, METH_VARARGS,
   "V.GetRangeLabelFormat() -> string\nC++: virtual char *GetRangeLabelFormat()\n\nPrintf format for range labels.\n"},
  {"SetUseCustomLabels", PyvtkContext2DScalarBarActor_SetUseCustomLabels, METH_VARARGS,
   "V.SetUseCustomLabels(bool)\nC++: void SetUseCustomLabels(bool useLabels)\n\nUse custom labels.\n"},
  {"GetUseCustomLabels", PyvtkContext2DScalarBarActor_GetUseCustomLabels, METH_VARARGS,
   "V.GetUseCustomLabels() -> bool\nC++: virtual bool GetUseCustomLabels()\n\nUse custom labels.\n"},
  {"SetNumberOfCustomLabels", PyvtkContext2DScalarBarActor_SetNumberOfCustomLabels, METH_VARARGS,
   "V.SetNumberOfCustomLabels(int)\nC++: void SetNumberOfCustomLabels(vtkIdType numLabels)\n\nSet number of custom labels.\n"},
  {"GetNumberOfCustomLabels", PyvtkContext2DScalarBarActor_GetNumberOfCustomLabels, METH_VARARGS,
   "V.GetNumberOfCustomLabels() -> int\nC++: vtkIdType GetNumberOfCustomLabels()\n\nSet number of custom labels.\n"},
  {"SetCustomLabel", PyvtkContext2DScalarBarActor_SetCustomLabel, METH_VARARGS,
   "V.SetCustomLabel(int, float)\nC++: void SetCustomLabel(vtkIdType index, double value)\n\nSet label for index.\n"},
  {"RenderOverlay", PyvtkContext2DScalarBarActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nWe only render in the overlay for the context scene.\n"},
  {"RenderOpaqueGeometry", PyvtkContext2DScalarBarActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"ReleaseGraphicsResources", PyvtkContext2DScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"Paint", PyvtkContext2DScalarBarActor_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nResponsible for actually drawing the scalar bar.\n"},
  {"GetBoundingRect", PyvtkContext2DScalarBarActor_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect() -> vtkRectf\nC++: vtkRectf GetBoundingRect()\n\nGet the bounding rectangle of the scalar bar actor contents in\ndisplay coordinates.\n"},
  {"GetEstimatedNumberOfAnnotations", PyvtkContext2DScalarBarActor_GetEstimatedNumberOfAnnotations, METH_VARARGS,
   "V.GetEstimatedNumberOfAnnotations() -> int\nC++: int GetEstimatedNumberOfAnnotations()\n\nGet an estimated number of annotations emulating loosely the\nalgorithm generating the annotations. The actual number of\nannotations can be slightly lower than the return of this method\nwhen using automatic annotations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContext2DScalarBarActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkContext2DScalarBarActor", // tp_name
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
  PyvtkContext2DScalarBarActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContext2DScalarBarActor_StaticNew()
{
  return vtkContext2DScalarBarActor::New();
}

PyObject *PyvtkContext2DScalarBarActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContext2DScalarBarActor_Type, PyvtkContext2DScalarBarActor_Methods,
    "vtkContext2DScalarBarActor",
 &PyvtkContext2DScalarBarActor_StaticNew);

  PyTypeObject *pytype = &PyvtkContext2DScalarBarActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarBarActor_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkContext2DScalarBarActor_OutOfRangeType_Type);
  PyvtkContext2DScalarBarActor_OutOfRangeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkContext2DScalarBarActor_OutOfRangeType_Type);

  o = (PyObject *)&PyvtkContext2DScalarBarActor_OutOfRangeType_Type;
  if (PyDict_SetItemString(d, "OutOfRangeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "PrecedeScalarBar", vtkContext2DScalarBarActor::PrecedeScalarBar },
        { "SucceedScalarBar", vtkContext2DScalarBarActor::SucceedScalarBar },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkContext2DScalarBarActor::OutOfRangeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "BELOW_RANGE", vtkContext2DScalarBarActor::BELOW_RANGE },
        { "ABOVE_RANGE", vtkContext2DScalarBarActor::ABOVE_RANGE },
      };

    o = PyvtkContext2DScalarBarActor_OutOfRangeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContext2DScalarBarActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContext2DScalarBarActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContext2DScalarBarActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

