// python wrapper for vtkPVBoxChartRepresentation
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
#include "vtkPVBoxChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVBoxChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVBoxChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkChartRepresentation_ClassNew
#endif

static const char *PyvtkPVBoxChartRepresentation_Doc =
  "vtkPVBoxChartRepresentation - vtkPVBoxChartRepresentation is the\nvtkChartBox subclass for box plots representation.\n\n"
  "Superclass: vtkChartRepresentation\n\n"
  "It exposes API from underlying vtkChartBox.\n\n";


static PyObject *
PyvtkPVBoxChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVBoxChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVBoxChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVBoxChartRepresentation *tempr = vtkPVBoxChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVBoxChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVBoxChartRepresentation::NewInstance());

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
PyvtkPVBoxChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetSeriesVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetSeriesColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  const char *temp0 = nullptr;
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
      op->SetSeriesColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVBoxChartRepresentation::SetSeriesColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSeriesVisibilities();
    }
    else
    {
      op->vtkPVBoxChartRepresentation::ClearSeriesVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_ClearSeriesColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSeriesColors();
    }
    else
    {
      op->vtkPVBoxChartRepresentation::ClearSeriesColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartBox *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVBoxChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBoxChartRepresentation_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVBoxChartRepresentation_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVBoxChartRepresentation_SetColor_s1(self, args);
    case 1:
      return PyvtkPVBoxChartRepresentation_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkPVBoxChartRepresentation_SetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegend(temp0);
    }
    else
    {
      op->vtkPVBoxChartRepresentation::SetLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVBoxChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVBoxChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVBoxChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVBoxChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVBoxChartRepresentation\nC++: static vtkPVBoxChartRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVBoxChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVBoxChartRepresentation\nC++: vtkPVBoxChartRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkPVBoxChartRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"SetSeriesVisibility", PyvtkPVBoxChartRepresentation_SetSeriesVisibility, METH_VARARGS,
   "V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet/Clear the properties for series/columns.\n"},
  {"SetSeriesColor", PyvtkPVBoxChartRepresentation_SetSeriesColor, METH_VARARGS,
   "V.SetSeriesColor(string, float, float, float)\nC++: void SetSeriesColor(const char *name, double r, double g,\n    double b)\n\nSet/Clear the properties for series/columns.\n"},
  {"ClearSeriesVisibilities", PyvtkPVBoxChartRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   "V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\n"},
  {"ClearSeriesColors", PyvtkPVBoxChartRepresentation_ClearSeriesColors, METH_VARARGS,
   "V.ClearSeriesColors()\nC++: void ClearSeriesColors()\n\n"},
  {"GetChart", PyvtkPVBoxChartRepresentation_GetChart, METH_VARARGS,
   "V.GetChart() -> vtkChartBox\nC++: vtkChartBox *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {"SetLineThickness", PyvtkPVBoxChartRepresentation_SetLineThickness, METH_VARARGS,
   "V.SetLineThickness(int)\nC++: virtual void SetLineThickness(int _arg)\n\nSets the line thickness for the plot.\n"},
  {"SetLineStyle", PyvtkPVBoxChartRepresentation_SetLineStyle, METH_VARARGS,
   "V.SetLineStyle(int)\nC++: virtual void SetLineStyle(int _arg)\n\nSet the line style for the plot.\n"},
  {"SetColor", PyvtkPVBoxChartRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"SetLegend", PyvtkPVBoxChartRepresentation_SetLegend, METH_VARARGS,
   "V.SetLegend(bool)\nC++: virtual void SetLegend(bool _arg)\n\nSet the visibility of the legend (plot labels)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVBoxChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVBoxChartRepresentation", // tp_name
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
  PyvtkPVBoxChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVBoxChartRepresentation_StaticNew()
{
  return vtkPVBoxChartRepresentation::New();
}

PyObject *PyvtkPVBoxChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVBoxChartRepresentation_Type, PyvtkPVBoxChartRepresentation_Methods,
    "vtkPVBoxChartRepresentation",
 &PyvtkPVBoxChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVBoxChartRepresentation_Type;

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

void PyVTKAddFile_vtkPVBoxChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVBoxChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVBoxChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

