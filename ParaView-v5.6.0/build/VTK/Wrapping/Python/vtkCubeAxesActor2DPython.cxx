// python wrapper for vtkCubeAxesActor2D
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
#include "vtkCubeAxesActor2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCubeAxesActor2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCubeAxesActor2D_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkCubeAxesActor2D_Doc =
  "vtkCubeAxesActor2D - create a 2D plot of a bounding box edges - used\nfor navigation\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkCubeAxesActor2D is a composite actor that draws three axes of the\n"
  "bounding box of an input dataset. The axes include labels and titles\n"
  "for the x-y-z axes. The algorithm selects the axes that are on the\n"
  "\"exterior\" of the bounding box, exterior as determined from examining\n"
  "outer edges of the bounding box in projection (display) space.\n"
  "Alternatively, the edges closest to the viewer (i.e., camera\n"
  "position) can be drawn.\n\n"
  "To use this object you must define a bounding box and the camera used\n"
  "to render the vtkCubeAxesActor2D. The camera is used to control the\n"
  "scaling and position of the vtkCubeAxesActor2D so that it fits in the\n"
  "viewport and always remains visible.)\n\n"
  "The font property of the axes titles and labels can be modified\n"
  "through the AxisTitleTextProperty and AxisLabelTextProperty\n"
  "attributes. You may also use the GetXAxisActor2D, GetYAxisActor2D or\n"
  "GetZAxisActor2D methods to access each individual axis actor to\n"
  "modify their font properties.\n\n"
  "The bounding box to use is defined in one of three ways. First, if\n"
  "the Input ivar is defined, then the input dataset's bounds is used.\n"
  "If the Input is not defined, and the Prop (superclass of all actors)\n"
  "is defined, then the Prop's bounds is used. If neither the Input or\n"
  "Prop is defined, then the Bounds instance variable (an array of six\n"
  "doubles) is used.\n\n"
  "@sa\n"
  "vtkActor2D vtkAxisActor2D vtkXYPlotActor vtkTextProperty\n\n";

static PyTypeObject PyvtkCubeAxesActor2D_FlyMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor2D.FlyMode", // tp_name
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

