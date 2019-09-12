// python wrapper for vtkAbstractPointLocator
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
#include "vtkAbstractPointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractPointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkLocator_ClassNew
extern "C" { PyObject *PyvtkLocator_ClassNew(); }
#define DECLARED_PyvtkLocator_ClassNew
#endif

static const char *PyvtkAbstractPointLocator_Doc =
  "vtkAbstractPointLocator - abstract class to quickly locate points in\n3-space\n\n"
  "Superclass: vtkLocator\n\n"
  "vtkAbstractPointLocator is an abstract spatial search object to\n"
  "quickly locate points in 3D. vtkAbstractPointLocator works by\n"
  "dividing a specified region of space into \"rectangular\" buckets, and\n"
  "then keeping a list of points that lie in each bucket. Typical\n"
  "operation involves giving a position in 3D and finding the closest\n"
  "point.  The points are provided from the specified dataset input.\n\n"
  "@sa\n"
  "vtkPointLocator vtkStaticPointLocator vtkMergePoints\n\n";


static PyObject *
PyvtkAbstractPointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractPointLocator *tempr = vtkAbstractPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPointLocator::NewInstance());

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
PyvtkAbstractPointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = op->FindClosestPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2) :
      op->vtkAbstractPointLocator::FindClosestPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractPointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkAbstractPointLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractPointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_FindClosestNPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    op->FindClosestNPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestNPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAbstractPointLocator::FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractPointLocator_FindClosestNPoints_s1(self, args);
    case 5:
      return PyvtkAbstractPointLocator_FindClosestNPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestNPoints");
  return nullptr;
}



static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    op->FindPointsWithinRadius(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAbstractPointLocator::FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractPointLocator_FindPointsWithinRadius_s1(self, args);
    case 5:
      return PyvtkAbstractPointLocator_FindPointsWithinRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPointsWithinRadius");
  return nullptr;
}



static PyObject *
PyvtkAbstractPointLocator_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAbstractPointLocator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
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
      op->vtkAbstractPointLocator::GetBounds(temp0);
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

static PyObject *
PyvtkAbstractPointLocator_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractPointLocator_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractPointLocator_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAbstractPointLocator_GetNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfBuckets() :
      op->vtkAbstractPointLocator::GetNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkAbstractPointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkAbstractPointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkAbstractPointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractPointLocator\nC++: static vtkAbstractPointLocator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkAbstractPointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractPointLocator\nC++: vtkAbstractPointLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"FindClosestPoint", PyvtkAbstractPointLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\nV.FindClosestPoint(float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z)\n\nGiven a position x, return the id of the point closest to it.\nAlternative method requires separate x-y-z values. These methods\nare thread safe if BuildLocator() is directly or indirectly\ncalled from a single thread first.\n"},
  {"FindClosestPointWithinRadius", PyvtkAbstractPointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {"FindClosestNPoints", PyvtkAbstractPointLocator_FindClosestNPoints, METH_VARARGS,
   "V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: virtual void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\nV.FindClosestNPoints(int, float, float, float, vtkIdList)\nC++: void FindClosestNPoints(int N, double x, double y, double z,\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindPointsWithinRadius", PyvtkAbstractPointLocator_FindPointsWithinRadius, METH_VARARGS,
   "V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double R,\n    const double x[3], vtkIdList *result)\nV.FindPointsWithinRadius(float, float, float, float, vtkIdList)\nC++: void FindPointsWithinRadius(double R, double x, double y,\n    double z, vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {"GetBounds", PyvtkAbstractPointLocator_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, ...])\nC++: virtual void GetBounds(double *)\n\nProvide an accessor to the bounds. Valid after the locator is\nbuilt.\n"},
  {"GetNumberOfBuckets", PyvtkAbstractPointLocator_GetNumberOfBuckets, METH_VARARGS,
   "V.GetNumberOfBuckets() -> int\nC++: virtual vtkIdType GetNumberOfBuckets()\n\nReturn the total number of buckets in the locator. This has\nmeaning only after the locator is constructed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAbstractPointLocator", // tp_name
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
  PyvtkAbstractPointLocator_Doc, // tp_doc
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

PyObject *PyvtkAbstractPointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractPointLocator_Type, PyvtkAbstractPointLocator_Methods,
    "vtkAbstractPointLocator",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractPointLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

