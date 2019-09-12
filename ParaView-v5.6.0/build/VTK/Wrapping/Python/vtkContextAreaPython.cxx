// python wrapper for vtkContextArea
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
#include "vtkRect.h"
#include "vtkRect.h"
#include "vtkTuple.h"
#include "vtkContextArea.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextArea(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextArea_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractContextItem_ClassNew
extern "C" { PyObject *PyvtkAbstractContextItem_ClassNew(); }
#define DECLARED_PyvtkAbstractContextItem_ClassNew
#endif

static const char *PyvtkContextArea_Doc =
  "vtkContextArea - Clipped, transformed area with axes for context\nitems.\n\n"
  "Superclass: vtkAbstractContextItem\n\n"
  "vtkContextArea provides an clipped drawing area surrounded by four\n"
  "axes. The drawing area is transformed to map the 2D area described by\n"
  "DrawAreaBounds into pixel coordinates. DrawAreaBounds is also used to\n"
  "configure the axes. Item to be rendered in the draw area should be\n"
  "added to the context item returned by GetDrawAreaItem().\n\n"
  "The size and shape of the draw area is configured by the following\n"
  "member variables:\n"
  "- Geometry: The rect (pixel coordinates) defining the location of the\n"
  "context area in the scene. This includes the draw area and axis\n"
  "  ticks/labels.\n"
  "- FillViewport: If true (default), Geometry is set to span the size\n"
  "  returned by vtkContextDevice2D::GetViewportSize().\n"
  "- DrawAreaResizeBehavior: Controls how the draw area should be\n"
  "  shaped. Available options: Expand (default), FixedAspect,\n"
  "  FixedRect, FixedMargins.\n"
  "- FixedAspect: Aspect ratio to enforce for FixedAspect resize\n"
  "  behavior.\n"
  "- FixedRect: Rect used to enforce for FixedRect resize behavior.\n"
  "- FixedMargins: Margins to enforce for FixedMargins resize behavior.\n\n";

static PyTypeObject PyvtkContextArea_DrawAreaResizeBehaviorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkContextArea.DrawAreaResizeBehaviorType", // tp_name
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

