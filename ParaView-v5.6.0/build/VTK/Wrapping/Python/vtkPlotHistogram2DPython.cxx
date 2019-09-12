// python wrapper for vtkPlotHistogram2D
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
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkPlotHistogram2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotHistogram2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlotHistogram2D_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static const char *PyvtkPlotHistogram2D_Doc =
  "vtkPlotHistogram2D - no description provided.\n\n"
  "Superclass: vtkPlot\n\n"
;


static PyObject *
PyvtkPlotHistogram2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotHistogram2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotHistogram2D *tempr = vtkPlotHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotHistogram2D::NewInstance());

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
PyvtkPlotHistogram2D_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPlotHistogram2D::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotHistogram2D::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkIdType temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkPlotHistogram2D::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPlotHistogram2D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotHistogram2D::SetInputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_SetInputData_Methods[] = {
  {nullptr, PyvtkPlotHistogram2D_SetInputData_s1, METH_VARARGS,
   "@V|k *vtkImageData"},
  {nullptr, PyvtkPlotHistogram2D_SetInputData_s2, METH_VARARGS,
   "@V *vtkTable"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotHistogram2D_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotHistogram2D_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPlotHistogram2D_SetInputData_s1(self, args);
    case 3:
      return PyvtkPlotHistogram2D_SetInputData_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkPlotHistogram2D_GetInputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputImageData() :
      op->vtkPlotHistogram2D::GetInputImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction(temp0);
    }
    else
    {
      op->vtkPlotHistogram2D::SetTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkPlotHistogram2D::GetTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::GetBounds(temp0);
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
PyvtkPlotHistogram2D_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    if (ap.IsBound())
    {
      op->SetPosition(*temp0);
    }
    else
    {
      op->vtkPlotHistogram2D::SetPosition(*temp0);
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
PyvtkPlotHistogram2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPlotHistogram2D::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkVector2d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabel(*temp0, temp1, temp2) :
      op->vtkPlotHistogram2D::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_Methods[] = {
  {"IsTypeOf", PyvtkPlotHistogram2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotHistogram2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotHistogram2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlotHistogram2D\nC++: static vtkPlotHistogram2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotHistogram2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlotHistogram2D\nC++: vtkPlotHistogram2D *NewInstance()\n\n"},
  {"Update", PyvtkPlotHistogram2D_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkPlotHistogram2D_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item, called whenever it needs to be drawn.\n"},
  {"SetInputData", PyvtkPlotHistogram2D_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData, int)\nC++: virtual void SetInputData(vtkImageData *data, vtkIdType z=0)\nV.SetInputData(vtkTable)\nC++: void SetInputData(vtkTable *) override;\nV.SetInputData(vtkTable, string, string)\nC++: void SetInputData(vtkTable *, const vtkStdString &,\n    const vtkStdString &) override;\n\nSet the input, we are expecting a vtkImageData with just one\ncomponent, this would normally be a float or a double. It will be\npassed to the other functions as a double to generate a color.\n"},
  {"GetInputImageData", PyvtkPlotHistogram2D_GetInputImageData, METH_VARARGS,
   "V.GetInputImageData() -> vtkImageData\nC++: vtkImageData *GetInputImageData()\n\nGet the input table used by the plot.\n"},
  {"SetTransferFunction", PyvtkPlotHistogram2D_SetTransferFunction, METH_VARARGS,
   "V.SetTransferFunction(vtkScalarsToColors)\nC++: void SetTransferFunction(vtkScalarsToColors *transfer)\n\nSet the color transfer function that will be used to generate the\n2D histogram.\n"},
  {"GetTransferFunction", PyvtkPlotHistogram2D_GetTransferFunction, METH_VARARGS,
   "V.GetTransferFunction() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetTransferFunction()\n\nGet the color transfer function that is used to generate the\nhistogram.\n"},
  {"GetBounds", PyvtkPlotHistogram2D_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n\n* See GetUnscaledInputBounds for more information.\n"},
  {"SetPosition", PyvtkPlotHistogram2D_SetPosition, METH_VARARGS,
   "V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\n"},
  {"GetPosition", PyvtkPlotHistogram2D_GetPosition, METH_VARARGS,
   "V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\n"},
  {"GetTooltipLabel", PyvtkPlotHistogram2D_GetTooltipLabel, METH_VARARGS,
   "V.GetTooltipLabel(vtkVector2d, int, int) -> string\nC++: vtkStdString GetTooltipLabel(const vtkVector2d &plotPos,\n    vtkIdType seriesIndex, vtkIdType segmentIndex) override;\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored. The member variable\nTooltipLabelFormat can be set as a printf-style string to build\ncustom tooltip labels from, and may contain: An empty string\ngenerates the default tooltip labels. The following\ncase-sensitive format tags (without quotes) are recognized: '%x'\nThe X position of the histogram cell '%y' The Y position of the\nhistogram cell '%v' The scalar value of the histogram cell Note:\nthe %i and %j tags are valid only if there is a 1:1\ncorrespondence between individual histogram cells and axis tick\nmarks '%i' The X axis tick label for the histogram cell '%j' The\nY axis tick label for the histogram cell Any other characters or\nunrecognized format tags are printed in the tooltip label\nverbatim.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlotHistogram2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPlotHistogram2D", // tp_name
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
  PyvtkPlotHistogram2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotHistogram2D_StaticNew()
{
  return vtkPlotHistogram2D::New();
}

PyObject *PyvtkPlotHistogram2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlotHistogram2D_Type, PyvtkPlotHistogram2D_Methods,
    "vtkPlotHistogram2D",
 &PyvtkPlotHistogram2D_StaticNew);

  PyTypeObject *pytype = &PyvtkPlotHistogram2D_Type;

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

void PyVTKAddFile_vtkPlotHistogram2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotHistogram2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotHistogram2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

