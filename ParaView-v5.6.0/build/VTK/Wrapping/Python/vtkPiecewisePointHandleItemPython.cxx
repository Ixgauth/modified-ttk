// python wrapper for vtkPiecewisePointHandleItem
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
#include "vtkPiecewisePointHandleItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPiecewisePointHandleItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPiecewisePointHandleItem_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkPiecewisePointHandleItem_Doc =
  "vtkPiecewisePointHandleItem - a vtkContextItem that draws handles\n      around a point of a piecewise function\n\n"
  "Superclass: vtkContextItem\n\n"
  "This is a vtkContextItem that can be placed into a vtkContextScene.\n"
  "It draws handles around a given point of a piecewise function so that\n"
  "the curve can be adjusted using these handles.\n\n";


static PyObject *
PyvtkPiecewisePointHandleItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewisePointHandleItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewisePointHandleItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewisePointHandleItem *tempr = vtkPiecewisePointHandleItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewisePointHandleItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewisePointHandleItem::NewInstance());

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
PyvtkPiecewisePointHandleItem_CallRedraw(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CallRedraw");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkPiecewisePointHandleItem::CallRedraw(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPiecewisePointHandleItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentPointIndex(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetCurrentPointIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_GetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCurrentPointIndex() :
      op->vtkPiecewisePointHandleItem::GetCurrentPointIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetPiecewiseFunction(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetPiecewiseFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsOverHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOverHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IsOverHandle(temp0) :
      op->vtkPiecewisePointHandleItem::IsOverHandle(temp0));

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
PyvtkPiecewisePointHandleItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkPiecewisePointHandleItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPiecewisePointHandleItem_Methods[] = {
  {"IsTypeOf", PyvtkPiecewisePointHandleItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewisePointHandleItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewisePointHandleItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPiecewisePointHandleItem\nC++: static vtkPiecewisePointHandleItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewisePointHandleItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPiecewisePointHandleItem\nC++: vtkPiecewisePointHandleItem *NewInstance()\n\n"},
  {"CallRedraw", PyvtkPiecewisePointHandleItem_CallRedraw, METH_VARARGS,
   "V.CallRedraw(vtkObject, int, void, void)\nC++: static void CallRedraw(vtkObject *sender,\n    unsigned long event, void *receiver, void *params)\n\n"},
  {"SetParent", PyvtkPiecewisePointHandleItem_SetParent, METH_VARARGS,
   "V.SetParent(vtkAbstractContextItem)\nC++: void SetParent(vtkAbstractContextItem *parent) override;\n\nSet the parent item, which should be a vtkControlPointItem\n"},
  {"Paint", PyvtkPiecewisePointHandleItem_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item.\n"},
  {"SetCurrentPointIndex", PyvtkPiecewisePointHandleItem_SetCurrentPointIndex, METH_VARARGS,
   "V.SetCurrentPointIndex(int)\nC++: virtual void SetCurrentPointIndex(vtkIdType _arg)\n\nThe current point id in the piecewise function being handled.\n"},
  {"GetCurrentPointIndex", PyvtkPiecewisePointHandleItem_GetCurrentPointIndex, METH_VARARGS,
   "V.GetCurrentPointIndex() -> int\nC++: virtual vtkIdType GetCurrentPointIndex()\n\nThe current point id in the piecewise function being handled.\n"},
  {"SetPiecewiseFunction", PyvtkPiecewisePointHandleItem_SetPiecewiseFunction, METH_VARARGS,
   "V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *piecewiseFunc)\n\nSet the PieceWiseFunction the handles will manipulate\n"},
  {"IsOverHandle", PyvtkPiecewisePointHandleItem_IsOverHandle, METH_VARARGS,
   "V.IsOverHandle([float, ...]) -> int\nC++: int IsOverHandle(float *pos)\n\nReturns the index of the handle if pos is over any of the\nhandles, otherwise return -1;\n"},
  {"Hit", PyvtkPiecewisePointHandleItem_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkPiecewisePointHandleItem_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkPiecewisePointHandleItem_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event.\n"},
  {"MouseButtonReleaseEvent", PyvtkPiecewisePointHandleItem_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPiecewisePointHandleItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPiecewisePointHandleItem", // tp_name
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
  PyvtkPiecewisePointHandleItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewisePointHandleItem_StaticNew()
{
  return vtkPiecewisePointHandleItem::New();
}

PyObject *PyvtkPiecewisePointHandleItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPiecewisePointHandleItem_Type, PyvtkPiecewisePointHandleItem_Methods,
    "vtkPiecewisePointHandleItem",
 &PyvtkPiecewisePointHandleItem_StaticNew);

  PyTypeObject *pytype = &PyvtkPiecewisePointHandleItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewisePointHandleItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewisePointHandleItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewisePointHandleItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