PyObject *PyvtkContextArea_DrawAreaResizeBehaviorType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkContextArea_DrawAreaResizeBehaviorType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkContextArea_DrawAreaResizeBehaviorType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkContextArea_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextArea::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextArea::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextArea *tempr = vtkContextArea::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextArea *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextArea::NewInstance());

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
PyvtkContextArea_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkAxis::Location temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkAxis.Location"))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkContextArea::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetDrawAreaItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAreaItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetDrawAreaItem() :
      op->vtkContextArea::GetDrawAreaItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextArea::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecti tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkContextArea::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRecti");
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(*temp0);
    }
    else
    {
      op->vtkContextArea::SetGeometry(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextArea_GetDrawAreaBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAreaBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectd tempr = (ap.IsBound() ?
      op->GetDrawAreaBounds() :
      op->vtkContextArea::GetDrawAreaBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectd");
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetDrawAreaBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAreaBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkRectd *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectd"))
  {
    if (ap.IsBound())
    {
      op->SetDrawAreaBounds(*temp0);
    }
    else
    {
      op->vtkContextArea::SetDrawAreaBounds(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextArea_GetDrawAreaResizeBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAreaResizeBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkContextArea::DrawAreaResizeBehaviorType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetDrawAreaResizeBehavior() :
      op->vtkContextArea::GetDrawAreaResizeBehavior());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkContextArea_DrawAreaResizeBehaviorType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetDrawAreaResizeBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAreaResizeBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  typedef vtkContextArea::DrawAreaResizeBehaviorType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkContextArea.DrawAreaResizeBehaviorType"))
  {
    if (ap.IsBound())
    {
      op->SetDrawAreaResizeBehavior(temp0);
    }
    else
    {
      op->vtkContextArea::SetDrawAreaResizeBehavior(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetFixedAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFixedAspect() :
      op->vtkContextArea::GetFixedAspect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetFixedAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedAspect(temp0);
    }
    else
    {
      op->vtkContextArea::SetFixedAspect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetFixedRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecti tempr = (ap.IsBound() ?
      op->GetFixedRect() :
      op->vtkContextArea::GetFixedRect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRecti");
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetFixedRect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetFixedRect(*temp0);
    }
    else
    {
      op->vtkContextArea::SetFixedRect(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextArea_SetFixedRect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetFixedRect(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContextArea::SetFixedRect(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContextArea_SetFixedRect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContextArea_SetFixedRect_s1(self, args);
    case 4:
      return PyvtkContextArea_SetFixedRect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFixedRect");
  return nullptr;
}



static PyObject *
PyvtkContextArea_GetFixedMargins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkTuple<int, 4> *tempr = (ap.IsBound() ?
      &op->GetFixedMargins() :
      &op->vtkContextArea::GetFixedMargins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkTuple_IiLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetFixedMarginsArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedMarginsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFixedMarginsArray(temp0);
    }
    else
    {
      op->vtkContextArea::GetFixedMarginsArray(temp0);
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
PyvtkContextArea_GetFixedMarginsArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedMarginsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetFixedMarginsArray() :
      op->vtkContextArea::GetFixedMarginsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContextArea_GetFixedMarginsArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContextArea_GetFixedMarginsArray_s1(self, args);
    case 0:
      return PyvtkContextArea_GetFixedMarginsArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFixedMarginsArray");
  return nullptr;
}



static PyObject *
PyvtkContextArea_SetFixedMargins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  vtkTuple<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE"))
  {
    if (ap.IsBound())
    {
      op->SetFixedMargins(*temp0);
    }
    else
    {
      op->vtkContextArea::SetFixedMargins(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextArea_SetFixedMargins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFixedMargins(temp0);
    }
    else
    {
      op->vtkContextArea::SetFixedMargins(temp0);
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
PyvtkContextArea_SetFixedMargins_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetFixedMargins(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContextArea::SetFixedMargins(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContextArea_SetFixedMargins_Methods[] = {
  {nullptr, PyvtkContextArea_SetFixedMargins_s1, METH_VARARGS,
   "@W vtkTuple_IiLi4EE"},
  {nullptr, PyvtkContextArea_SetFixedMargins_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextArea_SetFixedMargins(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextArea_SetFixedMargins_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkContextArea_SetFixedMargins_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFixedMargins");
  return nullptr;
}



static PyObject *
PyvtkContextArea_GetFillViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFillViewport() :
      op->vtkContextArea::GetFillViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetFillViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillViewport(temp0);
    }
    else
    {
      op->vtkContextArea::SetFillViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_FillViewportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillViewportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillViewportOn();
    }
    else
    {
      op->vtkContextArea::FillViewportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_FillViewportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillViewportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillViewportOff();
    }
    else
    {
      op->vtkContextArea::FillViewportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_SetShowGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowGrid(temp0);
    }
    else
    {
      op->vtkContextArea::SetShowGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_GetShowGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowGrid() :
      op->vtkContextArea::GetShowGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_ShowGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowGridOn();
    }
    else
    {
      op->vtkContextArea::ShowGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextArea_ShowGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextArea *op = static_cast<vtkContextArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowGridOff();
    }
    else
    {
      op->vtkContextArea::ShowGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContextArea_Methods[] = {
  {"IsTypeOf", PyvtkContextArea_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextArea_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextArea_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextArea\nC++: static vtkContextArea *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextArea_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextArea\nC++: vtkContextArea *NewInstance()\n\n"},
  {"GetAxis", PyvtkContextArea_GetAxis, METH_VARARGS,
   "V.GetAxis(vtkAxis.Location) -> vtkAxis\nC++: vtkAxis *GetAxis(vtkAxis::Location location)\n\nGet the vtkAxis associated with the specified location.\n"},
  {"GetDrawAreaItem", PyvtkContextArea_GetDrawAreaItem, METH_VARARGS,
   "V.GetDrawAreaItem() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetDrawAreaItem()\n\nReturns the vtkAbstractContextItem that will draw in the clipped,\ntransformed space. This is the item to add children for.\n"},
  {"Paint", PyvtkContextArea_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {"GetGeometry", PyvtkContextArea_GetGeometry, METH_VARARGS,
   "V.GetGeometry() -> vtkRecti\nC++: virtual vtkRecti GetGeometry()\n\nThe rect defining the pixel location and size of the entire\nvtkContextArea, including axis labels, title, etc. Note that this\nwill be updated to the window geometry if FillWindow is true.\n"},
  {"SetGeometry", PyvtkContextArea_SetGeometry, METH_VARARGS,
   "V.SetGeometry(vtkRecti)\nC++: virtual void SetGeometry(vtkRecti _arg)\n\nThe rect defining the pixel location and size of the entire\nvtkContextArea, including axis labels, title, etc. Note that this\nwill be updated to the window geometry if FillWindow is true.\n"},
  {"GetDrawAreaBounds", PyvtkContextArea_GetDrawAreaBounds, METH_VARARGS,
   "V.GetDrawAreaBounds() -> vtkRectd\nC++: virtual vtkRectd GetDrawAreaBounds()\n\nThe data bounds of the clipped and transformed area inside of the\naxes. This is used to configure the axes labels and setup the\ntransform.\n"},
  {"SetDrawAreaBounds", PyvtkContextArea_SetDrawAreaBounds, METH_VARARGS,
   "V.SetDrawAreaBounds(vtkRectd)\nC++: virtual void SetDrawAreaBounds(vtkRectd _arg)\n\nThe data bounds of the clipped and transformed area inside of the\naxes. This is used to configure the axes labels and setup the\ntransform.\n"},
  {"GetDrawAreaResizeBehavior", PyvtkContextArea_GetDrawAreaResizeBehavior, METH_VARARGS,
   "V.GetDrawAreaResizeBehavior() -> DrawAreaResizeBehaviorType\nC++: virtual DrawAreaResizeBehaviorType GetDrawAreaResizeBehavior(\n    )\n\nSet the resize behavior for the draw area:\n- Expand: The default behavior. The draw area will automatically\n  resize to take up as much of Geometry as possible. Margin sizes\nare minimized based on the space required for axis labels/tick\n  marks.\n- FixedAspect: Same as Expand, but a fixed aspect ratio is\n  enforced. See SetFixedAspect.\n- FixedRect: Draw area is always constrained to a fixed\n  rectangle. See SetFixedRect.\n- FixMargins: The draw area expands to fill Geometry, but margins\n  (axis labels, etc) are fixed, rather than dynamically sized.\n  See SetFixedMargins.\n"},
  {"SetDrawAreaResizeBehavior", PyvtkContextArea_SetDrawAreaResizeBehavior, METH_VARARGS,
   "V.SetDrawAreaResizeBehavior(DrawAreaResizeBehaviorType)\nC++: virtual void SetDrawAreaResizeBehavior(\n    DrawAreaResizeBehaviorType _arg)\n\nSet the resize behavior for the draw area:\n- Expand: The default behavior. The draw area will automatically\n  resize to take up as much of Geometry as possible. Margin sizes\nare minimized based on the space required for axis labels/tick\n  marks.\n- FixedAspect: Same as Expand, but a fixed aspect ratio is\n  enforced. See SetFixedAspect.\n- FixedRect: Draw area is always constrained to a fixed\n  rectangle. See SetFixedRect.\n- FixMargins: The draw area expands to fill Geometry, but margins\n  (axis labels, etc) are fixed, rather than dynamically sized.\n  See SetFixedMargins.\n"},
  {"GetFixedAspect", PyvtkContextArea_GetFixedAspect, METH_VARARGS,
   "V.GetFixedAspect() -> float\nC++: virtual float GetFixedAspect()\n\nThe fixed aspect ratio, if DrawAreaResizeBehavior is FixedAspect.\nDefined as width/height. Default is 1. Setting the aspect ratio\nwill also set DrawAreaResizeBehavior to FixedAspect.\n"},
  {"SetFixedAspect", PyvtkContextArea_SetFixedAspect, METH_VARARGS,
   "V.SetFixedAspect(float)\nC++: virtual void SetFixedAspect(float aspect)\n\nThe fixed aspect ratio, if DrawAreaResizeBehavior is FixedAspect.\nDefined as width/height. Default is 1. Setting the aspect ratio\nwill also set DrawAreaResizeBehavior to FixedAspect.\n"},
  {"GetFixedRect", PyvtkContextArea_GetFixedRect, METH_VARARGS,
   "V.GetFixedRect() -> vtkRecti\nC++: virtual vtkRecti GetFixedRect()\n\nThe fixed rect to use for the draw area, if\nDrawAreaResizeBehavior is FixedRect. Units are in pixels, default\nis 300x300+0+0. Setting the fixed rect will also set\nDrawAreaResizeBehavior to FixedRect.\n"},
  {"SetFixedRect", PyvtkContextArea_SetFixedRect, METH_VARARGS,
   "V.SetFixedRect(vtkRecti)\nC++: virtual void SetFixedRect(vtkRecti rect)\nV.SetFixedRect(int, int, int, int)\nC++: virtual void SetFixedRect(int x, int y, int width,\n    int height)\n\nThe fixed rect to use for the draw area, if\nDrawAreaResizeBehavior is FixedRect. Units are in pixels, default\nis 300x300+0+0. Setting the fixed rect will also set\nDrawAreaResizeBehavior to FixedRect.\n"},
  {"GetFixedMargins", PyvtkContextArea_GetFixedMargins, METH_VARARGS,
   "V.GetFixedMargins() -> vtkTuple_IiLi4EE\nC++: virtual const Margins &GetFixedMargins()\n\nThe left, right, bottom, and top margins for the draw area, if\nDrawAreaResizeBehavior is FixedMargins. Units are in pixels,\ndefault is { 0, 0, 0, 0 }. Setting the fixed margins will also\nset DrawAreaResizeBehavior to FixedMargins.\n"},
  {"GetFixedMarginsArray", PyvtkContextArea_GetFixedMarginsArray, METH_VARARGS,
   "V.GetFixedMarginsArray([int, int, int, int])\nC++: virtual void GetFixedMarginsArray(int margins[4])\nV.GetFixedMarginsArray() -> (int, ...)\nC++: virtual const int *GetFixedMarginsArray()\n\nThe left, right, bottom, and top margins for the draw area, if\nDrawAreaResizeBehavior is FixedMargins. Units are in pixels,\ndefault is { 0, 0, 0, 0 }. Setting the fixed margins will also\nset DrawAreaResizeBehavior to FixedMargins.\n"},
  {"SetFixedMargins", PyvtkContextArea_SetFixedMargins, METH_VARARGS,
   "V.SetFixedMargins(vtkTuple_IiLi4EE)\nC++: virtual void SetFixedMargins(Margins margins)\nV.SetFixedMargins([int, int, int, int])\nC++: virtual void SetFixedMargins(int margins[4])\nV.SetFixedMargins(int, int, int, int)\nC++: virtual void SetFixedMargins(int left, int right, int bottom,\n     int top)\n\nThe left, right, bottom, and top margins for the draw area, if\nDrawAreaResizeBehavior is FixedMargins. Units are in pixels,\ndefault is { 0, 0, 0, 0 }. Setting the fixed margins will also\nset DrawAreaResizeBehavior to FixedMargins.\n"},
  {"GetFillViewport", PyvtkContextArea_GetFillViewport, METH_VARARGS,
   "V.GetFillViewport() -> bool\nC++: virtual bool GetFillViewport()\n\nIf true, Geometry is set to (0, 0, vpSize[0], vpSize[1]) at the\nstart of each Paint call. vpSize is\nvtkContextDevice2D::GetViewportSize. Default is true.\n"},
  {"SetFillViewport", PyvtkContextArea_SetFillViewport, METH_VARARGS,
   "V.SetFillViewport(bool)\nC++: virtual void SetFillViewport(bool _arg)\n\nIf true, Geometry is set to (0, 0, vpSize[0], vpSize[1]) at the\nstart of each Paint call. vpSize is\nvtkContextDevice2D::GetViewportSize. Default is true.\n"},
  {"FillViewportOn", PyvtkContextArea_FillViewportOn, METH_VARARGS,
   "V.FillViewportOn()\nC++: virtual void FillViewportOn()\n\nIf true, Geometry is set to (0, 0, vpSize[0], vpSize[1]) at the\nstart of each Paint call. vpSize is\nvtkContextDevice2D::GetViewportSize. Default is true.\n"},
  {"FillViewportOff", PyvtkContextArea_FillViewportOff, METH_VARARGS,
   "V.FillViewportOff()\nC++: virtual void FillViewportOff()\n\nIf true, Geometry is set to (0, 0, vpSize[0], vpSize[1]) at the\nstart of each Paint call. vpSize is\nvtkContextDevice2D::GetViewportSize. Default is true.\n"},
  {"SetShowGrid", PyvtkContextArea_SetShowGrid, METH_VARARGS,
   "V.SetShowGrid(bool)\nC++: virtual void SetShowGrid(bool show)\n\nTurn on/off grid visibility.\n"},
  {"GetShowGrid", PyvtkContextArea_GetShowGrid, METH_VARARGS,
   "V.GetShowGrid() -> bool\nC++: virtual bool GetShowGrid()\n\nTurn on/off grid visibility.\n"},
  {"ShowGridOn", PyvtkContextArea_ShowGridOn, METH_VARARGS,
   "V.ShowGridOn()\nC++: virtual void ShowGridOn()\n\nTurn on/off grid visibility.\n"},
  {"ShowGridOff", PyvtkContextArea_ShowGridOff, METH_VARARGS,
   "V.ShowGridOff()\nC++: virtual void ShowGridOff()\n\nTurn on/off grid visibility.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextArea_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkContextArea", // tp_name
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
  PyvtkContextArea_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextArea_StaticNew()
{
  return vtkContextArea::New();
}

PyObject *PyvtkContextArea_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextArea_Type, PyvtkContextArea_Methods,
    "vtkContextArea",
 &PyvtkContextArea_StaticNew);

  PyTypeObject *pytype = &PyvtkContextArea_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractContextItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkContextArea_DrawAreaResizeBehaviorType_Type);
  PyvtkContextArea_DrawAreaResizeBehaviorType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkContextArea_DrawAreaResizeBehaviorType_Type);

  o = (PyObject *)&PyvtkContextArea_DrawAreaResizeBehaviorType_Type;
  if (PyDict_SetItemString(d, "DrawAreaResizeBehaviorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkContextArea::DrawAreaResizeBehaviorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DARB_Expand", vtkContextArea::DARB_Expand },
        { "DARB_FixedAspect", vtkContextArea::DARB_FixedAspect },
        { "DARB_FixedRect", vtkContextArea::DARB_FixedRect },
        { "DARB_FixedMargins", vtkContextArea::DARB_FixedMargins },
      };

    o = PyvtkContextArea_DrawAreaResizeBehaviorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextArea(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextArea_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextArea", o) != 0)
  {
    Py_DECREF(o);
  }

}

