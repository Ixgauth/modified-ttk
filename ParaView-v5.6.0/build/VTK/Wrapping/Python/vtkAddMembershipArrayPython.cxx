// python wrapper for vtkAddMembershipArray
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
#include "vtkAddMembershipArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAddMembershipArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAddMembershipArray_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkAddMembershipArray_Doc =
  "vtkAddMembershipArray - Add an array to the output indicating\nmembership within an input selection.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "This filter takes an input selection, vtkDataSetAttribute\n"
  "information, and data object and adds a bit array to the output\n"
  "vtkDataSetAttributes indicating whether each index was selected or\n"
  "not.\n\n";


static PyObject *
PyvtkAddMembershipArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAddMembershipArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAddMembershipArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAddMembershipArray *tempr = vtkAddMembershipArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAddMembershipArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAddMembershipArray::NewInstance());

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
PyvtkAddMembershipArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkAddMembershipArray::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

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
      op->vtkAddMembershipArray::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMinValue() :
      op->vtkAddMembershipArray::GetFieldTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMaxValue() :
      op->vtkAddMembershipArray::GetFieldTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayName(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkAddMembershipArray::GetOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayName(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetInputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkAddMembershipArray::GetInputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetInputValues(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetInputValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetInputValues() :
      op->vtkAddMembershipArray::GetInputValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAddMembershipArray_Methods[] = {
  {"IsTypeOf", PyvtkAddMembershipArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAddMembershipArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAddMembershipArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAddMembershipArray\nC++: static vtkAddMembershipArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAddMembershipArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAddMembershipArray\nC++: vtkAddMembershipArray *NewInstance()\n\n"},
  {"GetFieldType", PyvtkAddMembershipArray_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nThe field type to add the membership array to.\n"},
  {"SetFieldType", PyvtkAddMembershipArray_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\nThe field type to add the membership array to.\n"},
  {"GetFieldTypeMinValue", PyvtkAddMembershipArray_GetFieldTypeMinValue, METH_VARARGS,
   "V.GetFieldTypeMinValue() -> int\nC++: virtual int GetFieldTypeMinValue()\n\nThe field type to add the membership array to.\n"},
  {"GetFieldTypeMaxValue", PyvtkAddMembershipArray_GetFieldTypeMaxValue, METH_VARARGS,
   "V.GetFieldTypeMaxValue() -> int\nC++: virtual int GetFieldTypeMaxValue()\n\nThe field type to add the membership array to.\n"},
  {"SetOutputArrayName", PyvtkAddMembershipArray_SetOutputArrayName, METH_VARARGS,
   "V.SetOutputArrayName(string)\nC++: virtual void SetOutputArrayName(const char *_arg)\n\nThe name of the array added to the output vtkDataSetAttributes\nindicating membership. Defaults to \"membership\".\n"},
  {"GetOutputArrayName", PyvtkAddMembershipArray_GetOutputArrayName, METH_VARARGS,
   "V.GetOutputArrayName() -> string\nC++: virtual char *GetOutputArrayName()\n\nThe name of the array added to the output vtkDataSetAttributes\nindicating membership. Defaults to \"membership\".\n"},
  {"SetInputArrayName", PyvtkAddMembershipArray_SetInputArrayName, METH_VARARGS,
   "V.SetInputArrayName(string)\nC++: virtual void SetInputArrayName(const char *_arg)\n\n"},
  {"GetInputArrayName", PyvtkAddMembershipArray_GetInputArrayName, METH_VARARGS,
   "V.GetInputArrayName() -> string\nC++: virtual char *GetInputArrayName()\n\n"},
  {"SetInputValues", PyvtkAddMembershipArray_SetInputValues, METH_VARARGS,
   "V.SetInputValues(vtkAbstractArray)\nC++: void SetInputValues(vtkAbstractArray *)\n\n"},
  {"GetInputValues", PyvtkAddMembershipArray_GetInputValues, METH_VARARGS,
   "V.GetInputValues() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetInputValues()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAddMembershipArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkAddMembershipArray", // tp_name
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
  PyvtkAddMembershipArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAddMembershipArray_StaticNew()
{
  return vtkAddMembershipArray::New();
}

PyObject *PyvtkAddMembershipArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAddMembershipArray_Type, PyvtkAddMembershipArray_Methods,
    "vtkAddMembershipArray",
 &PyvtkAddMembershipArray_StaticNew);

  PyTypeObject *pytype = &PyvtkAddMembershipArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "FIELD_DATA", vtkAddMembershipArray::FIELD_DATA },
        { "POINT_DATA", vtkAddMembershipArray::POINT_DATA },
        { "CELL_DATA", vtkAddMembershipArray::CELL_DATA },
        { "VERTEX_DATA", vtkAddMembershipArray::VERTEX_DATA },
        { "EDGE_DATA", vtkAddMembershipArray::EDGE_DATA },
        { "ROW_DATA", vtkAddMembershipArray::ROW_DATA },
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

void PyVTKAddFile_vtkAddMembershipArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAddMembershipArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAddMembershipArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

