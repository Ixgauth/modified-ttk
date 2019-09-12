// python wrapper for vtkImageCroppingRegionsWidget
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
#include "vtkImageCroppingRegionsWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCroppingRegionsWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCroppingRegionsWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkImageCroppingRegionsWidget_Doc =
  "vtkImageCroppingRegionsWidget - widget for cropping an image\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This widget displays a set of axis aligned lines that can be\n"
  "interactively manipulated to crop a volume. The region to be cropped\n"
  "away is displayed in a different highlight. Much like the\n"
  "vtkVolumeMapper, this widget supports 27 possible configurations of\n"
  "cropping planes. (See CroppingRegionFlags). If a volume mapper is\n"
  "set, the cropping planes are directly propagated to the volume\n"
  "mapper. The widget invokes a CroppingPlanesPositionChangedEvent when\n"
  "the position of any of the cropping planes is changed. The widget\n"
  "also invokes an InteractionEvent in response to user interaction.\n\n";

static PyTypeObject PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImageCroppingRegionsWidget.WidgetEventIds", // tp_name
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

PyObject *PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkImageCroppingRegionsWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCroppingRegionsWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCroppingRegionsWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCroppingRegionsWidget *tempr = vtkImageCroppingRegionsWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCroppingRegionsWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCroppingRegionsWidget::NewInstance());

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
PyvtkImageCroppingRegionsWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->vtkImageCroppingRegionsWidget::PlaceWidget(temp0);
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
PyvtkImageCroppingRegionsWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetPlanePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlanePositions() :
      op->vtkImageCroppingRegionsWidget::GetPlanePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetPlanePositions(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0);
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
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(self, args);
    case 6:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlanePositions");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlags(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetCroppingRegionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkImageCroppingRegionsWidget::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkImageCroppingRegionsWidget::GetSliceOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientation(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXY();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToYZ();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToYZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXZ();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlice(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageCroppingRegionsWidget::GetSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine1Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine1Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine1Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine1Color() :
      op->vtkImageCroppingRegionsWidget::GetLine1Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine1Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine1Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine2Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine2Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine2Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine2Color() :
      op->vtkImageCroppingRegionsWidget::GetLine2Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine2Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine2Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine3Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine3Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine3Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine3Color() :
      op->vtkImageCroppingRegionsWidget::GetLine3Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine3Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine3Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine4Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine4Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine4Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine4Color() :
      op->vtkImageCroppingRegionsWidget::GetLine4Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine4Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine4Color");
  return nullptr;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  vtkVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetVolumeMapper(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetVolumeMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkImageCroppingRegionsWidget::GetVolumeMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAccordingToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAccordingToInput();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::UpdateAccordingToInput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveHorizontalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveHorizontalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveHorizontalLine();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveHorizontalLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveVerticalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveVerticalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveVerticalLine();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveVerticalLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveIntersectingLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveIntersectingLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveIntersectingLines();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveIntersectingLines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateCursorIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCursorIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCursorIcon();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::UpdateCursorIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnButtonPress();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnButtonPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnButtonRelease();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnButtonRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCroppingRegionsWidget_Methods[] = {
  {"IsTypeOf", PyvtkImageCroppingRegionsWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkImageCroppingRegionsWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkImageCroppingRegionsWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCroppingRegionsWidget\nC++: static vtkImageCroppingRegionsWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkImageCroppingRegionsWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCroppingRegionsWidget\nC++: vtkImageCroppingRegionsWidget *NewInstance()\n\nStandard VTK methods.\n"},
  {"PlaceWidget", PyvtkImageCroppingRegionsWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: virtual void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: virtual void PlaceWidget(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nPlace/Adjust widget within bounds\n"},
  {"SetEnabled", PyvtkImageCroppingRegionsWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int enabling) override;\n\nEnable/disable the widget\n"},
  {"GetPlanePositions", PyvtkImageCroppingRegionsWidget_GetPlanePositions, METH_VARARGS,
   "V.GetPlanePositions() -> (float, float, float, float, float,\n    float)\nC++: double *GetPlanePositions()\n\n"},
  {"SetPlanePositions", PyvtkImageCroppingRegionsWidget_SetPlanePositions, METH_VARARGS,
   "V.SetPlanePositions([float, float, float, float, float, float])\nC++: virtual void SetPlanePositions(double pos[6])\nV.SetPlanePositions(float, float, float, float, float, float)\nC++: virtual void SetPlanePositions(double xMin, double xMax,\n    double yMin, double yMax, double zMin, double zMax)\n\nSet/Get the plane positions that represent the cropped region.\n"},
  {"SetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags, METH_VARARGS,
   "V.SetCroppingRegionFlags(int)\nC++: virtual void SetCroppingRegionFlags(int flags)\n\nSet/Get the cropping region flags\n"},
  {"GetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags, METH_VARARGS,
   "V.GetCroppingRegionFlags() -> int\nC++: virtual int GetCroppingRegionFlags()\n\nSet/Get the cropping region flags\n"},
  {"GetSliceOrientation", PyvtkImageCroppingRegionsWidget_GetSliceOrientation, METH_VARARGS,
   "V.GetSliceOrientation() -> int\nC++: virtual int GetSliceOrientation()\n\n"},
  {"SetSliceOrientation", PyvtkImageCroppingRegionsWidget_SetSliceOrientation, METH_VARARGS,
   "V.SetSliceOrientation(int)\nC++: virtual void SetSliceOrientation(int orientation)\n\n"},
  {"SetSliceOrientationToXY", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY, METH_VARARGS,
   "V.SetSliceOrientationToXY()\nC++: virtual void SetSliceOrientationToXY()\n\n"},
  {"SetSliceOrientationToYZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ, METH_VARARGS,
   "V.SetSliceOrientationToYZ()\nC++: virtual void SetSliceOrientationToYZ()\n\n"},
  {"SetSliceOrientationToXZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ, METH_VARARGS,
   "V.SetSliceOrientationToXZ()\nC++: virtual void SetSliceOrientationToXZ()\n\n"},
  {"SetSlice", PyvtkImageCroppingRegionsWidget_SetSlice, METH_VARARGS,
   "V.SetSlice(int)\nC++: virtual void SetSlice(int num)\n\nSet/Get the slice number\n"},
  {"GetSlice", PyvtkImageCroppingRegionsWidget_GetSlice, METH_VARARGS,
   "V.GetSlice() -> int\nC++: virtual int GetSlice()\n\nSet/Get the slice number\n"},
  {"SetLine1Color", PyvtkImageCroppingRegionsWidget_SetLine1Color, METH_VARARGS,
   "V.SetLine1Color(float, float, float)\nC++: virtual void SetLine1Color(double r, double g, double b)\nV.SetLine1Color([float, float, float])\nC++: virtual void SetLine1Color(double rgb[3])\n\nSet/Get line 1 color\n"},
  {"GetLine1Color", PyvtkImageCroppingRegionsWidget_GetLine1Color, METH_VARARGS,
   "V.GetLine1Color() -> (float, ...)\nC++: virtual double *GetLine1Color()\nV.GetLine1Color([float, float, float])\nC++: virtual void GetLine1Color(double rgb[3])\n\nSet/Get line 1 color\n"},
  {"SetLine2Color", PyvtkImageCroppingRegionsWidget_SetLine2Color, METH_VARARGS,
   "V.SetLine2Color(float, float, float)\nC++: virtual void SetLine2Color(double r, double g, double b)\nV.SetLine2Color([float, float, float])\nC++: virtual void SetLine2Color(double rgb[3])\n\nSet/Get line 2 color\n"},
  {"GetLine2Color", PyvtkImageCroppingRegionsWidget_GetLine2Color, METH_VARARGS,
   "V.GetLine2Color() -> (float, ...)\nC++: virtual double *GetLine2Color()\nV.GetLine2Color([float, float, float])\nC++: virtual void GetLine2Color(double rgb[3])\n\nSet/Get line 2 color\n"},
  {"SetLine3Color", PyvtkImageCroppingRegionsWidget_SetLine3Color, METH_VARARGS,
   "V.SetLine3Color(float, float, float)\nC++: virtual void SetLine3Color(double r, double g, double b)\nV.SetLine3Color([float, float, float])\nC++: virtual void SetLine3Color(double rgb[3])\n\nSet/Get line 3 color\n"},
  {"GetLine3Color", PyvtkImageCroppingRegionsWidget_GetLine3Color, METH_VARARGS,
   "V.GetLine3Color() -> (float, ...)\nC++: virtual double *GetLine3Color()\nV.GetLine3Color([float, float, float])\nC++: virtual void GetLine3Color(double rgb[3])\n\nSet/Get line 3 color\n"},
  {"SetLine4Color", PyvtkImageCroppingRegionsWidget_SetLine4Color, METH_VARARGS,
   "V.SetLine4Color(float, float, float)\nC++: virtual void SetLine4Color(double r, double g, double b)\nV.SetLine4Color([float, float, float])\nC++: virtual void SetLine4Color(double rgb[3])\n\nSet/Get line 4 color\n"},
  {"GetLine4Color", PyvtkImageCroppingRegionsWidget_GetLine4Color, METH_VARARGS,
   "V.GetLine4Color() -> (float, ...)\nC++: virtual double *GetLine4Color()\nV.GetLine4Color([float, float, float])\nC++: virtual void GetLine4Color(double rgb[3])\n\nSet/Get line 4 color\n"},
  {"SetVolumeMapper", PyvtkImageCroppingRegionsWidget_SetVolumeMapper, METH_VARARGS,
   "V.SetVolumeMapper(vtkVolumeMapper)\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {"GetVolumeMapper", PyvtkImageCroppingRegionsWidget_GetVolumeMapper, METH_VARARGS,
   "V.GetVolumeMapper() -> vtkVolumeMapper\nC++: virtual vtkVolumeMapper *GetVolumeMapper()\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {"UpdateAccordingToInput", PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput, METH_VARARGS,
   "V.UpdateAccordingToInput()\nC++: virtual void UpdateAccordingToInput()\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {"MoveHorizontalLine", PyvtkImageCroppingRegionsWidget_MoveHorizontalLine, METH_VARARGS,
   "V.MoveHorizontalLine()\nC++: void MoveHorizontalLine()\n\nCallbacks for user interaction.\n"},
  {"MoveVerticalLine", PyvtkImageCroppingRegionsWidget_MoveVerticalLine, METH_VARARGS,
   "V.MoveVerticalLine()\nC++: void MoveVerticalLine()\n\nCallbacks for user interaction.\n"},
  {"MoveIntersectingLines", PyvtkImageCroppingRegionsWidget_MoveIntersectingLines, METH_VARARGS,
   "V.MoveIntersectingLines()\nC++: void MoveIntersectingLines()\n\nCallbacks for user interaction.\n"},
  {"UpdateCursorIcon", PyvtkImageCroppingRegionsWidget_UpdateCursorIcon, METH_VARARGS,
   "V.UpdateCursorIcon()\nC++: void UpdateCursorIcon()\n\nCallbacks for user interaction.\n"},
  {"OnButtonPress", PyvtkImageCroppingRegionsWidget_OnButtonPress, METH_VARARGS,
   "V.OnButtonPress()\nC++: void OnButtonPress()\n\nCallbacks for user interaction.\n"},
  {"OnButtonRelease", PyvtkImageCroppingRegionsWidget_OnButtonRelease, METH_VARARGS,
   "V.OnButtonRelease()\nC++: void OnButtonRelease()\n\nCallbacks for user interaction.\n"},
  {"OnMouseMove", PyvtkImageCroppingRegionsWidget_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove()\n\nCallbacks for user interaction.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCroppingRegionsWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImageCroppingRegionsWidget", // tp_name
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
  PyvtkImageCroppingRegionsWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCroppingRegionsWidget_StaticNew()
{
  return vtkImageCroppingRegionsWidget::New();
}

PyObject *PyvtkImageCroppingRegionsWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCroppingRegionsWidget_Type, PyvtkImageCroppingRegionsWidget_Methods,
    "vtkImageCroppingRegionsWidget",
 &PyvtkImageCroppingRegionsWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCroppingRegionsWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);
  PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);

  o = (PyObject *)&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type;
  if (PyDict_SetItemString(d, "WidgetEventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SLICE_ORIENTATION_YZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_YZ },
        { "SLICE_ORIENTATION_XZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XZ },
        { "SLICE_ORIENTATION_XY", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XY },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 1; c++)
  {
    typedef vtkImageCroppingRegionsWidget::WidgetEventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[1] = {
        { "CroppingPlanesPositionChangedEvent", vtkImageCroppingRegionsWidget::CroppingPlanesPositionChangedEvent },
      };

    o = PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCroppingRegionsWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCroppingRegionsWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCroppingRegionsWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

