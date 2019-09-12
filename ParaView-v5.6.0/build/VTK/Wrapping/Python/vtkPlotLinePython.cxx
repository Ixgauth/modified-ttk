// python wrapper for vtkPlotLine
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
#include "vtkPlotLine.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotLine(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlotLine_ClassNew(); }

#ifndef DECLARED_PyvtkPlotPoints_ClassNew
extern "C" { PyObject *PyvtkPlotPoints_ClassNew(); }
#define DECLARED_PyvtkPlotPoints_ClassNew
#endif

static const char *PyvtkPlotLine_Doc =
  "vtkPlotLine - Class for drawing an XY line plot given two columns\nfrom a vtkTable.\n\n"
  "Superclass: vtkPlotPoints\n\n"
;


static PyObject *
PyvtkPlotLine_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotLine::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotLine::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotLine *tempr = vtkPlotLine::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotLine *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotLine::NewInstance());

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
PyvtkPlotLine_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotLine::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

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
      op->vtkPlotLine::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotLine_SetPolyLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolyLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolyLine(temp0);
    }
    else
    {
      op->vtkPlotLine::SetPolyLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_GetPolyLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolyLine() :
      op->vtkPlotLine::GetPolyLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_PolyLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolyLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolyLineOn();
    }
    else
    {
      op->vtkPlotLine::PolyLineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotLine_PolyLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolyLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolyLineOff();
    }
    else
    {
      op->vtkPlotLine::PolyLineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotLine_Methods[] = {
  {"IsTypeOf", PyvtkPlotLine_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotLine_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotLine_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlotLine\nC++: static vtkPlotLine *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotLine_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlotLine\nC++: vtkPlotLine *NewInstance()\n\n"},
  {"Paint", PyvtkPlotLine_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn.\n"},
  {"PaintLegend", PyvtkPlotLine_PaintLegend, METH_VARARGS,
   "V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {"SetPolyLine", PyvtkPlotLine_SetPolyLine, METH_VARARGS,
   "V.SetPolyLine(bool)\nC++: virtual void SetPolyLine(bool _arg)\n\nTurn on/off flag to control whether the points define a poly line\n(true) or multiple line segments (false). If true (default), a\nsegment is drawn between each points (e.g. [P1P2, P2P3,\nP3P4...].) If false, a segment is drawn for each pair of points\n(e.g. [P1P2, P3P4,...].)\n"},
  {"GetPolyLine", PyvtkPlotLine_GetPolyLine, METH_VARARGS,
   "V.GetPolyLine() -> bool\nC++: virtual bool GetPolyLine()\n\nTurn on/off flag to control whether the points define a poly line\n(true) or multiple line segments (false). If true (default), a\nsegment is drawn between each points (e.g. [P1P2, P2P3,\nP3P4...].) If false, a segment is drawn for each pair of points\n(e.g. [P1P2, P3P4,...].)\n"},
  {"PolyLineOn", PyvtkPlotLine_PolyLineOn, METH_VARARGS,
   "V.PolyLineOn()\nC++: virtual void PolyLineOn()\n\nTurn on/off flag to control whether the points define a poly line\n(true) or multiple line segments (false). If true (default), a\nsegment is drawn between each points (e.g. [P1P2, P2P3,\nP3P4...].) If false, a segment is drawn for each pair of points\n(e.g. [P1P2, P3P4,...].)\n"},
  {"PolyLineOff", PyvtkPlotLine_PolyLineOff, METH_VARARGS,
   "V.PolyLineOff()\nC++: virtual void PolyLineOff()\n\nTurn on/off flag to control whether the points define a poly line\n(true) or multiple line segments (false). If true (default), a\nsegment is drawn between each points (e.g. [P1P2, P2P3,\nP3P4...].) If false, a segment is drawn for each pair of points\n(e.g. [P1P2, P3P4,...].)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlotLine_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkChartsCorePython.vtkPlotLine", // tp_name
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
  PyvtkPlotLine_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotLine_StaticNew()
{
  return vtkPlotLine::New();
}

PyObject *PyvtkPlotLine_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlotLine_Type, PyvtkPlotLine_Methods,
    "vtkPlotLine",
 &PyvtkPlotLine_StaticNew);

  PyTypeObject *pytype = &PyvtkPlotLine_Type;

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

void PyVTKAddFile_vtkPlotLine(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotLine_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotLine", o) != 0)
  {
    Py_DECREF(o);
  }

}

