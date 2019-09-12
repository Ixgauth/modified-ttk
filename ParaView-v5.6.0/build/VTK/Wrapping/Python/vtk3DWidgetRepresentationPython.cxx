// python wrapper for vtk3DWidgetRepresentation
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
#include "vtk3DWidgetRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DWidgetRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *Pyvtk3DWidgetRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkDataRepresentation_ClassNew
#endif

static const char *Pyvtk3DWidgetRepresentation_Doc =
  "vtk3DWidgetRepresentation - vtk3DWidgetRepresentation is a\nvtkDataRepresentation subclass for 3D widgets and their\nrepresentations.\n\n"
  "Superclass: vtkDataRepresentation\n\n"
  "It makes it possible to add 3D widgets to vtkPVRenderView.\n\n";


static PyObject *
Pyvtk3DWidgetRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtk3DWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtk3DWidgetRepresentation *tempr = vtk3DWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DWidgetRepresentation::NewInstance());

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
Pyvtk3DWidgetRepresentation_SetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->SetWidget(temp0);
    }
    else
    {
      op->vtk3DWidgetRepresentation::SetWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetWidget() :
      op->vtk3DWidgetRepresentation::GetWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  vtkWidgetRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWidgetRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtk3DWidgetRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtk3DWidgetRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetUseNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNonCompositedRenderer(temp0);
    }
    else
    {
      op->vtk3DWidgetRepresentation::SetUseNonCompositedRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetUseNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNonCompositedRenderer() :
      op->vtk3DWidgetRepresentation::GetUseNonCompositedRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonCompositedRendererOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNonCompositedRendererOn();
    }
    else
    {
      op->vtk3DWidgetRepresentation::UseNonCompositedRendererOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonCompositedRendererOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNonCompositedRendererOff();
    }
    else
    {
      op->vtk3DWidgetRepresentation::UseNonCompositedRendererOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  bool temp0 = false;
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
      op->vtk3DWidgetRepresentation::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtk3DWidgetRepresentation::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtk3DWidgetRepresentation::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtk3DWidgetRepresentation::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef Pyvtk3DWidgetRepresentation_Methods[] = {
  {"IsTypeOf", Pyvtk3DWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", Pyvtk3DWidgetRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", Pyvtk3DWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtk3DWidgetRepresentation\nC++: static vtk3DWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", Pyvtk3DWidgetRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtk3DWidgetRepresentation\nC++: vtk3DWidgetRepresentation *NewInstance()\n\n"},
  {"SetWidget", Pyvtk3DWidgetRepresentation_SetWidget, METH_VARARGS,
   "V.SetWidget(vtkAbstractWidget)\nC++: void SetWidget(vtkAbstractWidget *)\n\nGet/Set the widget.\n"},
  {"GetWidget", Pyvtk3DWidgetRepresentation_GetWidget, METH_VARARGS,
   "V.GetWidget() -> vtkAbstractWidget\nC++: virtual vtkAbstractWidget *GetWidget()\n\nGet/Set the widget.\n"},
  {"SetRepresentation", Pyvtk3DWidgetRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkWidgetRepresentation)\nC++: void SetRepresentation(vtkWidgetRepresentation *)\n\nGet/Set the representation.\n"},
  {"GetRepresentation", Pyvtk3DWidgetRepresentation_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> vtkWidgetRepresentation\nC++: virtual vtkWidgetRepresentation *GetRepresentation()\n\nGet/Set the representation.\n"},
  {"SetUseNonCompositedRenderer", Pyvtk3DWidgetRepresentation_SetUseNonCompositedRenderer, METH_VARARGS,
   "V.SetUseNonCompositedRenderer(bool)\nC++: virtual void SetUseNonCompositedRenderer(bool _arg)\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {"GetUseNonCompositedRenderer", Pyvtk3DWidgetRepresentation_GetUseNonCompositedRenderer, METH_VARARGS,
   "V.GetUseNonCompositedRenderer() -> bool\nC++: virtual bool GetUseNonCompositedRenderer()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {"UseNonCompositedRendererOn", Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOn, METH_VARARGS,
   "V.UseNonCompositedRendererOn()\nC++: virtual void UseNonCompositedRendererOn()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {"UseNonCompositedRendererOff", Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOff, METH_VARARGS,
   "V.UseNonCompositedRendererOff()\nC++: virtual void UseNonCompositedRendererOff()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {"SetEnabled", Pyvtk3DWidgetRepresentation_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: void SetEnabled(bool)\n\nGet/Set whether the widget is enabled.\n"},
  {"GetEnabled", Pyvtk3DWidgetRepresentation_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nGet/Set whether the widget is enabled.\n"},
  {"EnabledOn", Pyvtk3DWidgetRepresentation_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nGet/Set whether the widget is enabled.\n"},
  {"EnabledOff", Pyvtk3DWidgetRepresentation_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nGet/Set whether the widget is enabled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject Pyvtk3DWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtk3DWidgetRepresentation", // tp_name
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
  Pyvtk3DWidgetRepresentation_Doc, // tp_doc
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

static vtkObjectBase *Pyvtk3DWidgetRepresentation_StaticNew()
{
  return vtk3DWidgetRepresentation::New();
}

PyObject *Pyvtk3DWidgetRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &Pyvtk3DWidgetRepresentation_Type, Pyvtk3DWidgetRepresentation_Methods,
    "vtk3DWidgetRepresentation",
 &Pyvtk3DWidgetRepresentation_StaticNew);

  PyTypeObject *pytype = &Pyvtk3DWidgetRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtk3DWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

