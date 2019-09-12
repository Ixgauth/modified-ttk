// python wrapper for vtkGridTransform
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
#include "vtkGridTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridTransform_ClassNew(); }

#ifndef DECLARED_PyvtkWarpTransform_ClassNew
extern "C" { PyObject *PyvtkWarpTransform_ClassNew(); }
#define DECLARED_PyvtkWarpTransform_ClassNew
#endif

static const char *PyvtkGridTransform_Doc =
  "vtkGridTransform - a nonlinear warp transformation\n\n"
  "Superclass: vtkWarpTransform\n\n"
  "vtkGridTransform describes a nonlinear warp transformation as a set\n"
  "of displacement vectors sampled along a uniform 3D grid.\n"
  "@warning\n"
  "The inverse grid transform is calculated using an iterative method,\n"
  "and is several times more expensive than the forward transform.\n"
  "@sa\n"
  "vtkThinPlateSplineTransform vtkGeneralTransform vtkTransformToGrid\n\n";


static PyObject *
PyvtkGridTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridTransform *tempr = vtkGridTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridTransform::NewInstance());

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
PyvtkGridTransform_SetDisplacementGridConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementGridConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementGridConnection(temp0);
    }
    else
    {
      op->vtkGridTransform::SetDisplacementGridConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementGridData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementGridData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementGridData(temp0);
    }
    else
    {
      op->vtkGridTransform::SetDisplacementGridData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetDisplacementGrid() :
      op->vtkGridTransform::GetDisplacementGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementScale(temp0);
    }
    else
    {
      op->vtkGridTransform::SetDisplacementScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkGridTransform::GetDisplacementScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementShift(temp0);
    }
    else
    {
      op->vtkGridTransform::SetDisplacementShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementShift() :
      op->vtkGridTransform::GetDisplacementShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkGridTransform::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkGridTransform::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearestNeighbor();
    }
    else
    {
      op->vtkGridTransform::SetInterpolationModeToNearestNeighbor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkGridTransform::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkGridTransform::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationModeAsString() :
      op->vtkGridTransform::GetInterpolationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkGridTransform::MakeTransform());

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
PyvtkGridTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGridTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridTransform_Methods[] = {
  {"IsTypeOf", PyvtkGridTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridTransform\nC++: static vtkGridTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridTransform\nC++: vtkGridTransform *NewInstance()\n\n"},
  {"SetDisplacementGridConnection", PyvtkGridTransform_SetDisplacementGridConnection, METH_VARARGS,
   "V.SetDisplacementGridConnection(vtkAlgorithmOutput)\nC++: virtual void SetDisplacementGridConnection(\n    vtkAlgorithmOutput *)\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {"SetDisplacementGridData", PyvtkGridTransform_SetDisplacementGridData, METH_VARARGS,
   "V.SetDisplacementGridData(vtkImageData)\nC++: virtual void SetDisplacementGridData(vtkImageData *)\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {"GetDisplacementGrid", PyvtkGridTransform_GetDisplacementGrid, METH_VARARGS,
   "V.GetDisplacementGrid() -> vtkImageData\nC++: virtual vtkImageData *GetDisplacementGrid()\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {"SetDisplacementScale", PyvtkGridTransform_SetDisplacementScale, METH_VARARGS,
   "V.SetDisplacementScale(float)\nC++: virtual void SetDisplacementScale(double _arg)\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {"GetDisplacementScale", PyvtkGridTransform_GetDisplacementScale, METH_VARARGS,
   "V.GetDisplacementScale() -> float\nC++: virtual double GetDisplacementScale()\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {"SetDisplacementShift", PyvtkGridTransform_SetDisplacementShift, METH_VARARGS,
   "V.SetDisplacementShift(float)\nC++: virtual void SetDisplacementShift(double _arg)\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {"GetDisplacementShift", PyvtkGridTransform_GetDisplacementShift, METH_VARARGS,
   "V.GetDisplacementShift() -> float\nC++: virtual double GetDisplacementShift()\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {"SetInterpolationMode", PyvtkGridTransform_SetInterpolationMode, METH_VARARGS,
   "V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int mode)\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"GetInterpolationMode", PyvtkGridTransform_GetInterpolationMode, METH_VARARGS,
   "V.GetInterpolationMode() -> int\nC++: virtual int GetInterpolationMode()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"SetInterpolationModeToNearestNeighbor", PyvtkGridTransform_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   "V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"SetInterpolationModeToLinear", PyvtkGridTransform_SetInterpolationModeToLinear, METH_VARARGS,
   "V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"SetInterpolationModeToCubic", PyvtkGridTransform_SetInterpolationModeToCubic, METH_VARARGS,
   "V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"GetInterpolationModeAsString", PyvtkGridTransform_GetInterpolationModeAsString, METH_VARARGS,
   "V.GetInterpolationModeAsString() -> string\nC++: const char *GetInterpolationModeAsString()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {"MakeTransform", PyvtkGridTransform_MakeTransform, METH_VARARGS,
   "V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {"GetMTime", PyvtkGridTransform_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkGridTransform", // tp_name
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
  PyvtkGridTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridTransform_StaticNew()
{
  return vtkGridTransform::New();
}

PyObject *PyvtkGridTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridTransform_Type, PyvtkGridTransform_Methods,
    "vtkGridTransform",
 &PyvtkGridTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkGridTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWarpTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_GRID_NEAREST", VTK_NEAREST_INTERPOLATION },
        { "VTK_GRID_LINEAR", VTK_LINEAR_INTERPOLATION },
        { "VTK_GRID_CUBIC", VTK_CUBIC_INTERPOLATION },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

