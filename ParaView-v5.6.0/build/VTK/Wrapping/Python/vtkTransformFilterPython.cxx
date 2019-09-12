// python wrapper for vtkTransformFilter
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
#include "vtkTransformFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkTransformFilter_Doc =
  "vtkTransformFilter - transform points and associated normals and\nvectors\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkTransformFilter is a filter to transform point coordinates, and\n"
  "associated point normals and vectors, as well as cell normals and\n"
  "vectors. Transformed data array will be stored in a float array or a\n"
  "double array. Other point and cel data are passed through the filter,\n"
  "unless TransformAllInputVectors is set to true, in this case all\n"
  "other 3 components arrays from point and cell data will be\n"
  "transformed as well.\n\n"
  "An alternative method of transformation is to use vtkActor's methods\n"
  "to scale, rotate, and translate objects. The difference between the\n"
  "two methods is that vtkActor's transformation simply effects where\n"
  "objects are rendered (via the graphics pipeline), whereas\n"
  "vtkTransformFilter actually modifies point coordinates in the\n"
  "visualization pipeline. This is necessary for some objects (e.g.,\n"
  "vtkProbeFilter) that require point coordinates as input.\n\n"
  "@sa\n"
  "vtkAbstractTransform vtkTransformPolyDataFilter vtkActor\n\n";


static PyObject *
PyvtkTransformFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformFilter *tempr = vtkTransformFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformFilter::NewInstance());

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
PyvtkTransformFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransformFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkTransformFilter::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkTransformFilter::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkTransformFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

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
      op->vtkTransformFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTransformFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_SetTransformAllInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformAllInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformAllInputVectors(temp0);
    }
    else
    {
      op->vtkTransformFilter::SetTransformAllInputVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_GetTransformAllInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformAllInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransformAllInputVectors() :
      op->vtkTransformFilter::GetTransformAllInputVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_TransformAllInputVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformAllInputVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformAllInputVectorsOn();
    }
    else
    {
      op->vtkTransformFilter::TransformAllInputVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFilter_TransformAllInputVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformAllInputVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFilter *op = static_cast<vtkTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformAllInputVectorsOff();
    }
    else
    {
      op->vtkTransformFilter::TransformAllInputVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformFilter_Methods[] = {
  {"IsTypeOf", PyvtkTransformFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransformFilter\nC++: static vtkTransformFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransformFilter\nC++: vtkTransformFilter *NewInstance()\n\n"},
  {"GetMTime", PyvtkTransformFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the transform.\n"},
  {"SetTransform", PyvtkTransformFilter_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\n\nSpecify the transform object used to transform points.\n"},
  {"GetTransform", PyvtkTransformFilter_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nSpecify the transform object used to transform points.\n"},
  {"FillInputPortInformation", PyvtkTransformFilter_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"SetOutputPointsPrecision", PyvtkTransformFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkTransformFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"SetTransformAllInputVectors", PyvtkTransformFilter_SetTransformAllInputVectors, METH_VARARGS,
   "V.SetTransformAllInputVectors(bool)\nC++: virtual void SetTransformAllInputVectors(bool _arg)\n\nIf off (the default), only Vectors and Normals will be\ntransformed. If on, all 3-component data arrays ( considered as\n3D vectors) will be transformed All other won't be flipped and\nwill only be copied.\n"},
  {"GetTransformAllInputVectors", PyvtkTransformFilter_GetTransformAllInputVectors, METH_VARARGS,
   "V.GetTransformAllInputVectors() -> bool\nC++: virtual bool GetTransformAllInputVectors()\n\nIf off (the default), only Vectors and Normals will be\ntransformed. If on, all 3-component data arrays ( considered as\n3D vectors) will be transformed All other won't be flipped and\nwill only be copied.\n"},
  {"TransformAllInputVectorsOn", PyvtkTransformFilter_TransformAllInputVectorsOn, METH_VARARGS,
   "V.TransformAllInputVectorsOn()\nC++: virtual void TransformAllInputVectorsOn()\n\nIf off (the default), only Vectors and Normals will be\ntransformed. If on, all 3-component data arrays ( considered as\n3D vectors) will be transformed All other won't be flipped and\nwill only be copied.\n"},
  {"TransformAllInputVectorsOff", PyvtkTransformFilter_TransformAllInputVectorsOff, METH_VARARGS,
   "V.TransformAllInputVectorsOff()\nC++: virtual void TransformAllInputVectorsOff()\n\nIf off (the default), only Vectors and Normals will be\ntransformed. If on, all 3-component data arrays ( considered as\n3D vectors) will be transformed All other won't be flipped and\nwill only be copied.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransformFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkTransformFilter", // tp_name
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
  PyvtkTransformFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformFilter_StaticNew()
{
  return vtkTransformFilter::New();
}

PyObject *PyvtkTransformFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransformFilter_Type, PyvtkTransformFilter_Methods,
    "vtkTransformFilter",
 &PyvtkTransformFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkTransformFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

