// python wrapper for vtkDynamic2DLabelMapper
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
#include "vtkDynamic2DLabelMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDynamic2DLabelMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDynamic2DLabelMapper_ClassNew(); }

#ifndef DECLARED_PyvtkLabeledDataMapper_ClassNew
extern "C" { PyObject *PyvtkLabeledDataMapper_ClassNew(); }
#define DECLARED_PyvtkLabeledDataMapper_ClassNew
#endif

static const char *PyvtkDynamic2DLabelMapper_Doc =
  "vtkDynamic2DLabelMapper - draw text labels at 2D dataset points\n\n"
  "Superclass: vtkLabeledDataMapper\n\n"
  "vtkDynamic2DLabelMapper is a mapper that renders text at dataset\n"
  "points such that the labels do not overlap. Various items can be\n"
  "labeled including point ids, scalars, vectors, normals, texture\n"
  "coordinates, tensors, and field data components. This mapper assumes\n"
  "that the points are located on the x-y plane and that the camera\n"
  "remains perpendicular to that plane with a y-up axis (this can be\n"
  "constrained using vtkImageInteractor). On the first render, the\n"
  "mapper computes the visiblility of all labels at all scales, and\n"
  "queries this information on successive renders. This causes the first\n"
  "render to be much slower. The visibility algorithm is a greedy\n"
  "approach based on the point id, so the label for a point will be\n"
  "drawn unless the label for a point with lower id overlaps it.\n\n"
  "@warning\n"
  "Use this filter in combination with vtkSelectVisiblePoints if you\n"
  "want to label only points that are visible. If you want to label\n"
  "cells rather than points, use the filter vtkCellCenters to generate\n"
  "points at the center of the cells. Also, you can use the class\n"
  "vtkIdFilter to generate ids as scalars or field data, which can then\n"
  "be labeled.\n\n"
  "@sa\n"
  "vtkLabeledDataMapper\n\n"
  "@par Thanks: This algorithm was developed in the paper Ken Been and\n"
  "Chee Yap. Dynamic Map Labeling. IEEE Transactions on Visualization\n"
  "and Computer Graphics, Vol. 12, No. 5, 2006. pp. 773-780.\n\n";


static PyObject *
PyvtkDynamic2DLabelMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDynamic2DLabelMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDynamic2DLabelMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDynamic2DLabelMapper *tempr = vtkDynamic2DLabelMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDynamic2DLabelMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDynamic2DLabelMapper::NewInstance());

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
PyvtkDynamic2DLabelMapper_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriorityArrayName(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReversePriority(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetReversePriority(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReversePriority() :
      op->vtkDynamic2DLabelMapper::GetReversePriority());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReversePriorityOn();
    }
    else
    {
      op->vtkDynamic2DLabelMapper::ReversePriorityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReversePriorityOff();
    }
    else
    {
      op->vtkDynamic2DLabelMapper::ReversePriorityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelHeightPadding(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetLabelHeightPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelHeightPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelHeightPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelWidthPadding(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetLabelWidthPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelWidthPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelWidthPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOpaqueGeometry(temp0, temp1);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::RenderOpaqueGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDynamic2DLabelMapper_Methods[] = {
  {"IsTypeOf", PyvtkDynamic2DLabelMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {"IsA", PyvtkDynamic2DLabelMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {"SafeDownCast", PyvtkDynamic2DLabelMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDynamic2DLabelMapper\nC++: static vtkDynamic2DLabelMapper *SafeDownCast(\n    vtkObjectBase *o)\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {"NewInstance", PyvtkDynamic2DLabelMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDynamic2DLabelMapper\nC++: vtkDynamic2DLabelMapper *NewInstance()\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {"SetPriorityArrayName", PyvtkDynamic2DLabelMapper_SetPriorityArrayName, METH_VARARGS,
   "V.SetPriorityArrayName(string)\nC++: void SetPriorityArrayName(const char *name)\n\nSet the points array name to use to give priority to labels.\nDefaults to \"priority\".\n"},
  {"SetReversePriority", PyvtkDynamic2DLabelMapper_SetReversePriority, METH_VARARGS,
   "V.SetReversePriority(bool)\nC++: virtual void SetReversePriority(bool _arg)\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {"GetReversePriority", PyvtkDynamic2DLabelMapper_GetReversePriority, METH_VARARGS,
   "V.GetReversePriority() -> bool\nC++: virtual bool GetReversePriority()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {"ReversePriorityOn", PyvtkDynamic2DLabelMapper_ReversePriorityOn, METH_VARARGS,
   "V.ReversePriorityOn()\nC++: virtual void ReversePriorityOn()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {"ReversePriorityOff", PyvtkDynamic2DLabelMapper_ReversePriorityOff, METH_VARARGS,
   "V.ReversePriorityOff()\nC++: virtual void ReversePriorityOff()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {"SetLabelHeightPadding", PyvtkDynamic2DLabelMapper_SetLabelHeightPadding, METH_VARARGS,
   "V.SetLabelHeightPadding(float)\nC++: virtual void SetLabelHeightPadding(float _arg)\n\nSet the label height padding as a percentage. The percentage is a\npercentage of your label height. Default is 50%.\n"},
  {"GetLabelHeightPadding", PyvtkDynamic2DLabelMapper_GetLabelHeightPadding, METH_VARARGS,
   "V.GetLabelHeightPadding() -> float\nC++: virtual float GetLabelHeightPadding()\n\nSet the label height padding as a percentage. The percentage is a\npercentage of your label height. Default is 50%.\n"},
  {"SetLabelWidthPadding", PyvtkDynamic2DLabelMapper_SetLabelWidthPadding, METH_VARARGS,
   "V.SetLabelWidthPadding(float)\nC++: virtual void SetLabelWidthPadding(float _arg)\n\nSet the label width padding as a percentage. The percentage is a\npercentage of your label ^height^ (yes, not a typo). Default is\n50%.\n"},
  {"GetLabelWidthPadding", PyvtkDynamic2DLabelMapper_GetLabelWidthPadding, METH_VARARGS,
   "V.GetLabelWidthPadding() -> float\nC++: virtual float GetLabelWidthPadding()\n\nSet the label width padding as a percentage. The percentage is a\npercentage of your label ^height^ (yes, not a typo). Default is\n50%.\n"},
  {"RenderOpaqueGeometry", PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor) override;\n\nDraw non-overlapping labels to the screen.\n"},
  {"RenderOverlay", PyvtkDynamic2DLabelMapper_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\nDraw non-overlapping labels to the screen.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDynamic2DLabelMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkDynamic2DLabelMapper", // tp_name
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
  PyvtkDynamic2DLabelMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDynamic2DLabelMapper_StaticNew()
{
  return vtkDynamic2DLabelMapper::New();
}

PyObject *PyvtkDynamic2DLabelMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDynamic2DLabelMapper_Type, PyvtkDynamic2DLabelMapper_Methods,
    "vtkDynamic2DLabelMapper",
 &PyvtkDynamic2DLabelMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkDynamic2DLabelMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLabeledDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDynamic2DLabelMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDynamic2DLabelMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDynamic2DLabelMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

