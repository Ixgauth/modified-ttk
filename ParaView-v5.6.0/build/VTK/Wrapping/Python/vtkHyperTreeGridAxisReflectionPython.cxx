// python wrapper for vtkHyperTreeGridAxisReflection
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
#include "vtkHyperTreeGridAxisReflection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridAxisReflection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridAxisReflection_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridAxisReflection_Doc =
  "vtkHyperTreeGridAxisReflection - Reflect a hyper tree grid\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This filter reflect the cells of a hyper tree grid with respect to\n"
  "one of the planes parallel to the bounding box of the data set.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkReflectionFilter\n\n"
  "@par Thanks: This class was written by Philippe Pebay based on a idea\n"
  "of Guenole Harel and Jacques-Bernard Lekien, 2016 This work was\n"
  "supported by Commissariat a l'Energie Atomique (CEA/DIF)\n\n";

static PyTypeObject PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridAxisReflection.AxisReflectionPlane", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridAxisReflection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAxisReflection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridAxisReflection *tempr = vtkHyperTreeGridAxisReflection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridAxisReflection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAxisReflection::NewInstance());

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
PyvtkHyperTreeGridAxisReflection_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMinValue() :
      op->vtkHyperTreeGridAxisReflection::GetPlaneMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMaxValue() :
      op->vtkHyperTreeGridAxisReflection::GetPlaneMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkHyperTreeGridAxisReflection::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToX();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToY();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZ();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToXMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToYMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToXMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToYMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkHyperTreeGridAxisReflection::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridAxisReflection_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridAxisReflection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridAxisReflection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridAxisReflection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridAxisReflection\nC++: static vtkHyperTreeGridAxisReflection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridAxisReflection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridAxisReflection\nC++: vtkHyperTreeGridAxisReflection *NewInstance()\n\n"},
  {"SetPlane", PyvtkHyperTreeGridAxisReflection_SetPlane, METH_VARARGS,
   "V.SetPlane(int)\nC++: virtual void SetPlane(int _arg)\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMinValue", PyvtkHyperTreeGridAxisReflection_GetPlaneMinValue, METH_VARARGS,
   "V.GetPlaneMinValue() -> int\nC++: virtual int GetPlaneMinValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMaxValue", PyvtkHyperTreeGridAxisReflection_GetPlaneMaxValue, METH_VARARGS,
   "V.GetPlaneMaxValue() -> int\nC++: virtual int GetPlaneMaxValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlane", PyvtkHyperTreeGridAxisReflection_GetPlane, METH_VARARGS,
   "V.GetPlane() -> int\nC++: virtual int GetPlane()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToX", PyvtkHyperTreeGridAxisReflection_SetPlaneToX, METH_VARARGS,
   "V.SetPlaneToX()\nC++: void SetPlaneToX()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToY", PyvtkHyperTreeGridAxisReflection_SetPlaneToY, METH_VARARGS,
   "V.SetPlaneToY()\nC++: void SetPlaneToY()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZ", PyvtkHyperTreeGridAxisReflection_SetPlaneToZ, METH_VARARGS,
   "V.SetPlaneToZ()\nC++: void SetPlaneToZ()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToXMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToXMin, METH_VARARGS,
   "V.SetPlaneToXMin()\nC++: void SetPlaneToXMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToYMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToYMin, METH_VARARGS,
   "V.SetPlaneToYMin()\nC++: void SetPlaneToYMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToZMin, METH_VARARGS,
   "V.SetPlaneToZMin()\nC++: void SetPlaneToZMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToXMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToXMax, METH_VARARGS,
   "V.SetPlaneToXMax()\nC++: void SetPlaneToXMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToYMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToYMax, METH_VARARGS,
   "V.SetPlaneToYMax()\nC++: void SetPlaneToYMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToZMax, METH_VARARGS,
   "V.SetPlaneToZMax()\nC++: void SetPlaneToZMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetCenter", PyvtkHyperTreeGridAxisReflection_SetCenter, METH_VARARGS,
   "V.SetCenter(float)\nC++: virtual void SetCenter(double _arg)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {"GetCenter", PyvtkHyperTreeGridAxisReflection_GetCenter, METH_VARARGS,
   "V.GetCenter() -> float\nC++: virtual double GetCenter()\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridAxisReflection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridAxisReflection", // tp_name
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
  PyvtkHyperTreeGridAxisReflection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridAxisReflection_StaticNew()
{
  return vtkHyperTreeGridAxisReflection::New();
}

PyObject *PyvtkHyperTreeGridAxisReflection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridAxisReflection_Type, PyvtkHyperTreeGridAxisReflection_Methods,
    "vtkHyperTreeGridAxisReflection",
 &PyvtkHyperTreeGridAxisReflection_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridAxisReflection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type);
  PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type);

  o = (PyObject *)&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type;
  if (PyDict_SetItemString(d, "AxisReflectionPlane", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkHyperTreeGridAxisReflection::AxisReflectionPlane cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "USE_X_MIN", vtkHyperTreeGridAxisReflection::USE_X_MIN },
        { "USE_Y_MIN", vtkHyperTreeGridAxisReflection::USE_Y_MIN },
        { "USE_Z_MIN", vtkHyperTreeGridAxisReflection::USE_Z_MIN },
        { "USE_X_MAX", vtkHyperTreeGridAxisReflection::USE_X_MAX },
        { "USE_Y_MAX", vtkHyperTreeGridAxisReflection::USE_Y_MAX },
        { "USE_Z_MAX", vtkHyperTreeGridAxisReflection::USE_Z_MAX },
        { "USE_X", vtkHyperTreeGridAxisReflection::USE_X },
        { "USE_Y", vtkHyperTreeGridAxisReflection::USE_Y },
        { "USE_Z", vtkHyperTreeGridAxisReflection::USE_Z },
      };

    o = PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridAxisReflection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridAxisReflection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridAxisReflection", o) != 0)
  {
    Py_DECREF(o);
  }

}

