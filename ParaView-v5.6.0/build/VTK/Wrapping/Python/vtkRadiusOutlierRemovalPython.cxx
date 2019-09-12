// python wrapper for vtkRadiusOutlierRemoval
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
#include "vtkRadiusOutlierRemoval.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRadiusOutlierRemoval(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRadiusOutlierRemoval_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static const char *PyvtkRadiusOutlierRemoval_Doc =
  "vtkRadiusOutlierRemoval - remove isolated points\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkRadiusOutlierRemoval removes isolated points; i.e., those points\n"
  "that have few neighbors within a specified radius. The user must\n"
  "specify the radius defining the local region, as well as the\n"
  "isolation threshold (i.e., number of neighboring points required for\n"
  "the point to be considered isolated). Optionally, users can specify a\n"
  "point locator to accelerate local neighborhood search operations. (By\n"
  "default a vtkStaticPointLocator will be created.)\n\n"
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
  "vtkPointCloudFilter vtkStatisticalOutlierRemoval vtkExtractPoints\n"
  "vtkThresholdPoints vtkImplicitFunction\n\n";


static PyObject *
PyvtkRadiusOutlierRemoval_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRadiusOutlierRemoval::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRadiusOutlierRemoval::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRadiusOutlierRemoval *tempr = vtkRadiusOutlierRemoval::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRadiusOutlierRemoval *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRadiusOutlierRemoval::NewInstance());

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
PyvtkRadiusOutlierRemoval_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

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
      op->vtkRadiusOutlierRemoval::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkRadiusOutlierRemoval::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkRadiusOutlierRemoval::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkRadiusOutlierRemoval::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_SetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNeighbors(temp0);
    }
    else
    {
      op->vtkRadiusOutlierRemoval::SetNumberOfNeighbors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetNumberOfNeighborsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighborsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighborsMinValue() :
      op->vtkRadiusOutlierRemoval::GetNumberOfNeighborsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetNumberOfNeighborsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighborsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighborsMaxValue() :
      op->vtkRadiusOutlierRemoval::GetNumberOfNeighborsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighbors() :
      op->vtkRadiusOutlierRemoval::GetNumberOfNeighbors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkRadiusOutlierRemoval::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadiusOutlierRemoval_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadiusOutlierRemoval *op = static_cast<vtkRadiusOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkRadiusOutlierRemoval::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRadiusOutlierRemoval_Methods[] = {
  {"IsTypeOf", PyvtkRadiusOutlierRemoval_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkRadiusOutlierRemoval_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkRadiusOutlierRemoval_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRadiusOutlierRemoval\nC++: static vtkRadiusOutlierRemoval *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkRadiusOutlierRemoval_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRadiusOutlierRemoval\nC++: vtkRadiusOutlierRemoval *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetRadius", PyvtkRadiusOutlierRemoval_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSpecify the local search radius.\n"},
  {"GetRadiusMinValue", PyvtkRadiusOutlierRemoval_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSpecify the local search radius.\n"},
  {"GetRadiusMaxValue", PyvtkRadiusOutlierRemoval_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSpecify the local search radius.\n"},
  {"GetRadius", PyvtkRadiusOutlierRemoval_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSpecify the local search radius.\n"},
  {"SetNumberOfNeighbors", PyvtkRadiusOutlierRemoval_SetNumberOfNeighbors, METH_VARARGS,
   "V.SetNumberOfNeighbors(int)\nC++: virtual void SetNumberOfNeighbors(int _arg)\n\nSpecify the number of neighbors that a point must have, within\nthe specified radius, for the point to not be considered\nisolated.\n"},
  {"GetNumberOfNeighborsMinValue", PyvtkRadiusOutlierRemoval_GetNumberOfNeighborsMinValue, METH_VARARGS,
   "V.GetNumberOfNeighborsMinValue() -> int\nC++: virtual int GetNumberOfNeighborsMinValue()\n\nSpecify the number of neighbors that a point must have, within\nthe specified radius, for the point to not be considered\nisolated.\n"},
  {"GetNumberOfNeighborsMaxValue", PyvtkRadiusOutlierRemoval_GetNumberOfNeighborsMaxValue, METH_VARARGS,
   "V.GetNumberOfNeighborsMaxValue() -> int\nC++: virtual int GetNumberOfNeighborsMaxValue()\n\nSpecify the number of neighbors that a point must have, within\nthe specified radius, for the point to not be considered\nisolated.\n"},
  {"GetNumberOfNeighbors", PyvtkRadiusOutlierRemoval_GetNumberOfNeighbors, METH_VARARGS,
   "V.GetNumberOfNeighbors() -> int\nC++: virtual int GetNumberOfNeighbors()\n\nSpecify the number of neighbors that a point must have, within\nthe specified radius, for the point to not be considered\nisolated.\n"},
  {"SetLocator", PyvtkRadiusOutlierRemoval_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkRadiusOutlierRemoval_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate near a\nspecified interpolation position.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRadiusOutlierRemoval_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkRadiusOutlierRemoval", // tp_name
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
  PyvtkRadiusOutlierRemoval_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRadiusOutlierRemoval_StaticNew()
{
  return vtkRadiusOutlierRemoval::New();
}

PyObject *PyvtkRadiusOutlierRemoval_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRadiusOutlierRemoval_Type, PyvtkRadiusOutlierRemoval_Methods,
    "vtkRadiusOutlierRemoval",
 &PyvtkRadiusOutlierRemoval_StaticNew);

  PyTypeObject *pytype = &PyvtkRadiusOutlierRemoval_Type;

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

void PyVTKAddFile_vtkRadiusOutlierRemoval(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRadiusOutlierRemoval_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRadiusOutlierRemoval", o) != 0)
  {
    Py_DECREF(o);
  }

}

