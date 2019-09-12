// python wrapper for vtkMergePoints
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
#include "vtkMergePoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergePoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergePoints_ClassNew(); }

#ifndef DECLARED_PyvtkPointLocator_ClassNew
extern "C" { PyObject *PyvtkPointLocator_ClassNew(); }
#define DECLARED_PyvtkPointLocator_ClassNew
#endif

static const char *PyvtkMergePoints_Doc =
  "vtkMergePoints - merge exactly coincident points\n\n"
  "Superclass: vtkPointLocator\n\n"
  "vtkMergePoints is a locator object to quickly locate points in 3D.\n"
  "The primary difference between vtkMergePoints and its superclass\n"
  "vtkPointLocator is that vtkMergePoints merges precisely coincident\n"
  "points and is therefore much faster.\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";


static PyObject *
PyvtkMergePoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergePoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergePoints *tempr = vtkMergePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergePoints::NewInstance());

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
PyvtkMergePoints_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkMergePoints::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      op->IsInsertedPoint(temp0, temp1, temp2) :
      op->vtkMergePoints::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMergePoints_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkMergePoints_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}



static PyObject *
PyvtkMergePoints_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1) :
      op->vtkMergePoints::InsertUniquePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMergePoints_Methods[] = {
  {"IsTypeOf", PyvtkMergePoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type management and printing.\n"},
  {"IsA", PyvtkMergePoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type management and printing.\n"},
  {"SafeDownCast", PyvtkMergePoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergePoints\nC++: static vtkMergePoints *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type management and printing.\n"},
  {"NewInstance", PyvtkMergePoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergePoints\nC++: vtkMergePoints *NewInstance()\n\nStandard methods for type management and printing.\n"},
  {"IsInsertedPoint", PyvtkMergePoints_IsInsertedPoint, METH_VARARGS,
   "V.IsInsertedPoint((float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double x[3]) override;\nV.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\n    override;\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return id of previously inserted point if this is\ntrue, otherwise return\n-1.\n"},
  {"InsertUniquePoint", PyvtkMergePoints_InsertUniquePoint, METH_VARARGS,
   "V.InsertUniquePoint((float, float, float), int) -> int\nC++: int InsertUniquePoint(const double x[3], vtkIdType &ptId)\n    override;\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return 0 if point was already in the list, otherwise\nreturn 1. If the point was not in the list, it will be ADDED.  In\neither case, the id of the point (newly inserted or not) is\nreturned in the ptId argument. Note this combines the\nfunctionality of IsInsertedPoint() followed by a call to\nInsertNextPoint().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergePoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMergePoints", // tp_name
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
  PyvtkMergePoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergePoints_StaticNew()
{
  return vtkMergePoints::New();
}

PyObject *PyvtkMergePoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergePoints_Type, PyvtkMergePoints_Methods,
    "vtkMergePoints",
 &PyvtkMergePoints_StaticNew);

  PyTypeObject *pytype = &PyvtkMergePoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergePoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergePoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergePoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

