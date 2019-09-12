// python wrapper for vtkVectorDot
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
#include "vtkVectorDot.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVectorDot(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVectorDot_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkVectorDot_Doc =
  "vtkVectorDot - generate scalars from dot product of vectors and\nnormals (e.g., show displacement plot)\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkVectorDot is a filter to generate point scalar values from a\n"
  "dataset. The scalar value at a point is created by computing the dot\n"
  "product between the normal and vector at each point. Combined with\n"
  "the appropriate color map, this can show nodal lines/mode shapes of\n"
  "vibration, or a displacement plot.\n\n"
  "Note that by default the resulting scalars are mapped into a\n"
  "specified range. This requires an extra pass in the algorithm. This\n"
  "mapping pass can be disabled (set MapScalars to off).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";


static PyObject *
PyvtkVectorDot_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVectorDot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVectorDot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVectorDot *tempr = vtkVectorDot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVectorDot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVectorDot::NewInstance());

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
PyvtkVectorDot_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkVectorDot::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_GetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMapScalars() :
      op->vtkVectorDot::GetMapScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_MapScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MapScalarsOn();
    }
    else
    {
      op->vtkVectorDot::MapScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_MapScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MapScalarsOff();
    }
    else
    {
      op->vtkVectorDot::MapScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkVectorDot::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVectorDot_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkVectorDot::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVectorDot_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVectorDot_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkVectorDot_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkVectorDot_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkVectorDot::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorDot_GetActualRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActualRange() :
      op->vtkVectorDot::GetActualRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkVectorDot_Methods[] = {
  {"IsTypeOf", PyvtkVectorDot_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVectorDot_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVectorDot_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVectorDot\nC++: static vtkVectorDot *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVectorDot_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVectorDot\nC++: vtkVectorDot *NewInstance()\n\n"},
  {"SetMapScalars", PyvtkVectorDot_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(int)\nC++: virtual void SetMapScalars(vtkTypeBool _arg)\n\nEnable/disable the mapping of scalars into a specified range.\nThis will significantly improve the performance of the algorithm\nbut the resulting scalar values will strictly be a function of\nthe vector and normal data. By default, MapScalars is enabled,\nand the output scalar values will fall into the range\nScalarRange.\n"},
  {"GetMapScalars", PyvtkVectorDot_GetMapScalars, METH_VARARGS,
   "V.GetMapScalars() -> int\nC++: virtual vtkTypeBool GetMapScalars()\n\nEnable/disable the mapping of scalars into a specified range.\nThis will significantly improve the performance of the algorithm\nbut the resulting scalar values will strictly be a function of\nthe vector and normal data. By default, MapScalars is enabled,\nand the output scalar values will fall into the range\nScalarRange.\n"},
  {"MapScalarsOn", PyvtkVectorDot_MapScalarsOn, METH_VARARGS,
   "V.MapScalarsOn()\nC++: virtual void MapScalarsOn()\n\nEnable/disable the mapping of scalars into a specified range.\nThis will significantly improve the performance of the algorithm\nbut the resulting scalar values will strictly be a function of\nthe vector and normal data. By default, MapScalars is enabled,\nand the output scalar values will fall into the range\nScalarRange.\n"},
  {"MapScalarsOff", PyvtkVectorDot_MapScalarsOff, METH_VARARGS,
   "V.MapScalarsOff()\nC++: virtual void MapScalarsOff()\n\nEnable/disable the mapping of scalars into a specified range.\nThis will significantly improve the performance of the algorithm\nbut the resulting scalar values will strictly be a function of\nthe vector and normal data. By default, MapScalars is enabled,\nand the output scalar values will fall into the range\nScalarRange.\n"},
  {"SetScalarRange", PyvtkVectorDot_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkVectorDot_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSpecify the range into which to map the scalars. This mapping\nonly occurs if MapScalars is enabled.\n"},
  {"GetActualRange", PyvtkVectorDot_GetActualRange, METH_VARARGS,
   "V.GetActualRange() -> (float, float)\nC++: double *GetActualRange()\n\nReturn the actual range of the generated scalars (prior to\nmapping). Note that the data is valid only after the filter\nexecutes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVectorDot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkVectorDot", // tp_name
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
  PyvtkVectorDot_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVectorDot_StaticNew()
{
  return vtkVectorDot::New();
}

PyObject *PyvtkVectorDot_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVectorDot_Type, PyvtkVectorDot_Methods,
    "vtkVectorDot",
 &PyvtkVectorDot_StaticNew);

  PyTypeObject *pytype = &PyvtkVectorDot_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVectorDot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVectorDot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVectorDot", o) != 0)
  {
    Py_DECREF(o);
  }

}

