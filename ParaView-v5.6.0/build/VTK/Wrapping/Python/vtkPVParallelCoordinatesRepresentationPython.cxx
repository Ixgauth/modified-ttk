// python wrapper for vtkPVParallelCoordinatesRepresentation
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
#include "vtkPVParallelCoordinatesRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVParallelCoordinatesRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVParallelCoordinatesRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkChartRepresentation_ClassNew
#endif

static const char *PyvtkPVParallelCoordinatesRepresentation_Doc =
  "vtkPVParallelCoordinatesRepresentation -\nvtkPVParallelCoordinatesRepresentation is the\nvtkChartParallelCoordinates subclass for parallel coordinates\nrepresentation.\n\n"
  "Superclass: vtkChartRepresentation\n\n"
  "It exposes API from underlying vtkChartParallelCoordinates.\n\n";


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVParallelCoordinatesRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVParallelCoordinatesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVParallelCoordinatesRepresentation *tempr = vtkPVParallelCoordinatesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVParallelCoordinatesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVParallelCoordinatesRepresentation::NewInstance());

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
PyvtkPVParallelCoordinatesRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSeriesVisibility(temp0, temp1);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetSeriesVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSeriesVisibilities();
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::ClearSeriesVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartParallelCoordinates *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVParallelCoordinatesRepresentation::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineThickness(temp0);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStyle(temp0);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVParallelCoordinatesRepresentation_SetColor_s1(self, args);
    case 1:
      return PyvtkPVParallelCoordinatesRepresentation_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkPVParallelCoordinatesRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  vtkCSVExporter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
  {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkPVParallelCoordinatesRepresentation::Export(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVParallelCoordinatesRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVParallelCoordinatesRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVParallelCoordinatesRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVParallelCoordinatesRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVParallelCoordinatesRepresentation\nC++: static vtkPVParallelCoordinatesRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVParallelCoordinatesRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVParallelCoordinatesRepresentation\nC++: vtkPVParallelCoordinatesRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkPVParallelCoordinatesRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"SetSeriesVisibility", PyvtkPVParallelCoordinatesRepresentation_SetSeriesVisibility, METH_VARARGS,
   "V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet series visibility given its name. The order is currently\nignored, but in future we can add support to respect that as in\nvtkPVPlotMatrixRepresentation.\n"},
  {"ClearSeriesVisibilities", PyvtkPVParallelCoordinatesRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   "V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\nSet series visibility given its name. The order is currently\nignored, but in future we can add support to respect that as in\nvtkPVPlotMatrixRepresentation.\n"},
  {"GetChart", PyvtkPVParallelCoordinatesRepresentation_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChartParallelCoordinates\nC++: vtkChartParallelCoordinates *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {"SetLineThickness", PyvtkPVParallelCoordinatesRepresentation_SetLineThickness, METH_VARARGS,
   "V.SetLineThickness(int)\nC++: virtual void SetLineThickness(int _arg)\n\nSets the line thickness for the plot.\n"},
  {"SetLineStyle", PyvtkPVParallelCoordinatesRepresentation_SetLineStyle, METH_VARARGS,
   "V.SetLineStyle(int)\nC++: virtual void SetLineStyle(int _arg)\n\nSet the line style for the plot.\n"},
  {"SetColor", PyvtkPVParallelCoordinatesRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"SetOpacity", PyvtkPVParallelCoordinatesRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double _arg)\n\nSets the opacity for the lines in the plot.\n"},
  {"Export", PyvtkPVParallelCoordinatesRepresentation_Export, METH_VARARGS,
   "V.Export(vtkCSVExporter) -> bool\nC++: bool Export(vtkCSVExporter *exporter) override;\n\nCalled by vtkPVContextView::Export() to export the\nrepresentation's data to a CSV file. Return false on failure\nwhich will call the exporting process to abort and raise an\nerror. Default implementation simply returns false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVParallelCoordinatesRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVParallelCoordinatesRepresentation", // tp_name
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
  PyvtkPVParallelCoordinatesRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVParallelCoordinatesRepresentation_StaticNew()
{
  return vtkPVParallelCoordinatesRepresentation::New();
}

PyObject *PyvtkPVParallelCoordinatesRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVParallelCoordinatesRepresentation_Type, PyvtkPVParallelCoordinatesRepresentation_Methods,
    "vtkPVParallelCoordinatesRepresentation",
 &PyvtkPVParallelCoordinatesRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVParallelCoordinatesRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChartRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVParallelCoordinatesRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVParallelCoordinatesRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVParallelCoordinatesRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

