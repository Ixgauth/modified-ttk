// python wrapper for vtkPVPlotTime
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
#include "vtkPVPlotTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPlotTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPlotTime_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static const char *PyvtkPVPlotTime_Doc =
  "vtkPVPlotTime - takes care of drawing a \"time\" marker in the plot.\n\n"
  "Superclass: vtkPlot\n\n"
  "vtkPVPlotTime is used to add a \"current-time\" marker to the plot when\n"
  "on of the axes in the plots is time. Currently only X-axis as time is\n"
  "supported.\n\n";


static PyObject *
PyvtkPVPlotTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPlotTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPlotTime *tempr = vtkPVPlotTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPlotTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotTime::NewInstance());

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
PyvtkPVPlotTime_SetTimeAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeAxisMode(temp0);
    }
    else
    {
      op->vtkPVPlotTime::SetTimeAxisMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisModeMinValue() :
      op->vtkPVPlotTime::GetTimeAxisModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisModeMaxValue() :
      op->vtkPVPlotTime::GetTimeAxisModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisMode() :
      op->vtkPVPlotTime::GetTimeAxisMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_SetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTime(temp0);
    }
    else
    {
      op->vtkPVPlotTime::SetTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkPVPlotTime::GetTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPVPlotTime::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

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
      op->vtkPVPlotTime::GetBounds(temp0);
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

static PyMethodDef PyvtkPVPlotTime_Methods[] = {
  {"IsTypeOf", PyvtkPVPlotTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPlotTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPlotTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPlotTime\nC++: static vtkPVPlotTime *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPlotTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPlotTime\nC++: vtkPVPlotTime *NewInstance()\n\n"},
  {"SetTimeAxisMode", PyvtkPVPlotTime_SetTimeAxisMode, METH_VARARGS,
   "V.SetTimeAxisMode(int)\nC++: virtual void SetTimeAxisMode(int _arg)\n\nSet the Time axis mode.\n"},
  {"GetTimeAxisModeMinValue", PyvtkPVPlotTime_GetTimeAxisModeMinValue, METH_VARARGS,
   "V.GetTimeAxisModeMinValue() -> int\nC++: virtual int GetTimeAxisModeMinValue()\n\nSet the Time axis mode.\n"},
  {"GetTimeAxisModeMaxValue", PyvtkPVPlotTime_GetTimeAxisModeMaxValue, METH_VARARGS,
   "V.GetTimeAxisModeMaxValue() -> int\nC++: virtual int GetTimeAxisModeMaxValue()\n\nSet the Time axis mode.\n"},
  {"GetTimeAxisMode", PyvtkPVPlotTime_GetTimeAxisMode, METH_VARARGS,
   "V.GetTimeAxisMode() -> int\nC++: virtual int GetTimeAxisMode()\n\nSet the Time axis mode.\n"},
  {"SetTime", PyvtkPVPlotTime_SetTime, METH_VARARGS,
   "V.SetTime(float)\nC++: virtual void SetTime(double _arg)\n\nSet time value.\n"},
  {"GetTime", PyvtkPVPlotTime_GetTime, METH_VARARGS,
   "V.GetTime() -> float\nC++: virtual double GetTime()\n\nSet time value.\n"},
  {"Paint", PyvtkPVPlotTime_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn\n"},
  {"GetBounds", PyvtkPVPlotTime_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPlotTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVPlotTime", // tp_name
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
  PyvtkPVPlotTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPlotTime_StaticNew()
{
  return vtkPVPlotTime::New();
}

PyObject *PyvtkPVPlotTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPlotTime_Type, PyvtkPVPlotTime_Methods,
    "vtkPVPlotTime",
 &PyvtkPVPlotTime_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPlotTime_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "NONE", vtkPVPlotTime::NONE },
        { "X_AXIS", vtkPVPlotTime::X_AXIS },
        { "Y_AXIS", vtkPVPlotTime::Y_AXIS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPlotTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPlotTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPlotTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

