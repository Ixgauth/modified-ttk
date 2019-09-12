// python wrapper for vtkFitImplicitFunction
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
#include "vtkFitImplicitFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFitImplicitFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFitImplicitFunction_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static const char *PyvtkFitImplicitFunction_Doc =
  "vtkFitImplicitFunction - extract points on the surface of an implicit\nfunction\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkFitImplicitFunction extract points that are on the surface of an\n"
  "implicit function (within some threshold). Implicit functions in VTK\n"
  "are any function of the form f(x,y,z)=c, where values c==0 are\n"
  "considered the surface of the implicit function. Typical examples of\n"
  "implicit functions include planes, spheres, cylinders, cones, etc.\n"
  "plus boolean combinations of these functions. In this implementation,\n"
  "a threshold is used to create a fuzzy region considered \"on\" the\n"
  "surface. In essence, this is a very poor man's RANSAC algorithm,\n"
  "where the user picks a function on which to fit some points. Thus it\n"
  "is possible to use this filter to define a proposed model and place\n"
  "it into an optimization loop to best fit it to a set of points.\n\n"
  "Note that while any vtkPointSet type can be provided as input, the\n"
  "output is represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output). Also, after filter\n"
  "execution, the user can request a vtkIdType* map which indicates how\n"
  "the input points were mapped to the output. A value of map[i] (where\n"
  "i is the ith input point) less than 0 means that the ith input point\n"
  "was removed. (See also the superclass documentation for accessing the\n"
  "removed points through the filter's second output.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointCloudFilter vtkExtractPoints vtkImplicitFunction\n\n";


static PyObject *
PyvtkFitImplicitFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFitImplicitFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFitImplicitFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFitImplicitFunction *tempr = vtkFitImplicitFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFitImplicitFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFitImplicitFunction::NewInstance());

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
PyvtkFitImplicitFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkFitImplicitFunction::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkFitImplicitFunction::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0);
    }
    else
    {
      op->vtkFitImplicitFunction::SetThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMinValue() :
      op->vtkFitImplicitFunction::GetThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMaxValue() :
      op->vtkFitImplicitFunction::GetThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkFitImplicitFunction::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFitImplicitFunction::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFitImplicitFunction_Methods[] = {
  {"IsTypeOf", PyvtkFitImplicitFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkFitImplicitFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkFitImplicitFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFitImplicitFunction\nC++: static vtkFitImplicitFunction *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkFitImplicitFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFitImplicitFunction\nC++: vtkFitImplicitFunction *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetImplicitFunction", PyvtkFitImplicitFunction_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function defining a surface on which points\nare to be extracted.\n"},
  {"GetImplicitFunction", PyvtkFitImplicitFunction_GetImplicitFunction, METH_VARARGS,
   "V.GetImplicitFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function defining a surface on which points\nare to be extracted.\n"},
  {"SetThreshold", PyvtkFitImplicitFunction_SetThreshold, METH_VARARGS,
   "V.SetThreshold(float)\nC++: virtual void SetThreshold(double _arg)\n\nSpecify a threshold value which defines a fuzzy extraction\nsurface. Since in this filter the implicit surface is defined as\nf(x,y,z)=0; the extracted points are (-Threshold <= f(x,y,z) <\nThreshold).\n"},
  {"GetThresholdMinValue", PyvtkFitImplicitFunction_GetThresholdMinValue, METH_VARARGS,
   "V.GetThresholdMinValue() -> float\nC++: virtual double GetThresholdMinValue()\n\nSpecify a threshold value which defines a fuzzy extraction\nsurface. Since in this filter the implicit surface is defined as\nf(x,y,z)=0; the extracted points are (-Threshold <= f(x,y,z) <\nThreshold).\n"},
  {"GetThresholdMaxValue", PyvtkFitImplicitFunction_GetThresholdMaxValue, METH_VARARGS,
   "V.GetThresholdMaxValue() -> float\nC++: virtual double GetThresholdMaxValue()\n\nSpecify a threshold value which defines a fuzzy extraction\nsurface. Since in this filter the implicit surface is defined as\nf(x,y,z)=0; the extracted points are (-Threshold <= f(x,y,z) <\nThreshold).\n"},
  {"GetThreshold", PyvtkFitImplicitFunction_GetThreshold, METH_VARARGS,
   "V.GetThreshold() -> float\nC++: virtual double GetThreshold()\n\nSpecify a threshold value which defines a fuzzy extraction\nsurface. Since in this filter the implicit surface is defined as\nf(x,y,z)=0; the extracted points are (-Threshold <= f(x,y,z) <\nThreshold).\n"},
  {"GetMTime", PyvtkFitImplicitFunction_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the implicit\nfunction.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFitImplicitFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkFitImplicitFunction", // tp_name
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
  PyvtkFitImplicitFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFitImplicitFunction_StaticNew()
{
  return vtkFitImplicitFunction::New();
}

PyObject *PyvtkFitImplicitFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFitImplicitFunction_Type, PyvtkFitImplicitFunction_Methods,
    "vtkFitImplicitFunction",
 &PyvtkFitImplicitFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkFitImplicitFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFitImplicitFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFitImplicitFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFitImplicitFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

