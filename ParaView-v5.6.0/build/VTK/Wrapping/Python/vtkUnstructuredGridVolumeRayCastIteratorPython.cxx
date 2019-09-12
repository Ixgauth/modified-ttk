// python wrapper for vtkUnstructuredGridVolumeRayCastIterator
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
#include "vtkUnstructuredGridVolumeRayCastIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridVolumeRayCastIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkUnstructuredGridVolumeRayCastIterator_Doc =
  "vtkUnstructuredGridVolumeRayCastIterator -\nvtkUnstructuredGridVolumeRayCastIterator is a superclass for\niterating over the intersections of a viewing ray with a group of\nunstructured cells.\n\n"
  "Superclass: vtkObject\n\n"
  "These iterators are created with a\n"
  "vtkUnstructuredGridVolumeRayCastFunction.\n\n"
  "@sa\n"
  "vtkUnstructuredGridVolumeRayCastFunction\n\n";


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridVolumeRayCastIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridVolumeRayCastIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridVolumeRayCastIterator *tempr = vtkUnstructuredGridVolumeRayCastIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayCastIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridVolumeRayCastIterator::NewInstance());

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
PyvtkUnstructuredGridVolumeRayCastIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetNextIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  vtkDataArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray"))
  {
    vtkIdType tempr = op->GetNextIntersections(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetBounds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUnstructuredGridVolumeRayCastIterator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetMaxNumberOfIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfIntersections(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetMaxNumberOfIntersections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetMaxNumberOfIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIntersections() :
      op->vtkUnstructuredGridVolumeRayCastIterator::GetMaxNumberOfIntersections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayCastIterator_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridVolumeRayCastIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridVolumeRayCastIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridVolumeRayCastIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridVolumeRayCastIterator\nC++: static vtkUnstructuredGridVolumeRayCastIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridVolumeRayCastIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: vtkUnstructuredGridVolumeRayCastIterator *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridVolumeRayCastIterator_Initialize, METH_VARARGS,
   "V.Initialize(int, int)\nC++: virtual void Initialize(int x, int y)\n\nInitializes the iteration to the start of the ray at the given\nscreen coordinates.\n"},
  {"GetNextIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_GetNextIntersections, METH_VARARGS,
   "V.GetNextIntersections(vtkIdList, vtkDoubleArray, vtkDataArray,\n    vtkDataArray, vtkDataArray) -> int\nC++: virtual vtkIdType GetNextIntersections(\n    vtkIdList *intersectedCells,\n    vtkDoubleArray *intersectionLengths, vtkDataArray *scalars,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections)\n\nGet the intersections of the next several cells.  The cell ids\nare stored in intersectedCells and the length of each ray segment\nwithin the cell is stored in intersectionLengths.  The point\nscalars scalars are interpolated and stored in nearIntersections\nand farIntersections.  intersectedCells, intersectionLengths, or\nscalars may be NULL to suppress passing the associated\ninformation.  The number of intersections actually encountered is\nreturned.  0 is returned if and only if no more intersections are\nto be found.\n"},
  {"SetBounds", PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float)\nC++: void SetBounds(double, double)\nV.SetBounds((float, float))\nC++: void SetBounds(double a[2])\n\n"},
  {"GetBounds", PyvtkUnstructuredGridVolumeRayCastIterator_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float)\nC++: double *GetBounds()\n\n"},
  {"SetMaxNumberOfIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_SetMaxNumberOfIntersections, METH_VARARGS,
   "V.SetMaxNumberOfIntersections(int)\nC++: virtual void SetMaxNumberOfIntersections(vtkIdType _arg)\n\n"},
  {"GetMaxNumberOfIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_GetMaxNumberOfIntersections, METH_VARARGS,
   "V.GetMaxNumberOfIntersections() -> int\nC++: virtual vtkIdType GetMaxNumberOfIntersections()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridVolumeRayCastIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridVolumeRayCastIterator", // tp_name
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
  PyvtkUnstructuredGridVolumeRayCastIterator_Doc, // tp_doc
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

PyObject *PyvtkUnstructuredGridVolumeRayCastIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridVolumeRayCastIterator_Type, PyvtkUnstructuredGridVolumeRayCastIterator_Methods,
    "vtkUnstructuredGridVolumeRayCastIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkUnstructuredGridVolumeRayCastIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridVolumeRayCastIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridVolumeRayCastIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

