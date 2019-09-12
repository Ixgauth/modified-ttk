// python wrapper for vtkCompositeInterpolatedVelocityField
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
#include "vtkCompositeInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
#endif

static const char *PyvtkCompositeInterpolatedVelocityField_Doc =
  "vtkCompositeInterpolatedVelocityField - An abstract class for\n obtaining the interpolated velocity values at a point\n\n"
  "Superclass: vtkAbstractInterpolatedVelocityField\n\n"
  "vtkCompositeInterpolatedVelocityField acts as a continuous velocity\n"
  "field\n"
  " by performing cell interpolation on the underlying vtkDataSet. This\n"
  "is an\n"
  " abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n"
  "4\n"
  " (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\n"
  "scheme,\n"
  " every time an evaluation is performed, the target cell containing\n"
  "point\n"
  " (x,y,z) needs to be found by calling FindCell(), via either\n"
  "vtkDataSet or\n"
  " vtkAbstractCelllocator's sub-classes (vtkCellLocator &\n"
  "vtkModifiedBSPTree).\n"
  " As it incurs a large cost, one (for\n"
  "vtkCellLocatorInterpolatedVelocityField\n"
  " via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\n"
  "via\n"
  " vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\n"
  "levels\n"
  " of cell caching may be exploited to increase the performance.\n\n\n"
  " For vtkInterpolatedVelocityField, level #0 begins with intra-cell\n"
  "caching.\n"
  " Specifically if the previous cell is valid and the next point is\n"
  "still in\n"
  " it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\n"
  "created\n"
  " parametric coordinates & weights ), the function values can be\n"
  "interpolated\n"
  " and only vtkCell::EvaluatePosition() is invoked. If this fails, then\n"
  "level #1\n"
  " follows by inter-cell search for the target cell that contains the\n"
  "next point.\n"
  " By an inter-cell search, the previous cell provides an important\n"
  "clue or serves\n"
  " as an immediate neighbor to aid in locating the target cell via\n"
  "vtkPointSet::\n"
  " FindCell(). If this still fails, a global cell location / search is\n"
  "invoked via\n"
  " vtkPointSet::FindCell(). Here regardless of either inter-cell or\n"
  "global search,\n"
  " vtkPointLocator is in fact employed (for datasets of type\n"
  "vtkPointSet only, note\n"
  " vtkImageData and vtkRectilinearGrid are able to provide rapid and\n"
  "robust cell\n"
  " location due to the simple mesh topology) as a crucial tool\n"
  "underlying the cell\n"
  " locator. However, the use of vtkPointLocator makes\n"
  "vtkInterpolatedVelocityField\n"
  " non-robust in cell location for vtkPointSet.\n\n\n"
  " For vtkCellLocatorInterpolatedVelocityField, the only caching (level\n"
  "#0) works\n"
  " by intra-cell trial. In case of failure, a global search for the\n"
  "target cell is\n"
  " invoked via vtkAbstractCellLocator::FindCell() and the actual work\n"
  "is done by\n"
  " either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\n"
  "vtkPointSet\n"
  " only, while vtkImageData and vtkRectilinearGrid themselves are able\n"
  "to provide\n"
  " fast robust cell location). Without the involvement of\n"
  "vtkPointLocator, robust\n"
  " cell location is achieved for vtkPointSet.\n\n"
  "@warning\n"
  " vtkCompositeInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";


static PyObject *
PyvtkCompositeInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeInterpolatedVelocityField *tempr = vtkCompositeInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeInterpolatedVelocityField::NewInstance());

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
PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastDataSetIndex() :
      op->vtkCompositeInterpolatedVelocityField::GetLastDataSetIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    op->AddDataSet(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCompositeInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCompositeInterpolatedVelocityField\nC++: static vtkCompositeInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeInterpolatedVelocityField\nC++: vtkCompositeInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetLastDataSetIndex", PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex, METH_VARARGS,
   "V.GetLastDataSetIndex() -> int\nC++: virtual int GetLastDataSetIndex()\n\nGet the most recently visited dataset and it id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {"AddDataSet", PyvtkCompositeInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   "V.AddDataSet(vtkDataSet)\nC++: virtual void AddDataSet(vtkDataSet *dataset)\n\nAdd a dataset for implicit velocity function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkCompositeInterpolatedVelocityField", // tp_name
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
  PyvtkCompositeInterpolatedVelocityField_Doc, // tp_doc
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

PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeInterpolatedVelocityField_Type, PyvtkCompositeInterpolatedVelocityField_Methods,
    "vtkCompositeInterpolatedVelocityField",
 nullptr);

  PyTypeObject *pytype = &PyvtkCompositeInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Doc =
  "vtkCompositeInterpolatedVelocityFieldDataSetsType - no description provided.\n\n"

  "vtkCompositeInterpolatedVelocityFieldDataSetsType()\n"
  "vtkCompositeInterpolatedVelocityFieldDataSetsType(\n    const &vtkCompositeInterpolatedVelocityFieldDataSetsType)\n";

static PyMethodDef PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCompositeInterpolatedVelocityFieldDataSetsType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCompositeInterpolatedVelocityFieldDataSetsType *op = new vtkCompositeInterpolatedVelocityFieldDataSetsType();

    result = PyVTKSpecialObject_New("vtkCompositeInterpolatedVelocityFieldDataSetsType", op);
  }

  return result;
}

static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCompositeInterpolatedVelocityFieldDataSetsType");

  vtkCompositeInterpolatedVelocityFieldDataSetsType *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkCompositeInterpolatedVelocityFieldDataSetsType"))
  {
    vtkCompositeInterpolatedVelocityFieldDataSetsType *op = new vtkCompositeInterpolatedVelocityFieldDataSetsType(*temp0);

    result = PyVTKSpecialObject_New("vtkCompositeInterpolatedVelocityFieldDataSetsType", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {nullptr, PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_s2, METH_VARARGS,
   "@W vtkCompositeInterpolatedVelocityFieldDataSetsType"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_s1(self, args);
    case 1:
      return PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkCompositeInterpolatedVelocityFieldDataSetsType");
  return nullptr;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType(nullptr, args);
}

static void PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkCompositeInterpolatedVelocityFieldDataSetsType *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkCompositeInterpolatedVelocityFieldDataSetsType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkCompositeInterpolatedVelocityFieldDataSetsType(*static_cast<const vtkCompositeInterpolatedVelocityFieldDataSetsType*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_TypeNew(); }

PyObject *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type,
    PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Methods,
    PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_Methods,
    &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_CCopy);

  PyTypeObject *pytype = &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkCompositeInterpolatedVelocityFieldDataSetsType_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeInterpolatedVelocityFieldDataSetsType", o) != 0)
  {
    Py_DECREF(o);
  }

}

