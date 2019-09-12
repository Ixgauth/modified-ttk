// python wrapper for vtkEarthSource
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
#include "vtkEarthSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEarthSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEarthSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkEarthSource_Doc =
  "vtkEarthSource - create the continents of the Earth as a sphere\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkEarthSource creates a spherical rendering of the geographical\n"
  "shapes of the major continents of the earth. The OnRatio determines\n"
  "how much of the data is actually used. The radius defines the radius\n"
  "of the sphere at which the continents are placed. Obtains data from\n"
  "an imbedded array of coordinates.\n\n";


static PyObject *
PyvtkEarthSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEarthSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEarthSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEarthSource *tempr = vtkEarthSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEarthSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEarthSource::NewInstance());

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
PyvtkEarthSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkEarthSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkEarthSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkEarthSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkEarthSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkEarthSource::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkEarthSource::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkEarthSource::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkEarthSource::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkEarthSource::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkEarthSource::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkEarthSource::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEarthSource_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkEarthSource::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEarthSource_Methods[] = {
  {"IsTypeOf", PyvtkEarthSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEarthSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEarthSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEarthSource\nC++: static vtkEarthSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEarthSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEarthSource\nC++: vtkEarthSource *NewInstance()\n\n"},
  {"SetRadius", PyvtkEarthSource_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet radius of earth.\n"},
  {"GetRadiusMinValue", PyvtkEarthSource_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet radius of earth.\n"},
  {"GetRadiusMaxValue", PyvtkEarthSource_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet radius of earth.\n"},
  {"GetRadius", PyvtkEarthSource_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet radius of earth.\n"},
  {"SetOnRatio", PyvtkEarthSource_SetOnRatio, METH_VARARGS,
   "V.SetOnRatio(int)\nC++: virtual void SetOnRatio(int _arg)\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {"GetOnRatioMinValue", PyvtkEarthSource_GetOnRatioMinValue, METH_VARARGS,
   "V.GetOnRatioMinValue() -> int\nC++: virtual int GetOnRatioMinValue()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {"GetOnRatioMaxValue", PyvtkEarthSource_GetOnRatioMaxValue, METH_VARARGS,
   "V.GetOnRatioMaxValue() -> int\nC++: virtual int GetOnRatioMaxValue()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {"GetOnRatio", PyvtkEarthSource_GetOnRatio, METH_VARARGS,
   "V.GetOnRatio() -> int\nC++: virtual int GetOnRatio()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {"SetOutline", PyvtkEarthSource_SetOutline, METH_VARARGS,
   "V.SetOutline(int)\nC++: virtual void SetOutline(vtkTypeBool _arg)\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {"GetOutline", PyvtkEarthSource_GetOutline, METH_VARARGS,
   "V.GetOutline() -> int\nC++: virtual vtkTypeBool GetOutline()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {"OutlineOn", PyvtkEarthSource_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: virtual void OutlineOn()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {"OutlineOff", PyvtkEarthSource_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: virtual void OutlineOff()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEarthSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkEarthSource", // tp_name
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
  PyvtkEarthSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEarthSource_StaticNew()
{
  return vtkEarthSource::New();
}

PyObject *PyvtkEarthSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEarthSource_Type, PyvtkEarthSource_Methods,
    "vtkEarthSource",
 &PyvtkEarthSource_StaticNew);

  PyTypeObject *pytype = &PyvtkEarthSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEarthSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEarthSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEarthSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

