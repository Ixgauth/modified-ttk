// python wrapper for vtkScalarsToColorsItem
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
#include "vtkScalarsToColorsItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarsToColorsItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarsToColorsItem_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static const char *PyvtkScalarsToColorsItem_Doc =
  "vtkScalarsToColorsItem - Abstract class for ScalarsToColors items.\n\n"
  "Superclass: vtkPlot\n\n"
  "vtkScalarsToColorsItem implements item bounds and painting for\n"
  "inherited classes that provide a texture (ComputeTexture()) and\n"
  "optionally a shape\n"
  "@sa\n"
  "vtkControlPointsItem vtkLookupTableItem vtkColorTransferFunctionItem\n"
  "vtkCompositeTransferFunctionItem vtkPiecewiseItemFunctionItem\n\n";


static PyObject *
PyvtkScalarsToColorsItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarsToColorsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToColorsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarsToColorsItem *tempr = vtkScalarsToColorsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColorsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToColorsItem::NewInstance());

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
PyvtkScalarsToColorsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkScalarsToColorsItem::GetBounds(temp0);
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
PyvtkScalarsToColorsItem_SetUserBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetUserBounds(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkScalarsToColorsItem::SetUserBounds(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColorsItem_SetUserBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserBounds(temp0);
    }
    else
    {
      op->vtkScalarsToColorsItem::SetUserBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToColorsItem_SetUserBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkScalarsToColorsItem_SetUserBounds_s1(self, args);
    case 1:
      return PyvtkScalarsToColorsItem_SetUserBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUserBounds");
  return nullptr;
}



static PyObject *
PyvtkScalarsToColorsItem_GetUserBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUserBounds() :
      op->vtkScalarsToColorsItem::GetUserBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkScalarsToColorsItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetPolyLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPolyLinePen() :
      op->vtkScalarsToColorsItem::GetPolyLinePen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_SetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskAboveCurve(temp0);
    }
    else
    {
      op->vtkScalarsToColorsItem::SetMaskAboveCurve(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMaskAboveCurve() :
      op->vtkScalarsToColorsItem::GetMaskAboveCurve());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToColorsItem_Methods[] = {
  {"IsTypeOf", PyvtkScalarsToColorsItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarsToColorsItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarsToColorsItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarsToColorsItem\nC++: static vtkScalarsToColorsItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarsToColorsItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarsToColorsItem\nC++: vtkScalarsToColorsItem *NewInstance()\n\n"},
  {"GetBounds", PyvtkScalarsToColorsItem_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4]) override;\n\nBounds of the item, use the UserBounds if valid otherwise compute\nthe bounds of the item (based on the transfer function range).\n"},
  {"SetUserBounds", PyvtkScalarsToColorsItem_SetUserBounds, METH_VARARGS,
   "V.SetUserBounds(float, float, float, float)\nC++: void SetUserBounds(double, double, double, double)\nV.SetUserBounds((float, float, float, float))\nC++: void SetUserBounds(double a[4])\n\n"},
  {"GetUserBounds", PyvtkScalarsToColorsItem_GetUserBounds, METH_VARARGS,
   "V.GetUserBounds() -> (float, float, float, float)\nC++: double *GetUserBounds()\n\n"},
  {"Paint", PyvtkScalarsToColorsItem_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {"GetPolyLinePen", PyvtkScalarsToColorsItem_GetPolyLinePen, METH_VARARGS,
   "V.GetPolyLinePen() -> vtkPen\nC++: virtual vtkPen *GetPolyLinePen()\n\nGet a pointer to the vtkPen object that controls the drawing of\nthe edge of the shape if any. PolyLinePen type is vtkPen::NO_PEN\nby default.\n"},
  {"SetMaskAboveCurve", PyvtkScalarsToColorsItem_SetMaskAboveCurve, METH_VARARGS,
   "V.SetMaskAboveCurve(bool)\nC++: virtual void SetMaskAboveCurve(bool _arg)\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {"GetMaskAboveCurve", PyvtkScalarsToColorsItem_GetMaskAboveCurve, METH_VARARGS,
   "V.GetMaskAboveCurve() -> bool\nC++: virtual bool GetMaskAboveCurve()\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarsToColorsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkScalarsToColorsItem", // tp_name
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
  PyvtkScalarsToColorsItem_Doc, // tp_doc
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

PyObject *PyvtkScalarsToColorsItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarsToColorsItem_Type, PyvtkScalarsToColorsItem_Methods,
    "vtkScalarsToColorsItem",
 nullptr);

  PyTypeObject *pytype = &PyvtkScalarsToColorsItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScalarsToColorsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarsToColorsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarsToColorsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

