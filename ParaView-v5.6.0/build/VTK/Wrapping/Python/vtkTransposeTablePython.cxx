// python wrapper for vtkTransposeTable
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
#include "vtkTransposeTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransposeTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransposeTable_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkTransposeTable_Doc =
  "vtkTransposeTable - Transpose an input table.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "This algorithm allows to transpose a vtkTable as a matrix. Columns\n"
  "become rows and vice versa. A new column can be added to the result\n"
  "table at index 0 to collect the name of the initial columns (when\n"
  "AddIdColumn is true). Such a column can be used to name the columns\n"
  "of the result. Note that columns of the output table will have a\n"
  "variant type is the columns of the initial table are not consistent.\n\n";


static PyObject *
PyvtkTransposeTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransposeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransposeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransposeTable *tempr = vtkTransposeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransposeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransposeTable::NewInstance());

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
PyvtkTransposeTable_GetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddIdColumn() :
      op->vtkTransposeTable::GetAddIdColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddIdColumn(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetAddIdColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIdColumnOn();
    }
    else
    {
      op->vtkTransposeTable::AddIdColumnOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIdColumnOff();
    }
    else
    {
      op->vtkTransposeTable::AddIdColumnOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIdColumn() :
      op->vtkTransposeTable::GetUseIdColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIdColumn(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetUseIdColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIdColumnOn();
    }
    else
    {
      op->vtkTransposeTable::UseIdColumnOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIdColumnOff();
    }
    else
    {
      op->vtkTransposeTable::UseIdColumnOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdColumnName() :
      op->vtkTransposeTable::GetIdColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdColumnName(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetIdColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransposeTable_Methods[] = {
  {"IsTypeOf", PyvtkTransposeTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransposeTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransposeTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransposeTable\nC++: static vtkTransposeTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransposeTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransposeTable\nC++: vtkTransposeTable *NewInstance()\n\n"},
  {"GetAddIdColumn", PyvtkTransposeTable_GetAddIdColumn, METH_VARARGS,
   "V.GetAddIdColumn() -> bool\nC++: virtual bool GetAddIdColumn()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {"SetAddIdColumn", PyvtkTransposeTable_SetAddIdColumn, METH_VARARGS,
   "V.SetAddIdColumn(bool)\nC++: virtual void SetAddIdColumn(bool _arg)\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {"AddIdColumnOn", PyvtkTransposeTable_AddIdColumnOn, METH_VARARGS,
   "V.AddIdColumnOn()\nC++: virtual void AddIdColumnOn()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {"AddIdColumnOff", PyvtkTransposeTable_AddIdColumnOff, METH_VARARGS,
   "V.AddIdColumnOff()\nC++: virtual void AddIdColumnOff()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {"GetUseIdColumn", PyvtkTransposeTable_GetUseIdColumn, METH_VARARGS,
   "V.GetUseIdColumn() -> bool\nC++: virtual bool GetUseIdColumn()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {"SetUseIdColumn", PyvtkTransposeTable_SetUseIdColumn, METH_VARARGS,
   "V.SetUseIdColumn(bool)\nC++: virtual void SetUseIdColumn(bool _arg)\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {"UseIdColumnOn", PyvtkTransposeTable_UseIdColumnOn, METH_VARARGS,
   "V.UseIdColumnOn()\nC++: virtual void UseIdColumnOn()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {"UseIdColumnOff", PyvtkTransposeTable_UseIdColumnOff, METH_VARARGS,
   "V.UseIdColumnOff()\nC++: virtual void UseIdColumnOff()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {"GetIdColumnName", PyvtkTransposeTable_GetIdColumnName, METH_VARARGS,
   "V.GetIdColumnName() -> string\nC++: virtual char *GetIdColumnName()\n\nGet/Set the name of the id column added by option AddIdColumn.\nDefault: ColName\n"},
  {"SetIdColumnName", PyvtkTransposeTable_SetIdColumnName, METH_VARARGS,
   "V.SetIdColumnName(string)\nC++: virtual void SetIdColumnName(const char *_arg)\n\nGet/Set the name of the id column added by option AddIdColumn.\nDefault: ColName\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransposeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkTransposeTable", // tp_name
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
  PyvtkTransposeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransposeTable_StaticNew()
{
  return vtkTransposeTable::New();
}

PyObject *PyvtkTransposeTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransposeTable_Type, PyvtkTransposeTable_Methods,
    "vtkTransposeTable",
 &PyvtkTransposeTable_StaticNew);

  PyTypeObject *pytype = &PyvtkTransposeTable_Type;

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

void PyVTKAddFile_vtkTransposeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransposeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransposeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

