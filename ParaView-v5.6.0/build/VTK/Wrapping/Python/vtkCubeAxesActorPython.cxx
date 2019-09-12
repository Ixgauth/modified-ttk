// python wrapper for vtkCubeAxesActor
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
#include "vtkCubeAxesActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCubeAxesActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCubeAxesActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static const char *PyvtkCubeAxesActor_Doc =
  "vtkCubeAxesActor - create a plot of a bounding box edges - used for\nnavigation\n\n"
  "Superclass: vtkActor\n\n"
  "vtkCubeAxesActor is a composite actor that draws axes of the bounding\n"
  "box of an input dataset. The axes include labels and titles for the\n"
  "x-y-z axes. The algorithm selects which axes to draw based on the\n"
  "user-defined 'fly' mode.  (STATIC is default). 'STATIC' constructs\n"
  "axes from all edges of the bounding box. 'CLOSEST_TRIAD' consists of\n"
  "the three axes x-y-z forming a triad that lies closest to the\n"
  "specified camera. 'FURTHEST_TRIAD' consists of the three axes x-y-z\n"
  "forming a triad that lies furthest from the specified camera.\n"
  "'OUTER_EDGES' is constructed from edges that are on the \"exterior\" of\n"
  "the bounding box, exterior as determined from examining outer edges\n"
  "of the bounding box in projection (display) space.\n\n"
  "To use this object you must define a bounding box and the camera used\n"
  "to render the vtkCubeAxesActor. You can optionally turn on/off\n"
  "labels, ticks, gridlines, and set tick location, number of labels,\n"
  "and text to use for axis-titles.  A 'corner offset' can also be set. \n"
  "This allows the axes to be set partially away from the actual\n"
  "bounding box to perhaps prevent overlap of labels between the various\n"
  "axes.\n\n"
  "The Bounds instance variable (an array of six doubles) is used to\n"
  "determine the bounding box.\n\n"
  "@par Thanks: This class was written by: Hank Childs, Kathleen\n"
  "Bonnell, Amy Squillacote, Brad Whitlock, Will Schroeder, Eric\n"
  "Brugger, Daniel Aguilera, Claire Guilbaud, Nicolas Dolegieviez,\n"
  "Aashish Chaudhary, Philippe Pebay, David Gobbi, David Partyka,\n"
  "Utkarsh Ayachit David Cole, Francois Bertel, and Mark Olesen Part of\n"
  "this work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtkActor vtkAxisActor vtkCubeAxesActor2D\n\n";

static PyTypeObject PyvtkCubeAxesActor_FlyMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor.FlyMode", // tp_name
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

PyObject *PyvtkCubeAxesActor_FlyMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCubeAxesActor_FlyMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCubeAxesActor_FlyMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkCubeAxesActor_TickLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor.TickLocation", // tp_name
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

PyObject *PyvtkCubeAxesActor_TickLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCubeAxesActor_TickLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCubeAxesActor_TickLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkCubeAxesActor_GridVisibility_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor.GridVisibility", // tp_name
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