PyObject *PyvtkCubeAxesActor2D_FlyMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCubeAxesActor2D_FlyMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCubeAxesActor2D_FlyMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCubeAxesActor2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCubeAxesActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCubeAxesActor2D *tempr = vtkCubeAxesActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCubeAxesActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesActor2D::NewInstance());

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
PyvtkCubeAxesActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCubeAxesActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCubeAxesActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCubeAxesActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCubeAxesActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkCubeAxesActor2D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->SetViewProp(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkCubeAxesActor2D::GetViewProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor2D_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCubeAxesActor2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor2D::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::GetBounds(temp0);
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
PyvtkCubeAxesActor2D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCubeAxesActor2D_GetBounds_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetBounds_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetBounds_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRanges(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor2D_SetRanges_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetRanges_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRanges");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRanges() :
      op->vtkCubeAxesActor2D::GetRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor2D::GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
    }

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->GetRanges(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::GetRanges(temp0);
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
PyvtkCubeAxesActor2D_GetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCubeAxesActor2D_GetRanges_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetRanges_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetRanges_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRanges");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor2D_SetXOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetXOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetYOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetZOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRanges(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetUseRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseRanges() :
      op->vtkCubeAxesActor2D::GetUseRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangesOn();
    }
    else
    {
      op->vtkCubeAxesActor2D::UseRangesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangesOff();
    }
    else
    {
      op->vtkCubeAxesActor2D::UseRangesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCubeAxesActor2D::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlyMode(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetFlyMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMinValue() :
      op->vtkCubeAxesActor2D::GetFlyModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMaxValue() :
      op->vtkCubeAxesActor2D::GetFlyModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyMode() :
      op->vtkCubeAxesActor2D::GetFlyMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToOuterEdges();
    }
    else
    {
      op->vtkCubeAxesActor2D::SetFlyModeToOuterEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToClosestTriad();
    }
    else
    {
      op->vtkCubeAxesActor2D::SetFlyModeToClosestTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToNone();
    }
    else
    {
      op->vtkCubeAxesActor2D::SetFlyModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkCubeAxesActor2D::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkCubeAxesActor2D::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkCubeAxesActor2D::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkCubeAxesActor2D::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkCubeAxesActor2D::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkCubeAxesActor2D::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXLabel(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetXLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXLabel() :
      op->vtkCubeAxesActor2D::GetXLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYLabel(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetYLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYLabel() :
      op->vtkCubeAxesActor2D::GetYLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZLabel(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetZLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZLabel() :
      op->vtkCubeAxesActor2D::GetZLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisActor2D() :
      op->vtkCubeAxesActor2D::GetXAxisActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisActor2D() :
      op->vtkCubeAxesActor2D::GetYAxisActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetZAxisActor2D() :
      op->vtkCubeAxesActor2D::GetZAxisActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleTextProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetAxisTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisTitleTextProperty() :
      op->vtkCubeAxesActor2D::GetAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelTextProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetAxisLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelTextProperty() :
      op->vtkCubeAxesActor2D::GetAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCubeAxesActor2D::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkCubeAxesActor2D::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFactor(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetFontFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMinValue() :
      op->vtkCubeAxesActor2D::GetFontFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMaxValue() :
      op->vtkCubeAxesActor2D::GetFontFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactor() :
      op->vtkCubeAxesActor2D::GetFontFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInertia(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetInertia(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMinValue() :
      op->vtkCubeAxesActor2D::GetInertiaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMaxValue() :
      op->vtkCubeAxesActor2D::GetInertiaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertia() :
      op->vtkCubeAxesActor2D::GetInertia());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowActualBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetShowActualBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBoundsMinValue() :
      op->vtkCubeAxesActor2D::GetShowActualBoundsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBoundsMaxValue() :
      op->vtkCubeAxesActor2D::GetShowActualBoundsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBounds() :
      op->vtkCubeAxesActor2D::GetShowActualBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetCornerOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCubeAxesActor2D::GetCornerOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetXAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXAxisVisibility() :
      op->vtkCubeAxesActor2D::GetXAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor2D::XAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor2D::XAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetYAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYAxisVisibility() :
      op->vtkCubeAxesActor2D::GetYAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor2D::YAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor2D::YAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::SetZAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZAxisVisibility() :
      op->vtkCubeAxesActor2D::GetZAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCubeAxesActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCubeAxesActor2D"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCubeAxesActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor2D_Methods[] = {
  {"IsTypeOf", PyvtkCubeAxesActor2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCubeAxesActor2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCubeAxesActor2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCubeAxesActor2D\nC++: static vtkCubeAxesActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCubeAxesActor2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCubeAxesActor2D\nC++: vtkCubeAxesActor2D *NewInstance()\n\n"},
  {"RenderOverlay", PyvtkCubeAxesActor2D_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderOpaqueGeometry", PyvtkCubeAxesActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetInputConnection", PyvtkCubeAxesActor2D_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {"SetInputData", PyvtkCubeAxesActor2D_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {"GetInput", PyvtkCubeAxesActor2D_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {"SetViewProp", PyvtkCubeAxesActor2D_SetViewProp, METH_VARARGS,
   "V.SetViewProp(vtkProp)\nC++: void SetViewProp(vtkProp *prop)\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {"GetViewProp", PyvtkCubeAxesActor2D_GetViewProp, METH_VARARGS,
   "V.GetViewProp() -> vtkProp\nC++: virtual vtkProp *GetViewProp()\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {"SetBounds", PyvtkCubeAxesActor2D_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkCubeAxesActor2D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {"SetRanges", PyvtkCubeAxesActor2D_SetRanges, METH_VARARGS,
   "V.SetRanges(float, float, float, float, float, float)\nC++: void SetRanges(double, double, double, double, double,\n    double)\nV.SetRanges((float, float, float, float, float, float))\nC++: void SetRanges(double a[6])\n\n"},
  {"GetRanges", PyvtkCubeAxesActor2D_GetRanges, METH_VARARGS,
   "V.GetRanges() -> (float, float, float, float, float, float)\nC++: double *GetRanges()\nV.GetRanges(float, float, float, float, float, float)\nC++: void GetRanges(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetRanges([float, float, float, float, float, float])\nC++: void GetRanges(double ranges[6])\n\nExplicitly specify the range of values used on the bounds. The\nranges are specified according to (xmin,xmax, ymin,ymax,\nzmin,zmax), making sure that the min's are less than the max's.\n"},
  {"SetXOrigin", PyvtkCubeAxesActor2D_SetXOrigin, METH_VARARGS,
   "V.SetXOrigin(float)\nC++: virtual void SetXOrigin(double _arg)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {"SetYOrigin", PyvtkCubeAxesActor2D_SetYOrigin, METH_VARARGS,
   "V.SetYOrigin(float)\nC++: virtual void SetYOrigin(double _arg)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {"SetZOrigin", PyvtkCubeAxesActor2D_SetZOrigin, METH_VARARGS,
   "V.SetZOrigin(float)\nC++: virtual void SetZOrigin(double _arg)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {"SetUseRanges", PyvtkCubeAxesActor2D_SetUseRanges, METH_VARARGS,
   "V.SetUseRanges(int)\nC++: virtual void SetUseRanges(vtkTypeBool _arg)\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {"GetUseRanges", PyvtkCubeAxesActor2D_GetUseRanges, METH_VARARGS,
   "V.GetUseRanges() -> int\nC++: virtual vtkTypeBool GetUseRanges()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {"UseRangesOn", PyvtkCubeAxesActor2D_UseRangesOn, METH_VARARGS,
   "V.UseRangesOn()\nC++: virtual void UseRangesOn()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {"UseRangesOff", PyvtkCubeAxesActor2D_UseRangesOff, METH_VARARGS,
   "V.UseRangesOff()\nC++: virtual void UseRangesOff()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {"SetCamera", PyvtkCubeAxesActor2D_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {"GetCamera", PyvtkCubeAxesActor2D_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {"SetFlyMode", PyvtkCubeAxesActor2D_SetFlyMode, METH_VARARGS,
   "V.SetFlyMode(int)\nC++: virtual void SetFlyMode(int _arg)\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"GetFlyModeMinValue", PyvtkCubeAxesActor2D_GetFlyModeMinValue, METH_VARARGS,
   "V.GetFlyModeMinValue() -> int\nC++: virtual int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"GetFlyModeMaxValue", PyvtkCubeAxesActor2D_GetFlyModeMaxValue, METH_VARARGS,
   "V.GetFlyModeMaxValue() -> int\nC++: virtual int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"GetFlyMode", PyvtkCubeAxesActor2D_GetFlyMode, METH_VARARGS,
   "V.GetFlyMode() -> int\nC++: virtual int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"SetFlyModeToOuterEdges", PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges, METH_VARARGS,
   "V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"SetFlyModeToClosestTriad", PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad, METH_VARARGS,
   "V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"SetFlyModeToNone", PyvtkCubeAxesActor2D_SetFlyModeToNone, METH_VARARGS,
   "V.SetFlyModeToNone()\nC++: void SetFlyModeToNone()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {"SetScaling", PyvtkCubeAxesActor2D_SetScaling, METH_VARARGS,
   "V.SetScaling(int)\nC++: virtual void SetScaling(vtkTypeBool _arg)\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {"GetScaling", PyvtkCubeAxesActor2D_GetScaling, METH_VARARGS,
   "V.GetScaling() -> int\nC++: virtual vtkTypeBool GetScaling()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {"ScalingOn", PyvtkCubeAxesActor2D_ScalingOn, METH_VARARGS,
   "V.ScalingOn()\nC++: virtual void ScalingOn()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {"ScalingOff", PyvtkCubeAxesActor2D_ScalingOff, METH_VARARGS,
   "V.ScalingOff()\nC++: virtual void ScalingOff()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {"SetNumberOfLabels", PyvtkCubeAxesActor2D_SetNumberOfLabels, METH_VARARGS,
   "V.SetNumberOfLabels(int)\nC++: virtual void SetNumberOfLabels(int _arg)\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {"GetNumberOfLabelsMinValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue, METH_VARARGS,
   "V.GetNumberOfLabelsMinValue() -> int\nC++: virtual int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {"GetNumberOfLabelsMaxValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue, METH_VARARGS,
   "V.GetNumberOfLabelsMaxValue() -> int\nC++: virtual int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {"GetNumberOfLabels", PyvtkCubeAxesActor2D_GetNumberOfLabels, METH_VARARGS,
   "V.GetNumberOfLabels() -> int\nC++: virtual int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {"SetXLabel", PyvtkCubeAxesActor2D_SetXLabel, METH_VARARGS,
   "V.SetXLabel(string)\nC++: virtual void SetXLabel(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"GetXLabel", PyvtkCubeAxesActor2D_GetXLabel, METH_VARARGS,
   "V.GetXLabel() -> string\nC++: virtual char *GetXLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"SetYLabel", PyvtkCubeAxesActor2D_SetYLabel, METH_VARARGS,
   "V.SetYLabel(string)\nC++: virtual void SetYLabel(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"GetYLabel", PyvtkCubeAxesActor2D_GetYLabel, METH_VARARGS,
   "V.GetYLabel() -> string\nC++: virtual char *GetYLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"SetZLabel", PyvtkCubeAxesActor2D_SetZLabel, METH_VARARGS,
   "V.SetZLabel(string)\nC++: virtual void SetZLabel(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"GetZLabel", PyvtkCubeAxesActor2D_GetZLabel, METH_VARARGS,
   "V.GetZLabel() -> string\nC++: virtual char *GetZLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {"GetXAxisActor2D", PyvtkCubeAxesActor2D_GetXAxisActor2D, METH_VARARGS,
   "V.GetXAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {"GetYAxisActor2D", PyvtkCubeAxesActor2D_GetYAxisActor2D, METH_VARARGS,
   "V.GetYAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\n"},
  {"GetZAxisActor2D", PyvtkCubeAxesActor2D_GetZAxisActor2D, METH_VARARGS,
   "V.GetZAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetZAxisActor2D()\n\n"},
  {"SetAxisTitleTextProperty", PyvtkCubeAxesActor2D_SetAxisTitleTextProperty, METH_VARARGS,
   "V.SetAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {"GetAxisTitleTextProperty", PyvtkCubeAxesActor2D_GetAxisTitleTextProperty, METH_VARARGS,
   "V.GetAxisTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAxisTitleTextProperty()\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {"SetAxisLabelTextProperty", PyvtkCubeAxesActor2D_SetAxisLabelTextProperty, METH_VARARGS,
   "V.SetAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {"GetAxisLabelTextProperty", PyvtkCubeAxesActor2D_GetAxisLabelTextProperty, METH_VARARGS,
   "V.GetAxisLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAxisLabelTextProperty()\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {"SetLabelFormat", PyvtkCubeAxesActor2D_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"GetLabelFormat", PyvtkCubeAxesActor2D_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"SetFontFactor", PyvtkCubeAxesActor2D_SetFontFactor, METH_VARARGS,
   "V.SetFontFactor(float)\nC++: virtual void SetFontFactor(double _arg)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {"GetFontFactorMinValue", PyvtkCubeAxesActor2D_GetFontFactorMinValue, METH_VARARGS,
   "V.GetFontFactorMinValue() -> float\nC++: virtual double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {"GetFontFactorMaxValue", PyvtkCubeAxesActor2D_GetFontFactorMaxValue, METH_VARARGS,
   "V.GetFontFactorMaxValue() -> float\nC++: virtual double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {"GetFontFactor", PyvtkCubeAxesActor2D_GetFontFactor, METH_VARARGS,
   "V.GetFontFactor() -> float\nC++: virtual double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {"SetInertia", PyvtkCubeAxesActor2D_SetInertia, METH_VARARGS,
   "V.SetInertia(int)\nC++: virtual void SetInertia(int _arg)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertiaMinValue", PyvtkCubeAxesActor2D_GetInertiaMinValue, METH_VARARGS,
   "V.GetInertiaMinValue() -> int\nC++: virtual int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertiaMaxValue", PyvtkCubeAxesActor2D_GetInertiaMaxValue, METH_VARARGS,
   "V.GetInertiaMaxValue() -> int\nC++: virtual int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertia", PyvtkCubeAxesActor2D_GetInertia, METH_VARARGS,
   "V.GetInertia() -> int\nC++: virtual int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"SetShowActualBounds", PyvtkCubeAxesActor2D_SetShowActualBounds, METH_VARARGS,
   "V.SetShowActualBounds(int)\nC++: virtual void SetShowActualBounds(int _arg)\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {"GetShowActualBoundsMinValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue, METH_VARARGS,
   "V.GetShowActualBoundsMinValue() -> int\nC++: virtual int GetShowActualBoundsMinValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {"GetShowActualBoundsMaxValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue, METH_VARARGS,
   "V.GetShowActualBoundsMaxValue() -> int\nC++: virtual int GetShowActualBoundsMaxValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {"GetShowActualBounds", PyvtkCubeAxesActor2D_GetShowActualBounds, METH_VARARGS,
   "V.GetShowActualBounds() -> int\nC++: virtual int GetShowActualBounds()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {"SetCornerOffset", PyvtkCubeAxesActor2D_SetCornerOffset, METH_VARARGS,
   "V.SetCornerOffset(float)\nC++: virtual void SetCornerOffset(double _arg)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {"GetCornerOffset", PyvtkCubeAxesActor2D_GetCornerOffset, METH_VARARGS,
   "V.GetCornerOffset() -> float\nC++: virtual double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {"ReleaseGraphicsResources", PyvtkCubeAxesActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetXAxisVisibility", PyvtkCubeAxesActor2D_SetXAxisVisibility, METH_VARARGS,
   "V.SetXAxisVisibility(int)\nC++: virtual void SetXAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetXAxisVisibility", PyvtkCubeAxesActor2D_GetXAxisVisibility, METH_VARARGS,
   "V.GetXAxisVisibility() -> int\nC++: virtual vtkTypeBool GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"XAxisVisibilityOn", PyvtkCubeAxesActor2D_XAxisVisibilityOn, METH_VARARGS,
   "V.XAxisVisibilityOn()\nC++: virtual void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"XAxisVisibilityOff", PyvtkCubeAxesActor2D_XAxisVisibilityOff, METH_VARARGS,
   "V.XAxisVisibilityOff()\nC++: virtual void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"SetYAxisVisibility", PyvtkCubeAxesActor2D_SetYAxisVisibility, METH_VARARGS,
   "V.SetYAxisVisibility(int)\nC++: virtual void SetYAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetYAxisVisibility", PyvtkCubeAxesActor2D_GetYAxisVisibility, METH_VARARGS,
   "V.GetYAxisVisibility() -> int\nC++: virtual vtkTypeBool GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"YAxisVisibilityOn", PyvtkCubeAxesActor2D_YAxisVisibilityOn, METH_VARARGS,
   "V.YAxisVisibilityOn()\nC++: virtual void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"YAxisVisibilityOff", PyvtkCubeAxesActor2D_YAxisVisibilityOff, METH_VARARGS,
   "V.YAxisVisibilityOff()\nC++: virtual void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"SetZAxisVisibility", PyvtkCubeAxesActor2D_SetZAxisVisibility, METH_VARARGS,
   "V.SetZAxisVisibility(int)\nC++: virtual void SetZAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetZAxisVisibility", PyvtkCubeAxesActor2D_GetZAxisVisibility, METH_VARARGS,
   "V.GetZAxisVisibility() -> int\nC++: virtual vtkTypeBool GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"ZAxisVisibilityOn", PyvtkCubeAxesActor2D_ZAxisVisibilityOn, METH_VARARGS,
   "V.ZAxisVisibilityOn()\nC++: virtual void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"ZAxisVisibilityOff", PyvtkCubeAxesActor2D_ZAxisVisibilityOff, METH_VARARGS,
   "V.ZAxisVisibilityOff()\nC++: virtual void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"ShallowCopy", PyvtkCubeAxesActor2D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkCubeAxesActor2D)\nC++: void ShallowCopy(vtkCubeAxesActor2D *actor)\n\nShallow copy of a CubeAxesActor2D.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCubeAxesActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor2D", // tp_name
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
  PyvtkCubeAxesActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCubeAxesActor2D_StaticNew()
{
  return vtkCubeAxesActor2D::New();
}

PyObject *PyvtkCubeAxesActor2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCubeAxesActor2D_Type, PyvtkCubeAxesActor2D_Methods,
    "vtkCubeAxesActor2D",
 &PyvtkCubeAxesActor2D_StaticNew);

  PyTypeObject *pytype = &PyvtkCubeAxesActor2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor2D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCubeAxesActor2D_FlyMode_Type);
  PyvtkCubeAxesActor2D_FlyMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCubeAxesActor2D_FlyMode_Type);

  o = (PyObject *)&PyvtkCubeAxesActor2D_FlyMode_Type;
  if (PyDict_SetItemString(d, "FlyMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_FLY_OUTER_EDGES", vtkCubeAxesActor2D::VTK_FLY_OUTER_EDGES },
        { "VTK_FLY_CLOSEST_TRIAD", vtkCubeAxesActor2D::VTK_FLY_CLOSEST_TRIAD },
        { "VTK_FLY_NONE", vtkCubeAxesActor2D::VTK_FLY_NONE },
      };

    o = PyvtkCubeAxesActor2D_FlyMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCubeAxesActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCubeAxesActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCubeAxesActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

