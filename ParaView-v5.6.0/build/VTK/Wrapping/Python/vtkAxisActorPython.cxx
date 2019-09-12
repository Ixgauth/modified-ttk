// python wrapper for vtkAxisActor
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
#include "vtkAxisFollower.h"
#include "vtkProp3DAxisFollower.h"
#include "vtkAxisActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxisActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxisActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static const char *PyvtkAxisActor_Doc =
  "vtkAxisActor - Create an axis with tick marks and labels\n\n"
  "Superclass: vtkActor\n\n"
  "vtkAxisActor creates an axis with tick marks, labels, and/or a title,\n"
  "depending on the particular instance variable settings. It is assumed\n"
  "that the axes is part of a bounding box and is orthoganal to one of\n"
  "the coordinate axes.  To use this class, you typically specify two\n"
  "points defining the start and end points of the line (xyz definition\n"
  "using vtkCoordinate class), the axis type (X, Y or Z), the axis\n"
  "location in relation to the bounding box, the bounding box, the\n"
  "number of labels, and the data range (min,max). You can also control\n"
  "what parts of the axis are visible including the line, the tick\n"
  "marks, the labels, and the title. It is also possible to control\n"
  "gridlines, and specify on which 'side' the tickmarks are drawn (again\n"
  "with respect to the underlying assumed bounding box). You can also\n"
  "specify the label format (a printf style format).\n\n"
  "This class decides how to locate the labels, and how to create\n"
  "reasonable tick marks and labels.\n\n"
  "Labels follow the camera so as to be legible from any viewpoint.\n\n"
  "The instance variables Point1 and Point2 are instances of\n"
  "vtkCoordinate. All calculations and references are in World\n"
  "Coordinates.\n\n"
  "@par Thanks: This class was written by: Hank Childs, Kathleen\n"
  "Bonnell, Amy Squillacote, Brad Whitlock, Eric Brugger, Claire\n"
  "Guilbaud, Nicolas Dolegieviez, Will Schroeder, Karthik Krishnan,\n"
  "Aashish Chaudhary, Philippe Pebay, David Gobbi, David Partyka,\n"
  "Utkarsh Ayachit David Cole, Francois Bertel, and Mark Olesen Part of\n"
  "this work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtkActor vtkVectorText vtkPolyDataMapper vtkAxisActor2D vtkCoordinate\n\n";

static PyTypeObject PyvtkAxisActor_TickLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisActor.TickLocation", // tp_name
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

PyObject *PyvtkAxisActor_TickLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAxisActor_TickLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxisActor_TickLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkAxisActor_AlignLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisActor.AlignLocation", // tp_name
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

PyObject *PyvtkAxisActor_AlignLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAxisActor_AlignLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxisActor_AlignLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkAxisActor_AxisType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisActor.AxisType", // tp_name
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

PyObject *PyvtkAxisActor_AxisType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAxisActor_AxisType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxisActor_AxisType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkAxisActor_AxisPosition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisActor.AxisPosition", // tp_name
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

