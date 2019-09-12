// python wrapper for vtkQuantizePolyDataPoints
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
#include "vtkQuantizePolyDataPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuantizePolyDataPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuantizePolyDataPoints_ClassNew(); }

#ifndef DECLARED_PyvtkCleanPolyData_ClassNew
extern "C" { PyObject *PyvtkCleanPolyData_ClassNew(); }
#define DECLARED_PyvtkCleanPolyData_ClassNew
#endif

static const char *PyvtkQuantizePolyDataPoints_Doc =
  "vtkQuantizePolyDataPoints - quantizes x,y,z coordinates of points\n\n"
  "Superclass: vtkCleanPolyData\n\n"
  "vtkQuantizePolyDataPoints is a subclass of vtkCleanPolyData and\n"
  "inherits the functionality of vtkCleanPolyData with the addition that\n"
  "it quantizes the point coordinates before inserting into the point\n"
  "list. The user should set QFactor to a positive value (0.25 by\n"
  "default) and all {x,y,z} coordinates will be quantized to that grain\n"
  "size.\n\n"
  "A tolerance of zero is expected, though positive values may be used,\n"
  "the quantization will take place before the tolerance is applied.\n\n"
  "@warning\n"
  "Merging points can alter topology, including introducing non-manifold\n"
  "forms. Handling of degenerate cells is controlled by switches in\n"
  "vtkCleanPolyData.\n\n"
  "@warning\n"
  "If you wish to operate on a set of coordinates that has no cells, you\n"
  "must add a vtkPolyVertex cell with all of the points to the PolyData\n"
  "(or use a vtkVertexGlyphFilter) before using the vtkCleanPolyData\n"
  "filter.\n\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";


static PyObject *
PyvtkQuantizePolyDataPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuantizePolyDataPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuantizePolyDataPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuantizePolyDataPoints *tempr = vtkQuantizePolyDataPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuantizePolyDataPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuantizePolyDataPoints::NewInstance());

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
PyvtkQuantizePolyDataPoints_SetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQFactor(temp0);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::SetQFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMinValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMaxValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactor() :
      op->vtkQuantizePolyDataPoints::GetQFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnPoint(temp0, temp1);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::OperateOnPoint(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnBounds(temp0, temp1);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::OperateOnBounds(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuantizePolyDataPoints_Methods[] = {
  {"IsTypeOf", PyvtkQuantizePolyDataPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuantizePolyDataPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuantizePolyDataPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuantizePolyDataPoints\nC++: static vtkQuantizePolyDataPoints *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuantizePolyDataPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *NewInstance()\n\n"},
  {"SetQFactor", PyvtkQuantizePolyDataPoints_SetQFactor, METH_VARARGS,
   "V.SetQFactor(float)\nC++: virtual void SetQFactor(double _arg)\n\nSpecify quantization grain size. Default is 0.25\n"},
  {"GetQFactorMinValue", PyvtkQuantizePolyDataPoints_GetQFactorMinValue, METH_VARARGS,
   "V.GetQFactorMinValue() -> float\nC++: virtual double GetQFactorMinValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {"GetQFactorMaxValue", PyvtkQuantizePolyDataPoints_GetQFactorMaxValue, METH_VARARGS,
   "V.GetQFactorMaxValue() -> float\nC++: virtual double GetQFactorMaxValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {"GetQFactor", PyvtkQuantizePolyDataPoints_GetQFactor, METH_VARARGS,
   "V.GetQFactor() -> float\nC++: virtual double GetQFactor()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {"OperateOnPoint", PyvtkQuantizePolyDataPoints_OperateOnPoint, METH_VARARGS,
   "V.OperateOnPoint([float, float, float], [float, float, float])\nC++: void OperateOnPoint(double in[3], double out[3]) override;\n\nPerform quantization on a point\n"},
  {"OperateOnBounds", PyvtkQuantizePolyDataPoints_OperateOnBounds, METH_VARARGS,
   "V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: void OperateOnBounds(double in[6], double out[6]) override;\n\nPerform quantization on bounds\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuantizePolyDataPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkQuantizePolyDataPoints", // tp_name
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
  PyvtkQuantizePolyDataPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuantizePolyDataPoints_StaticNew()
{
  return vtkQuantizePolyDataPoints::New();
}

PyObject *PyvtkQuantizePolyDataPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuantizePolyDataPoints_Type, PyvtkQuantizePolyDataPoints_Methods,
    "vtkQuantizePolyDataPoints",
 &PyvtkQuantizePolyDataPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkQuantizePolyDataPoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCleanPolyData_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuantizePolyDataPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuantizePolyDataPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuantizePolyDataPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

