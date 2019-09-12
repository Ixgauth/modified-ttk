// python wrapper for vtkCompositeControlPointsItem
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
#include "vtkContextMouseEvent.h"
#include "vtkCompositeControlPointsItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeControlPointsItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkColorTransferControlPointsItem_ClassNew
extern "C" { PyObject *PyvtkColorTransferControlPointsItem_ClassNew(); }
#define DECLARED_PyvtkColorTransferControlPointsItem_ClassNew
#endif

static const char *PyvtkCompositeControlPointsItem_Doc =
  "vtkCompositeControlPointsItem - Control points for\nvtkCompositeFunction.\n\n"
  "Superclass: vtkColorTransferControlPointsItem\n\n"
  "vtkCompositeControlPointsItem draws the control points of a\n"
  "vtkPiecewiseFunction and a vtkColorTransferFunction.\n"
  "@sa\n"
  "vtkControlPointsItem vtkColorTransferControlPointsItem\n"
  "vtkCompositeTransferFunctionItem vtkPiecewisePointHandleItem\n\n";

static PyTypeObject PyvtkCompositeControlPointsItem_PointsFunctionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkCompositeControlPointsItem.PointsFunctionType", // tp_name
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

PyObject *PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeControlPointsItem_PointsFunctionType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCompositeControlPointsItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeControlPointsItem *tempr = vtkCompositeControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeControlPointsItem::NewInstance());

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
PyvtkCompositeControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColorTransferFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetOpacityFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetOpacityFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetOpacityFunction() :
      op->vtkCompositeControlPointsItem::GetOpacityFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointsFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetPointsFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointsFunction() :
      op->vtkCompositeControlPointsItem::GetPointsFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->AddPoint(temp0) :
      op->vtkCompositeControlPointsItem::AddPoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkCompositeControlPointsItem::RemovePoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOpacityPointHandles(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetUseOpacityPointHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOpacityPointHandles() :
      op->vtkCompositeControlPointsItem::GetUseOpacityPointHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCompositeControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkCompositeControlPointsItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeControlPointsItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeControlPointsItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeControlPointsItem\nC++: static vtkCompositeControlPointsItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeControlPointsItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *NewInstance()\n\n"},
  {"SetColorTransferFunction", PyvtkCompositeControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   "V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: virtual void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the color transfer function to draw its points\n"},
  {"SetOpacityFunction", PyvtkCompositeControlPointsItem_SetOpacityFunction, METH_VARARGS,
   "V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\nUtility function that calls SetPiecewiseFunction()\n"},
  {"GetOpacityFunction", PyvtkCompositeControlPointsItem_GetOpacityFunction, METH_VARARGS,
   "V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetOpacityFunction()\n\nUtility function that calls SetPiecewiseFunction()\n"},
  {"SetPointsFunction", PyvtkCompositeControlPointsItem_SetPointsFunction, METH_VARARGS,
   "V.SetPointsFunction(int)\nC++: virtual void SetPointsFunction(int _arg)\n\nPointsFunction controls whether the points represent the\nColorTransferFunction, OpacityTransferFunction or both. If\nColorPointsFunction, only the points of the ColorTransfer\nfunction are used. If OpacityPointsFunction, only the points of\nthe Opacity function are used If ColorAndOpacityPointsFunction,\nthe points of both functions are shared by both functions.\nColorAndOpacityPointsFunction by default. Note: Set the mode\nbefore the functions are set. ColorPointsFunction is not fully\nsupported.\n"},
  {"GetPointsFunction", PyvtkCompositeControlPointsItem_GetPointsFunction, METH_VARARGS,
   "V.GetPointsFunction() -> int\nC++: virtual int GetPointsFunction()\n\nPointsFunction controls whether the points represent the\nColorTransferFunction, OpacityTransferFunction or both. If\nColorPointsFunction, only the points of the ColorTransfer\nfunction are used. If OpacityPointsFunction, only the points of\nthe Opacity function are used If ColorAndOpacityPointsFunction,\nthe points of both functions are shared by both functions.\nColorAndOpacityPointsFunction by default. Note: Set the mode\nbefore the functions are set. ColorPointsFunction is not fully\nsupported.\n"},
  {"AddPoint", PyvtkCompositeControlPointsItem_AddPoint, METH_VARARGS,
   "V.AddPoint([float, ...]) -> int\nC++: vtkIdType AddPoint(double *newPos) override;\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkCompositeControlPointsItem_RemovePoint, METH_VARARGS,
   "V.RemovePoint([float, ...]) -> int\nC++: vtkIdType RemovePoint(double *pos) override;\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"SetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles, METH_VARARGS,
   "V.SetUseOpacityPointHandles(bool)\nC++: virtual void SetUseOpacityPointHandles(bool _arg)\n\nIf UseOpacityPointHandles is true, when the current point is\ndouble clicked, a vtkPiecewisePointHandleItem will show up so\nthat the sharpness and mid point can be adjusted in the scene\nwith those handles False by default.\n"},
  {"GetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles, METH_VARARGS,
   "V.GetUseOpacityPointHandles() -> bool\nC++: virtual bool GetUseOpacityPointHandles()\n\nIf UseOpacityPointHandles is true, when the current point is\ndouble clicked, a vtkPiecewisePointHandleItem will show up so\nthat the sharpness and mid point can be adjusted in the scene\nwith those handles False by default.\n"},
  {"MouseMoveEvent", PyvtkCompositeControlPointsItem_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. To take care of some special Key stroke\n"},
  {"MouseDoubleClickEvent", PyvtkCompositeControlPointsItem_MouseDoubleClickEvent, METH_VARARGS,
   "V.MouseDoubleClickEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse move event. To take care of some special Key stroke\n"},
  {"MouseButtonPressEvent", PyvtkCompositeControlPointsItem_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse move event. To take care of some special Key stroke\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkCompositeControlPointsItem", // tp_name
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
  PyvtkCompositeControlPointsItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeControlPointsItem_StaticNew()
{
  return vtkCompositeControlPointsItem::New();
}

PyObject *PyvtkCompositeControlPointsItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeControlPointsItem_Type, PyvtkCompositeControlPointsItem_Methods,
    "vtkCompositeControlPointsItem",
 &PyvtkCompositeControlPointsItem_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeControlPointsItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkColorTransferControlPointsItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type);
  PyvtkCompositeControlPointsItem_PointsFunctionType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type);

  o = (PyObject *)&PyvtkCompositeControlPointsItem_PointsFunctionType_Type;
  if (PyDict_SetItemString(d, "PointsFunctionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCompositeControlPointsItem::PointsFunctionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ColorPointsFunction", vtkCompositeControlPointsItem::ColorPointsFunction },
        { "OpacityPointsFunction", vtkCompositeControlPointsItem::OpacityPointsFunction },
        { "ColorAndOpacityPointsFunction", vtkCompositeControlPointsItem::ColorAndOpacityPointsFunction },
      };

    o = PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

