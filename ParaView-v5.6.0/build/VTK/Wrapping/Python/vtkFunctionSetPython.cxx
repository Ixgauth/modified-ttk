// python wrapper for vtkFunctionSet
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
#include "vtkFunctionSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFunctionSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFunctionSet_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFunctionSet_Doc =
  "vtkFunctionSet - Abstract interface for sets of functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFunctionSet specifies an abstract interface for set of functions\n"
  "of the form F_i = F_i(x_j) where F (with i=1..m) are the functions\n"
  "and x (with j=1..n) are the independent variables. The only supported\n"
  "operation is the function evaluation at x_j.\n\n"
  "@sa\n"
  "vtkImplicitDataSet vtkInterpolatedVelocityField\n"
  "vtkInitialValueProblemSolver\n\n";


static PyObject *
PyvtkFunctionSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFunctionSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFunctionSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFunctionSet *tempr = vtkFunctionSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFunctionSet::NewInstance());

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
PyvtkFunctionSet_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = op->FunctionValues(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionSet_GetNumberOfFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFunctions() :
      op->vtkFunctionSet::GetNumberOfFunctions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionSet_GetNumberOfIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndependentVariables() :
      op->vtkFunctionSet::GetNumberOfIndependentVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionSet_Methods[] = {
  {"IsTypeOf", PyvtkFunctionSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFunctionSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFunctionSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFunctionSet\nC++: static vtkFunctionSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFunctionSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFunctionSet\nC++: vtkFunctionSet *NewInstance()\n\n"},
  {"FunctionValues", PyvtkFunctionSet_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate functions at x_j. x and f have to point to valid double\narrays of appropriate sizes obtained with GetNumberOfFunctions()\nand GetNumberOfIndependentVariables.\n"},
  {"GetNumberOfFunctions", PyvtkFunctionSet_GetNumberOfFunctions, METH_VARARGS,
   "V.GetNumberOfFunctions() -> int\nC++: virtual int GetNumberOfFunctions()\n\nReturn the number of functions. Note that this is constant for a\ngiven type of set of functions and can not be changed at run\ntime.\n"},
  {"GetNumberOfIndependentVariables", PyvtkFunctionSet_GetNumberOfIndependentVariables, METH_VARARGS,
   "V.GetNumberOfIndependentVariables() -> int\nC++: virtual int GetNumberOfIndependentVariables()\n\nReturn the number of independent variables. Note that this is\nconstant for a given type of set of functions and can not be\nchanged at run time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFunctionSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkFunctionSet", // tp_name
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
  PyvtkFunctionSet_Doc, // tp_doc
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

PyObject *PyvtkFunctionSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFunctionSet_Type, PyvtkFunctionSet_Methods,
    "vtkFunctionSet",
 nullptr);

  PyTypeObject *pytype = &PyvtkFunctionSet_Type;

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

void PyVTKAddFile_vtkFunctionSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFunctionSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFunctionSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

