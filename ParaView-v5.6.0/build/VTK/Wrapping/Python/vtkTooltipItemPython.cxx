// python wrapper for vtkTooltipItem
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkTooltipItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTooltipItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTooltipItem_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkTooltipItem_Doc =
  "vtkTooltipItem - takes care of drawing 2D axes\n\n"
  "Superclass: vtkContextItem\n\n"
  "The vtkTooltipItem is drawn in screen coordinates. It is used to\n"
  "display a tooltip on a scene, giving additional information about an\n"
  "element on the scene, such as in vtkChartXY. It takes care of\n"
  "ensuring that it draws itself within the bounds of the screen.\n\n";


static PyObject *
PyvtkTooltipItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTooltipItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTooltipItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTooltipItem *tempr = vtkTooltipItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTooltipItem::NewInstance());

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
PyvtkTooltipItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float temp0;
  float temp1;
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
      op->vtkTooltipItem::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkTooltipItem::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPosition(*temp0);
    }
    else
    {
      op->vtkTooltipItem::SetPosition(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTooltipItem_SetPosition_Methods[] = {
  {nullptr, PyvtkTooltipItem_SetPosition_s2, METH_VARARGS,
   "@P *f"},
  {nullptr, PyvtkTooltipItem_SetPosition_s3, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTooltipItem_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTooltipItem_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTooltipItem_SetPosition_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkTooltipItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkTooltipItem::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPositionVector() :
      op->vtkTooltipItem::GetPositionVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0);
    }
    else
    {
      op->vtkTooltipItem::SetText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkTooltipItem::GetText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkTooltipItem::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkTooltipItem::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperties() :
      op->vtkTooltipItem::GetTextProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkTooltipItem::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTooltipItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkTooltipItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTooltipItem_Methods[] = {
  {"IsTypeOf", PyvtkTooltipItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTooltipItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTooltipItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTooltipItem\nC++: static vtkTooltipItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTooltipItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTooltipItem\nC++: vtkTooltipItem *NewInstance()\n\n"},
  {"SetPosition", PyvtkTooltipItem_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float)\nC++: void SetPosition(float, float)\nV.SetPosition((float, float))\nC++: void SetPosition(float a[2])\nV.SetPosition(vtkVector2f)\nC++: void SetPosition(const vtkVector2f &pos)\n\n"},
  {"GetPosition", PyvtkTooltipItem_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float)\nC++: float *GetPosition()\n\n"},
  {"GetPositionVector", PyvtkTooltipItem_GetPositionVector, METH_VARARGS,
   "V.GetPositionVector() -> vtkVector2f\nC++: vtkVector2f GetPositionVector()\n\nGet position of the axis (in pixels).\n"},
  {"SetText", PyvtkTooltipItem_SetText, METH_VARARGS,
   "V.SetText(string)\nC++: virtual void SetText(const vtkStdString &title)\n\nGet/set the text of the item.\n"},
  {"GetText", PyvtkTooltipItem_GetText, METH_VARARGS,
   "V.GetText() -> string\nC++: virtual vtkStdString GetText()\n\nGet/set the text of the item.\n"},
  {"GetPen", PyvtkTooltipItem_GetPen, METH_VARARGS,
   "V.GetPen() -> vtkPen\nC++: virtual vtkPen *GetPen()\n\nGet a pointer to the vtkTextProperty object that controls the way\nthe text is rendered.\n"},
  {"GetBrush", PyvtkTooltipItem_GetBrush, METH_VARARGS,
   "V.GetBrush() -> vtkBrush\nC++: virtual vtkBrush *GetBrush()\n\nGet a pointer to the vtkPen object.\n"},
  {"GetTextProperties", PyvtkTooltipItem_GetTextProperties, METH_VARARGS,
   "V.GetTextProperties() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperties()\n\nGet the vtkTextProperty that governs how the tooltip text is\ndisplayed.\n"},
  {"Update", PyvtkTooltipItem_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nUpdate the geometry of the tooltip.\n"},
  {"Paint", PyvtkTooltipItem_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the tooltip.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTooltipItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkTooltipItem", // tp_name
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
  PyvtkTooltipItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTooltipItem_StaticNew()
{
  return vtkTooltipItem::New();
}

PyObject *PyvtkTooltipItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTooltipItem_Type, PyvtkTooltipItem_Methods,
    "vtkTooltipItem",
 &PyvtkTooltipItem_StaticNew);

  PyTypeObject *pytype = &PyvtkTooltipItem_Type;

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

void PyVTKAddFile_vtkTooltipItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTooltipItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTooltipItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

