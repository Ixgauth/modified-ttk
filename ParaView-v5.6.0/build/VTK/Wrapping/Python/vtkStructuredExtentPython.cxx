// python wrapper for vtkStructuredExtent
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
#include "vtkStructuredExtent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredExtent(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredExtent_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkStructuredExtent_Doc =
  "vtkStructuredExtent - helper class to aid working with structured\n extents.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkStructuredExtent is an helper class that helps in arithmetic with\n"
  " structured extents. It defines a bunch of static methods (most of\n"
  "which are\n"
  " inlined) to aid in dealing with extents.\n\n";


static PyObject *
PyvtkStructuredExtent_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredExtent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredExtent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredExtent *tempr = vtkStructuredExtent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredExtent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredExtent::NewInstance());

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
PyvtkStructuredExtent_Clamp(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Clamp");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);

    vtkStructuredExtent::Clamp(temp0, temp1);

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
PyvtkStructuredExtent_StrictlySmaller(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StrictlySmaller");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = vtkStructuredExtent::StrictlySmaller(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Smaller(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Smaller");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = vtkStructuredExtent::Smaller(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Grow_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    vtkStructuredExtent::Grow(temp0, temp1);

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
PyvtkStructuredExtent_Grow_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    vtkStructuredExtent::Grow(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredExtent_Grow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkStructuredExtent_Grow_s1(self, args);
    case 3:
      return PyvtkStructuredExtent_Grow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Grow");
  return nullptr;
}



static PyObject *
PyvtkStructuredExtent_Transform(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transform");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkStructuredExtent::Transform(temp0, temp1);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredExtent_GetDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkStructuredExtent::GetDimensions(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredExtent_Methods[] = {
  {"IsTypeOf", PyvtkStructuredExtent_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredExtent_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredExtent_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredExtent\nC++: static vtkStructuredExtent *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredExtent_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredExtent\nC++: vtkStructuredExtent *NewInstance()\n\n"},
  {"Clamp", PyvtkStructuredExtent_Clamp, METH_VARARGS,
   "V.Clamp([int, int, int, int, int, int], (int, ...))\nC++: static void Clamp(int ext[6], const int wholeExt[])\n\nClamps ext to fit in wholeExt.\n"},
  {"StrictlySmaller", PyvtkStructuredExtent_StrictlySmaller, METH_VARARGS,
   "V.StrictlySmaller((int, int, int, int, int, int), (int, int, int,\n    int, int, int)) -> bool\nC++: static bool StrictlySmaller(const int ext[6],\n    const int wholeExt[6])\n\nReturns true if ext is fits within wholeExt with at least 1\ndimension smaller than the wholeExt.\n"},
  {"Smaller", PyvtkStructuredExtent_Smaller, METH_VARARGS,
   "V.Smaller((int, int, int, int, int, int), (int, int, int, int,\n    int, int)) -> bool\nC++: static bool Smaller(const int ext[6], const int wholeExt[6])\n\nReturns if ext fits within wholeExt. Unlike StrictlySmaller, this\nmethod returns true even if ext == wholeExt.\n"},
  {"Grow", PyvtkStructuredExtent_Grow, METH_VARARGS,
   "V.Grow([int, int, int, int, int, int], int)\nC++: static void Grow(int ext[6], int count)\nV.Grow([int, int, int, int, int, int], int, [int, int, int, int,\n    int, int])\nC++: static void Grow(int ext[6], int count, int wholeExt[6])\n\nGrows the ext on each side by the given count.\n"},
  {"Transform", PyvtkStructuredExtent_Transform, METH_VARARGS,
   "V.Transform([int, int, int, int, int, int], [int, int, int, int,\n    int, int])\nC++: static void Transform(int ext[6], int wholeExt[6])\n\nMakes ext relative to wholeExt.\n"},
  {"GetDimensions", PyvtkStructuredExtent_GetDimensions, METH_VARARGS,
   "V.GetDimensions((int, int, int, int, int, int), [int, int, int])\nC++: static void GetDimensions(const int ext[6], int dims[3])\n\nGiven the extents, computes the dimensions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredExtent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkStructuredExtent", // tp_name
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
  PyvtkStructuredExtent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredExtent_StaticNew()
{
  return vtkStructuredExtent::New();
}

PyObject *PyvtkStructuredExtent_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredExtent_Type, PyvtkStructuredExtent_Methods,
    "vtkStructuredExtent",
 &PyvtkStructuredExtent_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredExtent_Type;

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

void PyVTKAddFile_vtkStructuredExtent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredExtent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredExtent", o) != 0)
  {
    Py_DECREF(o);
  }

}

