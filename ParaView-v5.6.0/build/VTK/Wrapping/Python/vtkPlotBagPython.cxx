// python wrapper for vtkPlotBag
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
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkPlotBag.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotBag(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlotBag_ClassNew(); }

#ifndef DECLARED_PyvtkPlotPoints_ClassNew
extern "C" { PyObject *PyvtkPlotPoints_ClassNew(); }
#define DECLARED_PyvtkPlotPoints_ClassNew
#endif

static const char *PyvtkPlotBag_Doc =
  "vtkPlotBag - Class for drawing an a bagplot.\n\n"
  "Superclass: vtkPlotPoints\n\n"
  "This class allows to draw a bagplot given three columns from a\n"
  "vtkTable. The first two columns will represent X,Y as it is for\n"
  "vtkPlotPoints. The third one will have to specify if the density\n"
  "assigned to each point (generally obtained by the\n"
  "vtkHighestDensityRegionsStatistics filter). Points are drawn in a\n"
  "plot points fashion and 2 convex hull polygons are drawn around the\n"
  "median and the 3 quartile of the density field.\n\n"
  "@sa\n"
  "vtkHighestDensityRegionsStatistics\n\n";


static PyObject *
PyvtkPlotBag_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotBag::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotBag::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotBag *tempr = vtkPlotBag::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotBag *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotBag::NewInstance());

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
PyvtkPlotBag_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPlotBag::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotBag::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotBag::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotBag_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPlotBag::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotBag_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkTable *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotBag_SetInputData_Methods[] = {
  {nullptr, PyvtkPlotBag_SetInputData_s3, METH_VARARGS,
   "@Vsss *vtkTable"},
  {nullptr, PyvtkPlotBag_SetInputData_s4, METH_VARARGS,
   "@Vkkk *vtkTable"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotBag_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotBag_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlotBag_SetInputData_s1(self, args);
    case 3:
      return PyvtkPlotBag_SetInputData_s2(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkPlotBag_SetBagVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBagVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBagVisible(temp0);
    }
    else
    {
      op->vtkPlotBag::SetBagVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_GetBagVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBagVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBagVisible() :
      op->vtkPlotBag::GetBagVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_SetLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetLinePen(temp0);
    }
    else
    {
      op->vtkPlotBag::SetLinePen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_GetLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetLinePen() :
      op->vtkPlotBag::GetLinePen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_SetPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetPointPen(temp0);
    }
    else
    {
      op->vtkPlotBag::SetPointPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotBag_GetPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPointPen() :
      op->vtkPlotBag::GetPointPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotBag_Methods[] = {
  {"IsTypeOf", PyvtkPlotBag_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotBag_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotBag_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlotBag\nC++: static vtkPlotBag *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotBag_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlotBag\nC++: vtkPlotBag *NewInstance()\n\n"},
  {"Update", PyvtkPlotBag_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkPlotBag_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn.\n"},
  {"PaintLegend", PyvtkPlotBag_PaintLegend, METH_VARARGS,
   "V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {"GetLabels", PyvtkPlotBag_GetLabels, METH_VARARGS,
   "V.GetLabels() -> vtkStringArray\nC++: vtkStringArray *GetLabels() override;\n\nGet the plot labels. If this array has a length greater than 1\nthe index refers to the stacked objects in the plot. See\nvtkPlotBar for example.\n"},
  {"GetTooltipLabel", PyvtkPlotBag_GetTooltipLabel, METH_VARARGS,
   "V.GetTooltipLabel(vtkVector2d, int, int) -> string\nC++: vtkStdString GetTooltipLabel(const vtkVector2d &plotPos,\n    vtkIdType seriesIndex, vtkIdType segmentIndex) override;\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {"SetInputData", PyvtkPlotBag_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkTable)\nC++: void SetInputData(vtkTable *table) override;\nV.SetInputData(vtkTable, string, string)\nC++: void SetInputData(vtkTable *table,\n    const vtkStdString &yColumn,\n    const vtkStdString &densityColumn) override;\nV.SetInputData(vtkTable, string, string, string)\nC++: virtual void SetInputData(vtkTable *table,\n    const vtkStdString &xColumn, const vtkStdString &yColumn,\n    const vtkStdString &densityColumn)\nV.SetInputData(vtkTable, int, int, int)\nC++: virtual void SetInputData(vtkTable *table, vtkIdType xColumn,\n     vtkIdType yColumn, vtkIdType densityColumn)\n\nSet the input, we are expecting a vtkTable with three columns.\nThe first column and the second represent the x,y position . The\nfive others columns represent the quartiles used to display the\nbox. Inherited method will call the last SetInputData method with\ndefault parameters.\n"},
  {"SetBagVisible", PyvtkPlotBag_SetBagVisible, METH_VARARGS,
   "V.SetBagVisible(bool)\nC++: virtual void SetBagVisible(bool _arg)\n\nSet/get the visibility of the bags. True by default.\n"},
  {"GetBagVisible", PyvtkPlotBag_GetBagVisible, METH_VARARGS,
   "V.GetBagVisible() -> bool\nC++: virtual bool GetBagVisible()\n\nSet/get the visibility of the bags. True by default.\n"},
  {"SetLinePen", PyvtkPlotBag_SetLinePen, METH_VARARGS,
   "V.SetLinePen(vtkPen)\nC++: void SetLinePen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\nboundary lines.\n"},
  {"GetLinePen", PyvtkPlotBag_GetLinePen, METH_VARARGS,
   "V.GetLinePen() -> vtkPen\nC++: virtual vtkPen *GetLinePen()\n\nSet/get the vtkPen object that controls how this plot draws\nboundary lines.\n"},
  {"SetPointPen", PyvtkPlotBag_SetPointPen, METH_VARARGS,
   "V.SetPointPen(vtkPen)\nC++: void SetPointPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\npoints. Those are just helpers functions: this pen is actually\nthe default Plot pen.\n"},
  {"GetPointPen", PyvtkPlotBag_GetPointPen, METH_VARARGS,
   "V.GetPointPen() -> vtkPen\nC++: vtkPen *GetPointPen()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlotBag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPlotBag", // tp_name
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
  PyvtkPlotBag_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotBag_StaticNew()
{
  return vtkPlotBag::New();
}

PyObject *PyvtkPlotBag_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlotBag_Type, PyvtkPlotBag_Methods,
    "vtkPlotBag",
 &PyvtkPlotBag_StaticNew);

  PyTypeObject *pytype = &PyvtkPlotBag_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPlotPoints_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotBag(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotBag_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotBag", o) != 0)
  {
    Py_DECREF(o);
  }

}