PyObject *PyvtkCubeAxesActor_GridVisibility_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCubeAxesActor_GridVisibility_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCubeAxesActor_GridVisibility_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCubeAxesActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCubeAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCubeAxesActor *tempr = vtkCubeAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCubeAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesActor::NewInstance());

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
PyvtkCubeAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCubeAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCubeAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCubeAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRebuildAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetRebuildAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRebuildAxes() :
      op->vtkCubeAxesActor::GetRebuildAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCubeAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::GetBounds(temp0);
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
PyvtkCubeAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCubeAxesActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::GetRenderedBounds(temp0);
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
PyvtkCubeAxesActor_GetRenderedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRenderedBounds() :
      op->vtkCubeAxesActor::GetRenderedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCubeAxesActor_GetRenderedBounds_s1(self, args);
    case 0:
      return PyvtkCubeAxesActor_GetRenderedBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRenderedBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetXAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetXAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisRange");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetYAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetYAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisRange");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetZAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetZAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxisRange");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetXAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxisRange() :
      op->vtkCubeAxesActor::GetXAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxisRange() :
      op->vtkCubeAxesActor::GetYAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAxisLabels(temp0) :
      op->vtkCubeAxesActor::GetAxisLabels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZAxisRange() :
      op->vtkCubeAxesActor::GetZAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkCubeAxesActor::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
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
      op->vtkCubeAxesActor::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkCubeAxesActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkCubeAxesActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCubeAxesActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetFlyMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMinValue() :
      op->vtkCubeAxesActor::GetFlyModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMaxValue() :
      op->vtkCubeAxesActor::GetFlyModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyMode() :
      op->vtkCubeAxesActor::GetFlyMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToOuterEdges();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToOuterEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToClosestTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToClosestTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToFurthestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToFurthestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToFurthestTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToFurthestTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToStaticTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToStaticTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToStaticEdges();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToStaticEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCubeAxesActor::SetXTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXTitle() :
      op->vtkCubeAxesActor::GetXTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXUnits() :
      op->vtkCubeAxesActor::GetXUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCubeAxesActor::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkCubeAxesActor::GetYTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYUnits() :
      op->vtkCubeAxesActor::GetYUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCubeAxesActor::SetZTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZTitle() :
      op->vtkCubeAxesActor::GetZTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZUnits() :
      op->vtkCubeAxesActor::GetZUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXLabelFormat() :
      op->vtkCubeAxesActor::GetXLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYLabelFormat() :
      op->vtkCubeAxesActor::GetYLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZLabelFormat() :
      op->vtkCubeAxesActor::GetZLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetInertia(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMinValue() :
      op->vtkCubeAxesActor::GetInertiaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMaxValue() :
      op->vtkCubeAxesActor::GetInertiaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertia() :
      op->vtkCubeAxesActor::GetInertia());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetCornerOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCubeAxesActor::GetCornerOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDistanceLOD(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkCubeAxesActor::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceLODThreshold(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkCubeAxesActor::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableViewAngleLOD(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkCubeAxesActor::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleLODThreshold(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkCubeAxesActor::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetXAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXAxisVisibility() :
      op->vtkCubeAxesActor::GetXAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetYAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYAxisVisibility() :
      op->vtkCubeAxesActor::GetYAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetZAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZAxisVisibility() :
      op->vtkCubeAxesActor::GetZAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetXAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetYAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetZAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXAxisTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYAxisTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZAxisTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawXGridlines() :
      op->vtkCubeAxesActor::GetDrawXGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawYGridlines() :
      op->vtkCubeAxesActor::GetDrawYGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawZGridlines() :
      op->vtkCubeAxesActor::GetDrawZGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawXInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawXInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawYInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawYInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawZInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawZInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawXGridpolys() :
      op->vtkCubeAxesActor::GetDrawXGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawYGridpolys() :
      op->vtkCubeAxesActor::GetDrawYGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawZGridpolys() :
      op->vtkCubeAxesActor::GetDrawZGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkCubeAxesActor::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkCubeAxesActor::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesLinesProperty() :
      op->vtkCubeAxesActor::GetXAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesLinesProperty() :
      op->vtkCubeAxesActor::GetYAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesLinesProperty() :
      op->vtkCubeAxesActor::GetZAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetXAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetYAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetZAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocation(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkCubeAxesActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkCubeAxesActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkCubeAxesActor::GetTickLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToInside();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToInside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToOutside();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToOutside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToBoth();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetLabelScaling(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCubeAxesActor::SetLabelScaling(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTextActor3D(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseTextActor3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkCubeAxesActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse2DMode(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkCubeAxesActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTitlePosition(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetSaveTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientedBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor_SetOrientedBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetOrientedBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientedBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientedBounds() :
      op->vtkCubeAxesActor::GetOrientedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOrientedBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseOrientedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOrientedBounds() :
      op->vtkCubeAxesActor::GetUseOrientedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForX(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForX(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkCubeAxesActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForY(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForY(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkCubeAxesActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForZ(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkCubeAxesActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisOrigin_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisOrigin");
  return nullptr;
}



static PyObject *
PyvtkCubeAxesActor_GetAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisOrigin() :
      op->vtkCubeAxesActor::GetAxisOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAxisOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseAxisOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseAxisOrigin() :
      op->vtkCubeAxesActor::GetUseAxisOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridLineLocation(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetGridLineLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridLineLocation() :
      op->vtkCubeAxesActor::GetGridLineLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStickyAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetStickyAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStickyAxes() :
      op->vtkCubeAxesActor::GetStickyAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StickyAxesOn();
    }
    else
    {
      op->vtkCubeAxesActor::StickyAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StickyAxesOff();
    }
    else
    {
      op->vtkCubeAxesActor::StickyAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterStickyAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetCenterStickyAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterStickyAxes() :
      op->vtkCubeAxesActor::GetCenterStickyAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterStickyAxesOn();
    }
    else
    {
      op->vtkCubeAxesActor::CenterStickyAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterStickyAxesOff();
    }
    else
    {
      op->vtkCubeAxesActor::CenterStickyAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkCubeAxesActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCubeAxesActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCubeAxesActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCubeAxesActor\nC++: static vtkCubeAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCubeAxesActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *NewInstance()\n\n"},
  {"RenderOpaqueGeometry", PyvtkCubeAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderTranslucentGeometry", PyvtkCubeAxesActor_RenderTranslucentGeometry, METH_VARARGS,
   "V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderOverlay", PyvtkCubeAxesActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"SetRebuildAxes", PyvtkCubeAxesActor_SetRebuildAxes, METH_VARARGS,
   "V.SetRebuildAxes(bool)\nC++: virtual void SetRebuildAxes(bool _arg)\n\nGets/Sets the RebuildAxes flag\n"},
  {"GetRebuildAxes", PyvtkCubeAxesActor_GetRebuildAxes, METH_VARARGS,
   "V.GetRebuildAxes() -> bool\nC++: virtual bool GetRebuildAxes()\n\nGets/Sets the RebuildAxes flag\n"},
  {"SetBounds", PyvtkCubeAxesActor_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkCubeAxesActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {"GetRenderedBounds", PyvtkCubeAxesActor_GetRenderedBounds, METH_VARARGS,
   "V.GetRenderedBounds([float, float, float, float, float, float])\nC++: virtual void GetRenderedBounds(double rBounds[6])\nV.GetRenderedBounds() -> (float, ...)\nC++: virtual double *GetRenderedBounds()\n\nMethod used to properly return the bounds of the cube axis itself\nwith all its labels.\n"},
  {"SetXAxisRange", PyvtkCubeAxesActor_SetXAxisRange, METH_VARARGS,
   "V.SetXAxisRange(float, float)\nC++: void SetXAxisRange(double, double)\nV.SetXAxisRange((float, float))\nC++: void SetXAxisRange(double a[2])\n\n"},
  {"SetYAxisRange", PyvtkCubeAxesActor_SetYAxisRange, METH_VARARGS,
   "V.SetYAxisRange(float, float)\nC++: void SetYAxisRange(double, double)\nV.SetYAxisRange((float, float))\nC++: void SetYAxisRange(double a[2])\n\n"},
  {"SetZAxisRange", PyvtkCubeAxesActor_SetZAxisRange, METH_VARARGS,
   "V.SetZAxisRange(float, float)\nC++: void SetZAxisRange(double, double)\nV.SetZAxisRange((float, float))\nC++: void SetZAxisRange(double a[2])\n\n"},
  {"GetXAxisRange", PyvtkCubeAxesActor_GetXAxisRange, METH_VARARGS,
   "V.GetXAxisRange() -> (float, float)\nC++: double *GetXAxisRange()\n\n"},
  {"GetYAxisRange", PyvtkCubeAxesActor_GetYAxisRange, METH_VARARGS,
   "V.GetYAxisRange() -> (float, float)\nC++: double *GetYAxisRange()\n\n"},
  {"GetAxisLabels", PyvtkCubeAxesActor_GetAxisLabels, METH_VARARGS,
   "V.GetAxisLabels(int) -> vtkStringArray\nC++: vtkStringArray *GetAxisLabels(int axis)\n\nExplicitly specify the axis labels along an axis as an array of\nstrings instead of using the values.\n"},
  {"SetAxisLabels", PyvtkCubeAxesActor_SetAxisLabels, METH_VARARGS,
   "V.SetAxisLabels(int, vtkStringArray)\nC++: void SetAxisLabels(int axis, vtkStringArray *value)\n\nExplicitly specify the axis labels along an axis as an array of\nstrings instead of using the values.\n"},
  {"GetZAxisRange", PyvtkCubeAxesActor_GetZAxisRange, METH_VARARGS,
   "V.GetZAxisRange() -> (float, float)\nC++: double *GetZAxisRange()\n\n"},
  {"SetScreenSize", PyvtkCubeAxesActor_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(float)\nC++: void SetScreenSize(double screenSize)\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default is 10.0.\n"},
  {"GetScreenSize", PyvtkCubeAxesActor_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> float\nC++: virtual double GetScreenSize()\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default is 10.0.\n"},
  {"SetLabelOffset", PyvtkCubeAxesActor_SetLabelOffset, METH_VARARGS,
   "V.SetLabelOffset(float)\nC++: void SetLabelOffset(double offset)\n\nExplicitly specify the distance between labels and the axis.\nDefault is 20.0.\n"},
  {"GetLabelOffset", PyvtkCubeAxesActor_GetLabelOffset, METH_VARARGS,
   "V.GetLabelOffset() -> float\nC++: virtual double GetLabelOffset()\n\nExplicitly specify the distance between labels and the axis.\nDefault is 20.0.\n"},
  {"SetTitleOffset", PyvtkCubeAxesActor_SetTitleOffset, METH_VARARGS,
   "V.SetTitleOffset(float)\nC++: void SetTitleOffset(double offset)\n\nExplicitly specify the distance between title and labels. Default\nis 20.0.\n"},
  {"GetTitleOffset", PyvtkCubeAxesActor_GetTitleOffset, METH_VARARGS,
   "V.GetTitleOffset() -> float\nC++: virtual double GetTitleOffset()\n\nExplicitly specify the distance between title and labels. Default\nis 20.0.\n"},
  {"SetCamera", PyvtkCubeAxesActor_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {"GetCamera", PyvtkCubeAxesActor_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {"SetFlyMode", PyvtkCubeAxesActor_SetFlyMode, METH_VARARGS,
   "V.SetFlyMode(int)\nC++: virtual void SetFlyMode(int _arg)\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"GetFlyModeMinValue", PyvtkCubeAxesActor_GetFlyModeMinValue, METH_VARARGS,
   "V.GetFlyModeMinValue() -> int\nC++: virtual int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"GetFlyModeMaxValue", PyvtkCubeAxesActor_GetFlyModeMaxValue, METH_VARARGS,
   "V.GetFlyModeMaxValue() -> int\nC++: virtual int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"GetFlyMode", PyvtkCubeAxesActor_GetFlyMode, METH_VARARGS,
   "V.GetFlyMode() -> int\nC++: virtual int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetFlyModeToOuterEdges", PyvtkCubeAxesActor_SetFlyModeToOuterEdges, METH_VARARGS,
   "V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetFlyModeToClosestTriad", PyvtkCubeAxesActor_SetFlyModeToClosestTriad, METH_VARARGS,
   "V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetFlyModeToFurthestTriad", PyvtkCubeAxesActor_SetFlyModeToFurthestTriad, METH_VARARGS,
   "V.SetFlyModeToFurthestTriad()\nC++: void SetFlyModeToFurthestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetFlyModeToStaticTriad", PyvtkCubeAxesActor_SetFlyModeToStaticTriad, METH_VARARGS,
   "V.SetFlyModeToStaticTriad()\nC++: void SetFlyModeToStaticTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetFlyModeToStaticEdges", PyvtkCubeAxesActor_SetFlyModeToStaticEdges, METH_VARARGS,
   "V.SetFlyModeToStaticEdges()\nC++: void SetFlyModeToStaticEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {"SetXTitle", PyvtkCubeAxesActor_SetXTitle, METH_VARARGS,
   "V.SetXTitle(string)\nC++: virtual void SetXTitle(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetXTitle", PyvtkCubeAxesActor_GetXTitle, METH_VARARGS,
   "V.GetXTitle() -> string\nC++: virtual char *GetXTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetXUnits", PyvtkCubeAxesActor_SetXUnits, METH_VARARGS,
   "V.SetXUnits(string)\nC++: virtual void SetXUnits(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetXUnits", PyvtkCubeAxesActor_GetXUnits, METH_VARARGS,
   "V.GetXUnits() -> string\nC++: virtual char *GetXUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetYTitle", PyvtkCubeAxesActor_SetYTitle, METH_VARARGS,
   "V.SetYTitle(string)\nC++: virtual void SetYTitle(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetYTitle", PyvtkCubeAxesActor_GetYTitle, METH_VARARGS,
   "V.GetYTitle() -> string\nC++: virtual char *GetYTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetYUnits", PyvtkCubeAxesActor_SetYUnits, METH_VARARGS,
   "V.SetYUnits(string)\nC++: virtual void SetYUnits(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetYUnits", PyvtkCubeAxesActor_GetYUnits, METH_VARARGS,
   "V.GetYUnits() -> string\nC++: virtual char *GetYUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetZTitle", PyvtkCubeAxesActor_SetZTitle, METH_VARARGS,
   "V.SetZTitle(string)\nC++: virtual void SetZTitle(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetZTitle", PyvtkCubeAxesActor_GetZTitle, METH_VARARGS,
   "V.GetZTitle() -> string\nC++: virtual char *GetZTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetZUnits", PyvtkCubeAxesActor_SetZUnits, METH_VARARGS,
   "V.SetZUnits(string)\nC++: virtual void SetZUnits(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetZUnits", PyvtkCubeAxesActor_GetZUnits, METH_VARARGS,
   "V.GetZUnits() -> string\nC++: virtual char *GetZUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"SetXLabelFormat", PyvtkCubeAxesActor_SetXLabelFormat, METH_VARARGS,
   "V.SetXLabelFormat(string)\nC++: virtual void SetXLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"GetXLabelFormat", PyvtkCubeAxesActor_GetXLabelFormat, METH_VARARGS,
   "V.GetXLabelFormat() -> string\nC++: virtual char *GetXLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"SetYLabelFormat", PyvtkCubeAxesActor_SetYLabelFormat, METH_VARARGS,
   "V.SetYLabelFormat(string)\nC++: virtual void SetYLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"GetYLabelFormat", PyvtkCubeAxesActor_GetYLabelFormat, METH_VARARGS,
   "V.GetYLabelFormat() -> string\nC++: virtual char *GetYLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"SetZLabelFormat", PyvtkCubeAxesActor_SetZLabelFormat, METH_VARARGS,
   "V.SetZLabelFormat(string)\nC++: virtual void SetZLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"GetZLabelFormat", PyvtkCubeAxesActor_GetZLabelFormat, METH_VARARGS,
   "V.GetZLabelFormat() -> string\nC++: virtual char *GetZLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"SetInertia", PyvtkCubeAxesActor_SetInertia, METH_VARARGS,
   "V.SetInertia(int)\nC++: virtual void SetInertia(int _arg)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertiaMinValue", PyvtkCubeAxesActor_GetInertiaMinValue, METH_VARARGS,
   "V.GetInertiaMinValue() -> int\nC++: virtual int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertiaMaxValue", PyvtkCubeAxesActor_GetInertiaMaxValue, METH_VARARGS,
   "V.GetInertiaMaxValue() -> int\nC++: virtual int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"GetInertia", PyvtkCubeAxesActor_GetInertia, METH_VARARGS,
   "V.GetInertia() -> int\nC++: virtual int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {"SetCornerOffset", PyvtkCubeAxesActor_SetCornerOffset, METH_VARARGS,
   "V.SetCornerOffset(float)\nC++: virtual void SetCornerOffset(double _arg)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {"GetCornerOffset", PyvtkCubeAxesActor_GetCornerOffset, METH_VARARGS,
   "V.GetCornerOffset() -> float\nC++: virtual double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {"ReleaseGraphicsResources", PyvtkCubeAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetEnableDistanceLOD", PyvtkCubeAxesActor_SetEnableDistanceLOD, METH_VARARGS,
   "V.SetEnableDistanceLOD(int)\nC++: virtual void SetEnableDistanceLOD(int _arg)\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {"GetEnableDistanceLOD", PyvtkCubeAxesActor_GetEnableDistanceLOD, METH_VARARGS,
   "V.GetEnableDistanceLOD() -> int\nC++: virtual int GetEnableDistanceLOD()\n\nEnable and disable the use of distance based LOD for titles and\nlabels.\n"},
  {"SetDistanceLODThreshold", PyvtkCubeAxesActor_SetDistanceLODThreshold, METH_VARARGS,
   "V.SetDistanceLODThreshold(float)\nC++: virtual void SetDistanceLODThreshold(double _arg)\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetDistanceLODThresholdMinValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMinValue() -> float\nC++: virtual double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetDistanceLODThresholdMaxValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMaxValue() -> float\nC++: virtual double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetDistanceLODThreshold", PyvtkCubeAxesActor_GetDistanceLODThreshold, METH_VARARGS,
   "V.GetDistanceLODThreshold() -> float\nC++: virtual double GetDistanceLODThreshold()\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"SetEnableViewAngleLOD", PyvtkCubeAxesActor_SetEnableViewAngleLOD, METH_VARARGS,
   "V.SetEnableViewAngleLOD(int)\nC++: virtual void SetEnableViewAngleLOD(int _arg)\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {"GetEnableViewAngleLOD", PyvtkCubeAxesActor_GetEnableViewAngleLOD, METH_VARARGS,
   "V.GetEnableViewAngleLOD() -> int\nC++: virtual int GetEnableViewAngleLOD()\n\nEnable and disable the use of view angle based LOD for titles and\nlabels.\n"},
  {"SetViewAngleLODThreshold", PyvtkCubeAxesActor_SetViewAngleLODThreshold, METH_VARARGS,
   "V.SetViewAngleLODThreshold(float)\nC++: virtual void SetViewAngleLODThreshold(double _arg)\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetViewAngleLODThresholdMinValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMinValue() -> float\nC++: virtual double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetViewAngleLODThresholdMaxValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMaxValue() -> float\nC++: virtual double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"GetViewAngleLODThreshold", PyvtkCubeAxesActor_GetViewAngleLODThreshold, METH_VARARGS,
   "V.GetViewAngleLODThreshold() -> float\nC++: virtual double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\n"},
  {"SetXAxisVisibility", PyvtkCubeAxesActor_SetXAxisVisibility, METH_VARARGS,
   "V.SetXAxisVisibility(int)\nC++: virtual void SetXAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetXAxisVisibility", PyvtkCubeAxesActor_GetXAxisVisibility, METH_VARARGS,
   "V.GetXAxisVisibility() -> int\nC++: virtual vtkTypeBool GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"XAxisVisibilityOn", PyvtkCubeAxesActor_XAxisVisibilityOn, METH_VARARGS,
   "V.XAxisVisibilityOn()\nC++: virtual void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"XAxisVisibilityOff", PyvtkCubeAxesActor_XAxisVisibilityOff, METH_VARARGS,
   "V.XAxisVisibilityOff()\nC++: virtual void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"SetYAxisVisibility", PyvtkCubeAxesActor_SetYAxisVisibility, METH_VARARGS,
   "V.SetYAxisVisibility(int)\nC++: virtual void SetYAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetYAxisVisibility", PyvtkCubeAxesActor_GetYAxisVisibility, METH_VARARGS,
   "V.GetYAxisVisibility() -> int\nC++: virtual vtkTypeBool GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"YAxisVisibilityOn", PyvtkCubeAxesActor_YAxisVisibilityOn, METH_VARARGS,
   "V.YAxisVisibilityOn()\nC++: virtual void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"YAxisVisibilityOff", PyvtkCubeAxesActor_YAxisVisibilityOff, METH_VARARGS,
   "V.YAxisVisibilityOff()\nC++: virtual void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"SetZAxisVisibility", PyvtkCubeAxesActor_SetZAxisVisibility, METH_VARARGS,
   "V.SetZAxisVisibility(int)\nC++: virtual void SetZAxisVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of each axis.\n"},
  {"GetZAxisVisibility", PyvtkCubeAxesActor_GetZAxisVisibility, METH_VARARGS,
   "V.GetZAxisVisibility() -> int\nC++: virtual vtkTypeBool GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {"ZAxisVisibilityOn", PyvtkCubeAxesActor_ZAxisVisibilityOn, METH_VARARGS,
   "V.ZAxisVisibilityOn()\nC++: virtual void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {"ZAxisVisibilityOff", PyvtkCubeAxesActor_ZAxisVisibilityOff, METH_VARARGS,
   "V.ZAxisVisibilityOff()\nC++: virtual void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {"SetXAxisLabelVisibility", PyvtkCubeAxesActor_SetXAxisLabelVisibility, METH_VARARGS,
   "V.SetXAxisLabelVisibility(int)\nC++: virtual void SetXAxisLabelVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of labels for each axis.\n"},
  {"GetXAxisLabelVisibility", PyvtkCubeAxesActor_GetXAxisLabelVisibility, METH_VARARGS,
   "V.GetXAxisLabelVisibility() -> int\nC++: virtual vtkTypeBool GetXAxisLabelVisibility()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {"XAxisLabelVisibilityOn", PyvtkCubeAxesActor_XAxisLabelVisibilityOn, METH_VARARGS,
   "V.XAxisLabelVisibilityOn()\nC++: virtual void XAxisLabelVisibilityOn()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {"XAxisLabelVisibilityOff", PyvtkCubeAxesActor_XAxisLabelVisibilityOff, METH_VARARGS,
   "V.XAxisLabelVisibilityOff()\nC++: virtual void XAxisLabelVisibilityOff()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {"SetYAxisLabelVisibility", PyvtkCubeAxesActor_SetYAxisLabelVisibility, METH_VARARGS,
   "V.SetYAxisLabelVisibility(int)\nC++: virtual void SetYAxisLabelVisibility(vtkTypeBool _arg)\n\n"},
  {"GetYAxisLabelVisibility", PyvtkCubeAxesActor_GetYAxisLabelVisibility, METH_VARARGS,
   "V.GetYAxisLabelVisibility() -> int\nC++: virtual vtkTypeBool GetYAxisLabelVisibility()\n\n"},
  {"YAxisLabelVisibilityOn", PyvtkCubeAxesActor_YAxisLabelVisibilityOn, METH_VARARGS,
   "V.YAxisLabelVisibilityOn()\nC++: virtual void YAxisLabelVisibilityOn()\n\n"},
  {"YAxisLabelVisibilityOff", PyvtkCubeAxesActor_YAxisLabelVisibilityOff, METH_VARARGS,
   "V.YAxisLabelVisibilityOff()\nC++: virtual void YAxisLabelVisibilityOff()\n\n"},
  {"SetZAxisLabelVisibility", PyvtkCubeAxesActor_SetZAxisLabelVisibility, METH_VARARGS,
   "V.SetZAxisLabelVisibility(int)\nC++: virtual void SetZAxisLabelVisibility(vtkTypeBool _arg)\n\n"},
  {"GetZAxisLabelVisibility", PyvtkCubeAxesActor_GetZAxisLabelVisibility, METH_VARARGS,
   "V.GetZAxisLabelVisibility() -> int\nC++: virtual vtkTypeBool GetZAxisLabelVisibility()\n\n"},
  {"ZAxisLabelVisibilityOn", PyvtkCubeAxesActor_ZAxisLabelVisibilityOn, METH_VARARGS,
   "V.ZAxisLabelVisibilityOn()\nC++: virtual void ZAxisLabelVisibilityOn()\n\n"},
  {"ZAxisLabelVisibilityOff", PyvtkCubeAxesActor_ZAxisLabelVisibilityOff, METH_VARARGS,
   "V.ZAxisLabelVisibilityOff()\nC++: virtual void ZAxisLabelVisibilityOff()\n\n"},
  {"SetXAxisTickVisibility", PyvtkCubeAxesActor_SetXAxisTickVisibility, METH_VARARGS,
   "V.SetXAxisTickVisibility(int)\nC++: virtual void SetXAxisTickVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {"GetXAxisTickVisibility", PyvtkCubeAxesActor_GetXAxisTickVisibility, METH_VARARGS,
   "V.GetXAxisTickVisibility() -> int\nC++: virtual vtkTypeBool GetXAxisTickVisibility()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {"XAxisTickVisibilityOn", PyvtkCubeAxesActor_XAxisTickVisibilityOn, METH_VARARGS,
   "V.XAxisTickVisibilityOn()\nC++: virtual void XAxisTickVisibilityOn()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {"XAxisTickVisibilityOff", PyvtkCubeAxesActor_XAxisTickVisibilityOff, METH_VARARGS,
   "V.XAxisTickVisibilityOff()\nC++: virtual void XAxisTickVisibilityOff()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {"SetYAxisTickVisibility", PyvtkCubeAxesActor_SetYAxisTickVisibility, METH_VARARGS,
   "V.SetYAxisTickVisibility(int)\nC++: virtual void SetYAxisTickVisibility(vtkTypeBool _arg)\n\n"},
  {"GetYAxisTickVisibility", PyvtkCubeAxesActor_GetYAxisTickVisibility, METH_VARARGS,
   "V.GetYAxisTickVisibility() -> int\nC++: virtual vtkTypeBool GetYAxisTickVisibility()\n\n"},
  {"YAxisTickVisibilityOn", PyvtkCubeAxesActor_YAxisTickVisibilityOn, METH_VARARGS,
   "V.YAxisTickVisibilityOn()\nC++: virtual void YAxisTickVisibilityOn()\n\n"},
  {"YAxisTickVisibilityOff", PyvtkCubeAxesActor_YAxisTickVisibilityOff, METH_VARARGS,
   "V.YAxisTickVisibilityOff()\nC++: virtual void YAxisTickVisibilityOff()\n\n"},
  {"SetZAxisTickVisibility", PyvtkCubeAxesActor_SetZAxisTickVisibility, METH_VARARGS,
   "V.SetZAxisTickVisibility(int)\nC++: virtual void SetZAxisTickVisibility(vtkTypeBool _arg)\n\n"},
  {"GetZAxisTickVisibility", PyvtkCubeAxesActor_GetZAxisTickVisibility, METH_VARARGS,
   "V.GetZAxisTickVisibility() -> int\nC++: virtual vtkTypeBool GetZAxisTickVisibility()\n\n"},
  {"ZAxisTickVisibilityOn", PyvtkCubeAxesActor_ZAxisTickVisibilityOn, METH_VARARGS,
   "V.ZAxisTickVisibilityOn()\nC++: virtual void ZAxisTickVisibilityOn()\n\n"},
  {"ZAxisTickVisibilityOff", PyvtkCubeAxesActor_ZAxisTickVisibilityOff, METH_VARARGS,
   "V.ZAxisTickVisibilityOff()\nC++: virtual void ZAxisTickVisibilityOff()\n\n"},
  {"SetXAxisMinorTickVisibility", PyvtkCubeAxesActor_SetXAxisMinorTickVisibility, METH_VARARGS,
   "V.SetXAxisMinorTickVisibility(int)\nC++: virtual void SetXAxisMinorTickVisibility(vtkTypeBool _arg)\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {"GetXAxisMinorTickVisibility", PyvtkCubeAxesActor_GetXAxisMinorTickVisibility, METH_VARARGS,
   "V.GetXAxisMinorTickVisibility() -> int\nC++: virtual vtkTypeBool GetXAxisMinorTickVisibility()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {"XAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn, METH_VARARGS,
   "V.XAxisMinorTickVisibilityOn()\nC++: virtual void XAxisMinorTickVisibilityOn()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {"XAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff, METH_VARARGS,
   "V.XAxisMinorTickVisibilityOff()\nC++: virtual void XAxisMinorTickVisibilityOff()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {"SetYAxisMinorTickVisibility", PyvtkCubeAxesActor_SetYAxisMinorTickVisibility, METH_VARARGS,
   "V.SetYAxisMinorTickVisibility(int)\nC++: virtual void SetYAxisMinorTickVisibility(vtkTypeBool _arg)\n\n"},
  {"GetYAxisMinorTickVisibility", PyvtkCubeAxesActor_GetYAxisMinorTickVisibility, METH_VARARGS,
   "V.GetYAxisMinorTickVisibility() -> int\nC++: virtual vtkTypeBool GetYAxisMinorTickVisibility()\n\n"},
  {"YAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn, METH_VARARGS,
   "V.YAxisMinorTickVisibilityOn()\nC++: virtual void YAxisMinorTickVisibilityOn()\n\n"},
  {"YAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff, METH_VARARGS,
   "V.YAxisMinorTickVisibilityOff()\nC++: virtual void YAxisMinorTickVisibilityOff()\n\n"},
  {"SetZAxisMinorTickVisibility", PyvtkCubeAxesActor_SetZAxisMinorTickVisibility, METH_VARARGS,
   "V.SetZAxisMinorTickVisibility(int)\nC++: virtual void SetZAxisMinorTickVisibility(vtkTypeBool _arg)\n\n"},
  {"GetZAxisMinorTickVisibility", PyvtkCubeAxesActor_GetZAxisMinorTickVisibility, METH_VARARGS,
   "V.GetZAxisMinorTickVisibility() -> int\nC++: virtual vtkTypeBool GetZAxisMinorTickVisibility()\n\n"},
  {"ZAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn, METH_VARARGS,
   "V.ZAxisMinorTickVisibilityOn()\nC++: virtual void ZAxisMinorTickVisibilityOn()\n\n"},
  {"ZAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff, METH_VARARGS,
   "V.ZAxisMinorTickVisibilityOff()\nC++: virtual void ZAxisMinorTickVisibilityOff()\n\n"},
  {"SetDrawXGridlines", PyvtkCubeAxesActor_SetDrawXGridlines, METH_VARARGS,
   "V.SetDrawXGridlines(int)\nC++: virtual void SetDrawXGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawXGridlines", PyvtkCubeAxesActor_GetDrawXGridlines, METH_VARARGS,
   "V.GetDrawXGridlines() -> int\nC++: virtual vtkTypeBool GetDrawXGridlines()\n\n"},
  {"DrawXGridlinesOn", PyvtkCubeAxesActor_DrawXGridlinesOn, METH_VARARGS,
   "V.DrawXGridlinesOn()\nC++: virtual void DrawXGridlinesOn()\n\n"},
  {"DrawXGridlinesOff", PyvtkCubeAxesActor_DrawXGridlinesOff, METH_VARARGS,
   "V.DrawXGridlinesOff()\nC++: virtual void DrawXGridlinesOff()\n\n"},
  {"SetDrawYGridlines", PyvtkCubeAxesActor_SetDrawYGridlines, METH_VARARGS,
   "V.SetDrawYGridlines(int)\nC++: virtual void SetDrawYGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawYGridlines", PyvtkCubeAxesActor_GetDrawYGridlines, METH_VARARGS,
   "V.GetDrawYGridlines() -> int\nC++: virtual vtkTypeBool GetDrawYGridlines()\n\n"},
  {"DrawYGridlinesOn", PyvtkCubeAxesActor_DrawYGridlinesOn, METH_VARARGS,
   "V.DrawYGridlinesOn()\nC++: virtual void DrawYGridlinesOn()\n\n"},
  {"DrawYGridlinesOff", PyvtkCubeAxesActor_DrawYGridlinesOff, METH_VARARGS,
   "V.DrawYGridlinesOff()\nC++: virtual void DrawYGridlinesOff()\n\n"},
  {"SetDrawZGridlines", PyvtkCubeAxesActor_SetDrawZGridlines, METH_VARARGS,
   "V.SetDrawZGridlines(int)\nC++: virtual void SetDrawZGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawZGridlines", PyvtkCubeAxesActor_GetDrawZGridlines, METH_VARARGS,
   "V.GetDrawZGridlines() -> int\nC++: virtual vtkTypeBool GetDrawZGridlines()\n\n"},
  {"DrawZGridlinesOn", PyvtkCubeAxesActor_DrawZGridlinesOn, METH_VARARGS,
   "V.DrawZGridlinesOn()\nC++: virtual void DrawZGridlinesOn()\n\n"},
  {"DrawZGridlinesOff", PyvtkCubeAxesActor_DrawZGridlinesOff, METH_VARARGS,
   "V.DrawZGridlinesOff()\nC++: virtual void DrawZGridlinesOff()\n\n"},
  {"SetDrawXInnerGridlines", PyvtkCubeAxesActor_SetDrawXInnerGridlines, METH_VARARGS,
   "V.SetDrawXInnerGridlines(int)\nC++: virtual void SetDrawXInnerGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawXInnerGridlines", PyvtkCubeAxesActor_GetDrawXInnerGridlines, METH_VARARGS,
   "V.GetDrawXInnerGridlines() -> int\nC++: virtual vtkTypeBool GetDrawXInnerGridlines()\n\n"},
  {"DrawXInnerGridlinesOn", PyvtkCubeAxesActor_DrawXInnerGridlinesOn, METH_VARARGS,
   "V.DrawXInnerGridlinesOn()\nC++: virtual void DrawXInnerGridlinesOn()\n\n"},
  {"DrawXInnerGridlinesOff", PyvtkCubeAxesActor_DrawXInnerGridlinesOff, METH_VARARGS,
   "V.DrawXInnerGridlinesOff()\nC++: virtual void DrawXInnerGridlinesOff()\n\n"},
  {"SetDrawYInnerGridlines", PyvtkCubeAxesActor_SetDrawYInnerGridlines, METH_VARARGS,
   "V.SetDrawYInnerGridlines(int)\nC++: virtual void SetDrawYInnerGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawYInnerGridlines", PyvtkCubeAxesActor_GetDrawYInnerGridlines, METH_VARARGS,
   "V.GetDrawYInnerGridlines() -> int\nC++: virtual vtkTypeBool GetDrawYInnerGridlines()\n\n"},
  {"DrawYInnerGridlinesOn", PyvtkCubeAxesActor_DrawYInnerGridlinesOn, METH_VARARGS,
   "V.DrawYInnerGridlinesOn()\nC++: virtual void DrawYInnerGridlinesOn()\n\n"},
  {"DrawYInnerGridlinesOff", PyvtkCubeAxesActor_DrawYInnerGridlinesOff, METH_VARARGS,
   "V.DrawYInnerGridlinesOff()\nC++: virtual void DrawYInnerGridlinesOff()\n\n"},
  {"SetDrawZInnerGridlines", PyvtkCubeAxesActor_SetDrawZInnerGridlines, METH_VARARGS,
   "V.SetDrawZInnerGridlines(int)\nC++: virtual void SetDrawZInnerGridlines(vtkTypeBool _arg)\n\n"},
  {"GetDrawZInnerGridlines", PyvtkCubeAxesActor_GetDrawZInnerGridlines, METH_VARARGS,
   "V.GetDrawZInnerGridlines() -> int\nC++: virtual vtkTypeBool GetDrawZInnerGridlines()\n\n"},
  {"DrawZInnerGridlinesOn", PyvtkCubeAxesActor_DrawZInnerGridlinesOn, METH_VARARGS,
   "V.DrawZInnerGridlinesOn()\nC++: virtual void DrawZInnerGridlinesOn()\n\n"},
  {"DrawZInnerGridlinesOff", PyvtkCubeAxesActor_DrawZInnerGridlinesOff, METH_VARARGS,
   "V.DrawZInnerGridlinesOff()\nC++: virtual void DrawZInnerGridlinesOff()\n\n"},
  {"SetDrawXGridpolys", PyvtkCubeAxesActor_SetDrawXGridpolys, METH_VARARGS,
   "V.SetDrawXGridpolys(int)\nC++: virtual void SetDrawXGridpolys(vtkTypeBool _arg)\n\n"},
  {"GetDrawXGridpolys", PyvtkCubeAxesActor_GetDrawXGridpolys, METH_VARARGS,
   "V.GetDrawXGridpolys() -> int\nC++: virtual vtkTypeBool GetDrawXGridpolys()\n\n"},
  {"DrawXGridpolysOn", PyvtkCubeAxesActor_DrawXGridpolysOn, METH_VARARGS,
   "V.DrawXGridpolysOn()\nC++: virtual void DrawXGridpolysOn()\n\n"},
  {"DrawXGridpolysOff", PyvtkCubeAxesActor_DrawXGridpolysOff, METH_VARARGS,
   "V.DrawXGridpolysOff()\nC++: virtual void DrawXGridpolysOff()\n\n"},
  {"SetDrawYGridpolys", PyvtkCubeAxesActor_SetDrawYGridpolys, METH_VARARGS,
   "V.SetDrawYGridpolys(int)\nC++: virtual void SetDrawYGridpolys(vtkTypeBool _arg)\n\n"},
  {"GetDrawYGridpolys", PyvtkCubeAxesActor_GetDrawYGridpolys, METH_VARARGS,
   "V.GetDrawYGridpolys() -> int\nC++: virtual vtkTypeBool GetDrawYGridpolys()\n\n"},
  {"DrawYGridpolysOn", PyvtkCubeAxesActor_DrawYGridpolysOn, METH_VARARGS,
   "V.DrawYGridpolysOn()\nC++: virtual void DrawYGridpolysOn()\n\n"},
  {"DrawYGridpolysOff", PyvtkCubeAxesActor_DrawYGridpolysOff, METH_VARARGS,
   "V.DrawYGridpolysOff()\nC++: virtual void DrawYGridpolysOff()\n\n"},
  {"SetDrawZGridpolys", PyvtkCubeAxesActor_SetDrawZGridpolys, METH_VARARGS,
   "V.SetDrawZGridpolys(int)\nC++: virtual void SetDrawZGridpolys(vtkTypeBool _arg)\n\n"},
  {"GetDrawZGridpolys", PyvtkCubeAxesActor_GetDrawZGridpolys, METH_VARARGS,
   "V.GetDrawZGridpolys() -> int\nC++: virtual vtkTypeBool GetDrawZGridpolys()\n\n"},
  {"DrawZGridpolysOn", PyvtkCubeAxesActor_DrawZGridpolysOn, METH_VARARGS,
   "V.DrawZGridpolysOn()\nC++: virtual void DrawZGridpolysOn()\n\n"},
  {"DrawZGridpolysOff", PyvtkCubeAxesActor_DrawZGridpolysOff, METH_VARARGS,
   "V.DrawZGridpolysOff()\nC++: virtual void DrawZGridpolysOff()\n\n"},
  {"GetTitleTextProperty", PyvtkCubeAxesActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int)\n\nReturns the text property for the title on an axis.\n"},
  {"GetLabelTextProperty", PyvtkCubeAxesActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty(int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int)\n\nReturns the text property for the labels on an axis.\n"},
  {"SetXAxesLinesProperty", PyvtkCubeAxesActor_SetXAxesLinesProperty, METH_VARARGS,
   "V.SetXAxesLinesProperty(vtkProperty)\nC++: void SetXAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {"GetXAxesLinesProperty", PyvtkCubeAxesActor_GetXAxesLinesProperty, METH_VARARGS,
   "V.GetXAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {"SetYAxesLinesProperty", PyvtkCubeAxesActor_SetYAxesLinesProperty, METH_VARARGS,
   "V.SetYAxesLinesProperty(vtkProperty)\nC++: void SetYAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {"GetYAxesLinesProperty", PyvtkCubeAxesActor_GetYAxesLinesProperty, METH_VARARGS,
   "V.GetYAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {"SetZAxesLinesProperty", PyvtkCubeAxesActor_SetZAxesLinesProperty, METH_VARARGS,
   "V.SetZAxesLinesProperty(vtkProperty)\nC++: void SetZAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {"GetZAxesLinesProperty", PyvtkCubeAxesActor_GetZAxesLinesProperty, METH_VARARGS,
   "V.GetZAxesLinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesLinesProperty()\n\nGet/Set axes actors properties.\n"},
  {"SetXAxesGridlinesProperty", PyvtkCubeAxesActor_SetXAxesGridlinesProperty, METH_VARARGS,
   "V.SetXAxesGridlinesProperty(vtkProperty)\nC++: void SetXAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"GetXAxesGridlinesProperty", PyvtkCubeAxesActor_GetXAxesGridlinesProperty, METH_VARARGS,
   "V.GetXAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"SetYAxesGridlinesProperty", PyvtkCubeAxesActor_SetYAxesGridlinesProperty, METH_VARARGS,
   "V.SetYAxesGridlinesProperty(vtkProperty)\nC++: void SetYAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"GetYAxesGridlinesProperty", PyvtkCubeAxesActor_GetYAxesGridlinesProperty, METH_VARARGS,
   "V.GetYAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"SetZAxesGridlinesProperty", PyvtkCubeAxesActor_SetZAxesGridlinesProperty, METH_VARARGS,
   "V.SetZAxesGridlinesProperty(vtkProperty)\nC++: void SetZAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"GetZAxesGridlinesProperty", PyvtkCubeAxesActor_GetZAxesGridlinesProperty, METH_VARARGS,
   "V.GetZAxesGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesGridlinesProperty()\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"SetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty, METH_VARARGS,
   "V.SetXAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetXAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"GetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty, METH_VARARGS,
   "V.GetXAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"SetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty, METH_VARARGS,
   "V.SetYAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetYAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"GetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty, METH_VARARGS,
   "V.GetYAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"SetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty, METH_VARARGS,
   "V.SetZAxesInnerGridlinesProperty(vtkProperty)\nC++: void SetZAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"GetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty, METH_VARARGS,
   "V.GetZAxesInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesInnerGridlinesProperty()\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"SetXAxesGridpolysProperty", PyvtkCubeAxesActor_SetXAxesGridpolysProperty, METH_VARARGS,
   "V.SetXAxesGridpolysProperty(vtkProperty)\nC++: void SetXAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {"GetXAxesGridpolysProperty", PyvtkCubeAxesActor_GetXAxesGridpolysProperty, METH_VARARGS,
   "V.GetXAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetXAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {"SetYAxesGridpolysProperty", PyvtkCubeAxesActor_SetYAxesGridpolysProperty, METH_VARARGS,
   "V.SetYAxesGridpolysProperty(vtkProperty)\nC++: void SetYAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {"GetYAxesGridpolysProperty", PyvtkCubeAxesActor_GetYAxesGridpolysProperty, METH_VARARGS,
   "V.GetYAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetYAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {"SetZAxesGridpolysProperty", PyvtkCubeAxesActor_SetZAxesGridpolysProperty, METH_VARARGS,
   "V.SetZAxesGridpolysProperty(vtkProperty)\nC++: void SetZAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {"GetZAxesGridpolysProperty", PyvtkCubeAxesActor_GetZAxesGridpolysProperty, METH_VARARGS,
   "V.GetZAxesGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetZAxesGridpolysProperty()\n\nGet/Set axes gridPolys actors properties.\n"},
  {"SetTickLocation", PyvtkCubeAxesActor_SetTickLocation, METH_VARARGS,
   "V.SetTickLocation(int)\nC++: virtual void SetTickLocation(int _arg)\n\nSet/Get the location of ticks marks.\n"},
  {"GetTickLocationMinValue", PyvtkCubeAxesActor_GetTickLocationMinValue, METH_VARARGS,
   "V.GetTickLocationMinValue() -> int\nC++: virtual int GetTickLocationMinValue()\n\nSet/Get the location of ticks marks.\n"},
  {"GetTickLocationMaxValue", PyvtkCubeAxesActor_GetTickLocationMaxValue, METH_VARARGS,
   "V.GetTickLocationMaxValue() -> int\nC++: virtual int GetTickLocationMaxValue()\n\nSet/Get the location of ticks marks.\n"},
  {"GetTickLocation", PyvtkCubeAxesActor_GetTickLocation, METH_VARARGS,
   "V.GetTickLocation() -> int\nC++: virtual int GetTickLocation()\n\nSet/Get the location of ticks marks.\n"},
  {"SetTickLocationToInside", PyvtkCubeAxesActor_SetTickLocationToInside, METH_VARARGS,
   "V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {"SetTickLocationToOutside", PyvtkCubeAxesActor_SetTickLocationToOutside, METH_VARARGS,
   "V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {"SetTickLocationToBoth", PyvtkCubeAxesActor_SetTickLocationToBoth, METH_VARARGS,
   "V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {"SetLabelScaling", PyvtkCubeAxesActor_SetLabelScaling, METH_VARARGS,
   "V.SetLabelScaling(bool, int, int, int)\nC++: void SetLabelScaling(bool, int, int, int)\n\n"},
  {"SetUseTextActor3D", PyvtkCubeAxesActor_SetUseTextActor3D, METH_VARARGS,
   "V.SetUseTextActor3D(int)\nC++: void SetUseTextActor3D(int val)\n\nUse or not vtkTextActor3D for titles and labels. See Also:\nvtkAxisActor::SetUseTextActor3D(),\nvtkAxisActor::GetUseTextActor3D()\n"},
  {"GetUseTextActor3D", PyvtkCubeAxesActor_GetUseTextActor3D, METH_VARARGS,
   "V.GetUseTextActor3D() -> int\nC++: int GetUseTextActor3D()\n\nUse or not vtkTextActor3D for titles and labels. See Also:\nvtkAxisActor::SetUseTextActor3D(),\nvtkAxisActor::GetUseTextActor3D()\n"},
  {"SetUse2DMode", PyvtkCubeAxesActor_SetUse2DMode, METH_VARARGS,
   "V.SetUse2DMode(int)\nC++: void SetUse2DMode(int val)\n\nGet/Set 2D mode NB: Use vtkTextActor for titles in 2D instead of\nvtkAxisFollower\n"},
  {"GetUse2DMode", PyvtkCubeAxesActor_GetUse2DMode, METH_VARARGS,
   "V.GetUse2DMode() -> int\nC++: int GetUse2DMode()\n\nGet/Set 2D mode NB: Use vtkTextActor for titles in 2D instead of\nvtkAxisFollower\n"},
  {"SetSaveTitlePosition", PyvtkCubeAxesActor_SetSaveTitlePosition, METH_VARARGS,
   "V.SetSaveTitlePosition(int)\nC++: void SetSaveTitlePosition(int val)\n\nFor 2D mode only: save axis title positions for later use\n"},
  {"SetOrientedBounds", PyvtkCubeAxesActor_SetOrientedBounds, METH_VARARGS,
   "V.SetOrientedBounds(float, float, float, float, float, float)\nC++: void SetOrientedBounds(double, double, double, double,\n    double, double)\nV.SetOrientedBounds((float, float, float, float, float, float))\nC++: void SetOrientedBounds(double a[6])\n\n"},
  {"GetOrientedBounds", PyvtkCubeAxesActor_GetOrientedBounds, METH_VARARGS,
   "V.GetOrientedBounds() -> (float, float, float, float, float,\n    float)\nC++: double *GetOrientedBounds()\n\n"},
  {"SetUseOrientedBounds", PyvtkCubeAxesActor_SetUseOrientedBounds, METH_VARARGS,
   "V.SetUseOrientedBounds(int)\nC++: virtual void SetUseOrientedBounds(int _arg)\n\nEnable/Disable the usage of the OrientedBounds\n"},
  {"GetUseOrientedBounds", PyvtkCubeAxesActor_GetUseOrientedBounds, METH_VARARGS,
   "V.GetUseOrientedBounds() -> int\nC++: virtual int GetUseOrientedBounds()\n\nEnable/Disable the usage of the OrientedBounds\n"},
  {"SetAxisBaseForX", PyvtkCubeAxesActor_SetAxisBaseForX, METH_VARARGS,
   "V.SetAxisBaseForX(float, float, float)\nC++: void SetAxisBaseForX(double, double, double)\nV.SetAxisBaseForX((float, float, float))\nC++: void SetAxisBaseForX(double a[3])\n\n"},
  {"GetAxisBaseForX", PyvtkCubeAxesActor_GetAxisBaseForX, METH_VARARGS,
   "V.GetAxisBaseForX() -> (float, float, float)\nC++: double *GetAxisBaseForX()\n\n"},
  {"SetAxisBaseForY", PyvtkCubeAxesActor_SetAxisBaseForY, METH_VARARGS,
   "V.SetAxisBaseForY(float, float, float)\nC++: void SetAxisBaseForY(double, double, double)\nV.SetAxisBaseForY((float, float, float))\nC++: void SetAxisBaseForY(double a[3])\n\n"},
  {"GetAxisBaseForY", PyvtkCubeAxesActor_GetAxisBaseForY, METH_VARARGS,
   "V.GetAxisBaseForY() -> (float, float, float)\nC++: double *GetAxisBaseForY()\n\n"},
  {"SetAxisBaseForZ", PyvtkCubeAxesActor_SetAxisBaseForZ, METH_VARARGS,
   "V.SetAxisBaseForZ(float, float, float)\nC++: void SetAxisBaseForZ(double, double, double)\nV.SetAxisBaseForZ((float, float, float))\nC++: void SetAxisBaseForZ(double a[3])\n\n"},
  {"GetAxisBaseForZ", PyvtkCubeAxesActor_GetAxisBaseForZ, METH_VARARGS,
   "V.GetAxisBaseForZ() -> (float, float, float)\nC++: double *GetAxisBaseForZ()\n\n"},
  {"SetAxisOrigin", PyvtkCubeAxesActor_SetAxisOrigin, METH_VARARGS,
   "V.SetAxisOrigin(float, float, float)\nC++: void SetAxisOrigin(double, double, double)\nV.SetAxisOrigin((float, float, float))\nC++: void SetAxisOrigin(double a[3])\n\n"},
  {"GetAxisOrigin", PyvtkCubeAxesActor_GetAxisOrigin, METH_VARARGS,
   "V.GetAxisOrigin() -> (float, float, float)\nC++: double *GetAxisOrigin()\n\n"},
  {"SetUseAxisOrigin", PyvtkCubeAxesActor_SetUseAxisOrigin, METH_VARARGS,
   "V.SetUseAxisOrigin(int)\nC++: virtual void SetUseAxisOrigin(int _arg)\n\nEnable/Disable the usage of the AxisOrigin\n"},
  {"GetUseAxisOrigin", PyvtkCubeAxesActor_GetUseAxisOrigin, METH_VARARGS,
   "V.GetUseAxisOrigin() -> int\nC++: virtual int GetUseAxisOrigin()\n\nEnable/Disable the usage of the AxisOrigin\n"},
  {"SetGridLineLocation", PyvtkCubeAxesActor_SetGridLineLocation, METH_VARARGS,
   "V.SetGridLineLocation(int)\nC++: virtual void SetGridLineLocation(int _arg)\n\nSpecify the mode in which the cube axes should render its\ngridLines\n"},
  {"GetGridLineLocation", PyvtkCubeAxesActor_GetGridLineLocation, METH_VARARGS,
   "V.GetGridLineLocation() -> int\nC++: virtual int GetGridLineLocation()\n\nSpecify the mode in which the cube axes should render its\ngridLines\n"},
  {"SetStickyAxes", PyvtkCubeAxesActor_SetStickyAxes, METH_VARARGS,
   "V.SetStickyAxes(int)\nC++: virtual void SetStickyAxes(vtkTypeBool _arg)\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {"GetStickyAxes", PyvtkCubeAxesActor_GetStickyAxes, METH_VARARGS,
   "V.GetStickyAxes() -> int\nC++: virtual vtkTypeBool GetStickyAxes()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {"StickyAxesOn", PyvtkCubeAxesActor_StickyAxesOn, METH_VARARGS,
   "V.StickyAxesOn()\nC++: virtual void StickyAxesOn()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {"StickyAxesOff", PyvtkCubeAxesActor_StickyAxesOff, METH_VARARGS,
   "V.StickyAxesOff()\nC++: virtual void StickyAxesOff()\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Defaults to\noff.\n"},
  {"SetCenterStickyAxes", PyvtkCubeAxesActor_SetCenterStickyAxes, METH_VARARGS,
   "V.SetCenterStickyAxes(int)\nC++: virtual void SetCenterStickyAxes(vtkTypeBool _arg)\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {"GetCenterStickyAxes", PyvtkCubeAxesActor_GetCenterStickyAxes, METH_VARARGS,
   "V.GetCenterStickyAxes() -> int\nC++: virtual vtkTypeBool GetCenterStickyAxes()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {"CenterStickyAxesOn", PyvtkCubeAxesActor_CenterStickyAxesOn, METH_VARARGS,
   "V.CenterStickyAxesOn()\nC++: virtual void CenterStickyAxesOn()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {"CenterStickyAxesOff", PyvtkCubeAxesActor_CenterStickyAxesOff, METH_VARARGS,
   "V.CenterStickyAxesOff()\nC++: virtual void CenterStickyAxesOff()\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or verical\ndirections of the viewport to follow the data. Defaults to on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCubeAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCubeAxesActor", // tp_name
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
  PyvtkCubeAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCubeAxesActor_StaticNew()
{
  return vtkCubeAxesActor::New();
}

PyObject *PyvtkCubeAxesActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCubeAxesActor_Type, PyvtkCubeAxesActor_Methods,
    "vtkCubeAxesActor",
 &PyvtkCubeAxesActor_StaticNew);

  PyTypeObject *pytype = &PyvtkCubeAxesActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCubeAxesActor_FlyMode_Type);
  PyvtkCubeAxesActor_FlyMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCubeAxesActor_FlyMode_Type);

  o = (PyObject *)&PyvtkCubeAxesActor_FlyMode_Type;
  if (PyDict_SetItemString(d, "FlyMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCubeAxesActor_TickLocation_Type);
  PyvtkCubeAxesActor_TickLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCubeAxesActor_TickLocation_Type);

  o = (PyObject *)&PyvtkCubeAxesActor_TickLocation_Type;
  if (PyDict_SetItemString(d, "TickLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCubeAxesActor_GridVisibility_Type);
  PyvtkCubeAxesActor_GridVisibility_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCubeAxesActor_GridVisibility_Type);

  o = (PyObject *)&PyvtkCubeAxesActor_GridVisibility_Type;
  if (PyDict_SetItemString(d, "GridVisibility", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_FLY_OUTER_EDGES", vtkCubeAxesActor::VTK_FLY_OUTER_EDGES },
        { "VTK_FLY_CLOSEST_TRIAD", vtkCubeAxesActor::VTK_FLY_CLOSEST_TRIAD },
        { "VTK_FLY_FURTHEST_TRIAD", vtkCubeAxesActor::VTK_FLY_FURTHEST_TRIAD },
        { "VTK_FLY_STATIC_TRIAD", vtkCubeAxesActor::VTK_FLY_STATIC_TRIAD },
        { "VTK_FLY_STATIC_EDGES", vtkCubeAxesActor::VTK_FLY_STATIC_EDGES },
      };

    o = PyvtkCubeAxesActor_FlyMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_TICKS_INSIDE", vtkCubeAxesActor::VTK_TICKS_INSIDE },
        { "VTK_TICKS_OUTSIDE", vtkCubeAxesActor::VTK_TICKS_OUTSIDE },
        { "VTK_TICKS_BOTH", vtkCubeAxesActor::VTK_TICKS_BOTH },
      };

    o = PyvtkCubeAxesActor_TickLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCubeAxesActor::GridVisibility cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_GRID_LINES_ALL", vtkCubeAxesActor::VTK_GRID_LINES_ALL },
        { "VTK_GRID_LINES_CLOSEST", vtkCubeAxesActor::VTK_GRID_LINES_CLOSEST },
        { "VTK_GRID_LINES_FURTHEST", vtkCubeAxesActor::VTK_GRID_LINES_FURTHEST },
      };

    o = PyvtkCubeAxesActor_GridVisibility_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCubeAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCubeAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCubeAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

