// python wrapper for vtkBorderRepresentation
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
#include "vtkBorderRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBorderRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBorderRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkBorderRepresentation_Doc =
  "vtkBorderRepresentation - represent a vtkBorderWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is used to represent and render a vtBorderWidget. To use\n"
  "this class, you need to specify the two corners of a rectangular\n"
  "region.\n\n"
  "The class is typically subclassed so that specialized representations\n"
  "can be created.  The class defines an API and a default\n"
  "implementation that the vtkBorderRepresentation interacts with to\n"
  "render itself in the scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling (e.g., vtkBorderWidget)\n"
  "from the representation (vtkBorderRepresentation) enables users and\n"
  "developers to create new appearances for the widget. It also\n"
  "facilitates parallel processing, where the client application handles\n"
  "events, and remote representations of the widget are slaves to the\n"
  "client (and do not handle events).\n\n"
  "@sa\n"
  "vtkBorderWidget vtkTextWidget\n\n";

static PyTypeObject PyvtkBorderRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBorderRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkBorderRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBorderRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBorderRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBorderRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBorderRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBorderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBorderRepresentation *tempr = vtkBorderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBorderRepresentation::NewInstance());

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
PyvtkBorderRepresentation_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPositionCoordinate() :
      op->vtkBorderRepresentation::GetPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition(temp0);
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
PyvtkBorderRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkBorderRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkBorderRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPosition2Coordinate() :
      op->vtkBorderRepresentation::GetPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition2(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPosition2(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition2(temp0);
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
PyvtkBorderRepresentation_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetPosition2_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}



static PyObject *
PyvtkBorderRepresentation_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkBorderRepresentation::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorderMinValue() :
      op->vtkBorderRepresentation::GetShowBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorder() :
      op->vtkBorderRepresentation::GetShowBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToOff();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToOn();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToActive();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToActive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowVerticalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowVerticalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowVerticalBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowVerticalBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorderMinValue() :
      op->vtkBorderRepresentation::GetShowVerticalBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowVerticalBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorder() :
      op->vtkBorderRepresentation::GetShowVerticalBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowHorizontalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowHorizontalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowHorizontalBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowHorizontalBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorderMinValue() :
      op->vtkBorderRepresentation::GetShowHorizontalBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowHorizontalBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorder() :
      op->vtkBorderRepresentation::GetShowHorizontalBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBorderProperty() :
      op->vtkBorderRepresentation::GetBorderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProportionalResize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetProportionalResize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProportionalResize() :
      op->vtkBorderRepresentation::GetProportionalResize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalResizeOn();
    }
    else
    {
      op->vtkBorderRepresentation::ProportionalResizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalResizeOff();
    }
    else
    {
      op->vtkBorderRepresentation::ProportionalResizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMinimumSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return nullptr;
}



static PyObject *
PyvtkBorderRepresentation_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMinimumSize() :
      op->vtkBorderRepresentation::GetMinimumSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSize(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetMaximumSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMaximumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetMaximumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMaximumSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumSize");
  return nullptr;
}



