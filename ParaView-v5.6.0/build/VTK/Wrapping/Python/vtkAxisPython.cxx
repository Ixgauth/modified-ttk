// python wrapper for vtkAxis
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkAxis.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxis(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxis_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkAxis_Doc =
  "vtkAxis - takes care of drawing 2D axes\n\n"
  "Superclass: vtkContextItem\n\n"
  "The vtkAxis is drawn in screen coordinates. It is usually one of the\n"
  "last elements of a chart to be drawn. It renders the axis label, tick\n"
  "marks and tick labels. The tick marks and labels span the range of\n"
  "values betweenMinimum and Maximum. The Minimum and Maximum values are\n"
  "not allowed to extend beyond theMinimumLimit and MaximumLimit values,\n"
  "respectively.\n\n"
  "Note that many other chart elements (e.g., vtkPlotPoints) refer to\n"
  "vtkAxis instances to determine how to scale raw data for\n"
  "presentation. In particular, care must be taken with logarithmic\n"
  "scaling. The axis Minimum, Maximum, and Limit values are stored both\n"
  "unscaled and scaled (with log(x) applied when GetLogScaleActive()\n"
  "returns true). User interfaces will most likely present the unscaled\n"
  "values as they represent the values provided by the user. Other chart\n"
  "elements may need the scaled values in order to draw in the same\n"
  "coordinate system.\n\n"
  "Just because LogScale is set to true does not guarantee that the axis\n"
  "will use logarithmic scaling -- the Minimum and Maximum values for\n"
  "the axis must both lie to the same side of origin (and not include\n"
  "the origin). Also, this switch from linear- to log-scaling may occur\n"
  "during a rendering pass if autoscaling is enabled. Because the log\n"
  "and pow functions are not invertible and the axis itself decides when\n"
  "to switch between them without offering any external class managing\n"
  "the axis a chance to save the old values, it saves old Limit values\n"
  "in NonLogUnscaled{Min,Max}Limit so that behavior is consistent when\n"
  "LogScale is changed from false to true and back again.\n\n";

static PyTypeObject PyvtkAxis_Location_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkAxis.Location", // tp_name
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

PyObject *PyvtkAxis_Location_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAxis_Location_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxis_Location_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAxis_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxis::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxis::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxis *tempr = vtkAxis::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxis::NewInstance());

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
PyvtkAxis_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkAxis::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkAxis::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(*temp0);
    }
    else
    {
      op->vtkAxis::SetPoint1(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetPoint1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxis_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkAxis_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxis::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition1() :
      op->vtkAxis::GetPosition1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(*temp0);
    }
    else
    {
      op->vtkAxis::SetPoint2(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetPoint2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxis_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkAxis_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxis::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkAxis::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTicks(temp0);
    }
    else
    {
      op->vtkAxis::SetNumberOfTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicks() :
      op->vtkAxis::GetNumberOfTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLength(temp0);
    }
    else
    {
      op->vtkAxis::SetTickLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTickLength() :
      op->vtkAxis::GetTickLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkAxis::GetLabelProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimum(temp0);
    }
    else
    {
      op->vtkAxis::SetMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimum() :
      op->vtkAxis::GetMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximum(temp0);
    }
    else
    {
      op->vtkAxis::SetMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkAxis::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMinimum(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimum() :
      op->vtkAxis::GetUnscaledMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMaximum(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximum() :
      op->vtkAxis::GetUnscaledMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->SetRange(temp0);
    }
    else
    {
      op->vtkAxis::SetRange(temp0);
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
PyvtkAxis_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkAxis_SetUnscaledRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledRange(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetUnscaledRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetUnscaledRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->SetUnscaledRange(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledRange(temp0);
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
PyvtkAxis_SetUnscaledRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetUnscaledRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetUnscaledRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUnscaledRange");
  return nullptr;
}



static PyObject *
PyvtkAxis_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0);
    }
    else
    {
      op->vtkAxis::GetRange(temp0);
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
PyvtkAxis_GetUnscaledRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledRange(temp0);
    }
    else
    {
      op->vtkAxis::GetUnscaledRange(temp0);
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
PyvtkAxis_SetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetMinimumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumLimit() :
      op->vtkAxis::GetMinimumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetMaximumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLimit() :
      op->vtkAxis::GetMaximumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMinimumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMinimumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimumLimit() :
      op->vtkAxis::GetUnscaledMinimumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMaximumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMaximumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximumLimit() :
      op->vtkAxis::GetUnscaledMaximumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMargins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMargins() :
      op->vtkAxis::GetMargins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMargins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetMargins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0);
    }
    else
    {
      op->vtkAxis::SetMargins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetMargins_s1(self, args);
    case 1:
      return PyvtkAxis_SetMargins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMargins");
  return nullptr;
}



static PyObject *
PyvtkAxis_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkAxis::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxis::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkAxis::GetTitleProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScaleActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScaleActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogScaleActive() :
      op->vtkAxis::GetLogScaleActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogScale() :
      op->vtkAxis::GetLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogScale(temp0);
    }
    else
    {
      op->vtkAxis::SetLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOn();
    }
    else
    {
      op->vtkAxis::LogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOff();
    }
    else
    {
      op->vtkAxis::LogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetGridVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisible() :
      op->vtkAxis::GetGridVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelsVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelsVisible() :
      op->vtkAxis::GetLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRangeLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeLabelsVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetRangeLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetRangeLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRangeLabelsVisible() :
      op->vtkAxis::GetRangeLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelOffset(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkAxis::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTicksVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetTicksVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTicksVisible() :
      op->vtkAxis::GetTicksVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetAxisVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisVisible() :
      op->vtkAxis::GetAxisVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTitleVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetTitleVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTitleVisible() :
      op->vtkAxis::GetTitleVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0);
    }
    else
    {
      op->vtkAxis::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkAxis::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxis::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  std::string temp0;
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
      op->vtkAxis::SetRangeLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRangeLabelFormat() :
      op->vtkAxis::GetRangeLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNotation(temp0);
    }
    else
    {
      op->vtkAxis::SetNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation() :
      op->vtkAxis::GetNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBehavior(temp0);
    }
    else
    {
      op->vtkAxis::SetBehavior(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBehavior() :
      op->vtkAxis::GetBehavior());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkAxis::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetGridPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetGridPen() :
      op->vtkAxis::GetGridPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLabelAlgorithm(temp0);
    }
    else
    {
      op->vtkAxis::SetTickLabelAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLabelAlgorithm() :
      op->vtkAxis::GetTickLabelAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingFactor(temp0);
    }
    else
    {
      op->vtkAxis::SetScalingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalingFactor() :
      op->vtkAxis::GetScalingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkAxis::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkAxis::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAxis::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkAxis::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_AutoScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoScale();
    }
    else
    {
      op->vtkAxis::AutoScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_RecalculateTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateTickSpacing();
    }
    else
    {
      op->vtkAxis::RecalculateTickSpacing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTickPositions() :
      op->vtkAxis::GetTickPositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickScenePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickScenePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetTickScenePositions() :
      op->vtkAxis::GetTickScenePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTickLabels() :
      op->vtkAxis::GetTickLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetCustomTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCustomTickPositions(temp0, temp1) :
      op->vtkAxis::SetCustomTickPositions(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkAxis::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NiceNumber(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceNumber");

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkAxis::NiceNumber(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NiceMinMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceMinMax");

  double temp0;
  double temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = vtkAxis::NiceMinMax(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GenerateSimpleLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSimpleLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GenerateSimpleLabel(temp0) :
      op->vtkAxis::GenerateSimpleLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAxis_Methods[] = {
  {"IsTypeOf", PyvtkAxis_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxis_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxis_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxis\nC++: static vtkAxis *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxis_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxis\nC++: vtkAxis *NewInstance()\n\n"},
  {"SetPosition", PyvtkAxis_SetPosition, METH_VARARGS,
   "V.SetPosition(int)\nC++: virtual void SetPosition(int position)\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {"GetPosition", PyvtkAxis_GetPosition, METH_VARARGS,
   "V.GetPosition() -> int\nC++: virtual int GetPosition()\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {"SetPoint1", PyvtkAxis_SetPoint1, METH_VARARGS,
   "V.SetPoint1(vtkVector2f)\nC++: void SetPoint1(const vtkVector2f &pos)\nV.SetPoint1(float, float)\nC++: void SetPoint1(float x, float y)\n\nSet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {"GetPoint1", PyvtkAxis_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float)\nC++: float *GetPoint1()\n\n"},
  {"GetPosition1", PyvtkAxis_GetPosition1, METH_VARARGS,
   "V.GetPosition1() -> vtkVector2f\nC++: vtkVector2f GetPosition1()\n\nGet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {"SetPoint2", PyvtkAxis_SetPoint2, METH_VARARGS,
   "V.SetPoint2(vtkVector2f)\nC++: void SetPoint2(const vtkVector2f &pos)\nV.SetPoint2(float, float)\nC++: void SetPoint2(float x, float y)\n\nSet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {"GetPoint2", PyvtkAxis_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float)\nC++: float *GetPoint2()\n\n"},
  {"GetPosition2", PyvtkAxis_GetPosition2, METH_VARARGS,
   "V.GetPosition2() -> vtkVector2f\nC++: vtkVector2f GetPosition2()\n\nGet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {"SetNumberOfTicks", PyvtkAxis_SetNumberOfTicks, METH_VARARGS,
   "V.SetNumberOfTicks(int)\nC++: virtual void SetNumberOfTicks(int numberOfTicks)\n\nSet the number of tick marks for this axis. Default is -1, which\nleads to automatic calculation of nicely spaced tick marks.\n"},
  {"GetNumberOfTicks", PyvtkAxis_GetNumberOfTicks, METH_VARARGS,
   "V.GetNumberOfTicks() -> int\nC++: virtual int GetNumberOfTicks()\n\nGet the number of tick marks for this axis.\n"},
  {"SetTickLength", PyvtkAxis_SetTickLength, METH_VARARGS,
   "V.SetTickLength(float)\nC++: virtual void SetTickLength(float _arg)\n\nGet/set the length of tick marks (in pixels).\n"},
  {"GetTickLength", PyvtkAxis_GetTickLength, METH_VARARGS,
   "V.GetTickLength() -> float\nC++: virtual float GetTickLength()\n\nGet/set the length of tick marks (in pixels).\n"},
  {"GetLabelProperties", PyvtkAxis_GetLabelProperties, METH_VARARGS,
   "V.GetLabelProperties() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetMinimum", PyvtkAxis_SetMinimum, METH_VARARGS,
   "V.SetMinimum(float)\nC++: virtual void SetMinimum(double minimum)\n\nSet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nminimum base-10 exponent.\n"},
  {"GetMinimum", PyvtkAxis_GetMinimum, METH_VARARGS,
   "V.GetMinimum() -> float\nC++: virtual double GetMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe minimum base-10 exponent.\n"},
  {"SetMaximum", PyvtkAxis_SetMaximum, METH_VARARGS,
   "V.SetMaximum(float)\nC++: virtual void SetMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nmaximum base-10 exponent.\n"},
  {"GetMaximum", PyvtkAxis_GetMaximum, METH_VARARGS,
   "V.GetMaximum() -> float\nC++: virtual double GetMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe maximum base-10 exponent.\n"},
  {"SetUnscaledMinimum", PyvtkAxis_SetUnscaledMinimum, METH_VARARGS,
   "V.SetUnscaledMinimum(float)\nC++: virtual void SetUnscaledMinimum(double minimum)\n\nSet the logical, unscaled minimum value of the axis, in plot\ncoordinates. Use this instead of SetMinimum() if you wish to\nprovide the actual minimum instead of log10(the minimum) as part\nof the axis scale.\n"},
  {"GetUnscaledMinimum", PyvtkAxis_GetUnscaledMinimum, METH_VARARGS,
   "V.GetUnscaledMinimum() -> float\nC++: virtual double GetUnscaledMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\n"},
  {"SetUnscaledMaximum", PyvtkAxis_SetUnscaledMaximum, METH_VARARGS,
   "V.SetUnscaledMaximum(float)\nC++: virtual void SetUnscaledMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\n"},
  {"GetUnscaledMaximum", PyvtkAxis_GetUnscaledMaximum, METH_VARARGS,
   "V.GetUnscaledMaximum() -> float\nC++: virtual double GetUnscaledMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\n"},
  {"SetRange", PyvtkAxis_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: virtual void SetRange(double minimum, double maximum)\nV.SetRange([float, float])\nC++: virtual void SetRange(double range[2])\n\nSet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* When calling SetRange() and LogScale is true, the range must be\nspecified\n* in logarithmic coordinates.\n* Using SetUnscaledRange(), you may ignore the value of LogScale.\n"},
  {"SetUnscaledRange", PyvtkAxis_SetUnscaledRange, METH_VARARGS,
   "V.SetUnscaledRange(float, float)\nC++: virtual void SetUnscaledRange(double minimum, double maximum)\nV.SetUnscaledRange([float, float])\nC++: virtual void SetUnscaledRange(double range[2])\n\nSet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* When calling SetRange() and LogScale is true, the range must be\nspecified\n* in logarithmic coordinates.\n* Using SetUnscaledRange(), you may ignore the value of LogScale.\n"},
  {"GetRange", PyvtkAxis_GetRange, METH_VARARGS,
   "V.GetRange([float, ...])\nC++: virtual void GetRange(double *range)\n\nGet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* Calling GetRange() when LogScale is true will return the\n  log10({min, max}).\n"},
  {"GetUnscaledRange", PyvtkAxis_GetUnscaledRange, METH_VARARGS,
   "V.GetUnscaledRange([float, ...])\nC++: virtual void GetUnscaledRange(double *range)\n\nGet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* Calling GetRange() when LogScale is true will return the\n  log10({min, max}).\n"},
  {"SetMinimumLimit", PyvtkAxis_SetMinimumLimit, METH_VARARGS,
   "V.SetMinimumLimit(float)\nC++: virtual void SetMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"GetMinimumLimit", PyvtkAxis_GetMinimumLimit, METH_VARARGS,
   "V.GetMinimumLimit() -> float\nC++: virtual double GetMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"SetMaximumLimit", PyvtkAxis_SetMaximumLimit, METH_VARARGS,
   "V.SetMaximumLimit(float)\nC++: virtual void SetMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetMaximumLimit", PyvtkAxis_GetMaximumLimit, METH_VARARGS,
   "V.GetMaximumLimit() -> float\nC++: virtual double GetMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"SetUnscaledMinimumLimit", PyvtkAxis_SetUnscaledMinimumLimit, METH_VARARGS,
   "V.SetUnscaledMinimumLimit(float)\nC++: virtual void SetUnscaledMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"GetUnscaledMinimumLimit", PyvtkAxis_GetUnscaledMinimumLimit, METH_VARARGS,
   "V.GetUnscaledMinimumLimit() -> float\nC++: virtual double GetUnscaledMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"SetUnscaledMaximumLimit", PyvtkAxis_SetUnscaledMaximumLimit, METH_VARARGS,
   "V.SetUnscaledMaximumLimit(float)\nC++: virtual void SetUnscaledMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetUnscaledMaximumLimit", PyvtkAxis_GetUnscaledMaximumLimit, METH_VARARGS,
   "V.GetUnscaledMaximumLimit() -> float\nC++: virtual double GetUnscaledMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetMargins", PyvtkAxis_GetMargins, METH_VARARGS,
   "V.GetMargins() -> (int, int)\nC++: int *GetMargins()\n\n"},
  {"SetMargins", PyvtkAxis_SetMargins, METH_VARARGS,
   "V.SetMargins(int, int)\nC++: void SetMargins(int, int)\nV.SetMargins((int, int))\nC++: void SetMargins(int a[2])\n\n"},
  {"SetTitle", PyvtkAxis_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the axis.\n"},
  {"GetTitle", PyvtkAxis_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the axis.\n"},
  {"GetTitleProperties", PyvtkAxis_GetTitleProperties, METH_VARARGS,
   "V.GetTitleProperties() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the axis title is\ndisplayed.\n"},
  {"GetLogScaleActive", PyvtkAxis_GetLogScaleActive, METH_VARARGS,
   "V.GetLogScaleActive() -> bool\nC++: virtual bool GetLogScaleActive()\n\nGet whether the axis is using a log scale. This will always be\nfalse when LogScale is false. It is only true when LogScale is\ntrue andthe UnscaledRange does not cross or include the origin\n(zero).\n\n* The limits ( MinimumLimit, MaximumLimit, and their\n* unscaled counterparts) do not prevent LogScaleActive from\n  becoming\n* true; they are adjusted if they cross or include the origin\n* and the original limits are preserved for when LogScaleActive\n* becomes false again.\n"},
  {"GetLogScale", PyvtkAxis_GetLogScale, METH_VARARGS,
   "V.GetLogScale() -> bool\nC++: virtual bool GetLogScale()\n\nGet/set whether the axis should attemptto use a log scale.\n\n* The default is false.\n* \\sa{LogScaleActive}.\n"},
  {"SetLogScale", PyvtkAxis_SetLogScale, METH_VARARGS,
   "V.SetLogScale(bool)\nC++: virtual void SetLogScale(bool logScale)\n\nGet/set whether the axis should attemptto use a log scale.\n\n* The default is false.\n* \\sa{LogScaleActive}.\n"},
  {"LogScaleOn", PyvtkAxis_LogScaleOn, METH_VARARGS,
   "V.LogScaleOn()\nC++: virtual void LogScaleOn()\n\nGet/set whether the axis should attemptto use a log scale.\n\n* The default is false.\n* \\sa{LogScaleActive}.\n"},
  {"LogScaleOff", PyvtkAxis_LogScaleOff, METH_VARARGS,
   "V.LogScaleOff()\nC++: virtual void LogScaleOff()\n\nGet/set whether the axis should attemptto use a log scale.\n\n* The default is false.\n* \\sa{LogScaleActive}.\n"},
  {"SetGridVisible", PyvtkAxis_SetGridVisible, METH_VARARGS,
   "V.SetGridVisible(bool)\nC++: virtual void SetGridVisible(bool _arg)\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {"GetGridVisible", PyvtkAxis_GetGridVisible, METH_VARARGS,
   "V.GetGridVisible() -> bool\nC++: virtual bool GetGridVisible()\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {"SetLabelsVisible", PyvtkAxis_SetLabelsVisible, METH_VARARGS,
   "V.SetLabelsVisible(bool)\nC++: virtual void SetLabelsVisible(bool _arg)\n\nGet/set whether the axis labels should be visible.\n"},
  {"GetLabelsVisible", PyvtkAxis_GetLabelsVisible, METH_VARARGS,
   "V.GetLabelsVisible() -> bool\nC++: virtual bool GetLabelsVisible()\n\nGet/set whether the axis labels should be visible.\n"},
  {"SetRangeLabelsVisible", PyvtkAxis_SetRangeLabelsVisible, METH_VARARGS,
   "V.SetRangeLabelsVisible(bool)\nC++: virtual void SetRangeLabelsVisible(bool _arg)\n\nGet/set whether the labels for the range should be visible.\n"},
  {"GetRangeLabelsVisible", PyvtkAxis_GetRangeLabelsVisible, METH_VARARGS,
   "V.GetRangeLabelsVisible() -> bool\nC++: virtual bool GetRangeLabelsVisible()\n\nGet/set whether the labels for the range should be visible.\n"},
  {"SetLabelOffset", PyvtkAxis_SetLabelOffset, METH_VARARGS,
   "V.SetLabelOffset(float)\nC++: virtual void SetLabelOffset(float _arg)\n\nGet/set the offset (in pixels) of the label text position from\nthe axis\n"},
  {"GetLabelOffset", PyvtkAxis_GetLabelOffset, METH_VARARGS,
   "V.GetLabelOffset() -> float\nC++: virtual float GetLabelOffset()\n\nGet/set the offset (in pixels) of the label text position from\nthe axis\n"},
  {"SetTicksVisible", PyvtkAxis_SetTicksVisible, METH_VARARGS,
   "V.SetTicksVisible(bool)\nC++: virtual void SetTicksVisible(bool _arg)\n\nGet/set whether the tick marks should be visible.\n"},
  {"GetTicksVisible", PyvtkAxis_GetTicksVisible, METH_VARARGS,
   "V.GetTicksVisible() -> bool\nC++: virtual bool GetTicksVisible()\n\nGet/set whether the tick marks should be visible.\n"},
  {"SetAxisVisible", PyvtkAxis_SetAxisVisible, METH_VARARGS,
   "V.SetAxisVisible(bool)\nC++: virtual void SetAxisVisible(bool _arg)\n\nGet/set whether the axis line should be visible.\n"},
  {"GetAxisVisible", PyvtkAxis_GetAxisVisible, METH_VARARGS,
   "V.GetAxisVisible() -> bool\nC++: virtual bool GetAxisVisible()\n\nGet/set whether the axis line should be visible.\n"},
  {"SetTitleVisible", PyvtkAxis_SetTitleVisible, METH_VARARGS,
   "V.SetTitleVisible(bool)\nC++: virtual void SetTitleVisible(bool _arg)\n\nGet/set whether the axis title should be visible.\n"},
  {"GetTitleVisible", PyvtkAxis_GetTitleVisible, METH_VARARGS,
   "V.GetTitleVisible() -> bool\nC++: virtual bool GetTitleVisible()\n\nGet/set whether the axis title should be visible.\n"},
  {"SetPrecision", PyvtkAxis_SetPrecision, METH_VARARGS,
   "V.SetPrecision(int)\nC++: virtual void SetPrecision(int precision)\n\nGet/set the numerical precision to use, default is 2. This is\nignored when Notation is STANDARD_NOTATION or PRINTF_NOTATION.\n"},
  {"GetPrecision", PyvtkAxis_GetPrecision, METH_VARARGS,
   "V.GetPrecision() -> int\nC++: virtual int GetPrecision()\n\nGet/set the numerical precision to use, default is 2. This is\nignored when Notation is STANDARD_NOTATION or PRINTF_NOTATION.\n"},
  {"SetLabelFormat", PyvtkAxis_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const std::string &fmt)\n\nGet/Set the printf-style format string used when\nTickLabelAlgorithm is TICK_SIMPLE and Notation is\nPRINTF_NOTATION. The default is \"%g\".\n"},
  {"GetLabelFormat", PyvtkAxis_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual std::string GetLabelFormat()\n\nGet/Set the printf-style format string used when\nTickLabelAlgorithm is TICK_SIMPLE and Notation is\nPRINTF_NOTATION. The default is \"%g\".\n"},
  {"SetRangeLabelFormat", PyvtkAxis_SetRangeLabelFormat, METH_VARARGS,
   "V.SetRangeLabelFormat(string)\nC++: virtual void SetRangeLabelFormat(std::string _arg)\n\nGet/Set the printf-style format string used for range labels.\nThis format is always used regardless of TickLabelAlgorithm and\nNotation. Default is \"%g\".\n"},
  {"GetRangeLabelFormat", PyvtkAxis_GetRangeLabelFormat, METH_VARARGS,
   "V.GetRangeLabelFormat() -> string\nC++: virtual std::string GetRangeLabelFormat()\n\nGet/Set the printf-style format string used for range labels.\nThis format is always used regardless of TickLabelAlgorithm and\nNotation. Default is \"%g\".\n"},
  {"SetNotation", PyvtkAxis_SetNotation, METH_VARARGS,
   "V.SetNotation(int)\nC++: virtual void SetNotation(int notation)\n\nGet/set the numerical notation, standard, scientific, fixed, or a\nprintf-style format string.\n\\sa SetPrecision SetLabelFormat\n"},
  {"GetNotation", PyvtkAxis_GetNotation, METH_VARARGS,
   "V.GetNotation() -> int\nC++: virtual int GetNotation()\n\nGet/set the numerical notation, standard, scientific, fixed, or a\nprintf-style format string.\n\\sa SetPrecision SetLabelFormat\n"},
  {"SetBehavior", PyvtkAxis_SetBehavior, METH_VARARGS,
   "V.SetBehavior(int)\nC++: virtual void SetBehavior(int _arg)\n\nGet/set the behavior of the axis (auto or fixed). The default is\n0 (auto).\n"},
  {"GetBehavior", PyvtkAxis_GetBehavior, METH_VARARGS,
   "V.GetBehavior() -> int\nC++: virtual int GetBehavior()\n\nGet/set the behavior of the axis (auto or fixed). The default is\n0 (auto).\n"},
  {"GetPen", PyvtkAxis_GetPen, METH_VARARGS,
   "V.GetPen() -> vtkPen\nC++: virtual vtkPen *GetPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {"GetGridPen", PyvtkAxis_GetGridPen, METH_VARARGS,
   "V.GetGridPen() -> vtkPen\nC++: virtual vtkPen *GetGridPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {"SetTickLabelAlgorithm", PyvtkAxis_SetTickLabelAlgorithm, METH_VARARGS,
   "V.SetTickLabelAlgorithm(int)\nC++: virtual void SetTickLabelAlgorithm(int _arg)\n\nGet/set the tick label algorithm that is used to calculate the\nmin, max and tick spacing. There are currently two algoriths,\nvtkAxis::TICK_SIMPLE is the default and uses a simple algorithm.\nThe second option is vtkAxis::TICK_WILKINSON which uses an\nextended Wilkinson algorithm to find the optimal range, spacing\nand font parameters.\n"},
  {"GetTickLabelAlgorithm", PyvtkAxis_GetTickLabelAlgorithm, METH_VARARGS,
   "V.GetTickLabelAlgorithm() -> int\nC++: virtual int GetTickLabelAlgorithm()\n\nGet/set the tick label algorithm that is used to calculate the\nmin, max and tick spacing. There are currently two algoriths,\nvtkAxis::TICK_SIMPLE is the default and uses a simple algorithm.\nThe second option is vtkAxis::TICK_WILKINSON which uses an\nextended Wilkinson algorithm to find the optimal range, spacing\nand font parameters.\n"},
  {"SetScalingFactor", PyvtkAxis_SetScalingFactor, METH_VARARGS,
   "V.SetScalingFactor(float)\nC++: virtual void SetScalingFactor(double _arg)\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {"GetScalingFactor", PyvtkAxis_GetScalingFactor, METH_VARARGS,
   "V.GetScalingFactor() -> float\nC++: virtual double GetScalingFactor()\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {"SetShift", PyvtkAxis_SetShift, METH_VARARGS,
   "V.SetShift(float)\nC++: virtual void SetShift(double _arg)\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {"GetShift", PyvtkAxis_GetShift, METH_VARARGS,
   "V.GetShift() -> float\nC++: virtual double GetShift()\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {"Update", PyvtkAxis_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {"Paint", PyvtkAxis_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {"AutoScale", PyvtkAxis_AutoScale, METH_VARARGS,
   "V.AutoScale()\nC++: virtual void AutoScale()\n\nUse this function to autoscale the axes after setting the minimum\nand maximum values. This will cause the axes to select the nicest\nnumbers that enclose the minimum and maximum values, and to\nselect an appropriate number of tick marks.\n"},
  {"RecalculateTickSpacing", PyvtkAxis_RecalculateTickSpacing, METH_VARARGS,
   "V.RecalculateTickSpacing()\nC++: virtual void RecalculateTickSpacing()\n\nRecalculate the spacing of the tick marks - typically useful to\ndo after scaling the axis.\n"},
  {"GetTickPositions", PyvtkAxis_GetTickPositions, METH_VARARGS,
   "V.GetTickPositions() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTickPositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in the plot coordinates of the\naxis.\n"},
  {"GetTickScenePositions", PyvtkAxis_GetTickScenePositions, METH_VARARGS,
   "V.GetTickScenePositions() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetTickScenePositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in scene coordinates.\n"},
  {"GetTickLabels", PyvtkAxis_GetTickLabels, METH_VARARGS,
   "V.GetTickLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetTickLabels()\n\nA string array containing the tick labels for the axis.\n"},
  {"SetCustomTickPositions", PyvtkAxis_SetCustomTickPositions, METH_VARARGS,
   "V.SetCustomTickPositions(vtkDoubleArray, vtkStringArray) -> bool\nC++: virtual bool SetCustomTickPositions(\n    vtkDoubleArray *positions, vtkStringArray *labels=nullptr)\n\nSet the tick positions, and optionally custom tick labels. If the\nlabels and positions are null then automatic tick labels will be\nassigned. If only positions are supplied then appropriate labels\nwill be generated according to the axis settings. If positions\nand labels are supplied they must be of the same length. Returns\ntrue on success, false on failure.\n"},
  {"GetBoundingRect", PyvtkAxis_GetBoundingRect, METH_VARARGS,
   "V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the axes require to be drawn. This is returned\nas a vtkRectf, with the corner being the offset from Point1, and\nthe width/ height being the total width/height required by the\naxis. In order to ensure the numbers are correct, Update() should\nbe called on the axis.\n"},
  {"NiceNumber", PyvtkAxis_NiceNumber, METH_VARARGS,
   "V.NiceNumber(float, bool) -> float\nC++: static double NiceNumber(double number, bool roundUp)\n\nReturn a \"nice number\", often defined as 1, 2 or 5. If roundUp is\ntrue then the nice number will be rounded up, false it is rounded\ndown. The supplied number should be between 0.0 and 9.9.\n"},
  {"NiceMinMax", PyvtkAxis_NiceMinMax, METH_VARARGS,
   "V.NiceMinMax(float, float, float, float) -> float\nC++: static double NiceMinMax(double &min, double &max,\n    float pixelRange, float tickPixelSpacing)\n\nStatic function to calculate \"nice\" minimum, maximum, and tick\nspacing values.\n"},
  {"GenerateSimpleLabel", PyvtkAxis_GenerateSimpleLabel, METH_VARARGS,
   "V.GenerateSimpleLabel(float) -> string\nC++: virtual vtkStdString GenerateSimpleLabel(double val)\n\nGenerate a single label using the current settings when\nTickLabelAlgorithm is TICK_SIMPLE.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkAxis", // tp_name
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
  PyvtkAxis_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxis_StaticNew()
{
  return vtkAxis::New();
}

PyObject *PyvtkAxis_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxis_Type, PyvtkAxis_Methods,
    "vtkAxis",
 &PyvtkAxis_StaticNew);

  PyTypeObject *pytype = &PyvtkAxis_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxis_Location_Type);
  PyvtkAxis_Location_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAxis_Location_Type);

  o = (PyObject *)&PyvtkAxis_Location_Type;
  if (PyDict_SetItemString(d, "Location", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkAxis::Location cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "LEFT", vtkAxis::LEFT },
        { "BOTTOM", vtkAxis::BOTTOM },
        { "RIGHT", vtkAxis::RIGHT },
        { "TOP", vtkAxis::TOP },
        { "PARALLEL", vtkAxis::PARALLEL },
      };

    o = PyvtkAxis_Location_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "TICK_SIMPLE", vtkAxis::TICK_SIMPLE },
        { "TICK_WILKINSON_EXTENDED", vtkAxis::TICK_WILKINSON_EXTENDED },
        { "STANDARD_NOTATION", vtkAxis::STANDARD_NOTATION },
        { "SCIENTIFIC_NOTATION", vtkAxis::SCIENTIFIC_NOTATION },
        { "FIXED_NOTATION", vtkAxis::FIXED_NOTATION },
        { "PRINTF_NOTATION", vtkAxis::PRINTF_NOTATION },
        { "AUTO", vtkAxis::AUTO },
        { "FIXED", vtkAxis::FIXED },
        { "CUSTOM", vtkAxis::CUSTOM },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxis(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxis_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxis", o) != 0)
  {
    Py_DECREF(o);
  }

}

