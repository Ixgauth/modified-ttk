// python wrapper for vtkMergeColumns
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
#include "vtkMergeColumns.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeColumns(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeColumns_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkMergeColumns_Doc =
  "vtkMergeColumns - merge two columns into a single column\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkMergeColumns replaces two columns in a table with a single column\n"
  "containing data in both columns.  The columns are set using\n\n\n"
  "  SetInputArrayToProcess(0, 0, 0,\n"
  "vtkDataObject::FIELD_ASSOCIATION_ROWS, \"col1\")\n\n"
  "and\n\n\n"
  "  SetInputArrayToProcess(1, 0, 0,\n"
  "vtkDataObject::FIELD_ASSOCIATION_ROWS, \"col2\")\n\n"
  "where \"col1\" and \"col2\" are the names of the columns to merge. The\n"
  "user may also specify the name of the merged column. The arrays must\n"
  "be of the same type. If the arrays are numeric, the values are summed\n"
  "in the merged column. If the arrays are strings, the values are\n"
  "concatenated.  The strings are separated by a space if they are both\n"
  "nonempty.\n\n";


static PyObject *
PyvtkMergeColumns_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeColumns::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeColumns_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeColumns::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeColumns_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeColumns *tempr = vtkMergeColumns::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeColumns_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeColumns *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeColumns::NewInstance());

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
PyvtkMergeColumns_SetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergedColumnName(temp0);
    }
    else
    {
      op->vtkMergeColumns::SetMergedColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeColumns_GetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMergedColumnName() :
      op->vtkMergeColumns::GetMergedColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeColumns_Methods[] = {
  {"IsTypeOf", PyvtkMergeColumns_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeColumns_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeColumns_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeColumns\nC++: static vtkMergeColumns *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeColumns_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeColumns\nC++: vtkMergeColumns *NewInstance()\n\n"},
  {"SetMergedColumnName", PyvtkMergeColumns_SetMergedColumnName, METH_VARARGS,
   "V.SetMergedColumnName(string)\nC++: virtual void SetMergedColumnName(const char *_arg)\n\nThe name to give the merged column created by this filter.\n"},
  {"GetMergedColumnName", PyvtkMergeColumns_GetMergedColumnName, METH_VARARGS,
   "V.GetMergedColumnName() -> string\nC++: virtual char *GetMergedColumnName()\n\nThe name to give the merged column created by this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeColumns_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkMergeColumns", // tp_name
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
  PyvtkMergeColumns_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeColumns_StaticNew()
{
  return vtkMergeColumns::New();
}

PyObject *PyvtkMergeColumns_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeColumns_Type, PyvtkMergeColumns_Methods,
    "vtkMergeColumns",
 &PyvtkMergeColumns_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeColumns_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeColumns(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeColumns_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeColumns", o) != 0)
  {
    Py_DECREF(o);
  }

}

