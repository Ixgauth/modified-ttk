// python wrapper for vtkGenerateIndexArray
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
#include "vtkGenerateIndexArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenerateIndexArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenerateIndexArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkGenerateIndexArray_Doc =
  "vtkGenerateIndexArray - Generates a new vtkIdTypeArray containing\nzero-base indices.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkGenerateIndexArray operates in one of two distinct \"modes\". By\n"
  "default, it simply generates an index array containing\n"
  "monotonically-increasing integers in the range [0, N), where N is\n"
  "appropriately sized for the field type that will store the results. \n"
  "This mode is useful for generating a unique ID field for datasets\n"
  "that have none.\n\n"
  "The second \"mode\" uses an existing array from the input data object\n"
  "as a \"reference\".  Distinct values from the reference array are\n"
  "sorted in ascending order, and an integer index in the range [0, N)\n"
  "is assigned to each.  The resulting map is used to populate the\n"
  "output index array, mapping each value in the reference array to its\n"
  "corresponding index and storing the result in the output array.  This\n"
  "mode is especially useful when generating tensors, since it allows us\n"
  "to \"map\" from an array with arbitrary contents to an index that can\n"
  "be used as tensor coordinates.\n\n";


static PyObject *
PyvtkGenerateIndexArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateIndexArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateIndexArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateIndexArray *tempr = vtkGenerateIndexArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateIndexArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateIndexArray::NewInstance());

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
PyvtkGenerateIndexArray_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkGenerateIndexArray::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkGenerateIndexArray::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetReferenceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetReferenceArrayName() :
      op->vtkGenerateIndexArray::GetReferenceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeID(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetPedigreeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPedigreeID() :
      op->vtkGenerateIndexArray::GetPedigreeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateIndexArray_Methods[] = {
  {"IsTypeOf", PyvtkGenerateIndexArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateIndexArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateIndexArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenerateIndexArray\nC++: static vtkGenerateIndexArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateIndexArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenerateIndexArray\nC++: vtkGenerateIndexArray *NewInstance()\n\n"},
  {"SetArrayName", PyvtkGenerateIndexArray_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nControl the output index array name.  Default: \"index\".\n"},
  {"GetArrayName", PyvtkGenerateIndexArray_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nControl the output index array name.  Default: \"index\".\n"},
  {"SetFieldType", PyvtkGenerateIndexArray_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\nControl the location where the index array will be stored.\n"},
  {"GetFieldType", PyvtkGenerateIndexArray_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nControl the location where the index array will be stored.\n"},
  {"SetReferenceArrayName", PyvtkGenerateIndexArray_SetReferenceArrayName, METH_VARARGS,
   "V.SetReferenceArrayName(string)\nC++: virtual void SetReferenceArrayName(const char *_arg)\n\nSpecifies an optional reference array for index-generation.\n"},
  {"GetReferenceArrayName", PyvtkGenerateIndexArray_GetReferenceArrayName, METH_VARARGS,
   "V.GetReferenceArrayName() -> string\nC++: virtual char *GetReferenceArrayName()\n\nSpecifies an optional reference array for index-generation.\n"},
  {"SetPedigreeID", PyvtkGenerateIndexArray_SetPedigreeID, METH_VARARGS,
   "V.SetPedigreeID(int)\nC++: virtual void SetPedigreeID(int _arg)\n\nSpecifies whether the index array should be marked as pedigree\nids.  Default: false.\n"},
  {"GetPedigreeID", PyvtkGenerateIndexArray_GetPedigreeID, METH_VARARGS,
   "V.GetPedigreeID() -> int\nC++: virtual int GetPedigreeID()\n\nSpecifies whether the index array should be marked as pedigree\nids.  Default: false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenerateIndexArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkGenerateIndexArray", // tp_name
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
  PyvtkGenerateIndexArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateIndexArray_StaticNew()
{
  return vtkGenerateIndexArray::New();
}

PyObject *PyvtkGenerateIndexArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenerateIndexArray_Type, PyvtkGenerateIndexArray_Methods,
    "vtkGenerateIndexArray",
 &PyvtkGenerateIndexArray_StaticNew);

  PyTypeObject *pytype = &PyvtkGenerateIndexArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ROW_DATA", vtkGenerateIndexArray::ROW_DATA },
        { "POINT_DATA", vtkGenerateIndexArray::POINT_DATA },
        { "CELL_DATA", vtkGenerateIndexArray::CELL_DATA },
        { "VERTEX_DATA", vtkGenerateIndexArray::VERTEX_DATA },
        { "EDGE_DATA", vtkGenerateIndexArray::EDGE_DATA },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateIndexArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateIndexArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateIndexArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

