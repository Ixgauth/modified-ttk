// python wrapper for vtkDiskSource
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
#include "vtkDiskSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiskSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiskSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDiskSource_Doc =
  "vtkDiskSource - create a disk with hole in center\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDiskSource creates a polygonal disk with a hole in the center. The\n"
  "disk has zero height. The user can specify the inner and outer radius\n"
  "of the disk, and the radial and circumferential resolution of the\n"
  "polygonal representation.\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";


static PyObject *
PyvtkDiskSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiskSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiskSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiskSource *tempr = vtkDiskSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiskSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiskSource::NewInstance());

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
PyvtkDiskSource_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerRadius(temp0);
    }
    else
    {
      op->vtkDiskSource::SetInnerRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMinValue() :
      op->vtkDiskSource::GetInnerRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMaxValue() :
      op->vtkDiskSource::GetInnerRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadius() :
      op->vtkDiskSource::GetInnerRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterRadius(temp0);
    }
    else
    {
      op->vtkDiskSource::SetOuterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMinValue() :
      op->vtkDiskSource::GetOuterRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMaxValue() :
      op->vtkDiskSource::GetOuterRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadius() :
      op->vtkDiskSource::GetOuterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_SetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialResolution(temp0);
    }
    else
    {
      op->vtkDiskSource::SetRadialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMinValue() :
      op->vtkDiskSource::GetRadialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMaxValue() :
      op->vtkDiskSource::GetRadialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolution() :
      op->vtkDiskSource::GetRadialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkDiskSource::SetCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMinValue() :
      op->vtkDiskSource::GetCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMaxValue() :
      op->vtkDiskSource::GetCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolution() :
      op->vtkDiskSource::GetCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkDiskSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDiskSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiskSource_Methods[] = {
  {"IsTypeOf", PyvtkDiskSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiskSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiskSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDiskSource\nC++: static vtkDiskSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiskSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiskSource\nC++: vtkDiskSource *NewInstance()\n\n"},
  {"SetInnerRadius", PyvtkDiskSource_SetInnerRadius, METH_VARARGS,
   "V.SetInnerRadius(float)\nC++: virtual void SetInnerRadius(double _arg)\n\nSpecify inner radius of hole in disc.\n"},
  {"GetInnerRadiusMinValue", PyvtkDiskSource_GetInnerRadiusMinValue, METH_VARARGS,
   "V.GetInnerRadiusMinValue() -> float\nC++: virtual double GetInnerRadiusMinValue()\n\nSpecify inner radius of hole in disc.\n"},
  {"GetInnerRadiusMaxValue", PyvtkDiskSource_GetInnerRadiusMaxValue, METH_VARARGS,
   "V.GetInnerRadiusMaxValue() -> float\nC++: virtual double GetInnerRadiusMaxValue()\n\nSpecify inner radius of hole in disc.\n"},
  {"GetInnerRadius", PyvtkDiskSource_GetInnerRadius, METH_VARARGS,
   "V.GetInnerRadius() -> float\nC++: virtual double GetInnerRadius()\n\nSpecify inner radius of hole in disc.\n"},
  {"SetOuterRadius", PyvtkDiskSource_SetOuterRadius, METH_VARARGS,
   "V.SetOuterRadius(float)\nC++: virtual void SetOuterRadius(double _arg)\n\nSpecify outer radius of disc.\n"},
  {"GetOuterRadiusMinValue", PyvtkDiskSource_GetOuterRadiusMinValue, METH_VARARGS,
   "V.GetOuterRadiusMinValue() -> float\nC++: virtual double GetOuterRadiusMinValue()\n\nSpecify outer radius of disc.\n"},
  {"GetOuterRadiusMaxValue", PyvtkDiskSource_GetOuterRadiusMaxValue, METH_VARARGS,
   "V.GetOuterRadiusMaxValue() -> float\nC++: virtual double GetOuterRadiusMaxValue()\n\nSpecify outer radius of disc.\n"},
  {"GetOuterRadius", PyvtkDiskSource_GetOuterRadius, METH_VARARGS,
   "V.GetOuterRadius() -> float\nC++: virtual double GetOuterRadius()\n\nSpecify outer radius of disc.\n"},
  {"SetRadialResolution", PyvtkDiskSource_SetRadialResolution, METH_VARARGS,
   "V.SetRadialResolution(int)\nC++: virtual void SetRadialResolution(int _arg)\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolutionMinValue", PyvtkDiskSource_GetRadialResolutionMinValue, METH_VARARGS,
   "V.GetRadialResolutionMinValue() -> int\nC++: virtual int GetRadialResolutionMinValue()\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolutionMaxValue", PyvtkDiskSource_GetRadialResolutionMaxValue, METH_VARARGS,
   "V.GetRadialResolutionMaxValue() -> int\nC++: virtual int GetRadialResolutionMaxValue()\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolution", PyvtkDiskSource_GetRadialResolution, METH_VARARGS,
   "V.GetRadialResolution() -> int\nC++: virtual int GetRadialResolution()\n\nSet the number of points in radius direction.\n"},
  {"SetCircumferentialResolution", PyvtkDiskSource_SetCircumferentialResolution, METH_VARARGS,
   "V.SetCircumferentialResolution(int)\nC++: virtual void SetCircumferentialResolution(int _arg)\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolutionMinValue", PyvtkDiskSource_GetCircumferentialResolutionMinValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMinValue() -> int\nC++: virtual int GetCircumferentialResolutionMinValue()\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolutionMaxValue", PyvtkDiskSource_GetCircumferentialResolutionMaxValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMaxValue() -> int\nC++: virtual int GetCircumferentialResolutionMaxValue()\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolution", PyvtkDiskSource_GetCircumferentialResolution, METH_VARARGS,
   "V.GetCircumferentialResolution() -> int\nC++: virtual int GetCircumferentialResolution()\n\nSet the number of points in circumferential direction.\n"},
  {"SetOutputPointsPrecision", PyvtkDiskSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkDiskSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiskSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkDiskSource", // tp_name
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
  PyvtkDiskSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiskSource_StaticNew()
{
  return vtkDiskSource::New();
}

PyObject *PyvtkDiskSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiskSource_Type, PyvtkDiskSource_Methods,
    "vtkDiskSource",
 &PyvtkDiskSource_StaticNew);

  PyTypeObject *pytype = &PyvtkDiskSource_Type;

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

void PyVTKAddFile_vtkDiskSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiskSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiskSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

