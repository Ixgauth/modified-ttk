// python wrapper for vtkSpherePuzzleArrows
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
#include "vtkSpherePuzzleArrows.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpherePuzzleArrows_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSpherePuzzleArrows_Doc =
  "vtkSpherePuzzleArrows - Visualize permutation of the sphere puzzle.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSpherePuzzleArrows creates\n\n";


static PyObject *
PyvtkSpherePuzzleArrows_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpherePuzzleArrows::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpherePuzzleArrows::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpherePuzzleArrows *tempr = vtkSpherePuzzleArrows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpherePuzzleArrows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpherePuzzleArrows::NewInstance());

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
PyvtkSpherePuzzleArrows_SetPermutation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  const size_t size0 = 32;
  int temp0[32];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPermutation(temp0);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  vtkSpherePuzzle *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpherePuzzle"))
  {
    if (ap.IsBound())
    {
      op->SetPermutation(temp0);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_SetPermutation_Methods[] = {
  {nullptr, PyvtkSpherePuzzleArrows_SetPermutation_s1, METH_VARARGS,
   "@P *i"},
  {nullptr, PyvtkSpherePuzzleArrows_SetPermutation_s2, METH_VARARGS,
   "@V *vtkSpherePuzzle"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpherePuzzleArrows_SetPermutation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPermutation");
  return nullptr;
}



static PyObject *
PyvtkSpherePuzzleArrows_GetPermutation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  size_t sizer = 32;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPermutation() :
      op->vtkSpherePuzzleArrows::GetPermutation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutationComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutationComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPermutationComponent(temp0, temp1);
    }
    else
    {
      op->vtkSpherePuzzleArrows::SetPermutationComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_Methods[] = {
  {"IsTypeOf", PyvtkSpherePuzzleArrows_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpherePuzzleArrows_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpherePuzzleArrows_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpherePuzzleArrows\nC++: static vtkSpherePuzzleArrows *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpherePuzzleArrows_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *NewInstance()\n\n"},
  {"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation, METH_VARARGS,
   "V.SetPermutation((int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int))\nC++: void SetPermutation(int a[32])\nV.SetPermutation(vtkSpherePuzzle)\nC++: void SetPermutation(vtkSpherePuzzle *puz)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {"GetPermutation", PyvtkSpherePuzzleArrows_GetPermutation, METH_VARARGS,
   "V.GetPermutation() -> (int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int)\nC++: int *GetPermutation()\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {"SetPermutationComponent", PyvtkSpherePuzzleArrows_SetPermutationComponent, METH_VARARGS,
   "V.SetPermutationComponent(int, int)\nC++: void SetPermutationComponent(int comp, int val)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpherePuzzleArrows_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkSpherePuzzleArrows", // tp_name
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
  PyvtkSpherePuzzleArrows_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpherePuzzleArrows_StaticNew()
{
  return vtkSpherePuzzleArrows::New();
}

PyObject *PyvtkSpherePuzzleArrows_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpherePuzzleArrows_Type, PyvtkSpherePuzzleArrows_Methods,
    "vtkSpherePuzzleArrows",
 &PyvtkSpherePuzzleArrows_StaticNew);

  PyTypeObject *pytype = &PyvtkSpherePuzzleArrows_Type;

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

void PyVTKAddFile_vtkSpherePuzzleArrows(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpherePuzzleArrows_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpherePuzzleArrows", o) != 0)
  {
    Py_DECREF(o);
  }

}

