// python wrapper for vtkHandleRepresentation
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
#include "vtkHandleRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHandleRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHandleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkHandleRepresentation_Doc =
  "vtkHandleRepresentation - abstract class for representing widget\nhandles\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class defines an API for widget handle representations. These\n"
  "representations interact with vtkHandleWidget. Various\n"
  "representations can be used depending on the nature of the handle.\n"
  "The basic functionality of the handle representation is to maintain a\n"
  "position. The position is represented via a vtkCoordinate, meaning\n"
  "that the position can be easily obtained in a variety of coordinate\n"
  "systems.\n\n"
  "Optional features for this representation include an active mode (the\n"
  "widget appears only when the mouse pointer is close to it). The\n"
  "active distance is expressed in pixels and represents a circle in\n"
  "display space.\n\n"
  "The class may be subclassed so that alternative representations can\n"
  "be created.  The class defines an API and a default implementation\n"
  "that the vtkHandleWidget interacts with to render itself in the\n"
  "scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling and representation\n"
  "enables users and developers to create new appearances for the\n"
  "widget. It also facilitates parallel processing, where the client\n"
  "application handles events, and remote representations of the widget\n"
  "are slaves to the client (and do not handle events).\n\n"
  "@sa\n"
  "vtkRectilinearWipeWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

