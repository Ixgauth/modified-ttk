// python wrapper for vtkStringToCategory
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
#include "vtkInformationVector.h"
#include "vtkStringToCategory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringToCategory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStringToCategory_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkStringToCategory_Doc =
  "vtkStringToCategory - Creates a category array from a string array\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkStringToCategory creates an integer array named \"category\" based\n"
  "on the values in a string array.  You may use this filter to create\n"
  "an array that you may use to color points/cells by the values in a\n"
  "string array.  Currently there is not support to color by a string\n"
  "array directly. The category values will range from zero to N-1,\n"
  "where N is the number of distinct strings in the string array.  Set\n"
  "the string array to process with SetInputArrayToProcess(0,0,0,...). \n"
  "The array may be in the point, cell, or field data of the data\n"
  "object.\n\n"
  "The list of unique strings, in the order they are mapped, can also be\n"
  "retrieved from output port 1. They are in a vtkTable, stored in the\n"
  "\"Strings\" column as a vtkStringArray.\n\n";


static PyObject *
PyvtkStringToCategory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringToCategory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToCategory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToCategory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToCategory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringToCategory *tempr = vtkStringToCategory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToCategory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToCategory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToCategory::NewInstance());

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
PyvtkStringToCategory_SetCategoryArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoryArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoryArrayName(temp0);
    }
    else
    {
      op->vtkStringToCategory::SetCategoryArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringToCategory_GetCategoryArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoryArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToCategory *op = static_cast<vtkStringToCategory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCategoryArrayName() :
      op->vtkStringToCategory::GetCategoryArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStringToCategory_Methods[] = {
  {"IsTypeOf", PyvtkStringToCategory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringToCategory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringToCategory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStringToCategory\nC++: static vtkStringToCategory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringToCategory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStringToCategory\nC++: vtkStringToCategory *NewInstance()\n\n"},
  {"SetCategoryArrayName", PyvtkStringToCategory_SetCategoryArrayName, METH_VARARGS,
   "V.SetCategoryArrayName(string)\nC++: virtual void SetCategoryArrayName(const char *_arg)\n\nThe name to give to the output vtkIntArray of category values.\n"},
  {"GetCategoryArrayName", PyvtkStringToCategory_GetCategoryArrayName, METH_VARARGS,
   "V.GetCategoryArrayName() -> string\nC++: virtual char *GetCategoryArrayName()\n\nThe name to give to the output vtkIntArray of category values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStringToCategory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkStringToCategory", // tp_name
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
  PyvtkStringToCategory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStringToCategory_StaticNew()
{
  return vtkStringToCategory::New();
}

PyObject *PyvtkStringToCategory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStringToCategory_Type, PyvtkStringToCategory_Methods,
    "vtkStringToCategory",
 &PyvtkStringToCategory_StaticNew);

  PyTypeObject *pytype = &PyvtkStringToCategory_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringToCategory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringToCategory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringToCategory", o) != 0)
  {
    Py_DECREF(o);
  }

}

