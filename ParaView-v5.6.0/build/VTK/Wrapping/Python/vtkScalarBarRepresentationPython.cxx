// python wrapper for vtkScalarBarRepresentation
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
#include "vtkScalarBarRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarBarRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarBarRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static const char *PyvtkScalarBarRepresentation_Doc =
  "vtkScalarBarRepresentation - represent scalar bar for\nvtkScalarBarWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class represents a scalar bar for a vtkScalarBarWidget.  This\n"
  "class provides support for interactively placing a scalar bar on the\n"
  "2D overlay plane.  The scalar bar is defined by an instance of\n"
  "vtkScalarBarActor.\n\n"
  "One specialty of this class is that if the scalar bar is moved near\n"
  "enough to an edge, it's orientation is flipped to match that edge.\n\n"
  "@sa\n"
  "vtkScalarBarWidget vtkWidgetRepresentation vtkScalarBarActor\n\n";


static PyObject *
PyvtkScalarBarRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarBarRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarBarRepresentation *tempr = vtkScalarBarRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarRepresentation::NewInstance());

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
PyvtkScalarBarRepresentation_GetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->GetScalarBarActor() :
      op->vtkScalarBarRepresentation::GetScalarBarActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_SetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  vtkScalarBarActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarActor"))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarActor(temp0);
    }
    else
    {
      op->vtkScalarBarRepresentation::SetScalarBarActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkScalarBarRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

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
      op->vtkScalarBarRepresentation::WidgetInteraction(temp0);
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
PyvtkScalarBarRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

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
      op->vtkScalarBarRepresentation::GetSize(temp0);
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
PyvtkScalarBarRepresentation_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkScalarBarRepresentation::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkScalarBarRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

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
      op->vtkScalarBarRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

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
      op->vtkScalarBarRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkScalarBarRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkScalarBarRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkScalarBarRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkScalarBarRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_SetAutoOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoOrient(temp0);
    }
    else
    {
      op->vtkScalarBarRepresentation::SetAutoOrient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_GetAutoOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoOrient() :
      op->vtkScalarBarRepresentation::GetAutoOrient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkScalarBarRepresentation::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarRepresentation_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarRepresentation *op = static_cast<vtkScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkScalarBarRepresentation::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarBarRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkScalarBarRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nDefine standard methods.\n"},
  {"IsA", PyvtkScalarBarRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nDefine standard methods.\n"},
  {"SafeDownCast", PyvtkScalarBarRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarBarRepresentation\nC++: static vtkScalarBarRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nDefine standard methods.\n"},
  {"NewInstance", PyvtkScalarBarRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarBarRepresentation\nC++: vtkScalarBarRepresentation *NewInstance()\n\nDefine standard methods.\n"},
  {"GetScalarBarActor", PyvtkScalarBarRepresentation_GetScalarBarActor, METH_VARARGS,
   "V.GetScalarBarActor() -> vtkScalarBarActor\nC++: virtual vtkScalarBarActor *GetScalarBarActor()\n\nThe prop that is placed in the renderer.\n"},
  {"SetScalarBarActor", PyvtkScalarBarRepresentation_SetScalarBarActor, METH_VARARGS,
   "V.SetScalarBarActor(vtkScalarBarActor)\nC++: virtual void SetScalarBarActor(vtkScalarBarActor *)\n\nThe prop that is placed in the renderer.\n"},
  {"BuildRepresentation", PyvtkScalarBarRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSatisfy the superclass' API.\n"},
  {"WidgetInteraction", PyvtkScalarBarRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSatisfy the superclass' API.\n"},
  {"GetSize", PyvtkScalarBarRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: void GetSize(double size[2]) override;\n\nSatisfy the superclass' API.\n"},
  {"GetVisibility", PyvtkScalarBarRepresentation_GetVisibility, METH_VARARGS,
   "V.GetVisibility() -> int\nC++: vtkTypeBool GetVisibility() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"SetVisibility", PyvtkScalarBarRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(int)\nC++: void SetVisibility(vtkTypeBool) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"GetActors2D", PyvtkScalarBarRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *collection) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkScalarBarRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkScalarBarRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkScalarBarRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkScalarBarRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkScalarBarRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"SetAutoOrient", PyvtkScalarBarRepresentation_SetAutoOrient, METH_VARARGS,
   "V.SetAutoOrient(bool)\nC++: virtual void SetAutoOrient(bool _arg)\n\nIf true, the orientation will be updated based on the widget's\nposition. Default is true.\n"},
  {"GetAutoOrient", PyvtkScalarBarRepresentation_GetAutoOrient, METH_VARARGS,
   "V.GetAutoOrient() -> bool\nC++: virtual bool GetAutoOrient()\n\nIf true, the orientation will be updated based on the widget's\nposition. Default is true.\n"},
  {"SetOrientation", PyvtkScalarBarRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: void SetOrientation(int orient)\n\nGet/Set the orientation.\n"},
  {"GetOrientation", PyvtkScalarBarRepresentation_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: int GetOrientation()\n\nGet/Set the orientation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarBarRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkScalarBarRepresentation", // tp_name
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
  PyvtkScalarBarRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarBarRepresentation_StaticNew()
{
  return vtkScalarBarRepresentation::New();
}

PyObject *PyvtkScalarBarRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarBarRepresentation_Type, PyvtkScalarBarRepresentation_Methods,
    "vtkScalarBarRepresentation",
 &PyvtkScalarBarRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkScalarBarRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScalarBarRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarBarRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarBarRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

