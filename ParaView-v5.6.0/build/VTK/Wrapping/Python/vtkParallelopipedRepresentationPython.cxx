// python wrapper for vtkParallelopipedRepresentation
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
#include "vtkParallelopipedRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelopipedRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelopipedRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkParallelopipedRepresentation_Doc =
  "vtkParallelopipedRepresentation - Default representation for\nvtkParallelopipedWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class provides the default geometrical representation for\n"
  "vtkParallelopipedWidget. As a result of interactions of the widget,\n"
  "this representation can take on of the following shapes:\n\n"
  "1) A parallelopiped. (8 handles, 6 faces)\n\n"
  "2) Paralleopiped with a chair depression on any one handle. (A chair\n"
  "is a depression on one of the handles that carves inwards so as to\n"
  "allow the user to visualize cuts in the volume). (14 handles, 9\n"
  "faces).\n\n"
  "@sa\n"
  "vtkParallelopipedWidget\n\n";

static PyTypeObject PyvtkParallelopipedRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkParallelopipedRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkParallelopipedRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkParallelopipedRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParallelopipedRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkParallelopipedRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelopipedRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelopipedRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelopipedRepresentation *tempr = vtkParallelopipedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelopipedRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelopipedRepresentation::NewInstance());

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
PyvtkParallelopipedRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  static size_t size0[2] = { 8, 3 };
  double temp0[8][3];
  double save0[8][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    ap.Save(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
    }

    if (ap.HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
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

static PyMethodDef PyvtkParallelopipedRepresentation_PlaceWidget_Methods[] = {
  {nullptr, PyvtkParallelopipedRepresentation_PlaceWidget_s1, METH_VARARGS,
   "@A *d[3]"},
  {nullptr, PyvtkParallelopipedRepresentation_PlaceWidget_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkParallelopipedRepresentation_PlaceWidget_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkParallelopipedRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->GetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::GetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkParallelopipedRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHandleProperty(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::SetHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHoveredHandleProperty(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::SetHoveredHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedHandleProperty(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::SetSelectedHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkParallelopipedRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHoveredHandleProperty() :
      op->vtkParallelopipedRepresentation::GetHoveredHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetHandleRepresentation(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation(temp0) :
      op->vtkParallelopipedRepresentation::GetHandleRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkParallelopipedRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkParallelopipedRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkParallelopipedRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkParallelopipedRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkParallelopipedRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkParallelopipedRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkParallelopipedRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->vtkParallelopipedRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      op->Translate(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::Translate(temp0);
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
PyvtkParallelopipedRepresentation_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkParallelopipedRepresentation::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkParallelopipedRepresentation_Translate_s1(self, args);
    case 2:
      return PyvtkParallelopipedRepresentation_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}



static PyObject *
PyvtkParallelopipedRepresentation_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0, temp1);
    }
    else
    {
      op->vtkParallelopipedRepresentation::Scale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PositionHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionHandles();
    }
    else
    {
      op->vtkParallelopipedRepresentation::PositionHandles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumThickness(temp0);
    }
    else
    {
      op->vtkParallelopipedRepresentation::SetMinimumThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumThickness() :
      op->vtkParallelopipedRepresentation::GetMinimumThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelopipedRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkParallelopipedRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkParallelopipedRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkParallelopipedRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParallelopipedRepresentation\nC++: static vtkParallelopipedRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkParallelopipedRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetActors", PyvtkParallelopipedRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nMethods to satisfy the superclass.\n"},
  {"PlaceWidget", PyvtkParallelopipedRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([[float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float], [float, float, float], [float, float, float], [float,\n    float, float]])\nC++: virtual void PlaceWidget(double corners[8][3])\nV.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nPlace the widget in the scene. You can use either of the two APIs\n:\n1) PlaceWidget( double bounds[6] ) Creates a cuboid conforming to\nthe said bounds.\n2) PlaceWidget( double corners[8][3] ) Creates a parallelopiped\n   with corners specified. The order in which corners are\n   specified must obey the following rule: Corner 0 - 1 - 2 - 3 -\n0  forms a face Corner 4 - 5 - 6 - 7 - 4  forms a face Corner 0 -\n4 - 5 - 1 - 0  forms a face Corner 1 - 5 - 6 - 2 - 1  forms a\n   face Corner 2 - 6 - 7 - 3 - 2  forms a face Corner 3 - 7 - 4 -\n0 - 3  forms a face\n"},
  {"SetInteractionState", PyvtkParallelopipedRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nPointWidget) or other object. This controls how the interaction\nwith the widget proceeds.\n"},
  {"GetBoundingPlanes", PyvtkParallelopipedRepresentation_GetBoundingPlanes, METH_VARARGS,
   "V.GetBoundingPlanes(vtkPlaneCollection)\nC++: void GetBoundingPlanes(vtkPlaneCollection *pc)\n\nGet the bounding planes of the object. The first 6 planes will be\nbounding planes of the parallelopiped. If in chair mode, three\nadditional planes will be present. The last three planes will be\nthose of the chair. The normals of all the planes will point into\nthe object.\n"},
  {"GetPolyData", PyvtkParallelopipedRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nThe parallelopiped polydata.\n"},
  {"GetBounds", PyvtkParallelopipedRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nThe parallelopiped polydata.\n"},
  {"SetHandleProperty", PyvtkParallelopipedRepresentation_SetHandleProperty, METH_VARARGS,
   "V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {"SetHoveredHandleProperty", PyvtkParallelopipedRepresentation_SetHoveredHandleProperty, METH_VARARGS,
   "V.SetHoveredHandleProperty(vtkProperty)\nC++: virtual void SetHoveredHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {"SetSelectedHandleProperty", PyvtkParallelopipedRepresentation_SetSelectedHandleProperty, METH_VARARGS,
   "V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {"GetHandleProperty", PyvtkParallelopipedRepresentation_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties.\n"},
  {"GetHoveredHandleProperty", PyvtkParallelopipedRepresentation_GetHoveredHandleProperty, METH_VARARGS,
   "V.GetHoveredHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHoveredHandleProperty()\n\nSet/Get the handle properties.\n"},
  {"GetSelectedHandleProperty", PyvtkParallelopipedRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties.\n"},
  {"SetHandleRepresentation", PyvtkParallelopipedRepresentation_SetHandleRepresentation, METH_VARARGS,
   "V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\n"},
  {"GetHandleRepresentation", PyvtkParallelopipedRepresentation_GetHandleRepresentation, METH_VARARGS,
   "V.GetHandleRepresentation(int) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation(int index)\n\n"},
  {"HandlesOn", PyvtkParallelopipedRepresentation_HandlesOn, METH_VARARGS,
   "V.HandlesOn()\nC++: void HandlesOn()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {"HandlesOff", PyvtkParallelopipedRepresentation_HandlesOff, METH_VARARGS,
   "V.HandlesOff()\nC++: void HandlesOff()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {"GetFaceProperty", PyvtkParallelopipedRepresentation_GetFaceProperty, METH_VARARGS,
   "V.GetFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {"GetSelectedFaceProperty", PyvtkParallelopipedRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   "V.GetSelectedFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {"GetOutlineProperty", PyvtkParallelopipedRepresentation_GetOutlineProperty, METH_VARARGS,
   "V.GetOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {"GetSelectedOutlineProperty", PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "V.GetSelectedOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {"BuildRepresentation", PyvtkParallelopipedRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThis actually constructs the geometry of the widget from the\nvarious data parameters.\n"},
  {"ReleaseGraphicsResources", PyvtkParallelopipedRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkParallelopipedRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkParallelopipedRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {"ComputeInteractionState", PyvtkParallelopipedRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nGiven and x-y display coordinate, compute the interaction state\nof the widget.\n"},
  {"Translate", PyvtkParallelopipedRepresentation_Translate, METH_VARARGS,
   "V.Translate([float, float, float])\nC++: virtual void Translate(double translation[3])\nV.Translate(int, int)\nC++: virtual void Translate(int X, int Y)\n\n"},
  {"Scale", PyvtkParallelopipedRepresentation_Scale, METH_VARARGS,
   "V.Scale(int, int)\nC++: virtual void Scale(int X, int Y)\n\n"},
  {"PositionHandles", PyvtkParallelopipedRepresentation_PositionHandles, METH_VARARGS,
   "V.PositionHandles()\nC++: virtual void PositionHandles()\n\nSynchronize the parallelopiped handle positions with the\nPolygonal datastructure.\n"},
  {"SetMinimumThickness", PyvtkParallelopipedRepresentation_SetMinimumThickness, METH_VARARGS,
   "V.SetMinimumThickness(float)\nC++: virtual void SetMinimumThickness(double _arg)\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {"GetMinimumThickness", PyvtkParallelopipedRepresentation_GetMinimumThickness, METH_VARARGS,
   "V.GetMinimumThickness() -> float\nC++: virtual double GetMinimumThickness()\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelopipedRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkParallelopipedRepresentation", // tp_name
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
  PyvtkParallelopipedRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelopipedRepresentation_StaticNew()
{
  return vtkParallelopipedRepresentation::New();
}

PyObject *PyvtkParallelopipedRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelopipedRepresentation_Type, PyvtkParallelopipedRepresentation_Methods,
    "vtkParallelopipedRepresentation",
 &PyvtkParallelopipedRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkParallelopipedRepresentation_Type;

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

  PyType_Ready(&PyvtkParallelopipedRepresentation__InteractionState_Type);
  PyvtkParallelopipedRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkParallelopipedRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkParallelopipedRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 14; c++)
  {
    typedef vtkParallelopipedRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[14] = {
        { "Outside", vtkParallelopipedRepresentation::Outside },
        { "Inside", vtkParallelopipedRepresentation::Inside },
        { "RequestResizeParallelopiped", vtkParallelopipedRepresentation::RequestResizeParallelopiped },
        { "RequestResizeParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::RequestResizeParallelopipedAlongAnAxis },
        { "RequestChairMode", vtkParallelopipedRepresentation::RequestChairMode },
        { "RequestTranslateParallelopiped", vtkParallelopipedRepresentation::RequestTranslateParallelopiped },
        { "RequestScaleParallelopiped", vtkParallelopipedRepresentation::RequestScaleParallelopiped },
        { "RequestRotateParallelopiped", vtkParallelopipedRepresentation::RequestRotateParallelopiped },
        { "ResizingParallelopiped", vtkParallelopipedRepresentation::ResizingParallelopiped },
        { "ResizingParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::ResizingParallelopipedAlongAnAxis },
        { "ChairMode", vtkParallelopipedRepresentation::ChairMode },
        { "TranslatingParallelopiped", vtkParallelopipedRepresentation::TranslatingParallelopiped },
        { "ScalingParallelopiped", vtkParallelopipedRepresentation::ScalingParallelopiped },
        { "RotatingParallelopiped", vtkParallelopipedRepresentation::RotatingParallelopiped },
      };

    o = PyvtkParallelopipedRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelopipedRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelopipedRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelopipedRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