static PyObject *
PyvtkBorderRepresentation_GetMaximumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMaximumSize() :
      op->vtkBorderRepresentation::GetMaximumSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkBorderRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkBorderRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBorderRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetSelectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionPoint() :
      op->vtkBorderRepresentation::GetSelectionPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMoving(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMoving(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoving() :
      op->vtkBorderRepresentation::GetMoving());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MovingOn();
    }
    else
    {
      op->vtkBorderRepresentation::MovingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MovingOff();
    }
    else
    {
      op->vtkBorderRepresentation::MovingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBorderRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBorderRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBorderRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::WidgetInteraction(temp0);
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
PyvtkBorderRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::GetSize(temp0);
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
PyvtkBorderRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBorderRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBorderRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBorderRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBorderRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBorderRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBorderRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nDefine standard methods.\n"},
  {"IsA", PyvtkBorderRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nDefine standard methods.\n"},
  {"SafeDownCast", PyvtkBorderRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBorderRepresentation\nC++: static vtkBorderRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nDefine standard methods.\n"},
  {"NewInstance", PyvtkBorderRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *NewInstance()\n\nDefine standard methods.\n"},
  {"GetPositionCoordinate", PyvtkBorderRepresentation_GetPositionCoordinate, METH_VARARGS,
   "V.GetPositionCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPositionCoordinate()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"SetPosition", PyvtkBorderRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float)\nC++: void SetPosition(double, double)\nV.SetPosition([float, float])\nC++: void SetPosition(double a[2])\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"GetPosition", PyvtkBorderRepresentation_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float)\nC++: double *GetPosition()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"GetPosition2Coordinate", PyvtkBorderRepresentation_GetPosition2Coordinate, METH_VARARGS,
   "V.GetPosition2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPosition2Coordinate()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"SetPosition2", PyvtkBorderRepresentation_SetPosition2, METH_VARARGS,
   "V.SetPosition2(float, float)\nC++: void SetPosition2(double, double)\nV.SetPosition2([float, float])\nC++: void SetPosition2(double a[2])\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"GetPosition2", PyvtkBorderRepresentation_GetPosition2, METH_VARARGS,
   "V.GetPosition2() -> (float, float)\nC++: double *GetPosition2()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"SetShowBorder", PyvtkBorderRepresentation_SetShowBorder, METH_VARARGS,
   "V.SetShowBorder(int)\nC++: virtual void SetShowBorder(int border)\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"GetShowBorderMinValue", PyvtkBorderRepresentation_GetShowBorderMinValue, METH_VARARGS,
   "V.GetShowBorderMinValue() -> int\nC++: virtual int GetShowBorderMinValue()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"GetShowBorderMaxValue", PyvtkBorderRepresentation_GetShowBorderMaxValue, METH_VARARGS,
   "V.GetShowBorderMaxValue() -> int\nC++: virtual int GetShowBorderMaxValue()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"GetShowBorder", PyvtkBorderRepresentation_GetShowBorder, METH_VARARGS,
   "V.GetShowBorder() -> int\nC++: virtual int GetShowBorder()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"SetShowBorderToOff", PyvtkBorderRepresentation_SetShowBorderToOff, METH_VARARGS,
   "V.SetShowBorderToOff()\nC++: void SetShowBorderToOff()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"SetShowBorderToOn", PyvtkBorderRepresentation_SetShowBorderToOn, METH_VARARGS,
   "V.SetShowBorderToOn()\nC++: void SetShowBorderToOn()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"SetShowBorderToActive", PyvtkBorderRepresentation_SetShowBorderToActive, METH_VARARGS,
   "V.SetShowBorderToActive()\nC++: void SetShowBorderToActive()\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders.\nBORDER_ON by default. See Also: SetShowHorizontalBorder(),\nSetShowVerticalBorder()\n"},
  {"SetShowVerticalBorder", PyvtkBorderRepresentation_SetShowVerticalBorder, METH_VARARGS,
   "V.SetShowVerticalBorder(int)\nC++: virtual void SetShowVerticalBorder(int _arg)\n\nSpecify when and if the vertical border should appear. See Also:\nSetShowBorder(), SetShowHorizontalBorder()\n"},
  {"GetShowVerticalBorderMinValue", PyvtkBorderRepresentation_GetShowVerticalBorderMinValue, METH_VARARGS,
   "V.GetShowVerticalBorderMinValue() -> int\nC++: virtual int GetShowVerticalBorderMinValue()\n\nSpecify when and if the vertical border should appear. See Also:\nSetShowBorder(), SetShowHorizontalBorder()\n"},
  {"GetShowVerticalBorderMaxValue", PyvtkBorderRepresentation_GetShowVerticalBorderMaxValue, METH_VARARGS,
   "V.GetShowVerticalBorderMaxValue() -> int\nC++: virtual int GetShowVerticalBorderMaxValue()\n\nSpecify when and if the vertical border should appear. See Also:\nSetShowBorder(), SetShowHorizontalBorder()\n"},
  {"GetShowVerticalBorder", PyvtkBorderRepresentation_GetShowVerticalBorder, METH_VARARGS,
   "V.GetShowVerticalBorder() -> int\nC++: virtual int GetShowVerticalBorder()\n\nSpecify when and if the vertical border should appear. See Also:\nSetShowBorder(), SetShowHorizontalBorder()\n"},
  {"SetShowHorizontalBorder", PyvtkBorderRepresentation_SetShowHorizontalBorder, METH_VARARGS,
   "V.SetShowHorizontalBorder(int)\nC++: virtual void SetShowHorizontalBorder(int _arg)\n\nSpecify when and if the horizontal border should appear. See\nAlso: SetShowBorder(), SetShowVerticalBorder()\n"},
  {"GetShowHorizontalBorderMinValue", PyvtkBorderRepresentation_GetShowHorizontalBorderMinValue, METH_VARARGS,
   "V.GetShowHorizontalBorderMinValue() -> int\nC++: virtual int GetShowHorizontalBorderMinValue()\n\nSpecify when and if the horizontal border should appear. See\nAlso: SetShowBorder(), SetShowVerticalBorder()\n"},
  {"GetShowHorizontalBorderMaxValue", PyvtkBorderRepresentation_GetShowHorizontalBorderMaxValue, METH_VARARGS,
   "V.GetShowHorizontalBorderMaxValue() -> int\nC++: virtual int GetShowHorizontalBorderMaxValue()\n\nSpecify when and if the horizontal border should appear. See\nAlso: SetShowBorder(), SetShowVerticalBorder()\n"},
  {"GetShowHorizontalBorder", PyvtkBorderRepresentation_GetShowHorizontalBorder, METH_VARARGS,
   "V.GetShowHorizontalBorder() -> int\nC++: virtual int GetShowHorizontalBorder()\n\nSpecify when and if the horizontal border should appear. See\nAlso: SetShowBorder(), SetShowVerticalBorder()\n"},
  {"GetBorderProperty", PyvtkBorderRepresentation_GetBorderProperty, METH_VARARGS,
   "V.GetBorderProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetBorderProperty()\n\nSpecify the properties of the border.\n"},
  {"SetProportionalResize", PyvtkBorderRepresentation_SetProportionalResize, METH_VARARGS,
   "V.SetProportionalResize(int)\nC++: virtual void SetProportionalResize(vtkTypeBool _arg)\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {"GetProportionalResize", PyvtkBorderRepresentation_GetProportionalResize, METH_VARARGS,
   "V.GetProportionalResize() -> int\nC++: virtual vtkTypeBool GetProportionalResize()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {"ProportionalResizeOn", PyvtkBorderRepresentation_ProportionalResizeOn, METH_VARARGS,
   "V.ProportionalResizeOn()\nC++: virtual void ProportionalResizeOn()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {"ProportionalResizeOff", PyvtkBorderRepresentation_ProportionalResizeOff, METH_VARARGS,
   "V.ProportionalResizeOff()\nC++: virtual void ProportionalResizeOff()\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n"},
  {"SetMinimumSize", PyvtkBorderRepresentation_SetMinimumSize, METH_VARARGS,
   "V.SetMinimumSize(int, int)\nC++: void SetMinimumSize(int, int)\nV.SetMinimumSize((int, int))\nC++: void SetMinimumSize(int a[2])\n\n"},
  {"GetMinimumSize", PyvtkBorderRepresentation_GetMinimumSize, METH_VARARGS,
   "V.GetMinimumSize() -> (int, int)\nC++: int *GetMinimumSize()\n\n"},
  {"SetMaximumSize", PyvtkBorderRepresentation_SetMaximumSize, METH_VARARGS,
   "V.SetMaximumSize(int, int)\nC++: void SetMaximumSize(int, int)\nV.SetMaximumSize((int, int))\nC++: void SetMaximumSize(int a[2])\n\n"},
  {"GetMaximumSize", PyvtkBorderRepresentation_GetMaximumSize, METH_VARARGS,
   "V.GetMaximumSize() -> (int, int)\nC++: int *GetMaximumSize()\n\n"},
  {"SetTolerance", PyvtkBorderRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetToleranceMinValue", PyvtkBorderRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetToleranceMaxValue", PyvtkBorderRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetTolerance", PyvtkBorderRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetSelectionPoint", PyvtkBorderRepresentation_GetSelectionPoint, METH_VARARGS,
   "V.GetSelectionPoint() -> (float, float)\nC++: double *GetSelectionPoint()\n\nAfter a selection event within the region interior to the border;\nthe normalized selection coordinates may be obtained.\n"},
  {"SetMoving", PyvtkBorderRepresentation_SetMoving, METH_VARARGS,
   "V.SetMoving(int)\nC++: virtual void SetMoving(vtkTypeBool _arg)\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {"GetMoving", PyvtkBorderRepresentation_GetMoving, METH_VARARGS,
   "V.GetMoving() -> int\nC++: virtual vtkTypeBool GetMoving()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {"MovingOn", PyvtkBorderRepresentation_MovingOn, METH_VARARGS,
   "V.MovingOn()\nC++: virtual void MovingOn()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {"MovingOff", PyvtkBorderRepresentation_MovingOff, METH_VARARGS,
   "V.MovingOff()\nC++: virtual void MovingOff()\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {"GetMTime", PyvtkBorderRepresentation_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime of this object. It takes into account MTimes of\nposition coordinates and border's property.\n"},
  {"BuildRepresentation", PyvtkBorderRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"StartWidgetInteraction", PyvtkBorderRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"WidgetInteraction", PyvtkBorderRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"GetSize", PyvtkBorderRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"ComputeInteractionState", PyvtkBorderRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"GetActors2D", PyvtkBorderRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkBorderRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkBorderRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkBorderRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBorderRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBorderRepresentation", // tp_name
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
  PyvtkBorderRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBorderRepresentation_StaticNew()
{
  return vtkBorderRepresentation::New();
}

PyObject *PyvtkBorderRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBorderRepresentation_Type, PyvtkBorderRepresentation_Methods,
    "vtkBorderRepresentation",
 &PyvtkBorderRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkBorderRepresentation_Type;

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

  PyType_Ready(&PyvtkBorderRepresentation__InteractionState_Type);
  PyvtkBorderRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBorderRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkBorderRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "BORDER_OFF", vtkBorderRepresentation::BORDER_OFF },
        { "BORDER_ON", vtkBorderRepresentation::BORDER_ON },
        { "BORDER_ACTIVE", vtkBorderRepresentation::BORDER_ACTIVE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkBorderRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "Outside", vtkBorderRepresentation::Outside },
        { "Inside", vtkBorderRepresentation::Inside },
        { "AdjustingP0", vtkBorderRepresentation::AdjustingP0 },
        { "AdjustingP1", vtkBorderRepresentation::AdjustingP1 },
        { "AdjustingP2", vtkBorderRepresentation::AdjustingP2 },
        { "AdjustingP3", vtkBorderRepresentation::AdjustingP3 },
        { "AdjustingE0", vtkBorderRepresentation::AdjustingE0 },
        { "AdjustingE1", vtkBorderRepresentation::AdjustingE1 },
        { "AdjustingE2", vtkBorderRepresentation::AdjustingE2 },
        { "AdjustingE3", vtkBorderRepresentation::AdjustingE3 },
      };

    o = PyvtkBorderRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBorderRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBorderRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBorderRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