PyObject *PyvtkAxisActor_AxisPosition_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAxisActor_AxisPosition_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxisActor_AxisPosition_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAxisActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisActor *tempr = vtkAxisActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisActor::NewInstance());

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
PyvtkAxisActor_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkAxisActor::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkAxisActor::SetPoint1(temp0);
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
PyvtkAxisActor_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetPoint1_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxisActor::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkAxisActor::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkAxisActor::SetPoint2(temp0);
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
PyvtkAxisActor_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetPoint2_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxisActor::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkAxisActor::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxisActor_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkAxisActor::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetBounds_s1(self, args);
    case 6:
      return PyvtkAxisActor_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxisActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::GetBounds(temp0);
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
PyvtkAxisActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAxisActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkAxisActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetUseTextActor3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkAxisActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorTicksVisible(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorTicksVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinorTicksVisible() :
      op->vtkAxisActor::GetMinorTicksVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinorTicksVisibleOn();
    }
    else
    {
      op->vtkAxisActor::MinorTicksVisibleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinorTicksVisibleOff();
    }
    else
    {
      op->vtkAxisActor::MinorTicksVisibleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkAxisActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxisActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponent(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExponent() :
      op->vtkAxisActor::GetExponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMajorTickSize(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorTickSize() :
      op->vtkAxisActor::GetMajorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorTickSize(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorTickSize() :
      op->vtkAxisActor::GetMinorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkAxisActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkAxisActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkAxisActor::GetTickLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToInside();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToInside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToOutside();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToOutside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToBoth();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisVisibility() :
      op->vtkAxisActor::GetAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::AxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::AxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickVisibility() :
      op->vtkAxisActor::GetTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::TickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::TickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAxisActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkAxisActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExponentVisibility() :
      op->vtkAxisActor::GetExponentVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ExponentVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExponentVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExponentVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::ExponentVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ExponentVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExponentVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExponentVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::ExponentVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLastMajorTickPointCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastMajorTickPointCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastMajorTickPointCorrection(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLastMajorTickPointCorrection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLastMajorTickPointCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMajorTickPointCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLastMajorTickPointCorrection() :
      op->vtkAxisActor::GetLastMajorTickPointCorrection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LastMajorTickPointCorrectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastMajorTickPointCorrectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LastMajorTickPointCorrectionOn();
    }
    else
    {
      op->vtkAxisActor::LastMajorTickPointCorrectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LastMajorTickPointCorrectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastMajorTickPointCorrectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LastMajorTickPointCorrectionOff();
    }
    else
    {
      op->vtkAxisActor::LastMajorTickPointCorrectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleAlignLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleAlignLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleAlignLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleAlignLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleAlignLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleAlignLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleAlignLocation() :
      op->vtkAxisActor::GetTitleAlignLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExponentLocation() :
      op->vtkAxisActor::GetExponentLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkAxisActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkAxisActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisLinesProperty() :
      op->vtkAxisActor::GetAxisLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMainLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMainLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMainLineProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMainLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMainLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMainLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMainLineProperty() :
      op->vtkAxisActor::GetAxisMainLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMajorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMajorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMajorTicksProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMajorTicksProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMajorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMajorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMajorTicksProperty() :
      op->vtkAxisActor::GetAxisMajorTicksProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMinorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMinorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMinorTicksProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMinorTicksProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMinorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMinorTicksProperty() :
      op->vtkAxisActor::GetAxisMinorTicksProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetGridlinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridlinesProperty() :
      op->vtkAxisActor::GetGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetInnerGridlinesProperty() :
      op->vtkAxisActor::GetInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetGridpolysProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridpolysProperty() :
      op->vtkAxisActor::GetGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlines(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlines() :
      op->vtkAxisActor::GetDrawGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlinesOnly(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlinesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlinesOnly() :
      op->vtkAxisActor::GetDrawGridlinesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOnlyOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOnlyOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlinesLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlinesLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlinesLocation() :
      op->vtkAxisActor::GetDrawGridlinesLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawInnerGridlines(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawInnerGridlines() :
      op->vtkAxisActor::GetDrawInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawInnerGridlinesOn();
    }
    else
    {
      op->vtkAxisActor::DrawInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawInnerGridlinesOff();
    }
    else
    {
      op->vtkAxisActor::DrawInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineXLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineXLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineXLength() :
      op->vtkAxisActor::GetGridlineXLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineYLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineYLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineYLength() :
      op->vtkAxisActor::GetGridlineYLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineZLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineZLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineZLength() :
      op->vtkAxisActor::GetGridlineZLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridpolys(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridpolys() :
      op->vtkAxisActor::GetDrawGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridpolysOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridpolysOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisType(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMinValue() :
      op->vtkAxisActor::GetAxisTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMaxValue() :
      op->vtkAxisActor::GetAxisTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisType() :
      op->vtkAxisActor::GetAxisType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToX();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToY();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToZ();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLog(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLog() :
      op->vtkAxisActor::GetLog());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LogOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOn();
    }
    else
    {
      op->vtkAxisActor::LogOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LogOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOff();
    }
    else
    {
      op->vtkAxisActor::LogOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPosition(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMinValue() :
      op->vtkAxisActor::GetAxisPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMaxValue() :
      op->vtkAxisActor::GetAxisPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPosition() :
      op->vtkAxisActor::GetAxisPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMinMin();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMinMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMinMax();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMinMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMaxMax();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMaxMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMaxMin();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMaxMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkAxisActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxisActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxisActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeMaxLabelLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxLabelLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeMaxLabelLength(temp0) :
      op->vtkAxisActor::ComputeMaxLabelLength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeTitleLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTitleLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeTitleLength(temp0) :
      op->vtkAxisActor::ComputeTitleLength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScale(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabelScale(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetLabelScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetLabelScale_s1(self, args);
    case 2:
      return PyvtkAxisActor_SetLabelScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_SetTitleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleScale(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorStart() :
      op->vtkAxisActor::GetMinorStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorStart(temp0) :
      op->vtkAxisActor::GetMajorStart(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMajorStart(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetMajorStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaMinor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMinor() :
      op->vtkAxisActor::GetDeltaMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMajor(temp0) :
      op->vtkAxisActor::GetDeltaMajor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDeltaMajor(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetDeltaMajor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorRangeStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorRangeStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorRangeStart() :
      op->vtkAxisActor::GetMinorRangeStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMajorRangeStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMajorRangeStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorRangeStart() :
      op->vtkAxisActor::GetMajorRangeStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMinor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaRangeMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMinor() :
      op->vtkAxisActor::GetDeltaRangeMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMajor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaRangeMajor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMajor() :
      op->vtkAxisActor::GetDeltaRangeMajor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabels(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_BuildAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BuildAxis(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::BuildAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleActor() :
      op->vtkAxisActor::GetTitleActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->GetExponentActor() :
      op->vtkAxisActor::GetExponentActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleProp3D() :
      op->vtkAxisActor::GetTitleProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->GetExponentProp3D() :
      op->vtkAxisActor::GetExponentProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetNumberOfLabelsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsBuilt() :
      op->vtkAxisActor::GetNumberOfLabelsBuilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateTitleOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetCalculateTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCalculateTitleOffset() :
      op->vtkAxisActor::GetCalculateTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTitleOffsetOn();
    }
    else
    {
      op->vtkAxisActor::CalculateTitleOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTitleOffsetOff();
    }
    else
    {
      op->vtkAxisActor::CalculateTitleOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateLabelOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetCalculateLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCalculateLabelOffset() :
      op->vtkAxisActor::GetCalculateLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateLabelOffsetOn();
    }
    else
    {
      op->vtkAxisActor::CalculateLabelOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateLabelOffsetOff();
    }
    else
    {
      op->vtkAxisActor::CalculateLabelOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkAxisActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalOffsetXTitle2D(temp0);
    }
    else
    {
      op->vtkAxisActor::SetVerticalOffsetXTitle2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalOffsetXTitle2D() :
      op->vtkAxisActor::GetVerticalOffsetXTitle2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalOffsetYTitle2D(temp0);
    }
    else
    {
      op->vtkAxisActor::SetHorizontalOffsetYTitle2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHorizontalOffsetYTitle2D() :
      op->vtkAxisActor::GetHorizontalOffsetYTitle2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetSaveTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveTitlePosition() :
      op->vtkAxisActor::GetSaveTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForX(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkAxisActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkAxisActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetAxisBaseForZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return nullptr;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkAxisActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisOnOrigin(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisOnOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisOnOrigin() :
      op->vtkAxisActor::GetAxisOnOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkAxisActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkAxisActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentOffset() :
      op->vtkAxisActor::GetExponentOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkAxisActor::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisActor_Methods[] = {
  {"IsTypeOf", PyvtkAxisActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxisActor\nC++: static vtkAxisActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxisActor\nC++: vtkAxisActor *NewInstance()\n\n"},
  {"GetPoint1Coordinate", PyvtkAxisActor_GetPoint1Coordinate, METH_VARARGS,
   "V.GetPoint1Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis.\n"},
  {"SetPoint1", PyvtkAxisActor_SetPoint1, METH_VARARGS,
   "V.SetPoint1([float, float, float])\nC++: virtual void SetPoint1(double x[3])\nV.SetPoint1(float, float, float)\nC++: virtual void SetPoint1(double x, double y, double z)\n\nSpecify the position of the first point defining the axis.\n"},
  {"GetPoint1", PyvtkAxisActor_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, ...)\nC++: virtual double *GetPoint1()\n\nSpecify the position of the first point defining the axis.\n"},
  {"GetPoint2Coordinate", PyvtkAxisActor_GetPoint2Coordinate, METH_VARARGS,
   "V.GetPoint2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis.\n"},
  {"SetPoint2", PyvtkAxisActor_SetPoint2, METH_VARARGS,
   "V.SetPoint2([float, float, float])\nC++: virtual void SetPoint2(double x[3])\nV.SetPoint2(float, float, float)\nC++: virtual void SetPoint2(double x, double y, double z)\n\nSpecify the position of the second point defining the axis.\n"},
  {"GetPoint2", PyvtkAxisActor_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, ...)\nC++: virtual double *GetPoint2()\n\nSpecify the position of the second point defining the axis.\n"},
  {"SetRange", PyvtkAxisActor_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {"GetRange", PyvtkAxisActor_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible.\n"},
  {"SetBounds", PyvtkAxisActor_SetBounds, METH_VARARGS,
   "V.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetBounds", PyvtkAxisActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds(void) override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"SetLabelFormat", PyvtkAxisActor_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {"GetLabelFormat", PyvtkAxisActor_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {"SetUseTextActor3D", PyvtkAxisActor_SetUseTextActor3D, METH_VARARGS,
   "V.SetUseTextActor3D(int)\nC++: virtual void SetUseTextActor3D(int _arg)\n\nRender text as polygons (vtkVectorText) or as sprites\n(vtkTextActor3D). In 2D mode, the value is ignored and text is\nrendered as vtkTextActor. False(0) by default. See Also:\nGetUse2DMode(), SetUse2DMode\n"},
  {"GetUseTextActor3D", PyvtkAxisActor_GetUseTextActor3D, METH_VARARGS,
   "V.GetUseTextActor3D() -> int\nC++: virtual int GetUseTextActor3D()\n\nRender text as polygons (vtkVectorText) or as sprites\n(vtkTextActor3D). In 2D mode, the value is ignored and text is\nrendered as vtkTextActor. False(0) by default. See Also:\nGetUse2DMode(), SetUse2DMode\n"},
  {"SetMinorTicksVisible", PyvtkAxisActor_SetMinorTicksVisible, METH_VARARGS,
   "V.SetMinorTicksVisible(int)\nC++: virtual void SetMinorTicksVisible(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {"GetMinorTicksVisible", PyvtkAxisActor_GetMinorTicksVisible, METH_VARARGS,
   "V.GetMinorTicksVisible() -> int\nC++: virtual vtkTypeBool GetMinorTicksVisible()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {"MinorTicksVisibleOn", PyvtkAxisActor_MinorTicksVisibleOn, METH_VARARGS,
   "V.MinorTicksVisibleOn()\nC++: virtual void MinorTicksVisibleOn()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {"MinorTicksVisibleOff", PyvtkAxisActor_MinorTicksVisibleOff, METH_VARARGS,
   "V.MinorTicksVisibleOff()\nC++: virtual void MinorTicksVisibleOff()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {"SetTitle", PyvtkAxisActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: void SetTitle(const char *t)\n\nSet/Get the title of the axis actor,\n"},
  {"GetTitle", PyvtkAxisActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the axis actor,\n"},
  {"SetExponent", PyvtkAxisActor_SetExponent, METH_VARARGS,
   "V.SetExponent(string)\nC++: void SetExponent(const char *t)\n\nSet/Get the common exponent of the labels values\n"},
  {"GetExponent", PyvtkAxisActor_GetExponent, METH_VARARGS,
   "V.GetExponent() -> string\nC++: virtual char *GetExponent()\n\nSet/Get the common exponent of the labels values\n"},
  {"SetMajorTickSize", PyvtkAxisActor_SetMajorTickSize, METH_VARARGS,
   "V.SetMajorTickSize(float)\nC++: virtual void SetMajorTickSize(double _arg)\n\nSet/Get the size of the major tick marks\n"},
  {"GetMajorTickSize", PyvtkAxisActor_GetMajorTickSize, METH_VARARGS,
   "V.GetMajorTickSize() -> float\nC++: virtual double GetMajorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {"SetMinorTickSize", PyvtkAxisActor_SetMinorTickSize, METH_VARARGS,
   "V.SetMinorTickSize(float)\nC++: virtual void SetMinorTickSize(double _arg)\n\nSet/Get the size of the major tick marks\n"},
  {"GetMinorTickSize", PyvtkAxisActor_GetMinorTickSize, METH_VARARGS,
   "V.GetMinorTickSize() -> float\nC++: virtual double GetMinorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {"SetTickLocation", PyvtkAxisActor_SetTickLocation, METH_VARARGS,
   "V.SetTickLocation(int)\nC++: virtual void SetTickLocation(int _arg)\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes.\n"},
  {"GetTickLocationMinValue", PyvtkAxisActor_GetTickLocationMinValue, METH_VARARGS,
   "V.GetTickLocationMinValue() -> int\nC++: virtual int GetTickLocationMinValue()\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes.\n"},
  {"GetTickLocationMaxValue", PyvtkAxisActor_GetTickLocationMaxValue, METH_VARARGS,
   "V.GetTickLocationMaxValue() -> int\nC++: virtual int GetTickLocationMaxValue()\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes.\n"},
  {"GetTickLocation", PyvtkAxisActor_GetTickLocation, METH_VARARGS,
   "V.GetTickLocation() -> int\nC++: virtual int GetTickLocation()\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes.\n"},
  {"SetTickLocationToInside", PyvtkAxisActor_SetTickLocationToInside, METH_VARARGS,
   "V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {"SetTickLocationToOutside", PyvtkAxisActor_SetTickLocationToOutside, METH_VARARGS,
   "V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {"SetTickLocationToBoth", PyvtkAxisActor_SetTickLocationToBoth, METH_VARARGS,
   "V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {"SetAxisVisibility", PyvtkAxisActor_SetAxisVisibility, METH_VARARGS,
   "V.SetAxisVisibility(int)\nC++: virtual void SetAxisVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis line.\n"},
  {"GetAxisVisibility", PyvtkAxisActor_GetAxisVisibility, METH_VARARGS,
   "V.GetAxisVisibility() -> int\nC++: virtual vtkTypeBool GetAxisVisibility()\n\nSet/Get visibility of the axis line.\n"},
  {"AxisVisibilityOn", PyvtkAxisActor_AxisVisibilityOn, METH_VARARGS,
   "V.AxisVisibilityOn()\nC++: virtual void AxisVisibilityOn()\n\nSet/Get visibility of the axis line.\n"},
  {"AxisVisibilityOff", PyvtkAxisActor_AxisVisibilityOff, METH_VARARGS,
   "V.AxisVisibilityOff()\nC++: virtual void AxisVisibilityOff()\n\nSet/Get visibility of the axis line.\n"},
  {"SetTickVisibility", PyvtkAxisActor_SetTickVisibility, METH_VARARGS,
   "V.SetTickVisibility(int)\nC++: virtual void SetTickVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis major tick marks.\n"},
  {"GetTickVisibility", PyvtkAxisActor_GetTickVisibility, METH_VARARGS,
   "V.GetTickVisibility() -> int\nC++: virtual vtkTypeBool GetTickVisibility()\n\nSet/Get visibility of the axis major tick marks.\n"},
  {"TickVisibilityOn", PyvtkAxisActor_TickVisibilityOn, METH_VARARGS,
   "V.TickVisibilityOn()\nC++: virtual void TickVisibilityOn()\n\nSet/Get visibility of the axis major tick marks.\n"},
  {"TickVisibilityOff", PyvtkAxisActor_TickVisibilityOff, METH_VARARGS,
   "V.TickVisibilityOff()\nC++: virtual void TickVisibilityOff()\n\nSet/Get visibility of the axis major tick marks.\n"},
  {"SetLabelVisibility", PyvtkAxisActor_SetLabelVisibility, METH_VARARGS,
   "V.SetLabelVisibility(int)\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis labels.\n"},
  {"GetLabelVisibility", PyvtkAxisActor_GetLabelVisibility, METH_VARARGS,
   "V.GetLabelVisibility() -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\nSet/Get visibility of the axis labels.\n"},
  {"LabelVisibilityOn", PyvtkAxisActor_LabelVisibilityOn, METH_VARARGS,
   "V.LabelVisibilityOn()\nC++: virtual void LabelVisibilityOn()\n\nSet/Get visibility of the axis labels.\n"},
  {"LabelVisibilityOff", PyvtkAxisActor_LabelVisibilityOff, METH_VARARGS,
   "V.LabelVisibilityOff()\nC++: virtual void LabelVisibilityOff()\n\nSet/Get visibility of the axis labels.\n"},
  {"SetTitleVisibility", PyvtkAxisActor_SetTitleVisibility, METH_VARARGS,
   "V.SetTitleVisibility(int)\nC++: virtual void SetTitleVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis title.\n"},
  {"GetTitleVisibility", PyvtkAxisActor_GetTitleVisibility, METH_VARARGS,
   "V.GetTitleVisibility() -> int\nC++: virtual vtkTypeBool GetTitleVisibility()\n\nSet/Get visibility of the axis title.\n"},
  {"TitleVisibilityOn", PyvtkAxisActor_TitleVisibilityOn, METH_VARARGS,
   "V.TitleVisibilityOn()\nC++: virtual void TitleVisibilityOn()\n\nSet/Get visibility of the axis title.\n"},
  {"TitleVisibilityOff", PyvtkAxisActor_TitleVisibilityOff, METH_VARARGS,
   "V.TitleVisibilityOff()\nC++: virtual void TitleVisibilityOff()\n\nSet/Get visibility of the axis title.\n"},
  {"SetExponentVisibility", PyvtkAxisActor_SetExponentVisibility, METH_VARARGS,
   "V.SetExponentVisibility(bool)\nC++: virtual void SetExponentVisibility(bool _arg)\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"GetExponentVisibility", PyvtkAxisActor_GetExponentVisibility, METH_VARARGS,
   "V.GetExponentVisibility() -> bool\nC++: virtual bool GetExponentVisibility()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"ExponentVisibilityOn", PyvtkAxisActor_ExponentVisibilityOn, METH_VARARGS,
   "V.ExponentVisibilityOn()\nC++: virtual void ExponentVisibilityOn()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"ExponentVisibilityOff", PyvtkAxisActor_ExponentVisibilityOff, METH_VARARGS,
   "V.ExponentVisibilityOff()\nC++: virtual void ExponentVisibilityOff()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"SetLastMajorTickPointCorrection", PyvtkAxisActor_SetLastMajorTickPointCorrection, METH_VARARGS,
   "V.SetLastMajorTickPointCorrection(bool)\nC++: virtual void SetLastMajorTickPointCorrection(bool _arg)\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"GetLastMajorTickPointCorrection", PyvtkAxisActor_GetLastMajorTickPointCorrection, METH_VARARGS,
   "V.GetLastMajorTickPointCorrection() -> bool\nC++: virtual bool GetLastMajorTickPointCorrection()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"LastMajorTickPointCorrectionOn", PyvtkAxisActor_LastMajorTickPointCorrectionOn, METH_VARARGS,
   "V.LastMajorTickPointCorrectionOn()\nC++: virtual void LastMajorTickPointCorrectionOn()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"LastMajorTickPointCorrectionOff", PyvtkAxisActor_LastMajorTickPointCorrectionOff, METH_VARARGS,
   "V.LastMajorTickPointCorrectionOff()\nC++: virtual void LastMajorTickPointCorrectionOff()\n\nSet/Get visibility of the axis detached exponent.\n"},
  {"SetTitleAlignLocation", PyvtkAxisActor_SetTitleAlignLocation, METH_VARARGS,
   "V.SetTitleAlignLocation(int)\nC++: virtual void SetTitleAlignLocation(int location)\n\nGet/Set the alignment of the title related to the axis. Possible\nAlignment: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM, VTK_ALIGN_POINT1,\nVTK_ALIGN_POINT2\n"},
  {"GetTitleAlignLocation", PyvtkAxisActor_GetTitleAlignLocation, METH_VARARGS,
   "V.GetTitleAlignLocation() -> int\nC++: virtual int GetTitleAlignLocation()\n\nGet/Set the alignment of the title related to the axis. Possible\nAlignment: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM, VTK_ALIGN_POINT1,\nVTK_ALIGN_POINT2\n"},
  {"SetExponentLocation", PyvtkAxisActor_SetExponentLocation, METH_VARARGS,
   "V.SetExponentLocation(int)\nC++: virtual void SetExponentLocation(int location)\n\nGet/Set the location of the Detached Exponent related to the\naxis. Possible Location: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM,\nVTK_ALIGN_POINT1, VTK_ALIGN_POINT2\n"},
  {"GetExponentLocation", PyvtkAxisActor_GetExponentLocation, METH_VARARGS,
   "V.GetExponentLocation() -> int\nC++: virtual int GetExponentLocation()\n\nGet/Set the location of the Detached Exponent related to the\naxis. Possible Location: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM,\nVTK_ALIGN_POINT1, VTK_ALIGN_POINT2\n"},
  {"SetTitleTextProperty", PyvtkAxisActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the axis title text property.\n"},
  {"GetTitleTextProperty", PyvtkAxisActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the axis title text property.\n"},
  {"SetLabelTextProperty", PyvtkAxisActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the axis labels text property.\n"},
  {"GetLabelTextProperty", PyvtkAxisActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the axis labels text property.\n"},
  {"SetAxisLinesProperty", PyvtkAxisActor_SetAxisLinesProperty, METH_VARARGS,
   "V.SetAxisLinesProperty(vtkProperty)\nC++: void SetAxisLinesProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks) (kept for\ncompatibility)\n"},
  {"GetAxisLinesProperty", PyvtkAxisActor_GetAxisLinesProperty, METH_VARARGS,
   "V.GetAxisLinesProperty() -> vtkProperty\nC++: vtkProperty *GetAxisLinesProperty()\n\nGet/Set axis actor property (axis and its ticks) (kept for\ncompatibility)\n"},
  {"SetAxisMainLineProperty", PyvtkAxisActor_SetAxisMainLineProperty, METH_VARARGS,
   "V.SetAxisMainLineProperty(vtkProperty)\nC++: void SetAxisMainLineProperty(vtkProperty *)\n\nGet/Set main line axis actor property\n"},
  {"GetAxisMainLineProperty", PyvtkAxisActor_GetAxisMainLineProperty, METH_VARARGS,
   "V.GetAxisMainLineProperty() -> vtkProperty\nC++: vtkProperty *GetAxisMainLineProperty()\n\nGet/Set main line axis actor property\n"},
  {"SetAxisMajorTicksProperty", PyvtkAxisActor_SetAxisMajorTicksProperty, METH_VARARGS,
   "V.SetAxisMajorTicksProperty(vtkProperty)\nC++: void SetAxisMajorTicksProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"GetAxisMajorTicksProperty", PyvtkAxisActor_GetAxisMajorTicksProperty, METH_VARARGS,
   "V.GetAxisMajorTicksProperty() -> vtkProperty\nC++: vtkProperty *GetAxisMajorTicksProperty()\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"SetAxisMinorTicksProperty", PyvtkAxisActor_SetAxisMinorTicksProperty, METH_VARARGS,
   "V.SetAxisMinorTicksProperty(vtkProperty)\nC++: void SetAxisMinorTicksProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"GetAxisMinorTicksProperty", PyvtkAxisActor_GetAxisMinorTicksProperty, METH_VARARGS,
   "V.GetAxisMinorTicksProperty() -> vtkProperty\nC++: vtkProperty *GetAxisMinorTicksProperty()\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"SetGridlinesProperty", PyvtkAxisActor_SetGridlinesProperty, METH_VARARGS,
   "V.SetGridlinesProperty(vtkProperty)\nC++: void SetGridlinesProperty(vtkProperty *)\n\nGet/Set gridlines actor property (outer grid lines)\n"},
  {"GetGridlinesProperty", PyvtkAxisActor_GetGridlinesProperty, METH_VARARGS,
   "V.GetGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetGridlinesProperty()\n\nGet/Set gridlines actor property (outer grid lines)\n"},
  {"SetInnerGridlinesProperty", PyvtkAxisActor_SetInnerGridlinesProperty, METH_VARARGS,
   "V.SetInnerGridlinesProperty(vtkProperty)\nC++: void SetInnerGridlinesProperty(vtkProperty *)\n\nGet/Set inner gridlines actor property\n"},
  {"GetInnerGridlinesProperty", PyvtkAxisActor_GetInnerGridlinesProperty, METH_VARARGS,
   "V.GetInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetInnerGridlinesProperty()\n\nGet/Set inner gridlines actor property\n"},
  {"SetGridpolysProperty", PyvtkAxisActor_SetGridpolysProperty, METH_VARARGS,
   "V.SetGridpolysProperty(vtkProperty)\nC++: void SetGridpolysProperty(vtkProperty *)\n\nGet/Set gridPolys actor property (grid quads)\n"},
  {"GetGridpolysProperty", PyvtkAxisActor_GetGridpolysProperty, METH_VARARGS,
   "V.GetGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetGridpolysProperty()\n\nGet/Set gridPolys actor property (grid quads)\n"},
  {"SetDrawGridlines", PyvtkAxisActor_SetDrawGridlines, METH_VARARGS,
   "V.SetDrawGridlines(int)\nC++: virtual void SetDrawGridlines(vtkTypeBool _arg)\n\nSet/Get whether gridlines should be drawn.\n"},
  {"GetDrawGridlines", PyvtkAxisActor_GetDrawGridlines, METH_VARARGS,
   "V.GetDrawGridlines() -> int\nC++: virtual vtkTypeBool GetDrawGridlines()\n\nSet/Get whether gridlines should be drawn.\n"},
  {"DrawGridlinesOn", PyvtkAxisActor_DrawGridlinesOn, METH_VARARGS,
   "V.DrawGridlinesOn()\nC++: virtual void DrawGridlinesOn()\n\nSet/Get whether gridlines should be drawn.\n"},
  {"DrawGridlinesOff", PyvtkAxisActor_DrawGridlinesOff, METH_VARARGS,
   "V.DrawGridlinesOff()\nC++: virtual void DrawGridlinesOff()\n\nSet/Get whether gridlines should be drawn.\n"},
  {"SetDrawGridlinesOnly", PyvtkAxisActor_SetDrawGridlinesOnly, METH_VARARGS,
   "V.SetDrawGridlinesOnly(int)\nC++: virtual void SetDrawGridlinesOnly(vtkTypeBool _arg)\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {"GetDrawGridlinesOnly", PyvtkAxisActor_GetDrawGridlinesOnly, METH_VARARGS,
   "V.GetDrawGridlinesOnly() -> int\nC++: virtual vtkTypeBool GetDrawGridlinesOnly()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {"DrawGridlinesOnlyOn", PyvtkAxisActor_DrawGridlinesOnlyOn, METH_VARARGS,
   "V.DrawGridlinesOnlyOn()\nC++: virtual void DrawGridlinesOnlyOn()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {"DrawGridlinesOnlyOff", PyvtkAxisActor_DrawGridlinesOnlyOff, METH_VARARGS,
   "V.DrawGridlinesOnlyOff()\nC++: virtual void DrawGridlinesOnlyOff()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {"SetDrawGridlinesLocation", PyvtkAxisActor_SetDrawGridlinesLocation, METH_VARARGS,
   "V.SetDrawGridlinesLocation(int)\nC++: virtual void SetDrawGridlinesLocation(int _arg)\n\n"},
  {"GetDrawGridlinesLocation", PyvtkAxisActor_GetDrawGridlinesLocation, METH_VARARGS,
   "V.GetDrawGridlinesLocation() -> int\nC++: virtual int GetDrawGridlinesLocation()\n\n"},
  {"SetDrawInnerGridlines", PyvtkAxisActor_SetDrawInnerGridlines, METH_VARARGS,
   "V.SetDrawInnerGridlines(int)\nC++: virtual void SetDrawInnerGridlines(vtkTypeBool _arg)\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {"GetDrawInnerGridlines", PyvtkAxisActor_GetDrawInnerGridlines, METH_VARARGS,
   "V.GetDrawInnerGridlines() -> int\nC++: virtual vtkTypeBool GetDrawInnerGridlines()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {"DrawInnerGridlinesOn", PyvtkAxisActor_DrawInnerGridlinesOn, METH_VARARGS,
   "V.DrawInnerGridlinesOn()\nC++: virtual void DrawInnerGridlinesOn()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {"DrawInnerGridlinesOff", PyvtkAxisActor_DrawInnerGridlinesOff, METH_VARARGS,
   "V.DrawInnerGridlinesOff()\nC++: virtual void DrawInnerGridlinesOff()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {"SetGridlineXLength", PyvtkAxisActor_SetGridlineXLength, METH_VARARGS,
   "V.SetGridlineXLength(float)\nC++: virtual void SetGridlineXLength(double _arg)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"GetGridlineXLength", PyvtkAxisActor_GetGridlineXLength, METH_VARARGS,
   "V.GetGridlineXLength() -> float\nC++: virtual double GetGridlineXLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"SetGridlineYLength", PyvtkAxisActor_SetGridlineYLength, METH_VARARGS,
   "V.SetGridlineYLength(float)\nC++: virtual void SetGridlineYLength(double _arg)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"GetGridlineYLength", PyvtkAxisActor_GetGridlineYLength, METH_VARARGS,
   "V.GetGridlineYLength() -> float\nC++: virtual double GetGridlineYLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"SetGridlineZLength", PyvtkAxisActor_SetGridlineZLength, METH_VARARGS,
   "V.SetGridlineZLength(float)\nC++: virtual void SetGridlineZLength(double _arg)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"GetGridlineZLength", PyvtkAxisActor_GetGridlineZLength, METH_VARARGS,
   "V.GetGridlineZLength() -> float\nC++: virtual double GetGridlineZLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {"SetDrawGridpolys", PyvtkAxisActor_SetDrawGridpolys, METH_VARARGS,
   "V.SetDrawGridpolys(int)\nC++: virtual void SetDrawGridpolys(vtkTypeBool _arg)\n\nSet/Get whether gridpolys should be drawn.\n"},
  {"GetDrawGridpolys", PyvtkAxisActor_GetDrawGridpolys, METH_VARARGS,
   "V.GetDrawGridpolys() -> int\nC++: virtual vtkTypeBool GetDrawGridpolys()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {"DrawGridpolysOn", PyvtkAxisActor_DrawGridpolysOn, METH_VARARGS,
   "V.DrawGridpolysOn()\nC++: virtual void DrawGridpolysOn()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {"DrawGridpolysOff", PyvtkAxisActor_DrawGridpolysOff, METH_VARARGS,
   "V.DrawGridpolysOff()\nC++: virtual void DrawGridpolysOff()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {"SetAxisType", PyvtkAxisActor_SetAxisType, METH_VARARGS,
   "V.SetAxisType(int)\nC++: virtual void SetAxisType(int _arg)\n\nSet/Get the type of this axis.\n"},
  {"GetAxisTypeMinValue", PyvtkAxisActor_GetAxisTypeMinValue, METH_VARARGS,
   "V.GetAxisTypeMinValue() -> int\nC++: virtual int GetAxisTypeMinValue()\n\nSet/Get the type of this axis.\n"},
  {"GetAxisTypeMaxValue", PyvtkAxisActor_GetAxisTypeMaxValue, METH_VARARGS,
   "V.GetAxisTypeMaxValue() -> int\nC++: virtual int GetAxisTypeMaxValue()\n\nSet/Get the type of this axis.\n"},
  {"GetAxisType", PyvtkAxisActor_GetAxisType, METH_VARARGS,
   "V.GetAxisType() -> int\nC++: virtual int GetAxisType()\n\nSet/Get the type of this axis.\n"},
  {"SetAxisTypeToX", PyvtkAxisActor_SetAxisTypeToX, METH_VARARGS,
   "V.SetAxisTypeToX()\nC++: void SetAxisTypeToX(void)\n\nSet/Get the type of this axis.\n"},
  {"SetAxisTypeToY", PyvtkAxisActor_SetAxisTypeToY, METH_VARARGS,
   "V.SetAxisTypeToY()\nC++: void SetAxisTypeToY(void)\n\nSet/Get the type of this axis.\n"},
  {"SetAxisTypeToZ", PyvtkAxisActor_SetAxisTypeToZ, METH_VARARGS,
   "V.SetAxisTypeToZ()\nC++: void SetAxisTypeToZ(void)\n\nSet/Get the type of this axis.\n"},
  {"SetLog", PyvtkAxisActor_SetLog, METH_VARARGS,
   "V.SetLog(bool)\nC++: virtual void SetLog(bool _arg)\n\nSet/Get The type of scale, enable logarithmic scale or linear by\ndefault\n"},
  {"GetLog", PyvtkAxisActor_GetLog, METH_VARARGS,
   "V.GetLog() -> bool\nC++: virtual bool GetLog()\n\nSet/Get The type of scale, enable logarithmic scale or linear by\ndefault\n"},
  {"LogOn", PyvtkAxisActor_LogOn, METH_VARARGS,
   "V.LogOn()\nC++: virtual void LogOn()\n\nSet/Get The type of scale, enable logarithmic scale or linear by\ndefault\n"},
  {"LogOff", PyvtkAxisActor_LogOff, METH_VARARGS,
   "V.LogOff()\nC++: virtual void LogOff()\n\nSet/Get The type of scale, enable logarithmic scale or linear by\ndefault\n"},
  {"SetAxisPosition", PyvtkAxisActor_SetAxisPosition, METH_VARARGS,
   "V.SetAxisPosition(int)\nC++: virtual void SetAxisPosition(int _arg)\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {"GetAxisPositionMinValue", PyvtkAxisActor_GetAxisPositionMinValue, METH_VARARGS,
   "V.GetAxisPositionMinValue() -> int\nC++: virtual int GetAxisPositionMinValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {"GetAxisPositionMaxValue", PyvtkAxisActor_GetAxisPositionMaxValue, METH_VARARGS,
   "V.GetAxisPositionMaxValue() -> int\nC++: virtual int GetAxisPositionMaxValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {"GetAxisPosition", PyvtkAxisActor_GetAxisPosition, METH_VARARGS,
   "V.GetAxisPosition() -> int\nC++: virtual int GetAxisPosition()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {"SetAxisPositionToMinMin", PyvtkAxisActor_SetAxisPositionToMinMin, METH_VARARGS,
   "V.SetAxisPositionToMinMin()\nC++: void SetAxisPositionToMinMin(void)\n\n"},
  {"SetAxisPositionToMinMax", PyvtkAxisActor_SetAxisPositionToMinMax, METH_VARARGS,
   "V.SetAxisPositionToMinMax()\nC++: void SetAxisPositionToMinMax(void)\n\n"},
  {"SetAxisPositionToMaxMax", PyvtkAxisActor_SetAxisPositionToMaxMax, METH_VARARGS,
   "V.SetAxisPositionToMaxMax()\nC++: void SetAxisPositionToMaxMax(void)\n\n"},
  {"SetAxisPositionToMaxMin", PyvtkAxisActor_SetAxisPositionToMaxMin, METH_VARARGS,
   "V.SetAxisPositionToMaxMin()\nC++: void SetAxisPositionToMaxMin(void)\n\n"},
  {"SetCamera", PyvtkAxisActor_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {"GetCamera", PyvtkAxisActor_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {"RenderOpaqueGeometry", PyvtkAxisActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the axis.\n"},
  {"RenderTranslucentGeometry", PyvtkAxisActor_RenderTranslucentGeometry, METH_VARARGS,
   "V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxisActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nDraw the axis.\n"},
  {"RenderOverlay", PyvtkAxisActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nDraw the axis.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAxisActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDraw the axis.\n"},
  {"ReleaseGraphicsResources", PyvtkAxisActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"ComputeMaxLabelLength", PyvtkAxisActor_ComputeMaxLabelLength, METH_VARARGS,
   "V.ComputeMaxLabelLength((float, float, float)) -> float\nC++: double ComputeMaxLabelLength(const double[3])\n\n"},
  {"ComputeTitleLength", PyvtkAxisActor_ComputeTitleLength, METH_VARARGS,
   "V.ComputeTitleLength((float, float, float)) -> float\nC++: double ComputeTitleLength(const double[3])\n\n"},
  {"SetLabelScale", PyvtkAxisActor_SetLabelScale, METH_VARARGS,
   "V.SetLabelScale(float)\nC++: void SetLabelScale(const double scale)\nV.SetLabelScale(int, float)\nC++: void SetLabelScale(int labelIndex, const double scale)\n\n"},
  {"SetTitleScale", PyvtkAxisActor_SetTitleScale, METH_VARARGS,
   "V.SetTitleScale(float)\nC++: void SetTitleScale(const double scale)\n\n"},
  {"SetMinorStart", PyvtkAxisActor_SetMinorStart, METH_VARARGS,
   "V.SetMinorStart(float)\nC++: virtual void SetMinorStart(double _arg)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {"GetMinorStart", PyvtkAxisActor_GetMinorStart, METH_VARARGS,
   "V.GetMinorStart() -> float\nC++: virtual double GetMinorStart()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {"GetMajorStart", PyvtkAxisActor_GetMajorStart, METH_VARARGS,
   "V.GetMajorStart(int) -> float\nC++: double GetMajorStart(int axis)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {"SetMajorStart", PyvtkAxisActor_SetMajorStart, METH_VARARGS,
   "V.SetMajorStart(int, float)\nC++: void SetMajorStart(int axis, double value)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {"SetDeltaMinor", PyvtkAxisActor_SetDeltaMinor, METH_VARARGS,
   "V.SetDeltaMinor(float)\nC++: virtual void SetDeltaMinor(double _arg)\n\n"},
  {"GetDeltaMinor", PyvtkAxisActor_GetDeltaMinor, METH_VARARGS,
   "V.GetDeltaMinor() -> float\nC++: virtual double GetDeltaMinor()\n\n"},
  {"GetDeltaMajor", PyvtkAxisActor_GetDeltaMajor, METH_VARARGS,
   "V.GetDeltaMajor(int) -> float\nC++: double GetDeltaMajor(int axis)\n\n"},
  {"SetDeltaMajor", PyvtkAxisActor_SetDeltaMajor, METH_VARARGS,
   "V.SetDeltaMajor(int, float)\nC++: void SetDeltaMajor(int axis, double value)\n\n"},
  {"SetMinorRangeStart", PyvtkAxisActor_SetMinorRangeStart, METH_VARARGS,
   "V.SetMinorRangeStart(float)\nC++: virtual void SetMinorRangeStart(double _arg)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"GetMinorRangeStart", PyvtkAxisActor_GetMinorRangeStart, METH_VARARGS,
   "V.GetMinorRangeStart() -> float\nC++: virtual double GetMinorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"SetMajorRangeStart", PyvtkAxisActor_SetMajorRangeStart, METH_VARARGS,
   "V.SetMajorRangeStart(float)\nC++: virtual void SetMajorRangeStart(double _arg)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"GetMajorRangeStart", PyvtkAxisActor_GetMajorRangeStart, METH_VARARGS,
   "V.GetMajorRangeStart() -> float\nC++: virtual double GetMajorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"SetDeltaRangeMinor", PyvtkAxisActor_SetDeltaRangeMinor, METH_VARARGS,
   "V.SetDeltaRangeMinor(float)\nC++: virtual void SetDeltaRangeMinor(double _arg)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"GetDeltaRangeMinor", PyvtkAxisActor_GetDeltaRangeMinor, METH_VARARGS,
   "V.GetDeltaRangeMinor() -> float\nC++: virtual double GetDeltaRangeMinor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"SetDeltaRangeMajor", PyvtkAxisActor_SetDeltaRangeMajor, METH_VARARGS,
   "V.SetDeltaRangeMajor(float)\nC++: virtual void SetDeltaRangeMajor(double _arg)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"GetDeltaRangeMajor", PyvtkAxisActor_GetDeltaRangeMajor, METH_VARARGS,
   "V.GetDeltaRangeMajor() -> float\nC++: virtual double GetDeltaRangeMajor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {"SetLabels", PyvtkAxisActor_SetLabels, METH_VARARGS,
   "V.SetLabels(vtkStringArray)\nC++: void SetLabels(vtkStringArray *labels)\n\n"},
  {"BuildAxis", PyvtkAxisActor_BuildAxis, METH_VARARGS,
   "V.BuildAxis(vtkViewport, bool)\nC++: void BuildAxis(vtkViewport *viewport, bool)\n\n"},
  {"GetTitleActor", PyvtkAxisActor_GetTitleActor, METH_VARARGS,
   "V.GetTitleActor() -> vtkAxisFollower\nC++: virtual vtkAxisFollower *GetTitleActor()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetExponentActor", PyvtkAxisActor_GetExponentActor, METH_VARARGS,
   "V.GetExponentActor() -> vtkAxisFollower\nC++: virtual vtkAxisFollower *GetExponentActor()\n\nGet exponent follower actor\n"},
  {"GetTitleProp3D", PyvtkAxisActor_GetTitleProp3D, METH_VARARGS,
   "V.GetTitleProp3D() -> vtkProp3DAxisFollower\nC++: virtual vtkProp3DAxisFollower *GetTitleProp3D()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetExponentProp3D", PyvtkAxisActor_GetExponentProp3D, METH_VARARGS,
   "V.GetExponentProp3D() -> vtkProp3DAxisFollower\nC++: virtual vtkProp3DAxisFollower *GetExponentProp3D()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetNumberOfLabelsBuilt", PyvtkAxisActor_GetNumberOfLabelsBuilt, METH_VARARGS,
   "V.GetNumberOfLabelsBuilt() -> int\nC++: virtual int GetNumberOfLabelsBuilt()\n\nGet total number of labels built. Once built this count does not\nchange.\n"},
  {"SetCalculateTitleOffset", PyvtkAxisActor_SetCalculateTitleOffset, METH_VARARGS,
   "V.SetCalculateTitleOffset(int)\nC++: virtual void SetCalculateTitleOffset(vtkTypeBool _arg)\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {"GetCalculateTitleOffset", PyvtkAxisActor_GetCalculateTitleOffset, METH_VARARGS,
   "V.GetCalculateTitleOffset() -> int\nC++: virtual vtkTypeBool GetCalculateTitleOffset()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {"CalculateTitleOffsetOn", PyvtkAxisActor_CalculateTitleOffsetOn, METH_VARARGS,
   "V.CalculateTitleOffsetOn()\nC++: virtual void CalculateTitleOffsetOn()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {"CalculateTitleOffsetOff", PyvtkAxisActor_CalculateTitleOffsetOff, METH_VARARGS,
   "V.CalculateTitleOffsetOff()\nC++: virtual void CalculateTitleOffsetOff()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {"SetCalculateLabelOffset", PyvtkAxisActor_SetCalculateLabelOffset, METH_VARARGS,
   "V.SetCalculateLabelOffset(int)\nC++: virtual void SetCalculateLabelOffset(vtkTypeBool _arg)\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {"GetCalculateLabelOffset", PyvtkAxisActor_GetCalculateLabelOffset, METH_VARARGS,
   "V.GetCalculateLabelOffset() -> int\nC++: virtual vtkTypeBool GetCalculateLabelOffset()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {"CalculateLabelOffsetOn", PyvtkAxisActor_CalculateLabelOffsetOn, METH_VARARGS,
   "V.CalculateLabelOffsetOn()\nC++: virtual void CalculateLabelOffsetOn()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {"CalculateLabelOffsetOff", PyvtkAxisActor_CalculateLabelOffsetOff, METH_VARARGS,
   "V.CalculateLabelOffsetOff()\nC++: virtual void CalculateLabelOffsetOff()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {"SetUse2DMode", PyvtkAxisActor_SetUse2DMode, METH_VARARGS,
   "V.SetUse2DMode(int)\nC++: virtual void SetUse2DMode(int _arg)\n\nSet/Get the 2D mode\n"},
  {"GetUse2DMode", PyvtkAxisActor_GetUse2DMode, METH_VARARGS,
   "V.GetUse2DMode() -> int\nC++: virtual int GetUse2DMode()\n\nSet/Get the 2D mode\n"},
  {"SetVerticalOffsetXTitle2D", PyvtkAxisActor_SetVerticalOffsetXTitle2D, METH_VARARGS,
   "V.SetVerticalOffsetXTitle2D(float)\nC++: virtual void SetVerticalOffsetXTitle2D(double _arg)\n\nSet/Get the 2D mode the vertical offset for X title in 2D mode\n"},
  {"GetVerticalOffsetXTitle2D", PyvtkAxisActor_GetVerticalOffsetXTitle2D, METH_VARARGS,
   "V.GetVerticalOffsetXTitle2D() -> float\nC++: virtual double GetVerticalOffsetXTitle2D()\n\nSet/Get the 2D mode the vertical offset for X title in 2D mode\n"},
  {"SetHorizontalOffsetYTitle2D", PyvtkAxisActor_SetHorizontalOffsetYTitle2D, METH_VARARGS,
   "V.SetHorizontalOffsetYTitle2D(float)\nC++: virtual void SetHorizontalOffsetYTitle2D(double _arg)\n\nSet/Get the 2D mode the horizontal offset for Y title in 2D mode\n"},
  {"GetHorizontalOffsetYTitle2D", PyvtkAxisActor_GetHorizontalOffsetYTitle2D, METH_VARARGS,
   "V.GetHorizontalOffsetYTitle2D() -> float\nC++: virtual double GetHorizontalOffsetYTitle2D()\n\nSet/Get the 2D mode the horizontal offset for Y title in 2D mode\n"},
  {"SetSaveTitlePosition", PyvtkAxisActor_SetSaveTitlePosition, METH_VARARGS,
   "V.SetSaveTitlePosition(int)\nC++: virtual void SetSaveTitlePosition(int _arg)\n\nSet/Get whether title position must be saved in 2D mode\n"},
  {"GetSaveTitlePosition", PyvtkAxisActor_GetSaveTitlePosition, METH_VARARGS,
   "V.GetSaveTitlePosition() -> int\nC++: virtual int GetSaveTitlePosition()\n\nSet/Get whether title position must be saved in 2D mode\n"},
  {"SetAxisBaseForX", PyvtkAxisActor_SetAxisBaseForX, METH_VARARGS,
   "V.SetAxisBaseForX(float, float, float)\nC++: void SetAxisBaseForX(double, double, double)\nV.SetAxisBaseForX((float, float, float))\nC++: void SetAxisBaseForX(double a[3])\n\n"},
  {"GetAxisBaseForX", PyvtkAxisActor_GetAxisBaseForX, METH_VARARGS,
   "V.GetAxisBaseForX() -> (float, float, float)\nC++: double *GetAxisBaseForX()\n\n"},
  {"SetAxisBaseForY", PyvtkAxisActor_SetAxisBaseForY, METH_VARARGS,
   "V.SetAxisBaseForY(float, float, float)\nC++: void SetAxisBaseForY(double, double, double)\nV.SetAxisBaseForY((float, float, float))\nC++: void SetAxisBaseForY(double a[3])\n\n"},
  {"GetAxisBaseForY", PyvtkAxisActor_GetAxisBaseForY, METH_VARARGS,
   "V.GetAxisBaseForY() -> (float, float, float)\nC++: double *GetAxisBaseForY()\n\n"},
  {"SetAxisBaseForZ", PyvtkAxisActor_SetAxisBaseForZ, METH_VARARGS,
   "V.SetAxisBaseForZ(float, float, float)\nC++: void SetAxisBaseForZ(double, double, double)\nV.SetAxisBaseForZ((float, float, float))\nC++: void SetAxisBaseForZ(double a[3])\n\n"},
  {"GetAxisBaseForZ", PyvtkAxisActor_GetAxisBaseForZ, METH_VARARGS,
   "V.GetAxisBaseForZ() -> (float, float, float)\nC++: double *GetAxisBaseForZ()\n\n"},
  {"SetAxisOnOrigin", PyvtkAxisActor_SetAxisOnOrigin, METH_VARARGS,
   "V.SetAxisOnOrigin(int)\nC++: virtual void SetAxisOnOrigin(int _arg)\n\nNotify the axes that is not part of a cube anymore\n"},
  {"GetAxisOnOrigin", PyvtkAxisActor_GetAxisOnOrigin, METH_VARARGS,
   "V.GetAxisOnOrigin() -> int\nC++: virtual int GetAxisOnOrigin()\n\nNotify the axes that is not part of a cube anymore\n"},
  {"SetLabelOffset", PyvtkAxisActor_SetLabelOffset, METH_VARARGS,
   "V.SetLabelOffset(float)\nC++: virtual void SetLabelOffset(double _arg)\n\nSet/Get the offsets used to position texts.\n"},
  {"GetLabelOffset", PyvtkAxisActor_GetLabelOffset, METH_VARARGS,
   "V.GetLabelOffset() -> float\nC++: virtual double GetLabelOffset()\n\nSet/Get the offsets used to position texts.\n"},
  {"SetTitleOffset", PyvtkAxisActor_SetTitleOffset, METH_VARARGS,
   "V.SetTitleOffset(float)\nC++: virtual void SetTitleOffset(double _arg)\n\nSet/Get the offsets used to position texts.\n"},
  {"GetTitleOffset", PyvtkAxisActor_GetTitleOffset, METH_VARARGS,
   "V.GetTitleOffset() -> float\nC++: virtual double GetTitleOffset()\n\nSet/Get the offsets used to position texts.\n"},
  {"SetExponentOffset", PyvtkAxisActor_SetExponentOffset, METH_VARARGS,
   "V.SetExponentOffset(float)\nC++: virtual void SetExponentOffset(double _arg)\n\nSet/Get the offsets used to position texts.\n"},
  {"GetExponentOffset", PyvtkAxisActor_GetExponentOffset, METH_VARARGS,
   "V.GetExponentOffset() -> float\nC++: virtual double GetExponentOffset()\n\nSet/Get the offsets used to position texts.\n"},
  {"SetScreenSize", PyvtkAxisActor_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(float)\nC++: virtual void SetScreenSize(double _arg)\n\nSet/Get the offsets used to position texts.\n"},
  {"GetScreenSize", PyvtkAxisActor_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> float\nC++: virtual double GetScreenSize()\n\nSet/Get the offsets used to position texts.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxisActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisActor", // tp_name
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
  PyvtkAxisActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisActor_StaticNew()
{
  return vtkAxisActor::New();
}

PyObject *PyvtkAxisActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxisActor_Type, PyvtkAxisActor_Methods,
    "vtkAxisActor",
 &PyvtkAxisActor_StaticNew);

  PyTypeObject *pytype = &PyvtkAxisActor_Type;

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

  PyType_Ready(&PyvtkAxisActor_TickLocation_Type);
  PyvtkAxisActor_TickLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAxisActor_TickLocation_Type);

  o = (PyObject *)&PyvtkAxisActor_TickLocation_Type;
  if (PyDict_SetItemString(d, "TickLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AlignLocation_Type);
  PyvtkAxisActor_AlignLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAxisActor_AlignLocation_Type);

  o = (PyObject *)&PyvtkAxisActor_AlignLocation_Type;
  if (PyDict_SetItemString(d, "AlignLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AxisType_Type);
  PyvtkAxisActor_AxisType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAxisActor_AxisType_Type);

  o = (PyObject *)&PyvtkAxisActor_AxisType_Type;
  if (PyDict_SetItemString(d, "AxisType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AxisPosition_Type);
  PyvtkAxisActor_AxisPosition_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAxisActor_AxisPosition_Type);

  o = (PyObject *)&PyvtkAxisActor_AxisPosition_Type;
  if (PyDict_SetItemString(d, "AxisPosition", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_TICKS_INSIDE", vtkAxisActor::VTK_TICKS_INSIDE },
        { "VTK_TICKS_OUTSIDE", vtkAxisActor::VTK_TICKS_OUTSIDE },
        { "VTK_TICKS_BOTH", vtkAxisActor::VTK_TICKS_BOTH },
      };

    o = PyvtkAxisActor_TickLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAxisActor::AlignLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_ALIGN_TOP", vtkAxisActor::VTK_ALIGN_TOP },
        { "VTK_ALIGN_BOTTOM", vtkAxisActor::VTK_ALIGN_BOTTOM },
        { "VTK_ALIGN_POINT1", vtkAxisActor::VTK_ALIGN_POINT1 },
        { "VTK_ALIGN_POINT2", vtkAxisActor::VTK_ALIGN_POINT2 },
      };

    o = PyvtkAxisActor_AlignLocation_FromEnum(constants[c].value);
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
        { "VTK_AXIS_TYPE_X", vtkAxisActor::VTK_AXIS_TYPE_X },
        { "VTK_AXIS_TYPE_Y", vtkAxisActor::VTK_AXIS_TYPE_Y },
        { "VTK_AXIS_TYPE_Z", vtkAxisActor::VTK_AXIS_TYPE_Z },
      };

    o = PyvtkAxisActor_AxisType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_AXIS_POS_MINMIN", vtkAxisActor::VTK_AXIS_POS_MINMIN },
        { "VTK_AXIS_POS_MINMAX", vtkAxisActor::VTK_AXIS_POS_MINMAX },
        { "VTK_AXIS_POS_MAXMAX", vtkAxisActor::VTK_AXIS_POS_MAXMAX },
        { "VTK_AXIS_POS_MAXMIN", vtkAxisActor::VTK_AXIS_POS_MAXMIN },
      };

    o = PyvtkAxisActor_AxisPosition_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

