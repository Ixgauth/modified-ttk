// python wrapper for vtkRectilinearWipeRepresentation
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
#include "vtkRectilinearWipeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearWipeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRectilinearWipeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkRectilinearWipeRepresentation_Doc =
  "vtkRectilinearWipeRepresentation - represent a\nvtkRectilinearWipeWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is used to represent and render a\n"
  "vtkRectilinearWipeWidget. To use this class, you need to specify an\n"
  "instance of a vtkImageRectilinearWipe and vtkImageActor. This\n"
  "provides the information for this representation to construct and\n"
  "place itself.\n\n"
  "The class may be subclassed so that alternative representations can\n"
  "be created.  The class defines an API and a default implementation\n"
  "that the vtkRectilinearWipeWidget interacts with to render itself in\n"
  "the scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling and representation\n"
  "enables users and developers to create new appearances for the\n"
  "widget. It also facilitates parallel processing, where the client\n"
  "application handles events, and remote representations of the widget\n"
  "are slaves to the client (and do not handle events).\n\n"
  "@sa\n"
  "vtkRectilinearWipeWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

static PyTypeObject PyvtkRectilinearWipeRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkRectilinearWipeRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkRectilinearWipeRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkRectilinearWipeRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRectilinearWipeRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkRectilinearWipeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearWipeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearWipeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearWipeRepresentation *tempr = vtkRectilinearWipeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearWipeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearWipeRepresentation::NewInstance());

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
PyvtkRectilinearWipeRepresentation_SetRectilinearWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectilinearWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageRectilinearWipe *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageRectilinearWipe"))
  {
    if (ap.IsBound())
    {
      op->SetRectilinearWipe(temp0);
    }
    else
    {
      op->vtkRectilinearWipeRepresentation::SetRectilinearWipe(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetRectilinearWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageRectilinearWipe *tempr = (ap.IsBound() ?
      op->GetRectilinearWipe() :
      op->vtkRectilinearWipeRepresentation::GetRectilinearWipe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkRectilinearWipeRepresentation::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkRectilinearWipeRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkRectilinearWipeRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkRectilinearWipeRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkRectilinearWipeRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkRectilinearWipeRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkRectilinearWipeRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::StartWidgetInteraction(temp0);
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
PyvtkRectilinearWipeRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::WidgetInteraction(temp0);
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
PyvtkRectilinearWipeRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

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
      op->vtkRectilinearWipeRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkRectilinearWipeRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkRectilinearWipeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkRectilinearWipeRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeRepresentation *op = static_cast<vtkRectilinearWipeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkRectilinearWipeRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearWipeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearWipeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkRectilinearWipeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkRectilinearWipeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRectilinearWipeRepresentation\nC++: static vtkRectilinearWipeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkRectilinearWipeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRectilinearWipeRepresentation\nC++: vtkRectilinearWipeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetRectilinearWipe", PyvtkRectilinearWipeRepresentation_SetRectilinearWipe, METH_VARARGS,
   "V.SetRectilinearWipe(vtkImageRectilinearWipe)\nC++: void SetRectilinearWipe(vtkImageRectilinearWipe *wipe)\n\nSpecify an instance of vtkImageRectilinearWipe to manipulate.\n"},
  {"GetRectilinearWipe", PyvtkRectilinearWipeRepresentation_GetRectilinearWipe, METH_VARARGS,
   "V.GetRectilinearWipe() -> vtkImageRectilinearWipe\nC++: virtual vtkImageRectilinearWipe *GetRectilinearWipe()\n\nSpecify an instance of vtkImageRectilinearWipe to manipulate.\n"},
  {"SetImageActor", PyvtkRectilinearWipeRepresentation_SetImageActor, METH_VARARGS,
   "V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {"GetImageActor", PyvtkRectilinearWipeRepresentation_GetImageActor, METH_VARARGS,
   "V.GetImageActor() -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {"SetTolerance", PyvtkRectilinearWipeRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetToleranceMinValue", PyvtkRectilinearWipeRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetToleranceMaxValue", PyvtkRectilinearWipeRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetTolerance", PyvtkRectilinearWipeRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetProperty", PyvtkRectilinearWipeRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nGet the properties for the widget. This can be manipulated to set\ndifferent colors, line widths, etc.\n"},
  {"BuildRepresentation", PyvtkRectilinearWipeRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {"StartWidgetInteraction", PyvtkRectilinearWipeRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {"WidgetInteraction", PyvtkRectilinearWipeRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {"ComputeInteractionState", PyvtkRectilinearWipeRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nSubclasses of vtkRectilinearWipeRepresentation must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {"GetActors2D", PyvtkRectilinearWipeRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkRectilinearWipeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkRectilinearWipeRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkRectilinearWipeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkRectilinearWipeRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkRectilinearWipeRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRectilinearWipeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkRectilinearWipeRepresentation", // tp_name
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
  PyvtkRectilinearWipeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearWipeRepresentation_StaticNew()
{
  return vtkRectilinearWipeRepresentation::New();
}

PyObject *PyvtkRectilinearWipeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRectilinearWipeRepresentation_Type, PyvtkRectilinearWipeRepresentation_Methods,
    "vtkRectilinearWipeRepresentation",
 &PyvtkRectilinearWipeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkRectilinearWipeRepresentation_Type;

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

  PyType_Ready(&PyvtkRectilinearWipeRepresentation__InteractionState_Type);
  PyvtkRectilinearWipeRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkRectilinearWipeRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkRectilinearWipeRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkRectilinearWipeRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Outside", vtkRectilinearWipeRepresentation::Outside },
        { "MovingHPane", vtkRectilinearWipeRepresentation::MovingHPane },
        { "MovingVPane", vtkRectilinearWipeRepresentation::MovingVPane },
        { "MovingCenter", vtkRectilinearWipeRepresentation::MovingCenter },
      };

    o = PyvtkRectilinearWipeRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearWipeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearWipeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearWipeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