static PyTypeObject PyvtkHandleRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkHandleRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkHandleRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkHandleRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHandleRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkHandleRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHandleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHandleRepresentation *tempr = vtkHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleRepresentation::NewInstance());

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
PyvtkHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetDisplayPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::GetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayPosition() :
      op->vtkHandleRepresentation::GetDisplayPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetDisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleRepresentation_GetDisplayPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetDisplayPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkHandleRepresentation_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetWorldPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::GetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldPosition() :
      op->vtkHandleRepresentation::GetWorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleRepresentation_GetWorldPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkHandleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->vtkHandleRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkHandleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkHandleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkHandleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveRepresentation(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetActiveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveRepresentation() :
      op->vtkHandleRepresentation::GetActiveRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ActiveRepresentationOn();
    }
    else
    {
      op->vtkHandleRepresentation::ActiveRepresentationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ActiveRepresentationOff();
    }
    else
    {
      op->vtkHandleRepresentation::ActiveRepresentationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->vtkHandleRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkHandleRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkHandleRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrained(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetConstrained(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrained() :
      op->vtkHandleRepresentation::GetConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainedOn();
    }
    else
    {
      op->vtkHandleRepresentation::ConstrainedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainedOff();
    }
    else
    {
      op->vtkHandleRepresentation::ConstrainedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CheckConstraint(temp0, temp1) :
      op->vtkHandleRepresentation::CheckConstraint(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHandleRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkPointPlacer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
  {
    if (ap.IsBound())
    {
      op->SetPointPlacer(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetPointPlacer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkHandleRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHandleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkHandleRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkHandleRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkHandleRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHandleRepresentation\nC++: static vtkHandleRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkHandleRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetDisplayPosition", PyvtkHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"GetDisplayPosition", PyvtkHandleRepresentation_GetDisplayPosition, METH_VARARGS,
   "V.GetDisplayPosition([float, float, float])\nC++: virtual void GetDisplayPosition(double pos[3])\nV.GetDisplayPosition() -> (float, float, float)\nC++: virtual double *GetDisplayPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"SetWorldPosition", PyvtkHandleRepresentation_SetWorldPosition, METH_VARARGS,
   "V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"GetWorldPosition", PyvtkHandleRepresentation_GetWorldPosition, METH_VARARGS,
   "V.GetWorldPosition([float, float, float])\nC++: virtual void GetWorldPosition(double pos[3])\nV.GetWorldPosition() -> (float, float, float)\nC++: virtual double *GetWorldPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"SetTolerance", PyvtkHandleRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetToleranceMinValue", PyvtkHandleRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetToleranceMaxValue", PyvtkHandleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetTolerance", PyvtkHandleRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"SetActiveRepresentation", PyvtkHandleRepresentation_SetActiveRepresentation, METH_VARARGS,
   "V.SetActiveRepresentation(int)\nC++: virtual void SetActiveRepresentation(vtkTypeBool _arg)\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {"GetActiveRepresentation", PyvtkHandleRepresentation_GetActiveRepresentation, METH_VARARGS,
   "V.GetActiveRepresentation() -> int\nC++: virtual vtkTypeBool GetActiveRepresentation()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {"ActiveRepresentationOn", PyvtkHandleRepresentation_ActiveRepresentationOn, METH_VARARGS,
   "V.ActiveRepresentationOn()\nC++: virtual void ActiveRepresentationOn()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {"ActiveRepresentationOff", PyvtkHandleRepresentation_ActiveRepresentationOff, METH_VARARGS,
   "V.ActiveRepresentationOff()\nC++: virtual void ActiveRepresentationOff()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {"SetInteractionState", PyvtkHandleRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkHandleRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "V.GetInteractionStateMinValue() -> int\nC++: virtual int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMaxValue", PyvtkHandleRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "V.GetInteractionStateMaxValue() -> int\nC++: virtual int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"SetConstrained", PyvtkHandleRepresentation_SetConstrained, METH_VARARGS,
   "V.SetConstrained(int)\nC++: virtual void SetConstrained(vtkTypeBool _arg)\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {"GetConstrained", PyvtkHandleRepresentation_GetConstrained, METH_VARARGS,
   "V.GetConstrained() -> int\nC++: virtual vtkTypeBool GetConstrained()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {"ConstrainedOn", PyvtkHandleRepresentation_ConstrainedOn, METH_VARARGS,
   "V.ConstrainedOn()\nC++: virtual void ConstrainedOn()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {"ConstrainedOff", PyvtkHandleRepresentation_ConstrainedOff, METH_VARARGS,
   "V.ConstrainedOff()\nC++: virtual void ConstrainedOff()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {"CheckConstraint", PyvtkHandleRepresentation_CheckConstraint, METH_VARARGS,
   "V.CheckConstraint(vtkRenderer, [float, float]) -> int\nC++: virtual int CheckConstraint(vtkRenderer *renderer,\n    double pos[2])\n\nMethod has to be overridden in the subclasses which has\nconstraints on placing the handle (Ex.\nvtkConstrainedPointHandleRepresentation). It should return 1 if\nthe position is within the constraint, else it should return\n0. By default it returns 1.\n"},
  {"ShallowCopy", PyvtkHandleRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"DeepCopy", PyvtkHandleRepresentation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"SetRenderer", PyvtkHandleRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"GetMTime", PyvtkHandleRepresentation_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload the superclasses' GetMTime() because the internal\nvtkCoordinates are used to keep the state of the representation.\n"},
  {"SetPointPlacer", PyvtkHandleRepresentation_SetPointPlacer, METH_VARARGS,
   "V.SetPointPlacer(vtkPointPlacer)\nC++: virtual void SetPointPlacer(vtkPointPlacer *)\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {"GetPointPlacer", PyvtkHandleRepresentation_GetPointPlacer, METH_VARARGS,
   "V.GetPointPlacer() -> vtkPointPlacer\nC++: virtual vtkPointPlacer *GetPointPlacer()\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHandleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkHandleRepresentation", // tp_name
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
  PyvtkHandleRepresentation_Doc, // tp_doc
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

PyObject *PyvtkHandleRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHandleRepresentation_Type, PyvtkHandleRepresentation_Methods,
    "vtkHandleRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkHandleRepresentation_Type;

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

  PyType_Ready(&PyvtkHandleRepresentation__InteractionState_Type);
  PyvtkHandleRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkHandleRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkHandleRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkHandleRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "Outside", vtkHandleRepresentation::Outside },
        { "Nearby", vtkHandleRepresentation::Nearby },
        { "Selecting", vtkHandleRepresentation::Selecting },
        { "Translating", vtkHandleRepresentation::Translating },
        { "Scaling", vtkHandleRepresentation::Scaling },
      };

    o = PyvtkHandleRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHandleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHandleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHandleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

